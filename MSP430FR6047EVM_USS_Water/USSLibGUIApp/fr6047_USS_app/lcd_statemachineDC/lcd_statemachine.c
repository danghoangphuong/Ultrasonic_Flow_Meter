/* --COPYRIGHT--,TI
*MSP Source and Object Code Software License Agreement
*
*
**IMPORTANT - PLEASE CAREFULLY READ THE FOLLOWING LICENSE AGREEMENT, WHICH IS LEGALLY BINDING.  AFTER YOU READ IT, YOU WILL BE ASKED WHETHER YOU ACCEPT AND AGREE TO ITS TERMS.  DO NOT CLICK  "I ACCEPT" UNLESS: (1) YOU WILL USE THE LICENSED MATERIALS FOR YOUR OWN BENEFIT AND PERSONALLY ACCEPT, AGREE TO AND INTEND TO BE BOUND BY THESE TERMS; OR (2) YOU ARE AUTHORIZED TO, AND INTEND TO BE BOUND BY, THESE TERMS ON BEHALF OF YOUR COMPANY.
*
*
**Important - Read carefully: This Source and Object Code Software License Agreement ("Agreement") is a legal agreement between you and Texas Instruments Incorporated ("TI").  In this Agreement "you" means you personally if you will exercise the rights granted for your own benefit, but it means your company (or you on behalf of your company) if you will exercise the rights granted for your company's benefit.  The "Licensed Materials" subject to this Agreement include the software programs and any associated electronic documentation (in each case, in whole or in part) that accompany this Agreement, are set forth in the applicable software manifest and you access "on-line", as well as any updates or upgrades to such software programs or documentation, if any, provided to you at TI's sole discretion.  The Licensed Materials are specifically designed and licensed for use solely and exclusively with MSP microcontroller devices manufactured by or for TI ("TI Devices").  By installing, copying or otherwise using the Licensed Materials you agree to abide by the provisions set forth herein.  This Agreement is displayed for you to read prior to using the Licensed Materials.  If you choose not to accept or agree with these provisions, do not download or install the Licensed Materials.
*
**Note Regarding Possible Access to Other Licensed Materials:  The Licensed Materials may be bundled with software and associated electronic documentation, if any, licensed under terms other than the terms of this Agreement (in whole or in part, "Other Licensed Materials"), including, for example Open Source Software and/or TI-owned or third party Proprietary Software licensed under such other terms.  "Open Source Software" means any software licensed under terms requiring that (A) other software ("Proprietary Software") incorporated, combined or distributed with such software or developed using such software: (i) be disclosed or distributed in source code form; or (ii) otherwise be licensed on terms inconsistent with the terms of this Agreement, including but not limited to permitting use of the Proprietary Software on or with devices other than TI Devices, or (B) require the owner of Proprietary Software to license any of its patents to users of the Open Source Software and/or Proprietary Software incorporated, combined or distributed with such Open Source Software or developed using such Open Source Software.
*
**If by accepting this Agreement, you gain access to Other Licensed Materials, they will be listed in the applicable software manifest.  Your use of the Other Licensed Materials is subject to the applicable other licensing terms acknowledgements and disclaimers as specified in the applicable software manifest and/or identified or included with the Other Licensed Materials in the software bundle.  For clarification, this Agreement does not limit your rights under, or grant you rights that supersede, the terms of any applicable Other Licensed Materials license agreement.  If any of the Other Licensed Materials is Open Source Software that has been provided to you in object code only under terms that obligate TI to provide to you or show you where you can access the source code versions of such Open Source Software, TI will provide to you, or show you where you can access, such source code if you contact TI at Texas Instruments Incorporated, 12500 TI Boulevard, Mail Station 8638, Dallas, Texas 75243, Attention: Contracts Manager, Embedded Processing.  In the event you choose not to accept or agree with the terms in any applicable Other Licensed Materials license agreement, you must terminate this Agreement.
*
**1.    License Grant and Use Restrictions.
*
**a.    Licensed Materials License Grant.  Subject to the terms of this Agreement, TI hereby grants to you a limited, non-transferable, non-exclusive, non-assignable, non-sublicensable, fully paid-up and royalty-free license to:
*
*            i.    Limited Source Code License:  make copies, prepare derivative works, display internally and use internally the Licensed Materials provided to you in source code for the sole purpose of developing object and executable versions of such Licensed Materials, or any derivative thereof, that execute solely and exclusively on TI Devices, for end use in Licensee Products, and maintaining and supporting such Licensed Materials, or any derivative thereof, and Licensee Products.  For purposes of this Agreement, "Licensee Product" means a product that consists of both hardware, including one or more TI Devices, and software components, including only executable versions of the Licensed Materials that execute solely and exclusively on such TI Devices.
*
*            ii.    Object Code Evaluation, Testing and Use License:  make copies, display internally, distribute internally and use internally the Licensed Materials in object code for the sole purposes of evaluating and testing the Licensed Materials and designing and developing Licensee Products, and maintaining and supporting the Licensee Products;
*
*            iii.    Demonstration License:  demonstrate to third parties the Licensed Materials executing solely and exclusively on TI Devices as they are used in Licensee Products, provided that such Licensed Materials are demonstrated in object or executable versions only and
*
*        iv.    Production and Distribution License:  make, use, import, export and otherwise distribute the Licensed Materials as part of a Licensee Product, provided that such Licensee Products include only embedded executable copies of such Licensed Materials that execute solely and exclusively on TI Devices.
*
*    b.    Contractors.  The licenses granted to you hereunder shall include your on-site and off-site contractors (either an individual or entity), while such contractors are performing work for or providing services to you, provided that such contractors have executed work-for-hire agreements with you containing applicable terms and conditions consistent with the terms and conditions set forth in this Agreement and provided further that you shall be liable to TI for any breach by your contractors of this Agreement to the same extent as you would be if you had breached the Agreement yourself.
*
*    c.    No Other License.  Nothing in this Agreement shall be construed as a license to any intellectual property rights of TI other than those rights embodied in the Licensed Materials provided to you by TI.  EXCEPT AS PROVIDED HEREIN, NO OTHER LICENSE, EXPRESS OR IMPLIED, BY ESTOPPEL OR OTHERWISE, TO ANY OTHER TI INTELLECTUAL PROPERTY RIGHTS IS GRANTED HEREIN.
*
*    d.    Covenant not to Sue.  During the term of this Agreement, you agree not to assert a claim against TI or its licensees that the Licensed Materials infringe your intellectual property rights.
*
*    e.    Restrictions.  You shall maintain the source code versions of the Licensed Materials under password control protection and shall not disclose such source code versions of the Licensed Materials, to any person other than your employees and contractors whose job performance requires access.  You shall not use the Licensed Materials with a processing device other than a TI Device, and you agree that any such unauthorized use of the Licensed Materials is a material breach of this Agreement.  You shall not use the Licensed Materials for the purpose of analyzing or proving infringement of any of your patents by either TI or TI's customers.  Except as expressly provided in this Agreement, you shall not copy, publish, disclose, display, provide, transfer or make available the Licensed Materials to any third party and you shall not sublicense, transfer, or assign the Licensed Materials or your rights under this Agreement to any third party.  You shall not mortgage, pledge or encumber the Licensed Materials in any way.  You may use the Licensed Materials with Open Source Software or with software developed using Open Source Software tools provided you do not incorporate, combine or distribute the Licensed Materials in a manner that subjects the Licensed Materials to any license obligations or any other intellectual property related terms of any license governing such Open Source Software.
*
*    f.    Termination.  This Agreement is effective on the date the Licensed Materials are delivered to you together with this Agreement and will remain in full force and effect until terminated.  You may terminate this Agreement at any time by written notice to TI.  Without prejudice to any other rights, if you fail to comply with the terms of this Agreement or you are acquired, TI may terminate your right to use the Licensed Materials upon written notice to you.  Upon termination of this Agreement, you will destroy any and all copies of the Licensed Materials in your possession, custody or control and provide to TI a written statement signed by your authorized representative certifying such destruction. Except for Sections 1(a), 1(b) and 1(d), all provisions of this Agreement shall survive termination of this Agreement.
*
**2.    Licensed Materials Ownership.  The Licensed Materials are licensed, not sold to you, and can only be used in accordance with the terms of this Agreement.  Subject to the licenses granted to you pursuant to this Agreement, TI and its licensors own and shall continue to own all right, title and interest in and to the Licensed Materials, including all copies thereof.  You agree that all fixes, modifications and improvements to the Licensed Materials conceived of or made by TI that are based, either in whole or in part, on your feedback, suggestions or recommendations are the exclusive property of TI and all right, title and interest in and to such fixes, modifications or improvements to the Licensed Materials will vest solely in TI.  Moreover, you acknowledge and agree that when your independently developed software or hardware components are combined, in whole or in part, with the Licensed Materials, your right to use the combined work that includes the Licensed Materials remains subject to the terms and conditions of this Agreement.
*
**3.    Intellectual Property Rights.
*
*    a.    The Licensed Materials contain copyrighted material, trade secrets and other proprietary information of TI and its licensors and are protected by copyright laws, international copyright treaties, and trade secret laws, as well as other intellectual property laws.  To protect TI's and its licensors' rights in the Licensed Materials, you agree, except as specifically permitted by statute by a provision that cannot be waived by contract, not to "unlock", decompile, reverse engineer, disassemble or otherwise translate to a human-perceivable form any portions of the Licensed Materials provided to you in object code format only, nor permit any person or entity to do so.  You shall not remove, alter, cover, or obscure any confidentiality, trade secret, trade mark, patent, copyright or other proprietary notice or other identifying marks or designs from any component of the Licensed Materials and you shall reproduce and include in all copies of the Licensed Materials the copyright notice(s) and proprietary legend(s) of TI and its licensors as they appear in the Licensed Materials.  TI reserves all rights not specifically granted under this Agreement.
*
*    b.    Certain Licensed Materials may be based on industry recognized standards or software programs published by industry recognized standards bodies and certain third parties may claim to own patents, copyrights, and other intellectual property rights that cover implementation of those standards.  You acknowledge and agree that this Agreement does not convey a license to any such third party patents, copyrights, and other intellectual property rights and that you are solely responsible for any patent, copyright, or other intellectual property right claim that relates to your use or distribution of the Licensed Materials or your use or distribution of your products that include or incorporate the Licensed Materials.  Moreover, you acknowledge that you are responsible for any fees or royalties that may be payable to any third party based on such third party's interests in the Licensed Materials or any intellectual property rights that cover implementation of any industry recognized standard, any software program published by any industry recognized standards bodies or any other proprietary technology.
*
**4.    Confidential Information.  You acknowledge and agree that the Licensed Materials contain trade secrets and other confidential information of TI and its licensors.  You agree to use the Licensed Materials solely within the scope of the licenses set forth herein, to maintain the Licensed Materials in strict confidence, to use at least the same procedures and degree of care that you use to prevent disclosure of your own confidential information of like importance but in no instance less than reasonable care, and to prevent disclosure of the Licensed Materials to any third party, except as may be necessary and required in connection with your rights and obligations hereunder; provided, however, that you may not provide the Licensed Materials to any business organization or group within your company or to customers or contractors that design or manufacture semiconductors unless TI gives written consent.  You agree to obtain executed confidentiality agreements with your employees and contractors having access to the Licensed Materials and to diligently take steps to enforce such agreements in this respect.  TI may disclose your contact information to TI's licensors.
*
**5.    Warranties and Limitations.  THE LICENSED MATERIALS ARE PROVIDED "AS IS".  FURTHERMORE, YOU ACKNOWLEDGE AND AGREE THAT THE LICENSED MATERIALS HAVE NOT BEEN TESTED OR CERTIFIED BY ANY GOVERNMENT AGENCY OR INDUSTRY REGULATORY ORGANIZATION OR ANY OTHER THIRD PARTY ORGANIZATION.  YOU AGREE THAT PRIOR TO USING, INCORPORATING OR DISTRIBUTING THE LICENSED MATERIALS IN OR WITH ANY COMMERCIAL PRODUCT THAT YOU WILL THOROUGHLY TEST THE PRODUCT AND THE FUNCTIONALITY OF THE LICENSED MATERIALS IN OR WITH THAT PRODUCT AND BE SOLELY RESPONSIBLE FOR ANY PROBLEMS OR FAILURES.
*
**TI AND ITS LICENSORS MAKE NO WARRANTY OR REPRESENTATION, EITHER EXPRESS, IMPLIED OR STATUTORY, REGARDING THE LICENSED MATERIALS, INCLUDING BUT NOT LIMITED TO ANY IMPLIED WARRANTIES OF MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE OR NON-INFRINGEMENT OF ANY THIRD PARTY PATENTS, COPYRIGHTS, TRADE SECRETS OR OTHER INTELLECTUAL PROPERTY RIGHTS.  YOU AGREE TO USE YOUR INDEPENDENT JUDGMENT IN DEVELOPING YOUR PRODUCTS.  NOTHING CONTAINED IN THIS AGREEMENT WILL BE CONSTRUED AS A WARRANTY OR REPRESENTATION BY TI TO MAINTAIN PRODUCTION OF ANY TI SEMICONDUCTOR DEVICE OR OTHER HARDWARE OR SOFTWARE WITH WHICH THE LICENSED MATERIALS MAY BE USED.
*
**IN NO EVENT SHALL TI OR ITS LICENSORS, BE LIABLE FOR ANY SPECIAL, INDIRECT, INCIDENTAL, PUNITIVE OR CONSEQUENTIAL DAMAGES, HOWEVER CAUSED, ON ANY THEORY OF LIABILITY, IN CONNECTION WITH OR ARISING OUT OF THIS AGREEMENT OR THE USE OF THE LICENSED MATERIALS REGARDLESS OF WHETHER TI HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.  EXCLUDED DAMAGES INCLUDE, BUT ARE NOT LIMITED TO, COST OF REMOVAL OR REINSTALLATION, OUTSIDE COMPUTER TIME, LABOR COSTS, LOSS OF DATA, LOSS OF GOODWILL, LOSS OF PROFITS, LOSS OF SAVINGS, OR LOSS OF USE OR INTERRUPTION OF BUSINESS.  IN NO EVENT WILL TI'S OR ITS LICENSORS' AGGREGATE LIABILITY UNDER THIS AGREEMENT OR ARISING OUT OF YOUR USE OF THE LICENSED MATERIALS EXCEED FIVE HUNDRED U.S. DOLLARS (US$500).
*
*    Because some jurisdictions do not allow the exclusion or limitation of incidental or consequential damages or limitation on how long an implied warranty lasts, the above limitations or exclusions may not apply to you.
*
**6.    Indemnification Disclaimer.  YOU ACKNOWLEDGE AND AGREE THAT TI SHALL NOT BE LIABLE FOR AND SHALL NOT DEFEND OR INDEMNIFY YOU AGAINST ANY THIRD PARTY INFRINGEMENT CLAIM THAT RELATES TO OR IS BASED ON YOUR MANUFACTURE, USE, OR DISTRIBUTION OF THE LICENSED MATERIALS OR YOUR MANUFACTURE, USE, OFFER FOR SALE, SALE, IMPORTATION OR DISTRIBUTION OF YOUR PRODUCTS THAT INCLUDE OR INCORPORATE THE LICENSED MATERIALS.
*
**7.    No Technical Support.  TI and its licensors are under no obligation to install, maintain or support the Licensed Materials.
*
**8.    Notices.  All notices to TI hereunder shall be delivered to Texas Instruments Incorporated, 12500 TI Boulevard, Mail Station 8638, Dallas, Texas 75243, Attention: Contracts Manager - Embedded Processing, with a copy to Texas Instruments Incorporated, 13588 N. Central Expressway, Mail Station 3999, Dallas, Texas 75243, Attention: Law Department - Embedded Processing.  All notices shall be deemed served when received by TI.
*
**9.    Export Control.  The Licensed Materials are subject to export control under the U.S. Commerce Department's Export Administration Regulations ("EAR").  Unless prior authorization is obtained from the U.S. Commerce Department, neither you nor your subsidiaries shall export, re-export, or release, directly or indirectly (including, without limitation, by permitting the Licensed Materials to be downloaded), any technology, software, or software source code, received from TI, or export, directly or indirectly, any direct product of such technology, software, or software source code, to any person, destination or country to which the export, re-export, or release of the technology, software, or software source code, or direct product is prohibited by the EAR.  You represent and warrant that you (i) are not located in, or under the control of, a national or resident of Cuba, Iran, North Korea, Sudan and Syria or any other country subject to a U.S. goods embargo; (ii) are not on the U.S. Treasury Department's List of Specially Designated Nationals or the U.S. Commerce Department's Denied Persons List or Entity List; and (iii) will not use the Licensed Materials or transfer the Licensed Materials for use in any military, nuclear, chemical or biological weapons, or missile technology end-uses.  Any software export classification made by TI shall not be construed as a representation or warranty regarding the proper export classification for such software or whether an export license or other documentation is required for the exportation of such software.
*
**10.    Governing Law and Severability; Waiver.  This Agreement will be governed by and interpreted in accordance with the laws of the State of Texas, without reference to conflict of laws principles.  If for any reason a court of competent jurisdiction finds any provision of the Agreement to be unenforceable, that provision will be enforced to the maximum extent possible to effectuate the intent of the parties, and the remainder of the Agreement shall continue in full force and effect.  This Agreement shall not be governed by the United Nations Convention on Contracts for the International Sale of Goods, or by the Uniform Computer Information Transactions Act (UCITA).  The parties agree that non-exclusive jurisdiction for any dispute arising out of or relating to this Agreement lies within the courts located in the State of Texas.  Notwithstanding the foregoing, any judgment may be enforced in any United States or foreign court, and either party may seek injunctive relief in any United States or foreign court.  Failure by TI to enforce any provision of this Agreement shall not be deemed a waiver of future enforcement of that or any other provision in this Agreement or any other agreement that may be in place between the parties.
*
**11.    PRC Provisions.  If you are located in the People's Republic of China ("PRC") or if the Licensed Materials will be sent to the PRC, the following provisions shall apply:
*
*    a.    Registration Requirements.  You shall be solely responsible for performing all acts and obtaining all approvals that may be required in connection with this Agreement by the government of the PRC, including but not limited to registering pursuant to, and otherwise complying with, the PRC Measures on the Administration of Software Products, Management Regulations on Technology Import-Export, and Technology Import and Export Contract Registration Management Rules.  Upon receipt of such approvals from the government authorities, you shall forward evidence of all such approvals to TI for its records.  In the event that you fail to obtain any such approval or registration, you shall be solely responsible for any and all losses, damages or costs resulting therefrom, and shall indemnify TI for all such losses, damages or costs.
*
**b.    Governing Language.  This Agreement is written and executed in the English language and shall be authoritative and controlling, whether or not translated into a language other than English to comply with law or for reference purposes.  If a translation of this Agreement is required for any purpose, including but not limited to registration of the Agreement pursuant to any governmental laws, regulations or rules, you shall be solely responsible for creating such translation.
*
**12.    Contingencies.    TI shall not be in breach of this Agreement and shall not be liable for any non-performance or delay in performance if such non-performance or delay is due to a force majeure event or other circumstances beyond TI's reasonable control.
*
**13.        Entire Agreement.  This is the entire agreement between you and TI and this Agreement supersedes any prior agreement between the parties related to the subject matter of this Agreement.  Notwithstanding the foregoing, any signed and effective software license agreement relating to the subject matter hereof and stating expressly that such agreement shall control regardless of any subsequent click-wrap, shrink-wrap or web-wrap, shall supersede the terms of this Agreement.  No amendment or modification of this Agreement will be effective unless in writing and signed by a duly authorized representative of TI.  You hereby warrant and represent that you have obtained all authorizations and other applicable consents required empowering you to enter into this Agreement.
*
*
*
* --/COPYRIGHT--*/

//#############################################################################
//
//! \file   lcd_statemachine.c
//!
//! \brief  Implements the LCD state machine
//!
//!  Group:          MSP Smart Metering Systems Applications
//!  Target Device:  MSP430FR604x
//!  Author:		 Michael Schneider
//!
//!  (C) Copyright 2019, Texas Instruments, Inc.
//#############################################################################

#include <stdint.h>
#include <stdbool.h>
#include <msp430.h>

#include "hal.h"

#include <lcd_statemachineDC/lcd_statemachine.h>
#include <resultsDC/results.h>
#include <mathematicsDC/mathematics.h>
#include <masterIncludes.h>

#ifdef ENABLE_LCD

#define LCD_DELAY_SCROLL    (200)

#if defined(__TI_COMPILER_VERSION__)
#pragma PERSISTENT(g_lcd_statemachine)
#define __persistent
#elif defined (__IAR_SYSTEMS_ICC__)
#else
#error Compiler not supported!
#endif
// state of LCD state machine
// static __persistent LCD_STATEMACHINE_t g_lcd_statemachine =
volatile LCD_STATEMACHINE_t g_lcd_statemachine =
{
		//default là bật lên thì sleep, ấn up mới chuyển state
		// .previous_state = LCD_STATEMACHINE_flowRateAverage,
		// .current_state = LCD_STATEMACHINE_sleepLCD, 
		// .next_state = LCD_STATEMACHINE_sleepLCD,
		// .isfirsttime = false,
		.previous_state = LCD_STATEMACHINE_sleepLCD,
		.current_state = LCD_STATEMACHINE_flowRateAverage, // always on display
		.next_state = LCD_STATEMACHINE_flowRateAverage,
		.isfirsttime = false,

		.isfirsttimescroll = true,

		.scrollState = LCD_STATEMACHINE_deltaTOF,
		.scrollIteration = 0,
};

#if defined(__TI_COMPILER_VERSION__)
#pragma PERSISTENT(displayData)
#define __persistent
#elif defined (__IAR_SYSTEMS_ICC__)
#else
#error Compiler not supported!
#endif
// Data that will be displayed to the LCD
static __persistent DISPLAY_DATA_t displayData =
{
		.character[0] = 0, .character[1] = 0, .character[2] = 0,
		.character[3] = 0, .character[4] = 0, .character[5] = 0,

		.digit[0] = HAL_LCD_DIGIT_1, .digit[1] = HAL_LCD_DIGIT_2,
		.digit[2] = HAL_LCD_DIGIT_3, .digit[3] = HAL_LCD_DIGIT_4,
		.digit[4] = HAL_LCD_DIGIT_5, .digit[5] = HAL_LCD_DIGIT_6,

		.decimal[0] =  false, .decimal[1] =  false, .decimal[2] =  false,
		.decimal[3] =  false, .decimal[4] =  false, .decimal[5] =  false,

		.isminus = false,
};

// pointer to displayData
static DISPLAY_DATA_t * displayData_ptr = &displayData;


void lcd_statemachine_stateUpdate(void)
{
	uint16_t button = hal_system_ButtonsCheck();

	// if(LCD_STATEMACHINE_sleepLCD == g_lcd_statemachine.current_state)
	// {
	// 	switch(button)
	// 	{
	// 		case HAL_SYS_BUTTON_LEFT:
	// 			break;
	// 		case HAL_SYS_BUTTON_UP:
	// 			g_lcd_statemachine.next_state = g_lcd_statemachine.previous_state;
	// 			break;
	// 		case HAL_SYS_BUTTON_DOWN:
	// 			break;
	// 		case HAL_SYS_BUTTON_SEL:
	// 			break;
	// 		case HAL_SYS_BUTTON_RIGHT:
	// 			break;
	// 		default:
	// 			break;
	// 	}
	// }
	if(LCD_STATEMACHINE_flowRateAverage == g_lcd_statemachine.current_state)
	{
		switch(button)
		{
			case HAL_SYS_BUTTON_LEFT:
				break;
			case HAL_SYS_BUTTON_UP:
				g_lcd_statemachine.next_state = g_lcd_statemachine.previous_state;
				break;
			case HAL_SYS_BUTTON_DOWN:
				break;
			case HAL_SYS_BUTTON_SEL:
				break;
			case HAL_SYS_BUTTON_RIGHT:
				break;
			default:
				break;
		}
	}
	
	else if(LCD_STATEMACHINE_mainMenuScroll == g_lcd_statemachine.current_state)
	{
		switch(button)
		{
			case HAL_SYS_BUTTON_LEFT:
				break;
			case HAL_SYS_BUTTON_UP:
				g_lcd_statemachine.next_state = LCD_STATEMACHINE_sleepLCD;
				break;
			case HAL_SYS_BUTTON_DOWN:
				break;
			case HAL_SYS_BUTTON_SEL:
				g_lcd_statemachine.next_state = LCD_STATEMACHINE_flowRateAverage;
				break;
			case HAL_SYS_BUTTON_RIGHT:
				break;
			default:
				break;
		}
	}
	else
	{
		switch(button)
		{
			case HAL_SYS_BUTTON_LEFT:
				lcd_satemachine_srollState(LEFT, &g_lcd_statemachine.next_state);
				break;
			case HAL_SYS_BUTTON_UP:
				g_lcd_statemachine.next_state = LCD_STATEMACHINE_sleepLCD;
				break;
			case HAL_SYS_BUTTON_DOWN:
				break;
			case HAL_SYS_BUTTON_SEL:
				g_lcd_statemachine.next_state = LCD_STATEMACHINE_mainMenuScroll;
				break;
			case HAL_SYS_BUTTON_RIGHT:
				lcd_satemachine_srollState(RIGHT, &g_lcd_statemachine.next_state);
				break;
			default:
				break;
		}
	}
	// Clear EVM buttons
	hal_system_ButtonsClearAll();

	// check to see if there was a state change
	if(g_lcd_statemachine.next_state != g_lcd_statemachine.current_state)
	{
		// if the state machine is leaving sleep mode
		// if(LCD_STATEMACHINE_sleepLCD == g_lcd_statemachine.current_state)
		// {
		// 	hal_lcd_turnonLCD();
		// }

		// set the scroll state machine
		if(LCD_STATEMACHINE_mainMenuScroll == g_lcd_statemachine.next_state)
		{
			g_lcd_statemachine.isfirsttimescroll = true;
		}
		// Update the state machine
		g_lcd_statemachine.previous_state = g_lcd_statemachine.current_state;
		g_lcd_statemachine.current_state = g_lcd_statemachine.next_state;
		g_lcd_statemachine.isfirsttime = true;
	}
}

void lcd_statemachine_stateAction(void)
{
	// if the LCD is not in sleep mode reset the LCD to prepare for new data
	// if(LCD_STATEMACHINE_sleepLCD != g_lcd_statemachine.current_state)
	// {
	// 	hal_lcd_clearLCD();
	// 	hal_lcd_showBattery((uint8_t) g_ResultsOfLastMeasurement.BatteryPercentageStamp);
	// 	lcd_statemachine_clearWriteData();
	// }
	hal_lcd_clearLCD();
	hal_lcd_showBattery((uint8_t) g_ResultsOfLastMeasurement.BatteryPercentageStamp);
	lcd_statemachine_clearWriteData();

	// take action on proper state
	switch(g_lcd_statemachine.current_state)
	{
		// case LCD_STATEMACHINE_sleepLCD:
		// 	lcd_statemachine_sleepLCD();
		// 	break;
		case LCD_STATEMACHINE_mainMenuScroll:
			lcd_statemachine_displayScrollStatistics();
			break;
		case LCD_STATEMACHINE_deltaTOF:
			lcd_statemachine_displayDeltaTOF();
			break;
		case LCD_STATEMACHINE_deltaTOFAverage:
			lcd_statemachine_displayAvgDeltaTOF();
			break;
		case LCD_STATEMACHINE_deltaTOFstandardDeviation:
			lcd_statemachine_displayDeltaTOFStandardDeviation();
			break;
		case LCD_STATEMACHINE_flowRate:
			lcd_statemachine_displayFlowRate();
			break;
		case LCD_STATEMACHINE_flowRateAverage:
			lcd_statemachine_displayAvgFlowRate();
			break;
		case LCD_STATEMACHINE_volume:
			lcd_statemachine_displayVolume();
			break;
		case LCD_STATEMACHINE_dateAndTime:
			lcd_statemachine_displayDateAndTime();
			break;
		case LCD_STATEMACHINE_temperature:
			lcd_statemachine_displayTemperature();
			break;
		case LCD_STATEMACHINE_batteryVoltage:
			lcd_statemachine_displayBatteryVoltage();
			break;
		default:
			break;
	}
}

bool lcd_statemachine_isSleep(void)
{
	if(LCD_STATEMACHINE_sleepLCD != g_lcd_statemachine.current_state)
	{
		return false;
	}
	else
	{
		return true;
	}
}


void lcd_satemachine_srollState(bool direction, LCD_STATEMACHINE_STATE *state)
{
	bool success = false;

	// scroll by one state in direction indicated until a valid state is reached
	while(false == success)
	{
		if(RIGHT == direction)
		{
			*state+=LCD_STATEMACHINE_ONE;
			if(LCD_STATEMACHINE_maxStates == *state)
			{
				*state = (LCD_STATEMACHINE_STATE) (LCD_STATEMACHINE_minStates +
				                                   LCD_STATEMACHINE_ONE );
			}
		}
		else if(LEFT == direction)
		{
			*state-=LCD_STATEMACHINE_ONE;
			if(LCD_STATEMACHINE_minStates ==  *state)
			{
				*state =  (LCD_STATEMACHINE_STATE) (LCD_STATEMACHINE_maxStates -
				                                    LCD_STATEMACHINE_ONE );
			}
		}

#ifdef	DELTATOF
		if(LCD_STATEMACHINE_deltaTOF == *state){ success = true;}
#endif
#ifdef	DELTATOFAVERAGE
		if(LCD_STATEMACHINE_deltaTOFAverage == *state){ success = true;}
#endif
#ifdef	DELTATOFSTANDARDDEVIATION
		if(LCD_STATEMACHINE_deltaTOFstandardDeviation == *state){ success = true;}
#endif
#ifdef	FLOWRATE
		if(LCD_STATEMACHINE_flowRate == *state){ success = true;}
#endif
#ifdef	FLOWRATEAVERAGE
		if(LCD_STATEMACHINE_flowRateAverage == *state){ success = true;}
#endif
#ifdef	VOLUME
		if(LCD_STATEMACHINE_volume == *state){ success = true;}
#endif
#ifdef	DATEANDTIME
		if(LCD_STATEMACHINE_dateAndTime == *state){ success = true;}
#endif
#ifdef	TEMPURATURE
		if(LCD_STATEMACHINE_temperature == *state){ success = true;}
#endif
#ifdef	BATTERYVOLTAGE
		if(LCD_STATEMACHINE_batteryVoltage == *state){ success = true;}
#endif
	}
}

void lcd_statemachine_writeLCD(DISPLAY_DATA_t* writedata)
{
	uint8_t i = 0;

	// write the character and decimal ponit if indicated into each of the
	// lcd segments
	for( i = 0; i < HAL_LCD_DIGIT_MAX; i++)
	{
		hal_lcd_showCharwPoint(writedata->character[i],
				writedata->digit[i], writedata->decimal[i]);
	}

	// write a minus symbol if the number is negative
	if(true == writedata->isminus)
	{
		hal_lcd_setSymbol(HAL_LCD_SYMBOL_MINUS);
	}
	// if not clear the minus symbol from the display
	else
	{
		hal_lcd_clearSymbol(HAL_LCD_SYMBOL_MINUS);
	}
}

void lcd_statemachine_clearWriteData(void)
{
	int i = 0;

	displayData_ptr->isminus = false;
	hal_lcd_clearSymbol(HAL_LCD_SYMBOL_MINUS);

	// for each of the six segments on the LCD clear the displayData struct of
	// of all data
	for(i = 0; i < HAL_LCD_DIGIT_MAX; i++ )
	{
		displayData_ptr->character[i] = 0;
		displayData_ptr->decimal[i] = false;
	}
}

void lcd_statemachine_sleepLCD(void)
{
	// if it is the first time in this state display the state
	if(true == g_lcd_statemachine.isfirsttime)
	{
		hal_lcd_turnoffLCD();
		g_lcd_statemachine.isfirsttime = false;
	}
}

void lcd_statemachine_displayScrollStatistics(void)
{
	char* displayString = "SCROLL";
	// if it is the first time in this state display the state
	if(true == g_lcd_statemachine.isfirsttimescroll)
	{
		hal_lcd_displayScrollText(displayString, LCD_DELAY_SCROLL);
		hal_system_WatchdogFeed();
		g_lcd_statemachine.isfirsttimescroll = false;
		g_lcd_statemachine.scrollState = LCD_STATEMACHINE_deltaTOF;
		g_lcd_statemachine.scrollIteration = 0;
	}
    // switch on the scroll state and take action
	switch(g_lcd_statemachine.scrollState)
	{
		case LCD_STATEMACHINE_deltaTOF:
			lcd_statemachine_displayDeltaTOF();
			break;
		case LCD_STATEMACHINE_deltaTOFAverage:
			lcd_statemachine_displayAvgDeltaTOF();
			break;
		case LCD_STATEMACHINE_deltaTOFstandardDeviation:
			lcd_statemachine_displayDeltaTOFStandardDeviation();
			break;
		case LCD_STATEMACHINE_flowRate:
			lcd_statemachine_displayFlowRate();
			break;
		case LCD_STATEMACHINE_flowRateAverage:
			lcd_statemachine_displayAvgFlowRate();
			break;
		case LCD_STATEMACHINE_volume:
			lcd_statemachine_displayVolume();
			break;
		case LCD_STATEMACHINE_dateAndTime:
			lcd_statemachine_displayDateAndTime();
			break;
		case LCD_STATEMACHINE_temperature:
			lcd_statemachine_displayTemperature();
			break;
		case LCD_STATEMACHINE_batteryVoltage:
			lcd_statemachine_displayBatteryVoltage();
			break;
		default:
			break;
	}

	g_lcd_statemachine.scrollIteration+=LCD_STATEMACHINE_ONE;

	if( MAX_SCROLL_ITERATIONS == g_lcd_statemachine.scrollIteration)
	{
		g_lcd_statemachine.scrollIteration = 0;
		lcd_satemachine_srollState(RIGHT, &g_lcd_statemachine.scrollState);
		g_lcd_statemachine.isfirsttime = true;
	}
}

void lcd_statemachine_displayDeltaTOF(void)
{
	char* displayString = "DTOF";

	// if it is the first time in this state display the state
	if(true == g_lcd_statemachine.isfirsttime)
	{
		hal_lcd_displayScrollText(displayString, LCD_DELAY_SCROLL);
		hal_system_WatchdogFeed();
		g_lcd_statemachine.isfirsttime = false;
	}

	// Set unit to seconds
	displayData_ptr->character[5] = 'S';

	// convert float results last_dtof data to usable string for LCD
	displayData_ptr->isminus =
			mathematics_FloatToString((char*) &displayData_ptr->character,
			                          g_ResultsOfLastMeasurement.last_dtof,
									  (bool*) &displayData_ptr->decimal,
									  RESOLUTION);
	// display the  Delta TOF data
	lcd_statemachine_writeLCD(displayData_ptr);
}

void lcd_statemachine_displayAvgDeltaTOF(void)
{
	char* displayString = "AVG DTOF";

	// if it is the first time in this state display the state
	if(true == g_lcd_statemachine.isfirsttime)
	{
		hal_lcd_displayScrollText(displayString, LCD_DELAY_SCROLL);
		hal_system_WatchdogFeed();
		g_lcd_statemachine.isfirsttime = false;
	}

	// Set unit to seconds
	displayData_ptr->character[5] = 'S';

	// convert float results avg_dtof data to usable string for LCD
	displayData_ptr->isminus =
			mathematics_FloatToString((char*) &displayData_ptr->character,
			                           g_ResultsOfLastMeasurement.avg_dtof,
									   (bool*) &displayData_ptr->decimal,
									   RESOLUTION);
	// display the average Delta TOF data
	lcd_statemachine_writeLCD(displayData_ptr);
}

void lcd_statemachine_displayDeltaTOFStandardDeviation(void)
{
	char* displayString = "DTOF STD";

	// if it is the first time in this state display the state
	if(true == g_lcd_statemachine.isfirsttime)
	{
		hal_lcd_displayScrollText(displayString, LCD_DELAY_SCROLL);
		hal_system_WatchdogFeed();
		g_lcd_statemachine.isfirsttime = false;
	}

	// Set unit to seconds
	displayData_ptr->character[5] = 'S';

	// convert float results stdev_dtof data to usable string for LCD
	displayData_ptr->isminus =
			mathematics_FloatToString((char*) &displayData_ptr->character,
			                           g_ResultsOfLastMeasurement.stdev_dtof,
									   (bool*) &displayData_ptr->decimal,
									   RESOLUTION);
	// display the standard deviation of delta TOF data
	lcd_statemachine_writeLCD(displayData_ptr);
}

void lcd_statemachine_displayFlowRate(void)
{
	char* displayString;

	// if it is the first time in this state display the state
	if(true == g_lcd_statemachine.isfirsttime)
	{
		if(GPM == g_ResultsOfLastMeasurement.FR_unit)
		{
			displayString = "FLOW RATE IN GPM";
		}
		else
		{
			displayString = "FLOW RATE IN LPH";
		}
		hal_lcd_displayScrollText(displayString, LCD_DELAY_SCROLL);
		hal_system_WatchdogFeed();
		g_lcd_statemachine.isfirsttime = false;
	}

	if(GPM == g_ResultsOfLastMeasurement.FR_unit)
	{
		// Set unit to gallons
		displayData_ptr->character[5] = 'G';
	}
	else
	{
		// Set unit to liters
		displayData_ptr->character[5] = 'L';
	}

	// convert float results last_FlowRate data to usable string for LCD
	displayData_ptr->isminus =
			mathematics_FloatToString((char*) &displayData_ptr->character,
			                           g_ResultsOfLastMeasurement.last_FlowRate,
									   (bool*) &displayData_ptr->decimal,
									   RESOLUTION);
	// display the flow rate data
	lcd_statemachine_writeLCD(displayData_ptr);
}

void lcd_statemachine_displayAvgFlowRate(void)
{
	char* displayString;

	// if it is the first time in this state display the state
	if(true == g_lcd_statemachine.isfirsttime)
	{
		if(GPM == g_ResultsOfLastMeasurement.FR_unit)
		{
			displayString = "AVG FLOW RATE IN GPM";
		}
		else
		{
			displayString = "AVG FLOW RATE IN LPH";
		}
		hal_lcd_displayScrollText(displayString, LCD_DELAY_SCROLL);
		hal_system_WatchdogFeed();
		g_lcd_statemachine.isfirsttime = false;
	}

	if(GPM == g_ResultsOfLastMeasurement.FR_unit)
	{
		// Set unit to gallons
		displayData_ptr->character[5] = 'G';
	}
	else
	{
		// Set unit to liters
		displayData_ptr->character[5] = 'L';
	}

	// convert float results avg_FlowRate data to usable string for LCD
	displayData_ptr->isminus =
			mathematics_FloatToString((char*) &displayData_ptr->character,
			                          g_ResultsOfLastMeasurement.avg_FlowRate,
									  (bool*) &displayData_ptr->decimal,
									  RESOLUTION);
	// display the average flow rate data
	lcd_statemachine_writeLCD(displayData_ptr);
}

void lcd_statemachine_displayVolume(void)
{
	char* displayString;

	// if it is the first time in this state display the state
	if(true == g_lcd_statemachine.isfirsttime)
	{
		if(GPM == g_ResultsOfLastMeasurement.FR_unit)
		{
			displayString = "VOL IN GALLONS";
		}
		else
		{
			displayString = "VOL IN LITRES";
		}
		hal_lcd_displayScrollText(displayString, LCD_DELAY_SCROLL);
		hal_system_WatchdogFeed();
		g_lcd_statemachine.isfirsttime = false;
	}

	if(GPM == g_ResultsOfLastMeasurement.FR_unit)
	{
		// Set unit to gallons
		displayData_ptr->character[5] = 'G';
	}
	else
	{
		// Set unit to liters
		displayData_ptr->character[5] = 'L';
	}

	// convert float results last_volume data to usable string for LCD
	displayData_ptr->isminus =
			mathematics_FloatToString((char*) &displayData_ptr->character,
			                           g_ResultsOfLastMeasurement.last_volume,
									   (bool*) &displayData_ptr->decimal,
									   RESOLUTION);
	// display the volume data
	lcd_statemachine_writeLCD(displayData_ptr);
}

void lcd_statemachine_displayDateAndTime(void)
{
	char* displayString = "DATE AND TIME";

	// if it is the first time in this state display the state
	if(true == g_lcd_statemachine.isfirsttime)
	{
		hal_lcd_displayScrollText(displayString, LCD_DELAY_SCROLL);
		hal_system_WatchdogFeed();
		g_lcd_statemachine.isfirsttime = false;
	}
	// display the date and time data
	lcd_statemachine_writeLCD(displayData_ptr);
}

void lcd_statemachine_displayTemperature(void)
{
	char* displayString = "TEMPERATURE";

	// if it is the first time in this state display the state
	if(true == g_lcd_statemachine.isfirsttime)
	{
		hal_lcd_displayScrollText(displayString, LCD_DELAY_SCROLL);
		hal_system_WatchdogFeed();
		g_lcd_statemachine.isfirsttime = false;
	}

	// display the battery Temperature data
	lcd_statemachine_writeLCD(displayData_ptr);
}

void lcd_statemachine_displayBatteryVoltage(void)
{
	char* displayString = "BAT VOLTAGE";

	// if it is the first time in this state display the state
	if(true == g_lcd_statemachine.isfirsttime)
	{
		hal_lcd_displayScrollText(displayString, LCD_DELAY_SCROLL);
		hal_system_WatchdogFeed();
		g_lcd_statemachine.isfirsttime = false;
	}

	// display the battery voltage data
	hal_lcd_showBattery((uint8_t) g_ResultsOfLastMeasurement.BatteryPercentageStamp);
}

#endif
