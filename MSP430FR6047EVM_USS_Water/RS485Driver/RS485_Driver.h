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
// RS485_Driver.h - Driver for RS485 using DriverLib and eUSCI
//
//*****************************************************************************
#ifndef RS485_DRIVER_H_
#define RS485_DRIVER_H_

#include <driverlib.h>

//
// Definitions
//
/*! Size of the Reception circular buffer.
 * The buffer will store received data in interrupt context until it's read
 * in application. */
#define RS485_RXBUFFER_SIZE     (100)

// Transmission state machine status flags
#define RS485_TXSTATUS_IDLE             0x00    /*! Transmission Idle */
#define RS485_TXSTATUS_BUSY             0x01    /*! Device is transmitting a packet */
#define RS485_TXSTATUS_ERROR_FATAL      0x02    /*! Error during transmission */
#define RS485_TXSTATUS_ERROR_ARB        0x04    /*! Arbitration error */
#define RS485_TXSTATUS_COMPLETE         0x80    /*! Transmission of packet Complete */
// Reception state machine status flags
#define RS485_RXSTATUS_IDLE             0x00    /*! Reception idle */
#define RS485_RXSTATUS_BYTERECEIVED     0x01    /*! Byte was received and stored in buffer */
#define RS485_RXSTATUS_ERROR_OVERRUN    0x02    /*! Circular buffer overrun */
// Function return codes
#define RS485_RET_OK            0               /*! Return successful */
#define RS485_RET_ERROR_INIT    -1              /*! Error during initialization */
#define RS485_RET_ERROR_PARAMS  -2              /*! Error in parameters */
#define RS485_RET_ERROR_TXBUSY  -3              /*! Device can't transmit since it's busy */

/*! RS485 Instances.
 * Define an instance for every RS485 port available in the system. */
typedef enum
{
    RS485_DEV_1 = 0,
    //RS485_DEV_2,
    RS485_TOTAL
} RS485_Dev_e;


/*! Configuration structure for RS485 driver */
typedef struct  RS485_Config_t
{
    uint16_t u16baseAddr;       /*!< Base address of UART module (i.e. EUSCI_A1_BASE) */
    uint8_t  u8portDE;          /*!< Port used for DE pin (i.e. GPIO_PORT_P1) */
    uint16_t u16pinDE;          /*!< Pin used for DE pin (i.e. GPIO_PIN3) */
} RS485_Config_t;

/*! Control and Status structure for RS485 driver */
typedef struct  RS485_Control_t
{
    uint8_t  u8TXStatus;            /*!< Status of transmission */
    uint8_t  *pu8TXPtr;             /*!< Pointer of transmission buffer */
    uint16_t  u16TXLen;             /*!< Number of bytes to transmit */
    uint16_t  u16TXCtrOut;          /*!< Counter of bytes being transmitted */
    uint16_t  u16TXCtrIn;           /*!< Counter of bytes echoed after transmission */
    uint8_t  u8RXStatus;            /*!< Status of Reception  */
    uint8_t   au8RXBuff[RS485_RXBUFFER_SIZE];   /*!< Circular buffer with received data */
    uint16_t  u16RXPtrW;            /*!< Address of next write in circular buffer */
    uint16_t  u16RXPtrR;            /*!< Address of next read in circular buffer */
} RS485_Control_t;

//
// Function prototypes
//
extern int8_t RS485_Init(RS485_Dev_e handler,
                            uint16_t uartBase,
                            EUSCI_A_UART_initParam *param,
                            uint8_t PortDE,
                            uint16_t PinsDE);
extern void RS485_TXEnable(RS485_Dev_e handler);
extern void RS485_TXDisable(RS485_Dev_e handler);
extern uint8_t RS485_GetTXStatus(RS485_Dev_e handler);
extern void RS485_ClearTXStatus(RS485_Dev_e handler);
extern int8_t RS485_TXFrame(RS485_Dev_e handler,
                            uint8_t *txbuff,
                            uint16_t len);
uint8_t RS485_GetRXStatus(RS485_Dev_e handler);
void RS485_ClearRXStatus(RS485_Dev_e handler);
bool RS485_Peek(RS485_Dev_e handler, uint8_t *data);
bool RS485_Read(RS485_Dev_e handler, uint8_t *data);

#endif // RS485_DRIVER_H_
