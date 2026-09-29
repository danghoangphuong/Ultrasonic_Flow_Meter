/*
 * Copyright (C) 2017 Texas Instruments Incorporated - http://www.ti.com/
 *
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
*/
//#############################################################################
//
//! \file   mathematics.h
//!
//! \brief  Implements calculations used by the HMI and LCD display
//!
//!  Group:          MSP Smart Metering Systems Applications
//!  Target Device:  MSP430FR604X
//!  Author:		 Michael Schneider
//!
//!  (C) Copyright 2019, Texas Instruments, Inc.
//#############################################################################

#ifndef USSLIBGUIAPP_FR604X_USS_APP_MATHEMATICSDC_MATHEMATICS_H_
#define USSLIBGUIAPP_FR604X_USS_APP_MATHEMATICSDC_MATHEMATICS_H_

//! \brief This routine Calculate the average of an array that is passed to it
//!        at the given length
//!
//! \return float Average of array
float mathematics_CalcAverageflt( float * fltArray, uint16_t numDataPts);

//! \brief This routine Calculate the Standard Deviation of an array that
//!        is passed to it at the given length
//!
//! \return float Standard deviation of array
float mathematics_CalcStDevflt( float * fltArray, float mean, uint16_t numDataPts);

//! \brief This routine calculates the percentile of a given value in a range
//!
//! \return uint32_t Percentage
uint32_t mathematics_CalcPercentage(uint32_t min, uint32_t max, uint32_t value);

//! \brief This routine converts a float value into a string
//!
//! \return bool sign of float value
bool mathematics_FloatToString(char * res , float flt, bool* dec, uint8_t numSize);

//! \brief This routine converts a int value into a string character
//!
//! \return none
void mathematics_IntToStr(int x, char str[], int d);

//! \brief This routine fills in the respective rest of a string with null
//!        null values should the string need it
//!
//! \return none
void mathematics_Reverse(char *str, int len);

#endif /* USSLIBGUIAPP_FR604X_USS_APP_MATHEMATICSDC_MATHEMATICS_H_ */
