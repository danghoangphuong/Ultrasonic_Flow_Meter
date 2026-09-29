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
//! \file   hmi.c
//!
//! \brief  human-machine interface (HMI) layer
//!
//!  Group:          MSP Smart Metering Systems Applications
//!  Target Device:  MSP430FR604x
//!  Author:		 Luis Reynoso, Michael Schneider
//!
//!  (C) Copyright 2019, Texas Instruments, Inc.
//#############################################################################

#include <msp430.h>
#include <ussDCCommandHandlers.h>
#include "driverlib.h"
#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include "comm.h"
#include "comm_config.h"
#include "ussSwLib.h"
#include "USS_userConfig.h"
#include "hal.h"
#include <math.h>

#include <USSLibGUIApp.h>
#include <masterIncludes.h>
#include <hmiDC/hmi.h>
#include <testingDC/testing.h>
#include <lcd_statemachineDC/lcd_statemachine.h>
#include <resultsDC/results.h>

extern void UART_Print(const char* format,...);
extern float Filter_Mov_Avg(float raw_flow);

#if defined(__TI_COMPILER_VERSION__)
#pragma PERSISTENT(gHMI)
#define __persistent
#elif defined(__IAR_SYSTEMS_ICC__)
#else
#error "Compiler is not supported"
#endif
/* Initialize the global object gHMI */
__persistent HMI_obj_SEMAPHORE gHMI =
{
        .status = HMI_STATUS_OK,
        .sampleCounter = 0,
        .errorCounter = 0,
        .errorLog = {0},
        .isDebugModeEnabled = false,
        .isLPMenabled = true,
};

COMAND_HANDLER *DC_User_Params;


HMI_DesignCenterALG_Results sDesignCenterResults;

#if defined(__TI_COMPILER_VERSION__)
#pragma PERSISTENT(gstxPacket)
#define __persistent
#elif defined (__IAR_SYSTEMS_ICC__)
#else
#error Compiler not supported!
#endif

/*** GLOBAL VARIABLES ***/
__persistent Packet_t gstxPacket = {0};

//
// Local Function Prototypes
//
static uint32_t timeToPLLCycles(float time_sec, uint16_t PLL_divider);
static HMI_MESSAGE_t HMI_guiInputValidation(void);
static void HMI_update_USSmeterConfig(void);
static void HMI_update_USSpllConfiguration(void);
static void HMI_update_USSmeasurementConfig(void);
static void HMI_update_USScaptureConfig(void);
static void HMI_update_USSalgorithmsConfig(void);
static void HMI_update_USSsleepDuration(void);


void HMI_Init(void)
{
    // Initializes command handler for communication with GUI
    CommandHandler_setApplicationVersion(
            HMI_CMDHANDLER_APP_TYPE,
            HMI_CMDHANDLER_DEVICE_TYPE,
            HMI_CMDHANDLER_HW_ID,
            HMI_CMDHANDLER_FW_ID);
    CommandHandler_setAdvMtrCalibTableStatus(
            HMI_CMDHANDLER_ADV_CALIB_TABLE_STATUS);

    // Initialize communications
    Comm_setup();
    CommandHandler_registerCmdListeners();
	DC_User_Params = CommandHandler_getUserParamsPtr();
    gHMI.status = HMI_STATUS_OK;
    gHMI.isDebugModeEnabled = false;
#ifdef ENABLE_LCD
    results_Reset(LPH);
#endif
}

void HMI_updateUSSParameters(void)
{
    /* Update USSLib Parameters from GUI */
    HMI_update_USSmeterConfig();
    HMI_update_USSpllConfiguration();
    HMI_update_USSmeasurementConfig();
    HMI_update_USScaptureConfig();
    HMI_update_USSalgorithmsConfig();

    HMI_update_USSsleepDuration();

    CommandHandler_transmitUserMessagePacket(&gstxPacket,
                                             COMMAND_HANDLER_APP_MSG_CONF_SUCC);

    Testing_GUIUpdate_PreUSSConfig();

    // Reconfigure USS, algorithms and application parameters
    if (USSLibGUIApp_ReInitialize() == USS_message_code_no_error)
    {
        // Status is cleared by a new working configuration
        gHMI.status = HMI_STATUS_OK;
    }

    Testing_GUIUpdate_PostUSSConfig();

#ifdef ENABLE_LCD
    results_Reset(DC_User_Params->flowrate_unit);
#endif
}


void HMI_reportError_sendErrorMessage(uint16_t error_type, uint16_t error_info)
{
	switch(COMMAND_HANDLER_ERROR_MASKED(error_type))
	{
		// The FATAL error type prevents future captures and turns Both LEDs on
		// This error level has maximum priority and overrides other status
		case COMMAND_HANDLER_ERROR_FATAL(0x00):
            gHMI.status = HMI_STATUS_FATAL_ERROR;
            hal_system_LEDOn(HAL_SYS_LED_1);
#if (__EVM430_ID__== 0x47)
            hal_system_LEDOn(HAL_SYS_LED_2);
#endif
            CommandHandler_transmitErrorPacket(&gstxPacket,
                                              (USS_message_code) error_info);
        break;

		// The NON-FATAL error type  allows the to stay working with
		// previous configuration and turns LED2 on
		// This error level has 2nd highest priority
        case COMMAND_HANDLER_ERROR_NON_FATAL(0x00):
            if (HMI_STATUS_NON_FATAL_ERROR > gHMI.status)
            {
                gHMI.status = HMI_STATUS_NON_FATAL_ERROR;
            }
#if (__EVM430_ID__== 0x47)
            hal_system_LEDOn(HAL_SYS_LED_2);
#endif
            CommandHandler_transmitUserErrorMsgPacket(&gstxPacket,
                                                      (uint8_t) error_info&0xFF);
        break;

		// The FAULT error type will be ignored for next iteration and
		// LED2 will toggle but it will get cleared on next capture
		// This error level has lowest priority
		case COMMAND_HANDLER_ERROR_FAULT(0x00):
            if (HMI_STATUS_FAULT > gHMI.status)
            {
                gHMI.status = HMI_STATUS_FAULT;
            }
#if (__EVM430_ID__== 0x47)
            hal_system_LEDOn(HAL_SYS_LED_2);
#endif
            CommandHandler_transmitErrorPacket(&gstxPacket,
                                               (USS_message_code) error_info);
        break;
	}

	// Update the HMI error Counter with error information
    if (HMI_ERROR_ARRAY_MAX > gHMI.errorCounter)
    {
        gHMI.errorLog[gHMI.errorCounter].code = error_type;
        gHMI.errorLog[gHMI.errorCounter].info = error_info;
        gHMI.errorLog[gHMI.errorCounter].sampleNum = gHMI.sampleCounter;
        gHMI.errorCounter++;
    }
    if (gHMI.errorCounter >= HMI_ERROR_ARRAY_MAX)
    {
    	// Reset to log as a circular buffer
        gHMI.errorCounter = 0;
    }
}

void HMI_PreMeasurement_Update(void)
{
    HMI_MESSAGE_t error_check;

	if(true ==  Comm_listenForCmd())				/*Listen for any incoming commands		*/
	{
		hal_system_LEDOn(HAL_SYS_LED_1);

		// check if the User requested the MSP430FR6047 to be updated with new params
		if(true == DC_User_Params->appReqUpdate)
		{
			// update gCommandHandler with the data and values from GUI params
			CommandHandler_updateParams(&gstxPacket);
			error_check = HMI_guiInputValidation();

			if(error_check == HMI_MSG_OK)
			{
				// update USSLib with values from gCommandHandler
				HMI_updateUSSParameters();
			}
			else
			{
				HMI_reportError_sendErrorMessage(COMMAND_HANDLER_ERROR_NON_FATAL_INVALID_GUICONFIG,
				                                 error_check);
			}
		}
		else if(true == DC_User_Params->updateCalib)
		{
		    // Wait until all the calibration parameters are received
		    CommandHandler_updateCalibParams();
		}
	}

	if ((HMI_STATUS_OK == gHMI.status))
	{
		// Clear LED1 and LED2 if there are no errors
		hal_system_LEDOff(HAL_SYS_LED_1);
#if (__EVM430_ID__== 0x47)
		hal_system_LEDOff(HAL_SYS_LED_2);
#endif
	}

#ifdef __ENABLE_LPM__
	if ((hal_system_ButtonsCheck() & HAL_SYS_BUTTON_SEL) != 0x00)
	{
		gHMI.isLPMenabled ^= 1;
		hal_system_ButtonsClearInt(HAL_SYS_BUTTON_SEL);
	}
#endif
	if (gHMI.isLPMenabled == false)
	{
		// Pre-measurement configuration used for testing purposes
		Testing_PreMeasurement_Update();
	}
}


void HMI_PostMeasurement_Update(void)
{
    if (gHMI.isLPMenabled == false)
    {
    	// Post-measurement configuration used for testing purposes
        Testing_PostMeasurement_Update();
    }

    // Update Command with waveform if it requested Capture
    if(true == DC_User_Params->appReqCaptures)
    {
    	CommandHandler_transmitCaptures(&gstxPacket);
    	DC_User_Params->appReqCaptures = false;
    }
}

void HMI_PostAlgorithm_Update(USS_Algorithms_Results_fixed_point * pt_alg_res)
{
	USS_Algorithms_Results alg_results_float;
#if (USS_ALG_VFR_CALIB_MODE == USS_ALG_VFR_CALIB_OPTION_FLOW_TEMPERATURE)
	USS_Alg_volume_Flow_Temperature_Calib_Object * ftCalibOjb;
	uint8_t mcIndex;
#endif
	bool debugInfo;
	float debugData;

	// Increment 32-bit counter for samples captured
    gHMI.sampleCounter++;

    // Heartbeat toggle
    if(false == gHMI.isLPMenabled)
    {
    	hal_system_LEDOn(HAL_SYS_LED_0);
    	Testing_PostAlgorithm_Update();
    }

#ifdef ENABLE_LCD
    if( (true == DC_User_Params->appReqData) ||
        ( true != lcd_statemachine_isSleep()) )
#else
    if(true == DC_User_Params->appReqData)
#endif
    {
#if (USS_ALG_ENABLE_ESTIMATE_TEMPERATURE == true)
        if(gUssSWConfig.algorithmsConfig->temperatureCalcOption == USS_Alg_temperature_Calculation_Option_enabled)
        {
            // Compute Temperature
            USS_computeTemperature(&gUssSWConfig, pt_alg_res);
        }
#endif
#if (USS_ALG_ENABLE_ESTIMATE_TEMPERATURE == false && \
    USS_ALG_VFR_CALIB_MODE == USS_ALG_VFR_CALIB_OPTION_FLOW_TEMPERATURE)
#warning \
        "External Temperature Input required. Please modify USS_setTemperature below with valid temperature parameter."
        // External Temperature Input, change 10.0f with valid temperature
        USS_setTemperature(10.0f, pt_alg_res);
#endif

        // Calibrate the Volume Flow Rate
        USS_calibrateVolumeFlowRate(&gUssSWConfig, pt_alg_res);
        // Get USS SW Library Results in Float
        USS_getResultsInFloat( pt_alg_res, &alg_results_float);
#if (USS_VFR_LARGE_PIPE_ADDL_SF_ENABLE)
        // Scale the volume flow rate
        USS_scaleVolumeFlowRate(&gUssSWConfig, &alg_results_float);
#endif
        DC_User_Params->plot_dtof = ((double) alg_results_float.deltaTOF);
        DC_User_Params->plot_abs_ups = alg_results_float.totalTOF_UPS;
        DC_User_Params->plot_abs_dns = alg_results_float.totalTOF_DNS;
        DC_User_Params->plot_vol_flow_rate  = alg_results_float.volumeFlowRate;
    }

    // Update Command with Results if it requested Data
	if(true == DC_User_Params->appReqData)
	{
	    debugInfo = Testing_Update_Results(&alg_results_float, &debugData);

		CommandHandler_transmitResults(&gstxPacket, &alg_results_float);

		if (debugInfo == true)
		{
#if (USS_ALG_VFR_CALIB_MODE == USS_ALG_VFR_CALIB_OPTION_DISABLED)
#if (USS_ALG_ENABLE_ESTIMATE_TEMPERATURE == true)
            // Send Temperature
            CommandHandler_transmittDebugData(&gstxPacket, alg_results_float.temperature);
#else
            // Send Debug Info
            CommandHandler_transmittDebugData(&gstxPacket, debugData);
#endif
#endif

#if (USS_ALG_VFR_CALIB_MODE == USS_ALG_VFR_CALIB_OPTION_FLOW)
#if (USS_ALG_ENABLE_ESTIMATE_TEMPERATURE == true)
            // Send Temperature
            CommandHandler_transmittDebugData(&gstxPacket, alg_results_float.temperature);
#else
            // Send Debug Info
            CommandHandler_transmittDebugData(&gstxPacket, debugData);
#endif
            // Send Volume Flow Rate without calibration
            CommandHandler_transmittAdvancedDebugData(&gstxPacket,  alg_results_float.volumeFlowRateNoCalib ,4);
#endif
#if (USS_ALG_VFR_CALIB_MODE == USS_ALG_VFR_CALIB_OPTION_FLOW_TEMPERATURE)
		    ftCalibOjb = gUssSWConfig.algorithmsConfig->calibObject.flowTempCalibObject;
		    mcIndex = ftCalibOjb->rowNum * (ftCalibOjb->numOfFlows-1);
		    mcIndex = mcIndex + ftCalibOjb->colNum;
		    // Send Temperature
		    CommandHandler_transmittDebugData(&gstxPacket, alg_results_float.temperature);
		    // Send Search Quadrant Count
		    CommandHandler_transmittAdvancedDebugData(&gstxPacket, (float) ftCalibOjb->searchQuadCount ,2);
		    // Send Meter Constant Index
		    CommandHandler_transmittAdvancedDebugData(&gstxPacket, (float) mcIndex ,3);
		    // Send Volume Flow Rate without calibration
            CommandHandler_transmittAdvancedDebugData(&gstxPacket,  alg_results_float.volumeFlowRateNoCalib ,4);
#endif
		}
	}

	// Heartbeat toggle
	if(false == gHMI.isLPMenabled){ hal_system_LEDOff(HAL_SYS_LED_0);}

	// Clear the status if it is only a fault
	if(HMI_STATUS_FAULT == gHMI.status)
    {
        gHMI.status = HMI_STATUS_OK;
    }
#ifdef ENABLE_LCD
	if( true != lcd_statemachine_isSleep())
	{
        results_Update(alg_results_float.deltaTOF,
		               alg_results_float.volumeFlowRate,
					   DC_User_Params->gap_ups_ups);
	}
	lcd_statemachine_stateUpdate();
	lcd_statemachine_stateAction();
#endif
}

bool HMI_isLPMEnabled(void)
{
    return gHMI.isLPMenabled;
}


HMI_STATUS_t HMI_GetStatus(void)
{
	return gHMI.status;
}

// *****************************************************************************
// **                       Local Functions                                   **
// *****************************************************************************

//! \brief Returns the number of PLL cycles of a time period
//!
//! \param time_sec     time in seconds to be converted to PLL cycles
//! \param PLL_divider  PLL divider
//!
//! \return uint32_t    Number of PLL cycles
static uint32_t timeToPLLCycles(float time_sec, uint16_t PLL_divider)
{
    float PLL_Frequency = ((float)DC_User_Params->sig_samp_freq )*
                        ((float)DC_User_Params->over_sampling_rate)*
                        (float)(KILO);

    return ( (uint32_t) ( round ( time_sec *
                                  PLL_Frequency /
                                  (float)PLL_divider ) ) );
}

//! \brief This routine will Validate the input parameters from the
//!         Design center
//!
//! \return none
static HMI_MESSAGE_t HMI_guiInputValidation(void)
{
    uint32_t pll_freq;
    uint32_t num_samples;


#ifndef __MSP430_HAS_SAPH__
	if ( (DC_User_Params->patternOption != PATTERN_SEQ_SINGLE_TONE) &&
        (DC_User_Params->patternOption != PATTERN_SEQ_DUAL_TONE) &&
        (DC_User_Params->patternOption != PATTERN_SEQ_MULTI_TONE))
	{
	    return HMI_MSG_VALIDATIONERR_PATTERNOPTION;
	}
#else
	if ( DC_User_Params->patternOption != PATTERN_SEQ_SINGLE_TONE)
    {
        return HMI_MSG_VALIDATIONERR_PATTERNOPTION;
    }
#endif

    if( (DC_User_Params->transFreq1 < F_FREQUENCY_MIN) ||
        (DC_User_Params->transFreq1 > F_FREQUENCY_MAX) )
    {
        return HMI_MSG_VALIDATIONERR_TRANS1FREQ;
    }

#ifndef __MSP430_HAS_SAPH__
    if( (DC_User_Params->transFreq2 < F_FREQUENCY_MIN) ||
        (DC_User_Params->transFreq2 > F_FREQUENCY_MAX) )
    {
        return HMI_MSG_VALIDATIONERR_TRANS2FREQ;
    }
#endif

    if( (DC_User_Params->gap_pls_adc_start < GAP_PLS_ADC_START_MIN) ||
        (DC_User_Params->gap_pls_adc_start > GAP_PLS_ADC_START_MAX) )
    {
        return HMI_MSG_VALIDATIONERR_GAPPULSEADC;
    }


    if (DC_User_Params->patternOption == PATTERN_SEQ_SINGLE_TONE)
    {
        if (DC_User_Params->num_pls > NUM_PLS_MAX)
        {
            return HMI_MSG_VALIDATIONERR_NUMPULSES;
        }
    }
#ifndef __MSP430_HAS_SAPH__
    else if (DC_User_Params->patternOption == PATTERN_SEQ_DUAL_TONE)
    {
        if (DC_User_Params->num_pls > NUM_PLS_MAX)
        {
            return HMI_MSG_VALIDATIONERR_NUMPULSES;
        }
    }
#if (USS_PULSE_MODE == USS_PULSE_MODE_MULTI_TONE)
    else if (DC_User_Params->patternOption == PATTERN_SEQ_MULTI_TONE)
    {
        // Number of pulses can't be odd and can't exceed maximum trill pulses
        if ( (DC_User_Params->num_pls & 0x01) ||
             (DC_User_Params->num_pls/2 > USS_NUM_OF_MAX_TRILL_PULSES) )
        {
            return HMI_MSG_VALIDATIONERR_NUMPULSES;
        }
    }
#endif
#endif

    if( (DC_User_Params->gap_ups_dns < GAP_UPS_DNS_MIN) ||
        (DC_User_Params->gap_ups_dns > GAP_UPS_DNS_MAX) )
    {
        return HMI_MSG_VALIDATIONERR_GAPUPSTODNS;
    }
    if( (DC_User_Params->gap_ups_ups < GAP_UPS_UPS_MIN) ||
        (DC_User_Params->gap_ups_ups > GAP_UPS_UPS_MAX) )
    {
        return HMI_MSG_VALIDATIONERR_GAPUPS0TOUPS1;
    }
    if( (DC_User_Params->gain_control < PGA_GAIN_MIN) ||
        (DC_User_Params->gain_control > PGA_GAIN_MAX) )
    {
        return HMI_MSG_VALIDATIONERR_GAIN;
    }
    if( (DC_User_Params->meter_constant < METER_CONSTANT_MIN) ||
        (DC_User_Params->meter_constant > METER_CONSTANT_MAX) )
    {
        return HMI_MSG_VALIDATIONERR_METERCONST;
    }

    if( (DC_User_Params->ussxt_freq != 4000) &&
        (DC_User_Params->ussxt_freq != 8000) )
    {
        return HMI_MSG_VALIDATIONERR_USSXT;
    }

    if( (DC_User_Params->sig_samp_freq < SIG_SAMP_FREQ_MIN) ||
        (DC_User_Params->sig_samp_freq > SIG_SAMP_FREQ_MAX) )
    {
        return HMI_MSG_VALIDATIONERR_SAMPFREQ;
    }
    if ( (DC_User_Params->over_sampling_rate != 10) &&
             (DC_User_Params->over_sampling_rate != 20) &&
             (DC_User_Params->over_sampling_rate != 40) &&
             (DC_User_Params->over_sampling_rate != 80) &&
             (DC_User_Params->over_sampling_rate != 160) )
    {
        return HMI_MSG_VALIDATIONERR_OSR;
    }
    pll_freq = (uint32_t) ( (uint32_t)DC_User_Params->sig_samp_freq *
                               (uint32_t)DC_User_Params->over_sampling_rate) *
                               (uint32_t)(KILO)/(uint32_t)(MEGA);
    if ((pll_freq < PLL_FREQ_MIN) ||
        (pll_freq > PLL_FREQ_MAX))
    {
        return HMI_MSG_VALIDATIONERR_PLLFREQ;
    }
#if ( (DELTA_TOF_OFFSET_MIN < -2147483648) || (DELTA_TOF_OFFSET_MAX > 2147483647))
    if( DELTA_TOF_OFFSET_MIN > DC_User_Params->delta_tof_offset ||
            DELTA_TOF_OFFSET_MAX < DC_User_Params->delta_tof_offset )
    {
        return HMI_MSG_VALIDATIONERR_DTOFOFFSET;
    }
#endif

#if ( (ABS_TOF_ADDITIONAL_MIN < -2147483648) || (ABS_TOF_ADDITIONAL_MAX > 2147483647))
    if( ABS_TOF_ADDITIONAL_MIN > DC_User_Params->abs_tof_additional ||
            ABS_TOF_ADDITIONAL_MAX < DC_User_Params->abs_tof_additional )
    {
        return HMI_MSG_VALIDATIONERR_ABSTOFOFFSET;
    }
#endif

    if( (DC_User_Params->capture_duration < CAPTURE_DURATION_MIN) ||
        (DC_User_Params->capture_duration > CAPTURE_DURATION_MAX) )
    {
        return HMI_MSG_VALIDATIONERR_CAPTDURATION;
    }
    // Check if capture duration exceeds buffer
    // # of samples = Capture duration (sec) x Sampling Frequency (Hz)
    // capture_duration is received in us
    // sig_samp_freq is received in kHz
    // # samples = capture_duration * 1E-6 x  sig_samp_freq x 1E3
    // # samples = capture_duration x sig_samp_freq / 1E3
    num_samples = ( (uint32_t) DC_User_Params->capture_duration *
                   (uint32_t) DC_User_Params->sig_samp_freq ) /
                  (uint32_t) 1000;
    if (num_samples > USS_SW_LIB_APP_MAX_CAPTURE_SIZE)
    {
        return HMI_MSG_VALIDATIONERR_CAPTDURATION;
    }

#if defined (USS_GAS_CONFIGURATION)
    // Compatibility with previous Design Center and USS Library
    if ( (DC_User_Params->param1_computation_mode >= 80) &&
         (DC_User_Params->param1_computation_mode < 90) )
    {
        DC_User_Params->param1_computation_mode -= 80;
    }

    if ((DC_User_Params->param1_computation_mode != USS_Alg_AbsToF_Calculation_Option_lobeWide) &&
        (DC_User_Params->param1_computation_mode != USS_Alg_AbsToF_Calculation_Option_hilbertWide))
    {
        return HMI_MSG_VALIDATIONERR_ALGOPTION;
    }
#else
    if ((DC_User_Params->param1_AbsTOF_Computation_mode != USS_Alg_AbsToF_Calculation_Option_lobe) &&
        (DC_User_Params->param1_AbsTOF_Computation_mode != USS_Alg_AbsToF_Calculation_Option_hilbert) &&
        (DC_User_Params->param1_AbsTOF_Computation_mode != USS_Alg_AbsToF_Calculation_Option_lobeWide))
    {
        return HMI_MSG_VALIDATIONERR_ALGOPTION;
    }
#endif

#ifndef USS_GAS_CONFIGURATION
    if( (DC_User_Params->param2_ulp_bias_delay < ULP_BIAS_DELAY_MIN) ||
        (DC_User_Params->param2_ulp_bias_delay > ULP_BIAS_DELAY_MAX) )
    {
        return HMI_MSG_VALIDATIONERR_PARAM2;
    }
#endif

    if( DC_User_Params->param3_TM_A_start_ppg < TM_A_START_PPG_MIN ||
        DC_User_Params->param3_TM_A_start_ppg > TM_A_START_PPG_MAX )
    {
        return HMI_MSG_VALIDATIONERR_STARTPPGCOUNT;
    }
    if( DC_User_Params->param4_TM_B_adc_on < TM_B_ADC_ON_MIN ||
        DC_User_Params->param4_TM_B_adc_on > TM_B_ADC_ON_MAX )
    {
        return HMI_MSG_VALIDATIONERR_TURNONADCCOUNT;
    }
    if( DC_User_Params->param5_TM_C_pga_bias < TM_C_PGA_BIAS_MIN ||
        DC_User_Params->param5_TM_C_pga_bias > TM_C_PGA_BIAS_MAX )
    {
        return HMI_MSG_VALIDATIONERR_STARTPGACOUNT;
    }
#if defined (USS_GAS_CONFIGURATION)
    if( DC_User_Params->param7_ext_amp_count < EXT_AMP_COUNT_MIN ||
        DC_User_Params->param7_ext_amp_count > EXT_AMP_COUNT_MAX )
    {
        return HMI_MSG_VALIDATIONERR_EXTAMPCOUNT;
    }
#endif
#if defined (USS_GAS_CONFIGURATION)
    if( DC_User_Params->param6_uss_xtal_settling_count < XTAL_SETTLING_MIN ||
        DC_User_Params->param6_uss_xtal_settling_count > XTAL_SETTLING_MAX )
    {
        return HMI_MSG_VALIDATIONERR_USSXTSETTLING;
    }
#else
    if( DC_User_Params->param7_uss_xtal_settling_count < XTAL_SETTLING_MIN ||
        DC_User_Params->param7_uss_xtal_settling_count > XTAL_SETTLING_MAX )
    {
        return HMI_MSG_VALIDATIONERR_USSXTSETTLING;
    }
#endif

#if defined (USS_GAS_CONFIGURATION)
    if( DC_User_Params->param2_env_cross_threshold < ENV_CROSS_THRESH_MIN   ||
        DC_User_Params->param2_env_cross_threshold > ENV_CROSS_THRESH_MAX )
    {
        return HMI_MSG_VALIDATIONERR_ENVCROSTHRES;
    }
#else
    if( DC_User_Params->param8_env_cross_threshold < ENV_CROSS_THRESH_MIN   ||
        DC_User_Params->param8_env_cross_threshold > ENV_CROSS_THRESH_MAX )
    {
        return HMI_MSG_VALIDATIONERR_ENVCROSTHRES;
    }
#endif

    if( DC_User_Params->param9_searchRngTracking < SEARCH_RNG_ABSTOF_MIN ||
        DC_User_Params->param9_searchRngTracking > SEARCH_RNG_ABSTOF_MAX )
    {
        return HMI_MSG_VALIDATIONERR_SEARCHRANGEABSTOF;
    }


    return HMI_MSG_OK;
}


//! \brief This Routine will update all meterConfig settings in the USS Lib
//!         for a water meter
//!
//! \return none
static void HMI_update_USSmeterConfig(void)
{
    uint32_t transFreq;

    // Transducer frequency
    if (DC_User_Params->patternOption == PATTERN_SEQ_SINGLE_TONE)
    {
        // In single tone, transducer frequency = F1(in kHz) x 1000
        transFreq = DC_User_Params->transFreq1;
    }
#ifndef __MSP430_HAS_SAPH__
    else
    {
        // In Dual tone and Multi-tone,
        //   transducer frequency = (F1(in kHz) + F2 (in kHz))/2 x 1000
        transFreq = (DC_User_Params->transFreq1 + DC_User_Params->transFreq2)/2;
    }
#endif

    gUssSWConfig.meterConfig->transducerFreq =
            (transFreq * (uint32_t)HMI_TRANSFREQ_MULTIPLIER );

    // Volume scale factor
    gUssSWConfig.meterConfig->volumeScaleFactor =
            DC_User_Params->meter_constant;
}

static void HMI_update_USSpllConfiguration(void)
{
    USS_HSPLL_output_clk_freq pllFreq;
    uint16_t pll_calc_freq_Mhz;

    // Possible USSXT frequencies
    if(DC_User_Params->ussxt_freq == 8000)
    {
        gUssSWConfig.pllConfiguration->ussXtalFreq =
                USS_HSPLL_input_clock_freq_8_MHz;
    }else
    {
        gUssSWConfig.pllConfiguration->ussXtalFreq =
                USS_HSPLL_input_clock_freq_4_MHz;
    }

    // Get PLL output frequency
    // PLL = Signal Sampling freq (passed in kHz) x OSR
    pll_calc_freq_Mhz = (uint32_t) ((uint32_t)DC_User_Params->sig_samp_freq *
                                    (uint32_t)DC_User_Params->over_sampling_rate)
                                    / 1000;
    switch ( pll_calc_freq_Mhz )
    {
        case 68:
            pllFreq = USS_HSPLL_output_clk_freq_68_MHz;
        break;
        case 69:
            pllFreq = USS_HSPLL_output_clk_freq_69_MHz;
        break;
        case 70:
            pllFreq = USS_HSPLL_output_clk_freq_70_MHz;
        break;
        case 71:
            pllFreq = USS_HSPLL_output_clk_freq_71_MHz;
        break;
        case 72:
            pllFreq = USS_HSPLL_output_clk_freq_72_MHz;
        break;
        case 73:
            pllFreq = USS_HSPLL_output_clk_freq_73_MHz;
        break;
        case 74:
            pllFreq = USS_HSPLL_output_clk_freq_74_MHz;
        break;
        case 75:
            pllFreq = USS_HSPLL_output_clk_freq_75_MHz;
        break;
        case 76:
            pllFreq = USS_HSPLL_output_clk_freq_76_MHz;
        break;
        case 77:
            pllFreq = USS_HSPLL_output_clk_freq_77_MHz;
        break;
        case 78:
            pllFreq = USS_HSPLL_output_clk_freq_78_MHz;
        break;
        case 79:
            pllFreq = USS_HSPLL_output_clk_freq_79_MHz;
        break;
        default:
            pllFreq = USS_HSPLL_output_clk_freq_80_MHz;
    }
    gUssSWConfig.pllConfiguration->pllOutputFreq = pllFreq;


    // USSXT settling count in LFXT counts
    // (USS_XTAL_settling_count (in sec) x LFXT) + 0.5
#if defined (USS_GAS_CONFIGURATION)
    // Param6 used for XTAL settling count in Gas
    gUssSWConfig.pllConfiguration->ussXTALsettlingCount =
            (uint16_t) ( ( ( (uint32_t)DC_User_Params->param6_uss_xtal_settling_count *
                        (uint32_t)gUssSWConfig.systemConfig->LFXTFrequency) +
                        ( (uint32_t)5 * (uint32_t)(HECTO) * (uint32_t)(KILO) ) ) /
                        ( (uint32_t)(MEGA) ) );
#else
    // Param7 used for XTAL settling count in Gas
    gUssSWConfig.pllConfiguration->ussXTALsettlingCount =
            (uint16_t) ( ( ( (uint32_t)DC_User_Params->param7_uss_xtal_settling_count *
                        (uint32_t)gUssSWConfig.systemConfig->LFXTFrequency) +
                        ( (uint32_t)5 * (uint32_t)(HECTO) * (uint32_t)(KILO) ) ) /
                        ( (uint32_t)(MEGA) ) );
#endif
}

//! \brief This Routine will update all measurementConfig settings in the USS Lib
//!         for a water meter
//!
//! \return none
static void HMI_update_USSmeasurementConfig(void)
{
    USS_Pulse_Configuration * pulseConfig = gUssSWConfig.measurementConfig->pulseConfig;

    // Configuration of pulses
    if (DC_User_Params->patternOption == PATTERN_SEQ_SINGLE_TONE)
    {
        // Single tone configuration
        pulseConfig->pulseGenMode = USS_measurement_pulse_generation_mode_single_tone;
        pulseConfig->F1Frequency = ((uint32_t)DC_User_Params->transFreq1 *
                                    (uint32_t)HMI_TRANSFREQ_MULTIPLIER);
        pulseConfig->pToneConfig =  &singDualToneConfig;
        singDualToneConfig.numOfF1Cycles = DC_User_Params->num_pls;
        singDualToneConfig.F1DutyCycle = 50;
    }
#ifndef __MSP430_HAS_SAPH__
    else if (DC_User_Params->patternOption == PATTERN_SEQ_DUAL_TONE)
    {
        // Dual tone configuration
        pulseConfig->pulseGenMode = USS_measurement_pulse_generation_mode_dual_tone;
        pulseConfig->F1Frequency = ((uint32_t)DC_User_Params->transFreq1 *
                                    (uint32_t)HMI_TRANSFREQ_MULTIPLIER);
        pulseConfig->F2Frequency = ((uint32_t)DC_User_Params->transFreq2 *
                                            (uint32_t)HMI_TRANSFREQ_MULTIPLIER);
        pulseConfig->pToneConfig =  &singDualToneConfig;
        singDualToneConfig.numOfF1Cycles = (DC_User_Params->num_pls)/2;
        singDualToneConfig.numOfF2Cycles = (DC_User_Params->num_pls)/2;
        singDualToneConfig.F1DutyCycle = 50;
        singDualToneConfig.F2DutyCycle = 50;
    }
#if (USS_PULSE_MODE == USS_PULSE_MODE_MULTI_TONE)
    else if (DC_User_Params->patternOption == PATTERN_SEQ_MULTI_TONE)
    {
        // Multi-tone configuration
        pulseConfig->pulseGenMode = USS_measurement_pulse_generation_mode_multi_tone;
        pulseConfig->F1Frequency = ((uint32_t)DC_User_Params->transFreq1 *
                                    (uint32_t)HMI_TRANSFREQ_MULTIPLIER);
        pulseConfig->F2Frequency = ((uint32_t)DC_User_Params->transFreq2 *
                                            (uint32_t)HMI_TRANSFREQ_MULTIPLIER);
        pulseConfig->pToneConfig =  &multiToneConfig;
        multiToneConfig.origNumOfThrillCycles = DC_User_Params->num_pls/2;
    }
#endif
#endif

    // ULP Bias Delay, only for water demo application
#ifndef USS_GAS_CONFIGURATION
    switch(DC_User_Params->param2_ulp_bias_delay)
    {
        case 1:
            gUssSWConfig.measurementConfig->ulpBiasDelay =
                    USS_measurement_ULP_bias_delay_100_usec;
        break;
        case 2:
            gUssSWConfig.measurementConfig->ulpBiasDelay =
                    USS_measurement_ULP_bias_delay_200_usec;
        break;
        case 3:
            gUssSWConfig.measurementConfig->ulpBiasDelay =
                    USS_measurement_ULP_bias_delay_300_usec;
        break;
        case 0:
        default:
            gUssSWConfig.measurementConfig->ulpBiasDelay =
                    USS_measurement_ULP_bias_delay_no_delay;
    }
#endif

    // PPG Count = Start_PPG_Count (in sec, passed in ns) x PLL Freq/16;
    //  where PLL Freq = Signal samp Freq x OSR
    gUssSWConfig.measurementConfig->startPPGCount =
            timeToPLLCycles(DC_User_Params->param3_TM_A_start_ppg * NANOfloat, 16);

    // TurnOnADCCount = TM_B_adc_on (in sec, passed in ns) x PLL Freq/16;
    //  where PLL Freq = Signal samp Freq x OSR
    gUssSWConfig.measurementConfig->turnOnADCCount = (uint_least16_t)
            timeToPLLCycles(DC_User_Params->param4_TM_B_adc_on * NANOfloat, 16);

    // StartPGAandINBiasCount = TM_C_pga_bias (in sec, passed in ns) x PLL Freq/16;
    //  where PLL Freq = Signal samp Freq x OSR
    gUssSWConfig.measurementConfig->startPGAandINBiasCount = (uint_least16_t)
            timeToPLLCycles(DC_User_Params->param5_TM_C_pga_bias * NANOfloat, 16);

    // StartADCsamplingCount = startPPGCount +
    //  gap_pls_adc_start (in sec, passed in us) x PLL Freq/16
    //  where PLL Freq = Signal samp Freq x OSR
    gUssSWConfig.measurementConfig->startADCsamplingCount =
            gUssSWConfig.measurementConfig->startPPGCount +
            timeToPLLCycles(DC_User_Params->gap_pls_adc_start * MICROfloat, 16);

    // restartCaptureCount = gap_ups_dns (in sec, passed in us) x PLL Freq/256
    //  where PLL Freq = Signal samp Freq x OSR
    gUssSWConfig.measurementConfig->restartCaptureCount =
            timeToPLLCycles(DC_User_Params->gap_ups_dns * MICROfloat, 256);

    // restartCaptureCount = gap_ups_dns (in sec, passed in us) x USS_LFXT_FREQ_IN_HZ
    gUssSWConfig.measurementConfig->restartLowPowerCaptureCount =
            (uint_least16_t) ( (float) ( (float) DC_User_Params->gap_ups_dns * MICROfloat) *
                               (float) USS_LFXT_FREQ_IN_HZ );

#ifdef USS_GAS_CONFIGURATION
    // startRxEnCount = param7_ext_amp_count (passed in us) x SMCLK
    gUssSWConfig.measurementConfig->startRxEnCount =
            (uint16_t) ( (float) DC_User_Params->param7_ext_amp_count * NANOfloat *
                       USS_SMCLK_FREQ_IN_HZ );
#endif


}

//! \brief This Routine will update all captureConfig settings in the USS Lib
//!         for a water meter
//!
//! \return none
static void HMI_update_USScaptureConfig(void)
{
    // Get OSR
    switch (DC_User_Params->over_sampling_rate)
    {
        case 20:
            gUssSWConfig.captureConfig->overSampleRate =
                    USS_Capture_Over_Sample_Rate_20;
        break;
        case 40:
            gUssSWConfig.captureConfig->overSampleRate =
                    USS_Capture_Over_Sample_Rate_40;
        break;
        case 80:
            gUssSWConfig.captureConfig->overSampleRate =
                    USS_Capture_Over_Sample_Rate_80;
        break;
        case 160:
            gUssSWConfig.captureConfig->overSampleRate =
                    USS_Capture_Over_Sample_Rate_160;
        break;
        default:
        case 10:
            gUssSWConfig.captureConfig->overSampleRate =
                    USS_Capture_Over_Sample_Rate_10;
        break;
    }

    // PGA Gain
    gUssSWConfig.captureConfig->gainRange =
            (USS_Capture_Gain_Range) DC_User_Params->gain_control;

    // Sample size = capture_duration x signal sampling freq
    gUssSWConfig.captureConfig->sampleSize =
            (uint16_t) ( (float)DC_User_Params->capture_duration *
                         (float)DC_User_Params->sig_samp_freq *
                         (float) (MILLIfloat) );
}

//! \brief This Routine will update all algorithmsConfig settings in the USS Lib
//!         for a water meter
//!
//! \return none
static void HMI_update_USSalgorithmsConfig(void)
{
    // Configure AbsTOF, dTOF & Volume algorithm modes
#if defined (USS_GAS_CONFIGURATION)
    gUssSWConfig.algorithmsConfig->absToFOption =
            (USS_Alg_AbsToF_Calculation_Option) DC_User_Params->param1_computation_mode;
    gUssSWConfig.algorithmsConfig->dtoFCalcOption =
            USS_Alg_dToF_Calculation_Option_gas;
    gUssSWConfig.algorithmsConfig->volumeCalOption =
            USS_Alg_volume_flow_Calculation_Option_gas;
#else

#if ( LOBE_WIDE_OVERRIDE == true )
    gUssSWConfig.algorithmsConfig->absToFOption =
            (USS_Alg_AbsToF_Calculation_Option) USS_Alg_AbsToF_Calculation_Option_lobeWide;
#elif ( HILBERT_OVERRIDE == true )
    gUssSWConfig.algorithmsConfig->absToFOption =
            (USS_Alg_AbsToF_Calculation_Option) USS_Alg_AbsToF_Calculation_Option_hilbert;
#else
   gUssSWConfig.algorithmsConfig->absToFOption =
            (USS_Alg_AbsToF_Calculation_Option) DC_User_Params->param1_AbsTOF_Computation_mode;
#endif
    gUssSWConfig.algorithmsConfig->dtoFCalcOption =
            (USS_Alg_dToF_Calculation_Option) USS_Alg_dToF_Calculation_Option_estimate;
    gUssSWConfig.algorithmsConfig->volumeCalOption =
            USS_Alg_volume_flow_Calculation_Option_water;
#endif

     // DC Offset = delta_tof_offset (in sec, passed in ps)
#if (APPLICATION_ENABLE_ABSTOF_DTOF_OFFSET_CALIBRATION == false)
     gUssSWConfig.algorithmsConfig->dcOffset =
             (float) ( -1.0f * (float)DC_User_Params->delta_tof_offset *
                       (float)(PICOfloat) );
#endif

     // ADCAdditionalCaptureDelay = abs_tof_additional (in sec, passed in ns)
     gUssSWConfig.algorithmsConfig->ADCAdditionalCaptureDelay =
             (float)  ( (float)DC_User_Params->abs_tof_additional *
                        (float)(NANOfloat) );

#if(USS_ALG_DTOF_WINDOWING_MODE != USS_ALG_DTOF_WATER_WINDOW_OPTION_DISABLED)
     // winNumCycles = number of pulses + USS_ALG_WIN_NUM_CYCLES_DELTA
     gUssSWConfig.algorithmsConfig->winNumCycles =
             DC_User_Params->num_pls + USS_ALG_WIN_NUM_CYCLES_DELTA;
#endif

     // Envelope crossing threshold
#if defined (USS_GAS_CONFIGURATION)
     // For Lobe tracking algorithms, divide by 100
     if (gUssSWConfig.algorithmsConfig->absToFOption == USS_Alg_AbsToF_Calculation_Option_lobeWide)
     {
         gUssSWConfig.algorithmsConfig->ratioOfTrackLobeToPeak =
             (float) (DC_User_Params->param2_env_cross_threshold/100.0);
     }
     else if (gUssSWConfig.algorithmsConfig->absToFOption == USS_Alg_AbsToF_Calculation_Option_hilbertWide)
     {
         // For Hilbert algorithms pass threshold percentage
         gUssSWConfig.algorithmsConfig->crossThreshold =
             (float) (DC_User_Params->param2_env_cross_threshold);
     }
#else
     // For Lobe tracking algorithms, divide by 100
     if (gUssSWConfig.algorithmsConfig->absToFOption == USS_Alg_AbsToF_Calculation_Option_lobe)
     {
         gUssSWConfig.algorithmsConfig->ratioOfTrackLobeToPeak =
             (float) (DC_User_Params->param8_env_cross_threshold/100.0);
     }
     else if (gUssSWConfig.algorithmsConfig->absToFOption == USS_Alg_AbsToF_Calculation_Option_hilbert)
     {
         // For Hilbert algorithms pass threshold percentage
         gUssSWConfig.algorithmsConfig->crossThreshold =
             (float) (DC_User_Params->param8_env_cross_threshold);
     }
#endif

     // Set Positive and Negative tracking range of algorithms
     gUssSWConfig.algorithmsConfig->negSearchRange =
             (int16_t) (- ((int16_t) (DC_User_Params->num_pls)
                     + (int16_t) (DC_User_Params->param9_searchRngTracking)) );
     gUssSWConfig.algorithmsConfig->posSearchRange =
             (int16_t) (DC_User_Params->param9_searchRngTracking);

}

//! \brief Updates the time sleeping between measurements
//!
//! \return none
static void HMI_update_USSsleepDuration(void)
{
    if (8192 <= ((float)4096 * (float)DC_User_Params->gap_ups_ups *
            (float)(MILLIfloat) ) )
    {
        USS_App_userConfig.u16CaptureDelayACLK = 65535;    // Max value
    }
    else
    {
        USS_App_userConfig.u16CaptureDelayACLK =
                  (uint16_t) ( (uint16_t)( (float)4096 *
                          (float)DC_User_Params->gap_ups_ups *
                          (float)(MILLIfloat) ) << 3 );
    }
    // Configure background timer period
    USS_configAppTimerPeriod(&gUssSWConfig, USS_App_userConfig.u16CaptureDelayACLK);
}

