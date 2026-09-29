#include <stdint.h>
#include "hal.h"
#include "USSLibGUIApp.h"
#include "hmiDC/hmi.h"
#include <stdio.h>
#include "stdarg.h"
#include "RS485Driver/RS485_Driver.h"
#include "driverlib.h"
#include "Modbus_RTU/Modbus_RTU_App.h"
#include <resultsDC/results.h>

#if defined(__TI_COMPILER_VERSION__)
#pragma DATA_SECTION(app_version, ".version")
#pragma RETAIN(app_version)
const uint8_t app_version[8] = {0x02,0x40,0x00,0x00,__EXTRA_VERSION__,__EVM430_ID__,__EVM430_VER__};
#else // __TI_COMPILER_VERSION__

#pragma location="VERSION"
__root  const uint8_t app_version[8] = {0x02,0x40,0x00,0x00,__EXTRA_VERSION__,__EVM430_ID__,__EVM430_VER__};
#endif

void USS_Get_Measured_Data(float *tof, float *flow_rate, float *volume)
{
    *tof       = g_ResultsOfLastMeasurement.avg_dtof;
    *flow_rate = g_ResultsOfLastMeasurement.avg_FlowRate;
    *volume    = g_ResultsOfLastMeasurement.last_volume;
}

void main(void)
{
    uint16_t reset_source = 0x00;

    WDTCTL = WDTPW | WDTHOLD;
    PMM_unlockLPM5();

    // Initializes the basic functionality of the system
    hal_system_Init();

    // Modbus init
    MB_Init();
    MB_Register_GetData_Callback(USS_Get_Measured_Data);

    // Initialize interfaces to user including buttons, LCD, GUI
    HMI_Init();

    // Verify the reset source and log/report if there was an error
    reset_source = hal_system_GetResetSource();
    if(reset_source != 0x00)
    {
        USSLibGUIApp_send_error(COMMAND_HANDLER_ERROR_FAULT_RESET_ERROR,
                                reset_source);
    }

    // Initialize the USS Lib
    USSLibGUIApp_Init();

    __enable_interrupt();

    // // This is the Design Centers Main Loop
    USSLibGUIApp_Engine();
}



