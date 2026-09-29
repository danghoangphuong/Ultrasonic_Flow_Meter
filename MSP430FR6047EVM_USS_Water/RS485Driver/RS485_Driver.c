/* --COPYRIGHT--,BSD
 * Copyright (c) 2016, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * --/COPYRIGHT--*/
//*****************************************************************************
//
// RS485_Driver.c - Driver for RS485 using DriverLib and eUSCI
//
//*****************************************************************************
#include "RS485_Driver.h"

//
// Variables
//
static RS485_Config_t RS485_Config[RS485_TOTAL];    /*! Configuration structure */
static RS485_Control_t RS485_Control[RS485_TOTAL];  /*! Structure with control and status variables */

//
// Local Function Prototypes
//
static void RS485_ISR_RXHandler(RS485_Dev_e handler);
static void RS485_ISR_TXHandler(RS485_Dev_e handler);

extern void MB_Reset_Timer();

//
// Function Declarations
//
//*****************************************************************************
//! Initializes the RS485 driver
//!
//! This function initializes the DE pin used to enable transmission, and
//! the UART module used to transmit and receive data
//!
//! \param handler   RS485 handler (i.e. RS485_DEV_1 to use the first instance)
//! \param uartBase  USCI/eUSCI base address (i.e. EUSCI_A1_BASE to use EUSCI_A1)
//! \param param     Pointer to the EUSCI_A_UART_initParam initialization structure
//! \param PortDE    Port used for DE pin (i.e. GPIO_PORT_P1 for P1.x)
//! \param PinsDE    Pin used for DE pin (i.e. GPIO_PIN3 for Px.3)
//!
//! \return RS485_RET_OK if OK,
//!         RS485_RET_ERROR_INIT if there was an error during initialization
//
// *****************************************************************************
int8_t RS485_Init(RS485_Dev_e handler,
                uint16_t uartBase,
                EUSCI_A_UART_initParam *param,
                uint8_t PortDE,
                uint16_t PinsDE)
{
    if (handler >= RS485_TOTAL)
    {
        return RS485_RET_ERROR_INIT;
    }

    // Configure
    RS485_Config[handler].u8portDE = PortDE;
    RS485_Config[handler].u16pinDE = PinsDE;
    RS485_Config[handler].u16baseAddr = uartBase;

    // Disable TX by default
    RS485_TXDisable(handler);

    if(STATUS_FAIL == EUSCI_A_UART_init(RS485_Config[handler].u16baseAddr, param))
    {
        return RS485_RET_ERROR_INIT;
    }



    EUSCI_A_UART_enable(RS485_Config[handler].u16baseAddr);

    // Enable Interrupt by default
    EUSCI_A_UART_clearInterrupt(RS485_Config[handler].u16baseAddr,
                                EUSCI_A_UART_RECEIVE_INTERRUPT);

    EUSCI_A_UART_enableInterrupt(RS485_Config[handler].u16baseAddr,
                                 EUSCI_A_UART_RECEIVE_INTERRUPT);

    // Initialize control variables
    RS485_Control[handler].u8TXStatus = RS485_TXSTATUS_IDLE;
    RS485_Control[handler].pu8TXPtr = 0x00;
    RS485_Control[handler].u16TXCtrOut = 0;
    RS485_Control[handler].u16TXCtrIn = 0;
    RS485_Control[handler].u16TXLen = 0;
    RS485_Control[handler].u8RXStatus = RS485_RXSTATUS_IDLE;
    RS485_Control[handler].u16RXPtrW = 0;
    RS485_Control[handler].u16RXPtrR = 0;

    return RS485_RET_OK;

}

//*****************************************************************************
//! Enables Transmission using RS485 transceiver (DE pin)
//!
//! \param handler   RS485 handler (i.e. RS485_DEV_1 to use the first instance)
//!
//! \return none
//
// *****************************************************************************
void RS485_TXEnable(RS485_Dev_e handler)
{
    GPIO_setOutputHighOnPin(RS485_Config[handler].u8portDE,
                            RS485_Config[handler].u16pinDE);
}

//*****************************************************************************
//! Disable Transmission using RS485 transceiver (DE pin)
//!
//! \param handler   RS485 handler (i.e. RS485_DEV_1 to use the first instance)
//!
//! \return none
//
// *****************************************************************************
void RS485_TXDisable(RS485_Dev_e handler)
{
    GPIO_setOutputLowOnPin(RS485_Config[handler].u8portDE,
                            RS485_Config[handler].u16pinDE);
}

//*****************************************************************************
//! Transmits a frame via RS485
//!
//! This function is non-blocking. It initializes transmission of a packet and
//!  finishes the transmission in interrupt context.
//!
//! \param handler   RS485 handler (i.e. RS485_DEV_1 to use the first instance)
//! \param txbuff    Pointer to transmission buffer
//! \param len       Number of bytes to transmit
//!
//! \return RS485_RET_OK if transmission was started successfully,
//!         RS485_RET_ERROR_PARAMS if an incorrect lenght is passed,
//!         RS485_RET_ERROR_TXBUSY if a transmission was started while busy
//
// *****************************************************************************
int8_t RS485_TXFrame(RS485_Dev_e handler,
                   uint8_t *txbuff,
                   uint16_t len)
{
    if (len == 0)
    {
        return RS485_RET_ERROR_PARAMS;
    }

    if ( (RS485_Control[handler].u8TXStatus & RS485_TXSTATUS_BUSY) ||
         (EUSCI_A_UART_queryStatusFlags(RS485_Config[handler].u16baseAddr, EUSCI_A_UART_BUSY) != 0x00) )
    {
        // transmission in progress, return error
        return RS485_RET_ERROR_TXBUSY;
    }

    RS485_Control[handler].u8TXStatus = RS485_TXSTATUS_BUSY;
    RS485_Control[handler].pu8TXPtr = txbuff;
    RS485_Control[handler].u16TXCtrIn = 0;
    RS485_Control[handler].u16TXCtrOut = 0;
    RS485_Control[handler].u16TXLen = len;

    RS485_TXEnable(handler);

    // Clear TX interrupt
    EUSCI_A_UART_clearInterrupt(RS485_Config[handler].u16baseAddr,
                                EUSCI_A_UART_TRANSMIT_INTERRUPT);

    // Enable TX interrupt
    EUSCI_A_UART_enableInterrupt(RS485_Config[handler].u16baseAddr,
                                 EUSCI_A_UART_TRANSMIT_INTERRUPT);

    // Transmit the first byte
    EUSCI_A_UART_transmitData(RS485_Config[handler].u16baseAddr,
                              RS485_Control[handler].pu8TXPtr[RS485_Control[handler].u16TXCtrOut++]);

    return RS485_RET_OK;

}

//*****************************************************************************
//! Get status of transmission flags
//!
//! \param handler   RS485 handler (i.e. RS485_DEV_1 to use the first instance)
//!
//! \return uint8_t with a value of RS485_TXSTATUS_IDLE if device is idle,
//!         Or with the following flags:
//!         RS485_TXSTATUS_BUSY if the device is currently transmitting a packet
//!         RS485_TXSTATUS_ERROR_FATAL if there was an unexpected error
//!         RS485_TXSTATUS_ERROR_ARB if there was an arbitration error
//!         RS485_TXSTATUS_COMPLETE if the transmission is complete
//
// *****************************************************************************
uint8_t RS485_GetTXStatus(RS485_Dev_e handler)
{
    return RS485_Control[handler].u8TXStatus;
}

//*****************************************************************************
//! Clear status of transmission flags
//!
//! \param handler   RS485 handler (i.e. RS485_DEV_1 to use the first instance)
//!
//! \return none
//
// *****************************************************************************
void RS485_ClearTXStatus(RS485_Dev_e handler)
{
    RS485_Control[handler].u8TXStatus = 0;
}

//*****************************************************************************
//! Get status of reception flags
//!
//! \param handler   RS485 handler (i.e. RS485_DEV_1 to use the first instance)
//!
//! \return uint8_t with a value of RS485_RXSTATUS_IDLE if device is idle,
//!         Or with the following flags:
//!         RS485_RXSTATUS_BYTERECEIVED if a byte was received
//!         RS485_RXSTATUS_ERROR_OVERRUN if there was an overrun error
//
// *****************************************************************************
uint8_t RS485_GetRXStatus(RS485_Dev_e handler)
{
    return RS485_Control[handler].u8RXStatus;
}

//*****************************************************************************
//! Clear status of reception flags
//!
//! \param handler   RS485 handler (i.e. RS485_DEV_1 to use the first instance)
//!
//! \return none
//
// *****************************************************************************
void RS485_ClearRXStatus(RS485_Dev_e handler)
{
    RS485_Control[handler].u8RXStatus = 0;
}

//*****************************************************************************
//! Checks if a byte was received via RS485
//!
//! This function checks if there are any bytes in circular buffer and returns
//! the value, but it doesn't take it out of the buffer
//!
//! \param handler   RS485 handler (i.e. RS485_DEV_1 to use the first instance)
//! \param data      Pointer to byte where data will be stored (if return is true)
//!
//! \return true if a byte was received (returned in *data),
//!         false if no data has been received
//
// *****************************************************************************
bool RS485_Peek(RS485_Dev_e handler, uint8_t *data)
{
    bool ret_val;

    __disable_interrupt();
    if (RS485_Control[handler].u16RXPtrR == RS485_Control[handler].u16RXPtrW)
    {
        // Nothing to read
        *data = 0x00;
        ret_val = false;
    }
    else
    {
        // Return data, note that peek doesn't take data out of the circular buffer
        *data = RS485_Control[handler].au8RXBuff[RS485_Control[handler].u16RXPtrR];
        ret_val = true;
    }

    __enable_interrupt();   // Restore interrupts
    return ret_val;
}

//*****************************************************************************
//! Gets a byte received via RS485
//!
//! This function checks if there are any bytes in circular buffer and returns
//! the value, taking the data out of the buffer
//!
//! \param handler   RS485 handler (i.e. RS485_DEV_1 to use the first instance)
//! \param data      Pointer to byte where data will be stored (if return is true)
//!
//! \return true if a byte was received (returned in *data),
//!         false if no data has been received
//
// *****************************************************************************
bool RS485_Read(RS485_Dev_e handler, uint8_t *data)
{
    bool ret_val;
    __disable_interrupt();
    if (RS485_Peek(handler, data) == true)
    {
        if (++RS485_Control[handler].u16RXPtrR == RS485_RXBUFFER_SIZE)
        {
            // If we are at the end of the buffer, restart
            RS485_Control[handler].u16RXPtrR = 0;
        }
        if (RS485_Control[handler].u16RXPtrR == RS485_Control[handler].u16RXPtrW)
        {
            // Clear flag if there is nothing else to read
            RS485_Control[handler].u8RXStatus &= ~RS485_RXSTATUS_BYTERECEIVED;
        }
        ret_val = true;
    }
    else
    {
        ret_val = false;
    }
    __enable_interrupt();   // Restore interrupts
    return ret_val;
}


//
// Local Function Declarations
//

//*****************************************************************************
//! Interrupt service Routine to handle the reception of a new bytes
//!
//! This function can be called for one or more EUSCIs passing the handler.
//! Data received during transmission is treated as an echo and checked for
//! potential collision/arbitration problems.
//! Data received when not transmitted is stored in a circular buffer.
//!
//! \param handler   RS485 handler (i.e. RS485_DEV_1 to use the first instance)
//!
//! \return none
//
// *****************************************************************************
static void RS485_ISR_RXHandler(RS485_Dev_e handler)
{
    uint8_t rxdata;
    rxdata = EUSCI_A_UART_receiveData(RS485_Config[handler].u16baseAddr);
    if (RS485_Control[handler].u8TXStatus & RS485_TXSTATUS_BUSY)
    {
        // If we are transmitting, check if the data received matches the data being sent
        if (rxdata != RS485_Control[handler].pu8TXPtr[RS485_Control[handler].u16TXCtrIn])
        {
            // Data doesn't match, flag the arbitration error
            RS485_Control[handler].u8TXStatus &= ~RS485_TXSTATUS_BUSY;
            RS485_Control[handler].u8TXStatus |= RS485_TXSTATUS_ERROR_ARB;
            RS485_TXDisable(handler);
            // Disable TX interrupt
            EUSCI_A_UART_disableInterrupt(RS485_Config[handler].u16baseAddr,
                                             EUSCI_A_UART_TRANSMIT_INTERRUPT);
        }
        else
        {
            RS485_Control[handler].u16TXCtrIn++;
            if (RS485_Control[handler].u16TXCtrIn >= RS485_Control[handler].u16TXLen)
            {
                // If we received the last expected byte, clear busy flag and indicate completion
                RS485_Control[handler].u8TXStatus &= ~RS485_TXSTATUS_BUSY;
                RS485_Control[handler].u8TXStatus |= RS485_TXSTATUS_COMPLETE;
                RS485_TXDisable(handler);
            }

        }

    }
    else
    {
        // Byte received without expecting a transmission echo
        // store it in the circular buffer
        RS485_Control[handler].au8RXBuff[RS485_Control[handler].u16RXPtrW] = rxdata;
        RS485_Control[handler].u8RXStatus |= RS485_RXSTATUS_BYTERECEIVED;
        // Set the Write pointer to next location
        if (++RS485_Control[handler].u16RXPtrW == RS485_RXBUFFER_SIZE)
        {
            // Wrap-around buffer
            RS485_Control[handler].u16RXPtrW = 0;
        }

        if (RS485_Control[handler].u16RXPtrW == RS485_Control[handler].u16RXPtrR)
        {
            // If the next write pointer is the same as the read pointer, then we have an overrun
            RS485_Control[handler].u8RXStatus |= RS485_RXSTATUS_ERROR_OVERRUN;
        }

    }
}


//*****************************************************************************
//! Interrupt service Routine to handle empty transmission buffer
//!
//! This function can be called for one or more EUSCIs passing the handler.
//!
//! \param handler   RS485 handler (i.e. RS485_DEV_1 to use the first instance)
//!
//! \return none
//
// *****************************************************************************
static void RS485_ISR_TXHandler(RS485_Dev_e handler)
{
    if (RS485_Control[handler].u8TXStatus != RS485_TXSTATUS_BUSY)
    {
        // Unexpected state, indicate an error
        RS485_Control[handler].u8TXStatus |= RS485_TXSTATUS_ERROR_FATAL;
        RS485_Control[handler].u8TXStatus &= ~RS485_TXSTATUS_BUSY;
        RS485_TXDisable(handler);
        // Disable TX interrupt
        EUSCI_A_UART_disableInterrupt(RS485_Config[handler].u16baseAddr,
                                         EUSCI_A_UART_TRANSMIT_INTERRUPT);
    }

    if (RS485_Control[handler].u16TXCtrOut < RS485_Control[handler].u16TXLen)
    {
        // transmit next byte
        EUSCI_A_UART_transmitData(RS485_Config[handler].u16baseAddr,
                                  RS485_Control[handler].pu8TXPtr[RS485_Control[handler].u16TXCtrOut++]);
    }

    if (RS485_Control[handler].u16TXCtrOut >= RS485_Control[handler].u16TXLen)
    {
        // Disable TX interrupt after transmitting all the data
        EUSCI_A_UART_disableInterrupt(RS485_Config[handler].u16baseAddr,
                                         EUSCI_A_UART_TRANSMIT_INTERRUPT);
        // The busy flag will be cleared when the last byte is received
    }
}

//
// Interrupt Service Routines
//
//*****************************************************************************
//! Interrupt service Routine for eUSCI_A1
//!
//! \return none
//
// *****************************************************************************
#if defined(__TI_COMPILER_VERSION__) || defined(__IAR_SYSTEMS_ICC__)
// #pragma vector=USCI_A1_VECTOR
#pragma vector=USCI_A0_VECTOR

__interrupt
#elif defined(__GNUC__)
__attribute__((interrupt(USCI_A0_VECTOR)))
#endif


void RS485_UART0_ISR(void)
{

    switch(__even_in_range(UCA0IV,USCI_UART_UCTXCPTIFG))
    {
    case USCI_NONE: break;
    case USCI_UART_UCRXIFG:
        RS485_ISR_RXHandler(RS485_DEV_1);
        MB_Reset_Timer();
        break;
    case USCI_UART_UCTXIFG:
        RS485_ISR_TXHandler(RS485_DEV_1);
        break;
    case USCI_UART_UCSTTIFG: break;
    case USCI_UART_UCTXCPTIFG: break;
    }
}


