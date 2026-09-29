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
//! \file   hmi.h
//!
//! \brief  human-machine interface (HMI) layer
//!
//!  Group:          MSP Smart Metering Systems Applications
//!  Target Device:  MSP430FR6047
//!  Author:         Luis Reynoso, Michael Schneider
//!
//!  (C) Copyright 2019, Texas Instruments, Inc.
//#############################################################################

#ifndef HMIDC_HMI_H_
#define HMIDC_HMI_H_

#include <msp430.h>
#include "driverlib.h"
#include <stdint.h>
#include <stdbool.h>
#include "comm.h"
#include "comm_config.h"
#include "ussSwLib.h"
#include "USS_userConfig.h"



/********** GLOBAL CONSTANTS **********/
/*! Type of application reported to Design Center */
#define HMI_CMDHANDLER_APP_TYPE         COMMAND_HANDLER_APP_TYPE_water_app
/*! Type of device reported to Design Center */
#define HMI_CMDHANDLER_DEVICE_TYPE      COMMAND_HANDLER_DEVICE_TYPE_fr6047
/*! Hardware ID reported to Design Center */
#define HMI_CMDHANDLER_HW_ID            COMMAND_HANDLER_HARDWARE_ID_evm
/*! Firmware ID reported to Design Center */
#define HMI_CMDHANDLER_FW_ID            COMMAND_HANDLER_FIRMWARE_ID_0001
/*! Status of Advanced Meter Calibration Table reported to Design Center */
#define HMI_CMDHANDLER_ADV_CALIB_TABLE_STATUS   COMMAND_HANDLER_ADV_CALIB_TABLE_STATUS_disabled
/*! Number of errors stored in log */
#define HMI_ERROR_ARRAY_MAX             (10)

/*! Multiplier of transducer frequency sent by Design Center */
#define HMI_TRANSFREQ_MULTIPLIER        (KILO)*(HZ)

/*! Definition of Single Tone Pattern sent by Design Center */
#define PATTERN_SEQ_SINGLE_TONE         0
/*! Definition of Dual Tone Pattern sent by Design Center */
#define PATTERN_SEQ_DUAL_TONE           1
/*! Definition of Multi Tone Pattern sent by Design Center */
#define PATTERN_SEQ_MULTI_TONE          2
/* RANGES supported by the application as sent from Design Center */
#define F_FREQUENCY_MIN                 772
#define F_FREQUENCY_MAX                 2500
#define GAP_PLS_ADC_START_MIN           3
#define GAP_PLS_ADC_START_MAX           9000
#define NUM_PLS_MIN                     0
#define NUM_PLS_MAX                     63
#define GAP_UPS_DNS_MIN                 100
#define GAP_UPS_DNS_MAX                 16000
#define GAP_UPS_UPS_MIN                 20
#define GAP_UPS_UPS_MAX                 2000
#define PGA_GAIN_MIN                    17
#define PGA_GAIN_MAX                    63
#define METER_CONSTANT_MIN              (0.0f)
#define METER_CONSTANT_MAX              (1023000000.0f)
#define SIG_SAMP_FREQ_MIN               3400
#define SIG_SAMP_FREQ_MAX               8000
#define PLL_FREQ_MIN                    68
#define PLL_FREQ_MAX                    80
#define DELTA_TOF_OFFSET_MIN            -2147483648
#define DELTA_TOF_OFFSET_MAX            2147483647
#define ABS_TOF_ADDITIONAL_MIN          -2147483648
#define ABS_TOF_ADDITIONAL_MAX          2147483647
#define CAPTURE_DURATION_MIN            4
#define CAPTURE_DURATION_MAX            400
#define ULP_BIAS_DELAY_MIN              0
#define ULP_BIAS_DELAY_MAX              3
#define TM_A_START_PPG_MIN              0
#define TM_A_START_PPG_MAX              10E6
#define TM_B_ADC_ON_MIN                 0
#define TM_B_ADC_ON_MAX                 10E6
#define TM_C_PGA_BIAS_MIN               0
#define TM_C_PGA_BIAS_MAX               10E6
#define XTAL_SETTLING_MIN               0
#define XTAL_SETTLING_MAX               10000
#define ENV_CROSS_THRESH_MIN            1
#define ENV_CROSS_THRESH_MAX            100
#define SEARCH_RNG_ABSTOF_MIN           0
#define SEARCH_RNG_ABSTOF_MAX           32768
#define NEG_RNG_ABSTOF_MIN              0
#define NEG_RNG_ABSTOF_MAX              32768
#define POS_RNG_ABSTOF_MIN              0
#define POS_RNG_ABSTOF_MAX              32768
#define USER_PARAM_MIN                  -2147483648
#define USER_PARAM_MAX                  2147483647




/********** GLOBAL STRUCTS & enum constants **********/
typedef enum HMI_STATUS_t       // Defines the status of the HMI
{                               //
    HMI_STATUS_OK = 0,          // No error detected
    HMI_STATUS_FAULT,           // Fault detected during current sample
    HMI_STATUS_NON_FATAL_ERROR, // Non-fatal error, device is actively sampling despite error
    HMI_STATUS_FATAL_ERROR,     // Fatal error, device is not actively sampling
}HMI_STATUS_t;                  //
                                //
typedef struct HMI_Error_Obj_   // Error detected by application
{                               //
    uint16_t        code;       // Error code. Values described in hmi.h as HMI_ERROR_xxx
    uint16_t        info;       // Additional info, depends on HMI_ReportAppError()
    uint32_t        sampleNum;  // Number of sample where error was detected
} HMI_Error_Obj_t;

typedef struct                                          // HMI object semaphore structure
{                                                       //
    HMI_STATUS_t        status;                         // Status of application
    bool                isLPMenabled;                   // Is LPM mode enabled
    bool                isDebugModeEnabled;             // Is Debug Mode enabled
    uint32_t            sampleCounter;                  // Sample counter
    HMI_Error_Obj_t     errorLog[HMI_ERROR_ARRAY_MAX];  // Log with detected errors
    uint16_t            errorCounter;                   // Number of errors detected (circular)
} HMI_obj_SEMAPHORE;

typedef struct
{
    float       fDeltaTOF;
    float       fAvg_UPS_TotalTOF;
    float       fAvg_DNS_TotalTOF;
    float       fDelta_Std;
    float       fVolume;
    int16_t     iMax_UPS_DNS;
} HMI_DesignCenterALG_Results;


typedef enum HMI_MESSAGE_t                      // Messages to GUI
{                                               //
    HMI_MSG_OK = 0,                             // No error detected
    HMI_MSG_VALIDATIONERR_PATTERNOPTION =1,     // Error in Pattern Option
    HMI_MSG_VALIDATIONERR_TRANS1FREQ = 2,       // Error in Transducer #1 Frequency
    HMI_MSG_VALIDATIONERR_TRANS2FREQ = 3,       // Error in Transducer #2 Frequency
    HMI_MSG_VALIDATIONERR_GAPPULSEADC = 4,      // Error in gap between pulse and ADC
    HMI_MSG_VALIDATIONERR_NUMPULSES = 5,        // Error in Number of pulses
    HMI_MSG_VALIDATIONERR_GAPUPSTODNS = 6,      // Error in gap between UPS and DNS
    HMI_MSG_VALIDATIONERR_GAPUPS0TOUPS1 = 7,    // Error in gap between UPS0 and UPS1
    HMI_MSG_VALIDATIONERR_GAIN = 8,             // Error in gain setting
    HMI_MSG_VALIDATIONERR_METERCONST = 9,       // Error in meter constant
    HMI_MSG_VALIDATIONERR_INVALIDAPP = 10,      // Error in App Type
    HMI_MSG_VALIDATIONERR_USSXT = 20,           // Error in USSXT value
    HMI_MSG_VALIDATIONERR_SAMPFREQ = 21,        // Error in sampling frequency
    HMI_MSG_VALIDATIONERR_OSR = 22,             // Error in over sampling rate
    HMI_MSG_VALIDATIONERR_PLLFREQ = 23,         // Error in calculated PLL frequency 
    HMI_MSG_VALIDATIONERR_DTOFOFFSET= 24,       // Error in dTOF Offset 
    HMI_MSG_VALIDATIONERR_ABSTOFOFFSET = 25,    // Error in AbsTOF Offset 
    HMI_MSG_VALIDATIONERR_CAPTDURATION = 26,    // Error in Capture Duration
    HMI_MSG_VALIDATIONERR_ALGOPTION = 27,       // Error in Algorithm Option
    HMI_MSG_VALIDATIONERR_ENVCROSTHRES = 28,    // Error in Envelope Crossing Threshold
    HMI_MSG_VALIDATIONERR_STARTPPGCOUNT = 29,   // Error in Start PPG Count
    HMI_MSG_VALIDATIONERR_TURNONADCCOUNT = 30,  // Error in Turn On ADC Count 
    HMI_MSG_VALIDATIONERR_STARTPGACOUNT = 31,   // Error in Start PGA count
    HMI_MSG_VALIDATIONERR_USSXTSETTLING = 32,   // Error in USSXT settling time
    HMI_MSG_VALIDATIONERR_NEGRANGEDTOF = 33,    // Error in Negative Range dTOF
    HMI_MSG_VALIDATIONERR_POSRANGEDTOF = 34,    // Error in Positive Range dTOF
    HMI_MSG_VALIDATIONERR_SEARCHRANGEABSTOF = 35,  // Error in Search Range AbsTOF
    HMI_MSG_VALIDATIONERR_POSRANGEABSTOF = 36,  // Error in Positive Range AbsTOF
    HMI_MSG_VALIDATIONERR_PARAM1 = 37,          // Error in Param1
    HMI_MSG_VALIDATIONERR_PARAM2 = 38,          // Error in Param2
    HMI_MSG_VALIDATIONERR_PARAM3 = 39,          // Error in Param3
    HMI_MSG_VALIDATIONERR_PARAM4 = 40,          // Error in Param4
    HMI_MSG_VALIDATIONERR_PARAM5 = 41,          // Error in Param5
    HMI_MSG_VALIDATIONERR_PARAM6 = 42,          // Error in Param6
    HMI_MSG_VALIDATIONERR_PARAM7 = 43,          // Error in Param7
    HMI_MSG_VALIDATIONERR_PARAM8 = 44,          // Error in Param8
    HMI_MSG_VALIDATIONERR_PARAM9 = 45,          // Error in Param9
    HMI_MSG_VALIDATIONERR_PARAM10 = 46,         // Error in Param10
    HMI_MSG_RESET_PMMSWBOR = 63,                // Unexpected Reset: PMMSWBOR
    HMI_MSG_RESET_LPMX5WAKEUP = 64,             // Unexpected Reset: LPMx.5 Wake-up
    HMI_MSG_RESET_SECURITYVIOL = 65,            // Unexpected Reset: Security Violation
    HMI_MSG_RESET_SVSHIFG = 67,                 // Unexpected Reset: SVSHIFG
    HMI_MSG_RESET_PMMSWPOR = 70,                // Unexpected Reset: PMMSWPOR
    HMI_MSG_RESET_WDTTIMEOUT = 71,              // Unexpected Reset: Watchdog Timeout
    HMI_MSG_RESET_PWDVIOLATION= 72,             // Unexpected Reset: Password violation
    HMI_MSG_RESET_PWDVIOLATION2= 73,            // Unexpected Reset: Password violation
    HMI_MSG_RESET_FRAMERROR = 74,               // Unexpected Reset: FRAM Error
    HMI_MSG_RESET_PERIPHFETCH = 75,             // Unexpected Reset: Peripheral Area Fetch
    HMI_MSG_RESET_PMMPWDVIOL = 76,              // Unexpected Reset: PMM Password Violation
    HMI_MSG_RESET_MPUPWDVIOL = 77,              // Unexpected Reset: MPU Password Violation
    HMI_MSG_RESET_CSPWDVIOL = 78,               // Unexpected Reset: CS Password Violation
    HMI_MSG_RESET_IPEVIOL = 79,                 // Unexpected Reset: IPE Violation
    HMI_MSG_RESET_MPUSEG1VIOL = 81,             // Unexpected Reset: MPU Segment 1 Violation
    HMI_MSG_RESET_MPUSEG2VIOL = 82,             // Unexpected Reset: MPU Segment 2 Violation
    HMI_MSG_RESET_MPUSEG3VIOL = 83,             // Unexpected Reset: MPU Segment 3 Violation
    HMI_MSG_ERROR = 255,                        // Other undefined errors
}HMI_MESSAGE_t;

/********** FUNCTIONS **********/

//! \brief This routine will initialize the gHMI global
//!         object semaphore for the GUI machine interface
//!
//! \return none
void HMI_Init(void);

//! \brief When an error is indicated this routine will be called
//!         this routine will switch on the type of error message
//!
//! \param error_type   Error type (check COMMAND_HANDLER_ERROR_FATAL_xxx definitions)
//! \param info         16-bit error code send for complementary information
//!
//!   FATAL ERROR
//!   NON FATAL ERROR
//!   FAULT
//!
//!   the function will then update the gHMI global object
//!   semaphore with the correct status for the rest of the
//!   program to use
//!   the function will then transmit a the proper error
//!   message back to the Design center
//!
//! \return none
void HMI_reportError_sendErrorMessage(uint16_t error_type, uint16_t info);


//! \brief This routine will then Receive Configuration parameters from GUI
//!         Prior to start of each measurement
//!
//! \return none
void HMI_PreMeasurement_Update(void);


//! \brief This routine updates the Design Center (GUI) with a waveform
//!         capture if the Design Center desires the waveform
//!
//! \return none
void HMI_PostMeasurement_Update(void);

//! \brief This routine updated the Design Center (GUI) with the data and
//!         capture from a measurement if the Design Center desires the results
//!
//! \return none
void HMI_PostAlgorithm_Update(USS_Algorithms_Results_fixed_point * alg_res);

//! \brief  This function returns the boolean value indicating if the MCU
//!         is operating in LPM or not
//!
//! \return bool gHMI.isLPMenabled
bool HMI_isLPMEnabled(void);

//! \brief This routine will initialize the gHMI global
//!         object semaphore for the GUI machine interface
//!
//!
//! \return none
HMI_STATUS_t HMI_GetStatus(void);

//! \brief This routine updates the USS Library members with the inputs from
//!         the Design Center GUI
//!
//! \return none
void HMI_updateUSSParameters(void);



#endif /* HMIDC_HMI_H_ */
