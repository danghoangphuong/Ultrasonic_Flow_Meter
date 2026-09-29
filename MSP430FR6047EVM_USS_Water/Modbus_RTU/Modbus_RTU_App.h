#ifndef __MODBUS_RTU_APP_H__
#define __MODBUS_RTU_APP_H__

#include "RS485Driver/RS485_Driver.h"
#include "driverlib.h"
#include <stdio.h>

#define RX_PACKET_SIZE  16
#define MB_SLAVE_ADDR 0x01 // slave id 
#define MB_TX_BUFF_SIZE 128
#define MAX_NUM_REG 10 // max number of registers

// Function pointer update data modbus
typedef void (*MB_GetData_Callback_t)(float *tof, float *flow_rate, float *volume);
void MB_Register_GetData_Callback(MB_GetData_Callback_t cb);

typedef enum
{
    CODE_NORMAL,
    CODE_ILLEGAL_FUNC,
    CODE_ILLEGAL_DAT_ADDR,
    CODE_ILLEGAL_DAT_VALUE,
    CODE_SLAVE_FAILURE,
    CODE_ACKNOWLEDGE,
    CODE_SLAVE_BUSY
}MB_EXCEPTION_CODE;

typedef union
{
    struct{
        float tof;
        float flow_rate;
        float volume;
    }Meter_Data_Typedef;
    uint16_t mb_holding_reg[6];
}MB_REGISTER_t;

void MB_Data_Update_Register_Callback(MB_GetData_Callback_t cb);
uint16_t MB_CRC16_cal(const uint8_t *buffer, uint16_t buff_len);
void MB_Transmit_Data(uint8_t *data, uint16_t tx_len);
void MB_Send_Exception_Resp(uint8_t func_code, MB_EXCEPTION_CODE code);
void MB_Response_Data(uint8_t *rx_buf, uint16_t rx_len);
void CS_Config(void);
void UART_Confg_Init(void); // 9600 8 N 1 @ 8MHz SMCLK
void MB_Timer_Init(void);
void MB_Reset_Timer(void);
void MB_Stop_Timer(void);
void TIMER0_A0_ISR(void);
void MB_Init(void);
#endif
