#include "Modbus_RTU_App.h"

static MB_REGISTER_t mb_regs;
static uint16_t modbus_rx_len = 0;
static uint8_t modbus_rx_buf[128];
static uint8_t modbus_tx_buf[MB_TX_BUFF_SIZE];
char tx_uart_buff[64];
volatile bool g_modbus_frame_ready = false; 

static MB_GetData_Callback_t p_get_data_cb = NULL;

void MB_Register_GetData_Callback(MB_GetData_Callback_t cb)
{
    p_get_data_cb = cb;
}

uint16_t MB_CRC16_cal(const uint8_t *buffer, uint16_t buff_len)
{
  uint16_t crc = 0xFFFF;
  for (uint16_t pos = 0; pos < buff_len; pos++)
  {
    crc ^= (uint16_t)buffer[pos];

    for (int i = 0; i < 8; i++)
    {
      if (crc & 0x0001)
        crc = (crc >> 1) ^ 0xA001;
      else
        crc >>= 1;
    }
  }
  return crc;
}

void MB_Transmit_Data(uint8_t *data, uint16_t tx_len)
{
    for(uint8_t i=0; i<tx_len; i++)
    {
        while(!EUSCI_A_UART_getInterruptStatus(EUSCI_A0_BASE, EUSCI_A_UART_TRANSMIT_INTERRUPT_FLAG)); 
        EUSCI_A_UART_transmitData(EUSCI_A0_BASE, data[i]); // truyen tung byte
    }
    while(EUSCI_A_UART_queryStatusFlags(EUSCI_A0_BASE, EUSCI_A_UART_BUSY));
}

void MB_Send_Exception_Resp(uint8_t func_code, MB_EXCEPTION_CODE code)
{
    modbus_tx_buf[0] = MB_SLAVE_ADDR;
    modbus_tx_buf[1] = func_code | 0x80;
    modbus_tx_buf[2] = (uint8_t) code;
    
    uint16_t crc_cal = MB_CRC16_cal(modbus_tx_buf, 3);
    modbus_tx_buf[3] = crc_cal & 0xFF;
    modbus_tx_buf[4] = (crc_cal >> 8) & 0xFF;

    MB_Transmit_Data(modbus_tx_buf, 5);
}

void MB_Response_Data(uint8_t *rx_buf, uint16_t rx_len)
{
    uint8_t function_code = rx_buf[1];
    uint16_t tx_len = 0;

    switch(function_code)
    {
        case 0x03:
        {
            if (p_get_data_cb != NULL)
            {
                float tof = 0, flow_rate = 0, volume = 0;
                
                p_get_data_cb(&tof, &flow_rate, &volume); 
                
                mb_regs.Meter_Data_Typedef.tof       = tof;
                mb_regs.Meter_Data_Typedef.flow_rate = flow_rate;
                mb_regs.Meter_Data_Typedef.volume    = volume;
            }

            uint16_t start_addr = (rx_buf[2] << 8) | rx_buf[3]; 
            uint16_t reg_count  = (rx_buf[4] << 8) | rx_buf[5]; 

            if(reg_count == 0 || reg_count > 125)
            {
                MB_Send_Exception_Resp(function_code, CODE_ILLEGAL_DAT_VALUE);
                break;
            }

            if((start_addr + reg_count) > MAX_NUM_REG)
            {
                MB_Send_Exception_Resp(function_code, CODE_ILLEGAL_DAT_ADDR);
                break;
            }
            else if((start_addr + reg_count) <= MAX_NUM_REG)
            {
                modbus_tx_buf[0] = MB_SLAVE_ADDR;             
                modbus_tx_buf[1] = 0x03;                     
                modbus_tx_buf[2] = reg_count * 2;             

                tx_len = 3;
                for(uint16_t i=0; i<reg_count; i++)
                {
                    uint16_t reg_val = mb_regs.mb_holding_reg[start_addr + i];
                    modbus_tx_buf[tx_len++] = (reg_val >> 8) & 0xFF; // High Byte
                    modbus_tx_buf[tx_len++] = reg_val & 0xFF;        // Low Byte
                }

                uint16_t crc = MB_CRC16_cal(modbus_tx_buf, tx_len);
                modbus_tx_buf[tx_len++] = crc & 0xFF;        // CRC Low Byte
                modbus_tx_buf[tx_len++] = (crc >> 8) & 0xFF; // CRC High Byte

                MB_Transmit_Data(modbus_tx_buf, tx_len);
            }
            break;
        }
        case 0x06:
        {
            uint16_t reg_addr = (rx_buf[2] << 8) | rx_buf[3];
            uint16_t reg_val  = (rx_buf[4] << 8) | rx_buf[5];

            if(reg_addr >= MAX_NUM_REG) // Qua dia chi
            {
                MB_Send_Exception_Resp(function_code, CODE_ILLEGAL_DAT_ADDR);
                break;
            }

            mb_regs.mb_holding_reg[reg_addr] = reg_val;
            for(uint16_t i=0; i<rx_len; i++)
            {
                modbus_tx_buf[i] = rx_buf[i];
            }
            MB_Transmit_Data(modbus_tx_buf, rx_len);
            break;
        }

        default: 
            MB_Send_Exception_Resp(function_code, CODE_ILLEGAL_FUNC);
            break;
    }
}

void CS_Config()
{
    // PJ4 PJ5 noi vao thach anh 32.768
    GPIO_setAsPeripheralModuleFunctionInputPin(GPIO_PORT_PJ, GPIO_PIN4|GPIO_PIN5, GPIO_PRIMARY_MODULE_FUNCTION);
    CS_setExternalClockSource(32768, 8000000); // thach anh LFXT, HFXT
    CS_turnOnLFXT(CS_LFXT_DRIVE_0);
    CS_setDCOFreq(CS_DCORSEL_0, CS_DCOFSEL_6);

    CS_initClockSignal(CS_MCLK, CS_DCOCLK_SELECT, CS_CLOCK_DIVIDER_1);
    CS_initClockSignal(CS_SMCLK, CS_DCOCLK_SELECT, CS_CLOCK_DIVIDER_1);
    CS_initClockSignal(CS_ACLK, CS_LFXTCLK_SELECT, CS_CLOCK_DIVIDER_1);
    
    CS_clearAllOscFlagsWithTimeout(1000);
}

void UART_Confg_Init() // 9600 8 N 1 @ 8MHz SMCLK
{
    GPIO_setAsPeripheralModuleFunctionInputPin(
        GPIO_PORT_P2, 
        GPIO_PIN0 | GPIO_PIN1, 
        GPIO_SECONDARY_MODULE_FUNCTION
    );

    EUSCI_A_UART_initParam uart_param = {0};
    uart_param.selectClockSource = EUSCI_A_UART_CLOCKSOURCE_SMCLK;
    uart_param.clockPrescalar = 52; // UCBRx
    uart_param.firstModReg = 1;     // UCBRFx 
    uart_param.secondModReg = 0;    // UCBRSx 
    uart_param.parity = EUSCI_A_UART_NO_PARITY;
    uart_param.msborLsbFirst = EUSCI_A_UART_LSB_FIRST;
    uart_param.numberofStopBits = EUSCI_A_UART_ONE_STOP_BIT;
    uart_param.uartMode = EUSCI_A_UART_MODE;
    uart_param.overSampling = EUSCI_A_UART_OVERSAMPLING_BAUDRATE_GENERATION;

    if (STATUS_FAIL == EUSCI_A_UART_init(EUSCI_A0_BASE, &uart_param))
    {
        return;
    }
    EUSCI_A_UART_enable(EUSCI_A0_BASE); // Enable UART

    RS485_Init(RS485_DEV_1,
        EUSCI_A0_BASE,
        &uart_param,
        0,
        0);
}

void MB_Timer_Init()
{
    // Start timer A
    Timer_A_initCompareModeParam t_compare_params = {0};
    t_compare_params.compareRegister = TIMER_A_CAPTURECOMPARE_REGISTER_0;
    t_compare_params.compareInterruptEnable = TIMER_A_CAPTURECOMPARE_INTERRUPT_ENABLE;
    t_compare_params.compareOutputMode = TIMER_A_OUTPUTMODE_OUTBITVALUE;
    t_compare_params.compareValue = 120; 

    Timer_A_initCompareMode(TIMER_A0_BASE, &t_compare_params);

    Timer_A_initUpModeParam t_up_mode_params = {0};
    t_up_mode_params.clockSource = TIMER_A_CLOCKSOURCE_ACLK;
    t_up_mode_params.clockSourceDivider = TIMER_A_CLOCKSOURCE_DIVIDER_1;
    t_up_mode_params.timerPeriod = 120;
    t_up_mode_params.timerInterruptEnable_TAIE = TIMER_A_TAIE_INTERRUPT_DISABLE;
    t_up_mode_params.captureCompareInterruptEnable_CCR0_CCIE = TIMER_A_CCIE_CCR0_INTERRUPT_ENABLE;
    t_up_mode_params.timerClear = TIMER_A_DO_CLEAR;
    t_up_mode_params.startTimer = false;
    
    Timer_A_initUpMode(TIMER_A0_BASE, &t_up_mode_params);
}

void MB_Reset_Timer()
{
    Timer_A_clear(TIMER_A0_BASE);
    Timer_A_startCounter(TIMER_A0_BASE, TIMER_A_UP_MODE); // đếm up
}

void MB_Stop_Timer()
{
    Timer_A_stop(TIMER_A0_BASE);
    Timer_A_clear(TIMER_A0_BASE);
}

void MB_Init()
{
    CS_Config();
    UART_Confg_Init();

    GPIO_setAsOutputPin(GPIO_PORT_P1, GPIO_PIN0); // LED 1 
    GPIO_setAsOutputPin(GPIO_PORT_P1, GPIO_PIN1); // LED 2
    GPIO_setOutputLowOnPin(GPIO_PORT_P1, GPIO_PIN0);      
    GPIO_setOutputLowOnPin(GPIO_PORT_P1, GPIO_PIN1);   
    
    MB_Timer_Init();
}


#if defined(__TI_COMPILER_VERSION__) || defined(__IAR_SYSTEMS_ICC__)
#pragma vector=TIMER0_A0_VECTOR
__interrupt
#elif defined(__GNUC__)
__attribute__((interrupt(TIMER0_A0_VECTOR)))
#endif
void TIMER0_A0_ISR(void)
{
    MB_Stop_Timer();       
    g_modbus_frame_ready = true;

    GPIO_toggleOutputOnPin(GPIO_PORT_P1, GPIO_PIN0);
}


void MB_Handle()
{
    if(g_modbus_frame_ready)
    {
        modbus_rx_len = 0;

        while(RS485_Read(RS485_DEV_1, &modbus_rx_buf[modbus_rx_len]) == true)
        {
            modbus_rx_len++;
        }

        if(modbus_rx_len >= 8 && modbus_rx_buf[0] == MB_SLAVE_ADDR)
        {
            uint16_t calculated_crc = MB_CRC16_cal(modbus_rx_buf, modbus_rx_len - 2);
            uint16_t received_crc = modbus_rx_buf[modbus_rx_len - 2] | (modbus_rx_buf[modbus_rx_len - 1] << 8);

            if(calculated_crc == received_crc)
            {
                MB_Response_Data(modbus_rx_buf, modbus_rx_len);
            }
        }
        g_modbus_frame_ready = false;
    }
}
