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
//! \file   ussDCCommandHandlers.c
//!
//! \brief  Implements serial communication protocol between with Ultrasonic
//!         Design Center
//!
//!  Group:          MSP Smart Metering Systems Applications
//!  Target Device:  MSP430FR6047
//!
//!  (C) Copyright 2019, Texas Instruments, Inc.
//#############################################################################


#include <msp430.h>
#include <ussDCCommandHandlers.h>
#include "driverlib.h"
#include "ussSwLib.h"
#include "hal.h"
#if (USS_ALG_VFR_CALIB_MODE == USS_ALG_VFR_CALIB_OPTION_FLOW)
#include "USS_meterVFRCalibFlow.h"
#endif

#if (COMM_SERIAL_INTERFACE == COMM_UART)
extern uint16_t g_ui16UARTTransmitBytesLeft;
#else
extern volatile uint8_t g_I2CSlaveStatus;
#endif

#if defined(__TI_COMPILER_VERSION__)
#define __persistent
#endif

volatile uint32_t gRXUpdateFlag;

COMAND_HANDLER gCommandHandler =
{
        .appReqUpdate = false,
        .appReqData = false,
        .appReqCaptures = false,
        .updateValid = false,
        .updateCalib = false,
};

static void Handler_gap_pls_adc_start_id(Packet_t *packet);
static void Handler_num_pls_id(Packet_t *packet);
static void Handler_gap_ups_dns_id(Packet_t *packet);
static void Handler_gap_ups_ups_id(Packet_t *packet);
static void Handler_gain_control_id(Packet_t *packet);
static void Handler_meter_constant_id(Packet_t *packet);
static void Handler_xt2_freq_id(Packet_t *packet);
static void Handler_adc_samp_freq_id(Packet_t *packet);
static void Handler_sig_samp_freq_id(Packet_t *packet);
static void Handler_over_sampling_rate(Packet_t *packet);
static void Handler_delta_tof_offset_id(Packet_t *packet);
static void Handler_abs_tof_additional_id(Packet_t *packet);
static void Handler_capture_duration_id(Packet_t *packet);
#if defined(USS_GAS_CONFIGURATION)
static void Handler_computation_mode_id(Packet_t *packet);
static void Handler_env_cross_threshold_id(Packet_t *packet);
static void Handler_tmA_startppg_id(Packet_t *packet);
static void Handler_TMB_ADCON_id(Packet_t *packet);
static void Handler_neg_rng_dtof_id(Packet_t *packet);
static void Handler_pos_rng_dtof_id(Packet_t *packet);
static void Handler_search_rng_abs_tof_id(Packet_t *packet);
static void Handler_param10_id(Packet_t *packet);
static void Handler_tmC_pgaBias_in(Packet_t *packet);
static void Handler_xtal_settling_in(Packet_t *packet);
#else
static void Handler_param1_id(Packet_t *packet);
static void Handler_param2_id(Packet_t *packet);
static void Handler_param3_id(Packet_t *packet);
static void Handler_param4_id(Packet_t *packet);
static void Handler_param5_id(Packet_t *packet);
static void Handler_param6_id(Packet_t *packet);
static void Handler_param7_id(Packet_t *packet);
static void Handler_param8_id(Packet_t *packet);
static void Handler_param9_id(Packet_t *packet);
static void Handler_param10_id(Packet_t *packet);	
#endif
static void Handler_mtr_calibration_table_id(Packet_t *packet);
static void Handler_req_calibration_config_id(Packet_t *packet);
static void Handler_max_vfr_id(Packet_t *packet);
static void Handler_calib_linear_constants_id(Packet_t *packet);
static void Handler_plot_dtof_id(Packet_t *packet);
static void Handler_plot_abs_ups_id(Packet_t *packet);
static void Handler_plot_abs_dns_id(Packet_t *packet);
static void Handler_plot_vol_id(Packet_t *packet);
static void Handler_lea_enable(Packet_t *packet);
static void Handler_req_app_req_update(Packet_t *packet);
static void Handler_req_app_req_data(Packet_t *packet);
static void Handler_req_app_req_captures(Packet_t *packet);
static void Handler_app_version(Packet_t *packet);
static void Handler_f1_and_f2(Packet_t *packet);
static void Handler_pattern_opt(Packet_t *packet);




static void processCommand(Packet_t *packet,uint8_t *p8Data,uint8_t size, uint32_t rxFlag);
static uint32_t resolveRXFlag(uint8_t command);

COMAND_HANDLER * CommandHandler_getUserParamsPtr(void)
{
    return &gCommandHandler;
}

void CommandHandler_registerCmdListeners()
{
    // Clear all RX flags
    gRXUpdateFlag &= ~(COMMAND_HANDLER_ALL_RX_FLAGS);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
                COMMAND_HANDLER_APP_UPDATE_REQ,
                &Handler_req_app_req_update);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_GAP_PLS_ADC_START_ID,
            &Handler_gap_pls_adc_start_id);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_NUM_PLS_ID,
            &Handler_num_pls_id);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_GAP_UPS_DNS_ID,
            &Handler_gap_ups_dns_id);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_GAP_UPS_UPS_ID,
            &Handler_gap_ups_ups_id);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_GAIN_CONTROL_ID,
            &Handler_gain_control_id);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_METER_CONSTANT_ID,
            &Handler_meter_constant_id);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_XT2_FREQ_ID,
            &Handler_xt2_freq_id);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_ADC_SAMP_FREQ_ID,
            &Handler_adc_samp_freq_id);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_SIG_SAMP_FREQ_ID,
            &Handler_sig_samp_freq_id);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_ADC_OVERSAMPLING_ID,
            &Handler_over_sampling_rate);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_DELTA_TOF_OFFSET_ID,
            &Handler_delta_tof_offset_id);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_ABS_TOF_ADDITIONAL_ID,
            &Handler_abs_tof_additional_id);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_CAPTURE_DURATION_ID,
            &Handler_capture_duration_id);
#if defined(USS_GAS_CONFIGURATION)		
    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_COMPUTATION_MODE_ID,
            &Handler_computation_mode_id);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_ENV_CROSS_THRESHOLD_ID,
            &Handler_env_cross_threshold_id);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_TMA_STARTPPG_ID,
            &Handler_tmA_startppg_id);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_TMB_ADCON_ID,
            &Handler_TMB_ADCON_id);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_TMC_PGABIAS_ID,
            &Handler_tmC_pgaBias_in);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_XTAL_SETTLING_ID,
            &Handler_xtal_settling_in);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_NEG_RNG_DTOF_ID,
            &Handler_neg_rng_dtof_id);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_POS_RNG_DTOF_ID,
            &Handler_pos_rng_dtof_id);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_SEARCH_RNG_ABS_TOF_ID,
            &Handler_search_rng_abs_tof_id);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_PARAM10_ID,
            &Handler_param10_id);
#else
    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_PARAM1_ID,
            &Handler_param1_id);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_PARAM2_ID,
            &Handler_param2_id);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_PARAM3_ID,
            &Handler_param3_id);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_PARAM4_ID,
            &Handler_param4_id);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_PARAM5_ID,
            &Handler_param5_id);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_PARAM6_ID,
            &Handler_param6_id);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_PARAM7_ID,
            &Handler_param7_id);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_PARAM8_ID,
            &Handler_param8_id);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_PARAM9_ID,
            &Handler_param9_id);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_PARAM10_ID,
            &Handler_param10_id);	
#endif
    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_METER_CALIBRATION_TABLE_ID,
            &Handler_mtr_calibration_table_id);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_PLOT_DTOF_ID,
            &Handler_plot_dtof_id);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_PLOT_ABS_UPS_ID,
            &Handler_plot_abs_ups_id);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_PLOT_ABS_DNS_ID,
            &Handler_plot_abs_dns_id);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_PLOT_VOL_ID,
            &Handler_plot_vol_id);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_REQUEST_CALIBRATION_CONFIG_ID,
            &Handler_req_calibration_config_id);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_MAXIMUM_VFR_ID,
            &Handler_max_vfr_id);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
            COMMAND_HANDLER_CALIBRATION_LINEAR_CONSTANTS_ID,
            &Handler_calib_linear_constants_id);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
                COMMAND_HANDLER_LEA_ENABLE_ID,
                &Handler_lea_enable);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
                    COMMAND_HANDLER_APP_REQ_DATA,
                    &Handler_req_app_req_data);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
                    COMMAND_HANDLER_APP_REQ_CAPTURES,
                    &Handler_req_app_req_captures);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
                    COMMAND_HANDLER_APP_VERSION_ID,
                    &Handler_app_version);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
                        COMMAND_HANDLER_F1_F2_ID,
                        &Handler_f1_and_f2);

    Comm_addCmdListener(COMMAND_HANDLER_USS_GUI_ID_BYTE,
                        COMMAND_HANDLER_PATTERN_OPT_ID,
                        &Handler_pattern_opt);

}

void processCommand(Packet_t *packet,uint8_t *p8Data,uint8_t size, uint32_t rxFlag)
{
    uint8_t *p8RxData = p8Data;
    uint8_t i;

    //
    // check if WRITE command
    //
    if (packet->payload[COMMAND_HANDLER_R_W_BYTE_POS] ==
            COMMAND_HANDLER_WRITE_CMD)
    {
        for(i=0; i<size;i++)
        {
            *(p8RxData+i) = (packet->payload[3+i]);
        }

        // Clear RX flag for command
        gRXUpdateFlag &= ~(rxFlag);
    }else
    {
        packet->payload[COMMAND_HANDLER_R_W_BYTE_POS] =COMMAND_HANDLER_WRITE_CMD;

        // Echo values in case command was received in read command

        for(i=0; i<size;i++)
        {
            packet->payload[3+i] = *(p8RxData+i);
        }

        Comm_writePacket(packet);
    }

#if (COMM_SERIAL_INTERFACE==COMM_UART)
    while(g_ui16UARTTransmitBytesLeft!=0);
#else
    while(g_I2CSlaveStatus != 0x01);
#endif
}


void CommandHandler_prepareForParamUpdate(uint8_t command)
{
    uint32_t flag = resolveRXFlag(command);

    gRXUpdateFlag |= flag;
}

void CommandHandler_rxUpdate(uint8_t command, int32_t* ptimeOut)
{
    uint32_t flag = resolveRXFlag(command);

    // Wait for flag to be cleared
    while(((gRXUpdateFlag & flag) == flag) && (((*ptimeOut)--) > 0))
    {
        Comm_listenForCmd();
    }
}

void CommandHandler_calibUpdate(int32_t* ptimeOut)
{
    // Wait for update flag to be cleared
    while( (gCommandHandler.updateCalib == true)
            && (((*ptimeOut)--) > 0) )
    {
        Comm_listenForCmd();
    }
}

void CommandHandler_transmitPacket(Packet_t *packet)
{
    Comm_writePacket(packet);

#if (COMM_SERIAL_INTERFACE==COMM_UART)
    while(g_ui16UARTTransmitBytesLeft!=0);
#else
    while(g_I2CSlaveStatus != 0x01);
#endif

}

void CommandHandler_updateCalibParams()
{
    int32_t timeout = COMMAND_HANDLER_TIME_OUT;
    CommandHandler_calibUpdate(&timeout);

    // Clear update calib if timeout occurred
    if(0 == timeout)
    {
        gCommandHandler.updateCalib = false;
    }
}

void CommandHandler_updateParams(Packet_t *txPacket)
{
    uint8_t i;
    int32_t timeout = COMMAND_HANDLER_TIME_OUT;
    const uint8_t updateParams[] =
    {
        COMMAND_HANDLER_GAP_PLS_ADC_START_ID,
        COMMAND_HANDLER_NUM_PLS_ID,
        COMMAND_HANDLER_GAP_UPS_DNS_ID,
        COMMAND_HANDLER_GAP_UPS_UPS_ID,
        COMMAND_HANDLER_GAIN_CONTROL_ID,
        COMMAND_HANDLER_METER_CONSTANT_ID,
        COMMAND_HANDLER_XT2_FREQ_ID,
        COMMAND_HANDLER_ADC_SAMP_FREQ_ID,
        COMMAND_HANDLER_SIG_SAMP_FREQ_ID,
        COMMAND_HANDLER_ADC_OVERSAMPLING_ID,
        COMMAND_HANDLER_DELTA_TOF_OFFSET_ID,
        COMMAND_HANDLER_ABS_TOF_ADDITIONAL_ID,
        COMMAND_HANDLER_CAPTURE_DURATION_ID,
#if defined(USS_GAS_CONFIGURATION)			
        COMMAND_HANDLER_COMPUTATION_MODE_ID,
        COMMAND_HANDLER_ENV_CROSS_THRESHOLD_ID,
        COMMAND_HANDLER_TMA_STARTPPG_ID,
        COMMAND_HANDLER_TMB_ADCON_ID,
        COMMAND_HANDLER_NEG_RNG_DTOF_ID,
        COMMAND_HANDLER_POS_RNG_DTOF_ID,
        COMMAND_HANDLER_SEARCH_RNG_ABS_TOF_ID,
        COMMAND_HANDLER_PARAM10_ID,
        COMMAND_HANDLER_TMC_PGABIAS_ID,
        COMMAND_HANDLER_XTAL_SETTLING_ID,
#else
		COMMAND_HANDLER_PARAM1_ID,
        COMMAND_HANDLER_PARAM2_ID,
        COMMAND_HANDLER_PARAM3_ID,
        COMMAND_HANDLER_PARAM4_ID,
        COMMAND_HANDLER_PARAM7_ID,
        COMMAND_HANDLER_PARAM8_ID,
        COMMAND_HANDLER_PARAM9_ID,
        COMMAND_HANDLER_PARAM10_ID,
        COMMAND_HANDLER_PARAM5_ID,
        COMMAND_HANDLER_PARAM6_ID,
#endif		
        COMMAND_HANDLER_LEA_ENABLE_ID,
        COMMAND_HANDLER_F1_F2_ID,
        COMMAND_HANDLER_PATTERN_OPT_ID,
#if (USS_ALG_VFR_CALIB_MODE == USS_ALG_VFR_CALIB_OPTION_FLOW)
        COMMAND_HANDLER_METER_CALIBRATION_TABLE_ID,
#endif
    };

    txPacket->length = 8;
    txPacket->payload[0] = COMMAND_HANDLER_USS_GUI_ID_BYTE;
    txPacket->payload[2] = COMMAND_HANDLER_READ_CMD;

    for(i=0; i < sizeof(updateParams); i++)
    {
        txPacket->payload[1] = updateParams[i];
        CommandHandler_prepareForParamUpdate(updateParams[i]);
        CommandHandler_transmitPacket(txPacket);
        CommandHandler_rxUpdate(updateParams[i], &timeout);
        if(0 > timeout)
        {
            break;
        }
    }

    if(0 < timeout)
    {
        gCommandHandler.appReqUpdate = false;
        gCommandHandler.updateValid = true;
    }
    else
    {
        gCommandHandler.updateValid = false;
    }
}

void CommandHandler_transmitResults(Packet_t *txPacket,
        USS_Algorithms_Results* algRes)
{
    uint8_t* pDTof= (uint8_t*)(&algRes->deltaTOF);
    uint8_t* pAbsTofUps =(uint8_t*)(&algRes->totalTOF_UPS);
    uint8_t* pAbsTofDns = (uint8_t*)(&algRes->totalTOF_DNS);
    uint8_t* pVol = (uint8_t*)(&algRes->volumeFlowRate);

    txPacket->length = COMMAND_HANDLER_PLOT_PACKET_SIZE;
    txPacket->payload[0] = COMMAND_HANDLER_USS_GUI_ID_BYTE;
    txPacket->payload[1] = COMMAND_HANDLER_PLOT_DTOF_ID;
    txPacket->payload[2] = COMMAND_HANDLER_WRITE_CMD;
        txPacket->payload[3] = *pDTof++;
    txPacket->payload[4] = *pDTof++;
    txPacket->payload[5] = *pDTof++;
    txPacket->payload[6] = *pDTof;

    CommandHandler_transmitPacket(txPacket);

    txPacket->length = COMMAND_HANDLER_PLOT_PACKET_SIZE;
    txPacket->payload[0] = COMMAND_HANDLER_USS_GUI_ID_BYTE;
    txPacket->payload[1] = COMMAND_HANDLER_PLOT_ABS_UPS_ID;
    txPacket->payload[2] = COMMAND_HANDLER_WRITE_CMD;
    txPacket->payload[3] = *pAbsTofUps++;
    txPacket->payload[4] = *pAbsTofUps++;
    txPacket->payload[5] = *pAbsTofUps++;
    txPacket->payload[6] = *pAbsTofUps;

    CommandHandler_transmitPacket(txPacket);

    txPacket->length = COMMAND_HANDLER_PLOT_PACKET_SIZE;
    txPacket->payload[0] = COMMAND_HANDLER_USS_GUI_ID_BYTE;
    txPacket->payload[1] = COMMAND_HANDLER_PLOT_ABS_DNS_ID;
    txPacket->payload[2] = COMMAND_HANDLER_WRITE_CMD;
    txPacket->payload[3] = *pAbsTofDns++;
    txPacket->payload[4] = *pAbsTofDns++;
    txPacket->payload[5] = *pAbsTofDns++;
    txPacket->payload[6] = *pAbsTofDns;

    CommandHandler_transmitPacket(txPacket);

    txPacket->length = COMMAND_HANDLER_PLOT_PACKET_SIZE;
    txPacket->payload[0] = COMMAND_HANDLER_USS_GUI_ID_BYTE;
    txPacket->payload[1] = COMMAND_HANDLER_PLOT_VOL_ID;
    txPacket->payload[2] = COMMAND_HANDLER_WRITE_CMD;
    txPacket->payload[3] = *pVol++;
    txPacket->payload[4] = *pVol++;
    txPacket->payload[5] = *pVol++;
    txPacket->payload[6] = *pVol;

    CommandHandler_transmitPacket(txPacket);

}

void CommandHandler_transmitCapturePackages(Packet_t *txPacket,
            uint8_t id, uint8_t numOfPcks, int8_t finalPckLength,
            uint8_t* pCap)
{
    uint8_t i,j;
    uint8_t tempID;

    if(id == COMMAND_HANDLER_UPS_ADC_CAPTURE_ID)
    {
        tempID = COMMAND_HANDLER_PLOT_ADC_UPS_STRT_STP_PACKS_ID;
    }else
    {
        tempID = COMMAND_HANDLER_PLOT_ADC_DNS_STRT_STP_PACKS_ID;
    }

    // Generate packet ADC capture packets in START mode
    txPacket->length = COMMAND_HANDLER_PLOT_PACKET_SIZE;
    txPacket->payload[0] = COMMAND_HANDLER_USS_GUI_ID_BYTE;
    txPacket->payload[1] = tempID;
    txPacket->payload[2] = COMMAND_HANDLER_WRITE_CMD;
    txPacket->payload[3] = (uint8_t)COMMAND_HANDLER_PLOT_ADC_START_TX;
    txPacket->payload[4] = numOfPcks;

    CommandHandler_transmitPacket(txPacket);

    txPacket->length = COMMAND_HANDLER_CAPTURE_PACKET_SIZE;
    txPacket->payload[0] = COMMAND_HANDLER_USS_GUI_ID_BYTE;
    txPacket->payload[1] = id;
    txPacket->payload[2] = COMMAND_HANDLER_WRITE_CMD;
    txPacket->payload[4] = COMMAND_HANDLER_UPS_DNS_CAP_MAX_CAP_SIZE;


    // Transmit ADC UPS capture packets
    for(i = 1; i < numOfPcks ; i++)
    {
        txPacket->payload[3] = i;

        for( j = 0; j < (sizeof(uint16_t)*COMMAND_HANDLER_UPS_DNS_CAP_MAX_CAP_SIZE); j+=2)
        {
            txPacket->payload[(j + 5)] = *(pCap++);
            txPacket->payload[(j + 6)] = *(pCap++);
        }

        CommandHandler_transmitPacket(txPacket);
    }

    // Transmit final packet with remaining capture samples
    if(finalPckLength > 0)
    {
        txPacket->payload[3] = numOfPcks;
        txPacket->payload[4] = finalPckLength;
        i=0;
        while(finalPckLength > 0)
        {
            txPacket->payload[(i + 5)] = *(pCap++);
            txPacket->payload[(i + 6)] = *(pCap++);
            i+=2;
            finalPckLength--;
        }

        CommandHandler_transmitPacket(txPacket);
    }

    // Generate packet ADC capture packets in START mode
    txPacket->length = COMMAND_HANDLER_PLOT_PACKET_SIZE;
    txPacket->payload[0] = COMMAND_HANDLER_USS_GUI_ID_BYTE;
    txPacket->payload[1] = tempID;
    txPacket->payload[2] = COMMAND_HANDLER_WRITE_CMD;
    txPacket->payload[3] = (uint8_t)COMMAND_HANDLER_PLOT_ADC_STOP_TX;
    txPacket->payload[4] = numOfPcks;

    CommandHandler_transmitPacket(txPacket);


}


void CommandHandler_transmitCaptures(Packet_t *txPacket)
{
    // Calculate number of packets that will need to be sent
    // Each ADC capture packet can hold up to 27 captures
    uint16_t updnsCaptureSize = gUssSWConfig.captureConfig->sampleSize;
    uint8_t numOfPcks = (uint8_t)(updnsCaptureSize/ COMMAND_HANDLER_UPS_DNS_CAP_MAX_CAP_SIZE);
    int8_t finalPckLength = (uint8_t)(updnsCaptureSize % COMMAND_HANDLER_UPS_DNS_CAP_MAX_CAP_SIZE);
    // Calculate number of bytes in each capture
    uint8_t* pUPSCap = (uint8_t*)(USS_getUPSPtr(&gUssSWConfig));
    uint8_t* pDNSCap = (uint8_t*)(USS_getDNSPtr(&gUssSWConfig));

    if( finalPckLength > 0 )
    {
        numOfPcks++;
    }
    else
    {
        finalPckLength = COMMAND_HANDLER_UPS_DNS_CAP_MAX_CAP_SIZE;
    }


    CommandHandler_transmitCapturePackages(txPacket,
            COMMAND_HANDLER_UPS_ADC_CAPTURE_ID,
            numOfPcks,
            finalPckLength, pUPSCap);

    CommandHandler_transmitCapturePackages(txPacket,
            COMMAND_HANDLER_DNS_ADC_CAPTURE_ID,
            numOfPcks,
            finalPckLength, pDNSCap);

    gCommandHandler.appReqCaptures = false;

}





void Handler_gap_pls_adc_start_id(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.gap_pls_adc_start,
            sizeof(gCommandHandler.gap_pls_adc_start),
            COMMAND_HANDLER_GAP_PLS_ADC_START_RX_FLAG);

}
void Handler_num_pls_id(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.num_pls,
            sizeof(gCommandHandler.num_pls),COMMAND_HANDLER_NUM_PLS_RX_FLAG);
}
void Handler_gap_ups_dns_id(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.gap_ups_dns,
            sizeof(gCommandHandler.gap_ups_dns),COMMAND_HANDLER_GAP_UPS_DNS_RX_FLAG);
}
void Handler_gap_ups_ups_id(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.gap_ups_ups,
            sizeof(gCommandHandler.gap_ups_ups),COMMAND_HANDLER_GAP_UPS_UPS_RX_FLAG);
}
void Handler_gain_control_id(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.gain_control,
            sizeof(gCommandHandler.gain_control),COMMAND_HANDLER_GAIN_CONTROL_RX_FLAG);
}
void Handler_meter_constant_id(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.meter_constant,
            sizeof(gCommandHandler.meter_constant),COMMAND_HANDLER_METER_CONSTANT_RX_FLAG);
}
void Handler_xt2_freq_id(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.ussxt_freq,
            sizeof(gCommandHandler.ussxt_freq),COMMAND_HANDLER_XT2_FREQ_RX_FLAG);
}
void Handler_adc_samp_freq_id(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.adc_samp_freq,
            sizeof(gCommandHandler.adc_samp_freq),COMMAND_HANDLER_ADC_SAMP_FREQ_RX_FLAG);
}
void Handler_sig_samp_freq_id(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.sig_samp_freq,
            sizeof(gCommandHandler.sig_samp_freq),COMMAND_HANDLER_SIG_SAMP_FREQ_RX_FLAG);
}
void Handler_over_sampling_rate(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.over_sampling_rate,
            sizeof(gCommandHandler.over_sampling_rate),COMMAND_HANDLER_ADC_OVERSAMPLING_RX_FLAG);
}
void Handler_delta_tof_offset_id(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.delta_tof_offset,
            sizeof(gCommandHandler.delta_tof_offset),COMMAND_HANDLER_DELTA_TOF_OFFSET_RX_FLAG);
}
void Handler_abs_tof_additional_id(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.abs_tof_additional,
            sizeof(gCommandHandler.abs_tof_additional),COMMAND_HANDLER_ABS_TOF_ADDITIONAL_RX_FLAG);
}
void Handler_capture_duration_id(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.capture_duration,
            sizeof(gCommandHandler.capture_duration),COMMAND_HANDLER_CAPTURE_DURATION_RX_FLAG);
}
#if defined(USS_GAS_CONFIGURATION)	
void Handler_computation_mode_id(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.param1_computation_mode,
            sizeof(gCommandHandler.param1_computation_mode),COMMAND_HANDLER_COMPUTATION_MODE_RX_FLAG);
}
void Handler_env_cross_threshold_id(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.param2_env_cross_threshold,
            sizeof(gCommandHandler.param2_env_cross_threshold),COMMAND_HANDLER_ENV_CROSS_THRESHOLD_RX_FLAG);
}
void Handler_tmA_startppg_id(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.param3_TM_A_start_ppg,
            sizeof(gCommandHandler.param3_TM_A_start_ppg),COMMAND_HANDLER_TMA_STARTPPG_RX_FLAG);
}
void Handler_TMB_ADCON_id(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.param4_TM_B_adc_on,
            sizeof(gCommandHandler.param4_TM_B_adc_on),COMMAND_HANDLER_TMB_ADCON_RX_FLAG);
}
void Handler_tmC_pgaBias_in(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.param5_TM_C_pga_bias,
            sizeof(gCommandHandler.param5_TM_C_pga_bias),COMMAND_HANDLER_TMC_PGABIAS_FLAG);
}
void Handler_xtal_settling_in(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.param6_uss_xtal_settling_count,
            sizeof(gCommandHandler.param6_uss_xtal_settling_count),COMMAND_HANDLER_XTAL_SETTLING_FLAG);
}
void Handler_neg_rng_dtof_id(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.param7_ext_amp_count,
            sizeof(gCommandHandler.param7_ext_amp_count),COMMAND_HANDLER_NEG_RNG_DTOF_RX_FLAG);
}
void Handler_pos_rng_dtof_id(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.user_param8,
            sizeof(gCommandHandler.user_param8),COMMAND_HANDLER_POS_RNG_DTOF_RX_FLAG);
}
void Handler_search_rng_abs_tof_id(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.param9_searchRngTracking,
            sizeof(gCommandHandler.param9_searchRngTracking),COMMAND_HANDLER_SEARCH_RNG_ABS_TOF_RX_FLAG);
}
void Handler_param10_id(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.user_param10,
            sizeof(gCommandHandler.user_param10),COMMAND_HANDLER_PARAM10_RX_FLAG);
}
#else
void Handler_param1_id(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.param1_AbsTOF_Computation_mode,
            sizeof(gCommandHandler.param1_AbsTOF_Computation_mode),COMMAND_HANDLER_PARAM1_RX_FLAG);
}
void Handler_param2_id(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.param2_ulp_bias_delay,
            sizeof(gCommandHandler.param2_ulp_bias_delay),COMMAND_HANDLER_PARAM2_RX_FLAG);
}
void Handler_param3_id(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.param3_TM_A_start_ppg,
            sizeof(gCommandHandler.param3_TM_A_start_ppg),COMMAND_HANDLER_PARAM3_RX_FLAG);
}
void Handler_param4_id(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.param4_TM_B_adc_on,
            sizeof(gCommandHandler.param4_TM_B_adc_on),COMMAND_HANDLER_PARAM4_RX_FLAG);
}

void Handler_param5_id(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.param5_TM_C_pga_bias,
            sizeof(gCommandHandler.param5_TM_C_pga_bias),COMMAND_HANDLER_PARAM5_RX_FLAG);
}

void Handler_param6_id(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.user_param6,
            sizeof(gCommandHandler.user_param6),COMMAND_HANDLER_PARAM6_RX_FLAG);
}
void Handler_param7_id(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.param7_uss_xtal_settling_count,
            sizeof(gCommandHandler.param7_uss_xtal_settling_count),COMMAND_HANDLER_PARAM7_RX_FLAG);
}
void Handler_param8_id(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.param8_env_cross_threshold,
            sizeof(gCommandHandler.param8_env_cross_threshold),COMMAND_HANDLER_PARAM8_RX_FLAG);
}
void Handler_param9_id(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.param9_searchRngTracking,
            sizeof(gCommandHandler.param9_searchRngTracking),COMMAND_HANDLER_PARAM9_RX_FLAG);
}
void Handler_param10_id(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.user_param10,
            sizeof(gCommandHandler.user_param10),COMMAND_HANDLER_PARAM10_RX_FLAG);
}
#endif
void Handler_plot_dtof_id(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.plot_dtof,
            sizeof(gCommandHandler.plot_dtof),0);
}
void Handler_plot_abs_ups_id(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.plot_abs_ups,
            sizeof(gCommandHandler.plot_abs_ups),0);
}
void Handler_plot_abs_dns_id(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.plot_abs_dns,
            sizeof(gCommandHandler.plot_abs_dns),0);
}
void Handler_plot_vol_id(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.plot_vol_flow_rate,
            sizeof(gCommandHandler.plot_vol_flow_rate),0);
}

void Handler_lea_enable(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.flowrate_unit,
            sizeof(gCommandHandler.flowrate_unit),COMMAND_HANDLER_LEA_ENABLE_RX_FLAG);
}

void Handler_req_app_req_update(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.appReqUpdate,
            sizeof(gCommandHandler.appReqUpdate),0);
}

void Handler_req_app_req_data(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.appReqData,
            sizeof(gCommandHandler.appReqData),0);
}

void Handler_req_app_req_captures(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.appReqCaptures,
            sizeof(gCommandHandler.appReqCaptures),0);
}


void Handler_app_version(Packet_t *packet)
{
    uint8_t i = 3;
    //
    // check if WRITE command
    //
    if (packet->payload[COMMAND_HANDLER_R_W_BYTE_POS] ==
            COMMAND_HANDLER_WRITE_CMD)
    {
        gCommandHandler.appType = (COMMAND_HANDLER_APP_TYPE) packet->payload[i++];
        gCommandHandler.deviceId = (COMMAND_HANDLER_DEVICE_TYPE) packet->payload[i++];
        gCommandHandler.hwId = (COMMAND_HANDLER_HARDWARE_ID) packet->payload[i++];
        gCommandHandler.fwId = (COMMAND_HANDLER_FIRMWARE_ID) packet->payload[i];

        // Clear RX flag for command
        gRXUpdateFlag &= ~(COMMAND_HANDLER_APP_VERSION_RX_FLAG);
    }else
    {
        packet->payload[COMMAND_HANDLER_R_W_BYTE_POS] =COMMAND_HANDLER_WRITE_CMD;

        // Echo values in case command was received in read command
        packet->payload[i++] = (uint8_t)gCommandHandler.appType;
        packet->payload[i++] = (uint8_t)gCommandHandler.deviceId;
        packet->payload[i++] = (uint8_t)gCommandHandler.hwId;
        packet->payload[i++] = (uint8_t)gCommandHandler.fwId;

        Comm_writePacket(packet);
    }
    // Also send out the Advanced Meter Calibration Table Status
    packet->payload[COMMAND_HANDLER_CMD_BYTE_POS] = COMMAND_HANDLER_METER_CALIBRATION_TABLE_ID;
    packet->payload[COMMAND_HANDLER_R_W_BYTE_POS] = COMMAND_HANDLER_READ_CMD;
    Handler_mtr_calibration_table_id(packet);
}

void Handler_f1_and_f2(Packet_t *packet)
{
    uint8_t i = 3;
    //
    // check if WRITE command
    //
    if (packet->payload[COMMAND_HANDLER_R_W_BYTE_POS] ==
            COMMAND_HANDLER_WRITE_CMD)
    {

                gCommandHandler.transFreq1  = (uint16_t)(packet->payload[i++]);
                gCommandHandler.transFreq1 += (uint16_t)((uint16_t)(packet->payload[i++]) << 8);
        gCommandHandler.transFreq2  = (uint16_t)(packet->payload[i++]);
                gCommandHandler.transFreq2 += (uint16_t)((uint16_t)(packet->payload[i++]) << 8);


        // Clear RX flag for command
        gRXUpdateFlag &= ~(COMMAND_HANDLER_F1_F2_RX_FLAG);
    }else
    {
        packet->payload[COMMAND_HANDLER_R_W_BYTE_POS] =COMMAND_HANDLER_WRITE_CMD;

        // Echo values in case command was received in read command
        packet->payload[i++] = (uint8_t)((gCommandHandler.transFreq1 & 0x00ff));
        packet->payload[i++] = (uint8_t)((gCommandHandler.transFreq1 & 0xff00) >> 8);
        packet->payload[i++] = (uint8_t)((gCommandHandler.transFreq2 & 0x00ff));
        packet->payload[i] = (uint8_t)((gCommandHandler.transFreq2 & 0xff00) >> 8);

        Comm_writePacket(packet);
    }

}

void Handler_pattern_opt(Packet_t *packet)
{
    processCommand(packet,(uint8_t*)&gCommandHandler.patternOption,
            sizeof(gCommandHandler.patternOption),COMMAND_HANDLER_PATTERN_OPTION_RX_FLAG);
}


void Handler_mtr_calibration_table_id(Packet_t *packet)
{
#if (USS_ALG_VFR_CALIB_MODE != USS_ALG_VFR_CALIB_OPTION_DISABLED)
    uint8_t i = 3;
    uint8_t vfrTableEnableStatus=0;

    //
    // check if WRITE command
    //
    if (packet->payload[COMMAND_HANDLER_R_W_BYTE_POS] ==
            COMMAND_HANDLER_WRITE_CMD)
    {
        gCommandHandler.mtr_calibration_table_status = (uint8_t) packet->payload[i];
        packet->payload[COMMAND_HANDLER_R_W_BYTE_POS] =COMMAND_HANDLER_WRITE_CMD;

#if (USS_ALG_VFR_CALIB_MODE == USS_ALG_VFR_CALIB_OPTION_FLOW)
        if( gCommandHandler.mtr_calibration_table_status == 0x01 )  //If the GUI is enabling the table...
        {
            vfrTableEnableStatus = 1; //Set the default value to valid
            //Check to see if the calibration table on the EVM is valid
            for( i=0 ; i < (USS_METER_VFR_CALIB_FLOW_RANGES)-1 ; i++)
            {
                //Check if alphaMins are sequentially increasing in value
                if( (gUssSWConfig.algorithmsConfig->calibObject.flowCalibObject->pMeterConfiguration[i].iq16minimumVFR >
                    gUssSWConfig.algorithmsConfig->calibObject.flowCalibObject->pMeterConfiguration[i+1].iq16minimumVFR) ||
                        gUssSWConfig.algorithmsConfig->calibObject.flowCalibObject->pMeterConfiguration[i].iq16Slope == 0 )
                {
                    vfrTableEnableStatus = 0xFF; //Table invalid
                    break;  //Break out of for loop because table is invalid
                }
            }
            //Check the last slope
            if( gUssSWConfig.algorithmsConfig->calibObject.flowCalibObject->pMeterConfiguration[(USS_METER_VFR_CALIB_FLOW_RANGES)-1].iq16Slope == 0 )
            {
                vfrTableEnableStatus = 0xFF; //Table invalid
            }

            packet->payload[3] = vfrTableEnableStatus;    //Write the Advanced Calibration Table Status
        }

        if( vfrTableEnableStatus == 1 ){
            gUssSWConfig.algorithmsConfig->volumeCalibrationOption = USS_Alg_volume_flow_Calibration_Option_flow;
            gUssSWConfig.algorithmsConfig->calibObject.flowCalibObject->numOfRanges = USS_METER_VFR_CALIB_FLOW_RANGES;
        }
        else{
            gUssSWConfig.algorithmsConfig->volumeCalibrationOption = USS_Alg_volume_flow_Calibration_Option_disabled;
            gUssSWConfig.algorithmsConfig->calibObject.flowCalibObject->numOfRanges = 0;
        }
#endif

#if (USS_ALG_VFR_CALIB_MODE == USS_ALG_VFR_CALIB_OPTION_FLOW_TEMPERATURE)
        if( gCommandHandler.mtr_calibration_table_status == 0x01 )
        {
            vfrTableEnableStatus = 1;
            gUssSWConfig.algorithmsConfig->volumeCalibrationOption = USS_Alg_volume_flow_Calibration_Option_flow_temperature;
        }
        else
        {
            gUssSWConfig.algorithmsConfig->volumeCalibrationOption = USS_Alg_volume_flow_Calibration_Option_disabled;
        }

        packet->payload[3] = vfrTableEnableStatus;    //Write the Advanced Calibration Table Status
#endif

        USS_initAlgorithms(&gUssSWConfig);

        Comm_writePacket(packet);   //Write back to the GUI with the correct table status response
        // Clear RX flag for command
        gRXUpdateFlag &= ~(COMMAND_HANDLER_METER_CALIBRATION_TABLE_RX_FLAG);

    }
    else
    {
        packet->payload[COMMAND_HANDLER_R_W_BYTE_POS] =COMMAND_HANDLER_WRITE_CMD;
        // Echo values in case command was received in read command
        packet->payload[i++] = (uint8_t)gCommandHandler.mtr_calibration_table_status;
        Comm_writePacket(packet);
    }
#endif
}

void Handler_req_calibration_config_id(Packet_t *packet)
{
#if (USS_ALG_VFR_CALIB_MODE == USS_ALG_VFR_CALIB_OPTION_FLOW)
    uint8_t i = 3;
    uint8_t j = 0;
    uint8_t* temp;
    float mcValues[3];

    //
    // check if READ command
    //
    if (packet->payload[COMMAND_HANDLER_R_W_BYTE_POS] ==    //GUI requesting MCU Config
            COMMAND_HANDLER_READ_CMD)
    {

        //Initialize the packet as a "write" and send the number of calibration ranges
        packet->payload[COMMAND_HANDLER_R_W_BYTE_POS] = COMMAND_HANDLER_WRITE_CMD;
        packet->payload[i++] = USS_METER_VFR_CALIB_FLOW_RANGES;
        packet->payload[i] = CALIB_MODE_LINEAR_REGRESSION;
        Comm_writePacket(packet);
  
        __delay_cycles((uint32_t)(USS_MCLK_FREQ_IN_HZ*.001));       //Delay for 1ms

        //Send the Calibration Linear Constants
        packet->payload[COMMAND_HANDLER_CMD_BYTE_POS] = COMMAND_HANDLER_CALIBRATION_LINEAR_CONSTANTS_ID;
        for ( i=0 ; i < USS_METER_VFR_CALIB_FLOW_RANGES ; i++)
        {
            packet->payload[3] = (i+1);
            mcValues[0] = _IQ16toF(gUssSWConfig.algorithmsConfig->calibObject.flowCalibObject->pMeterConfiguration[i].iq16minimumVFR);
            mcValues[1] = _IQ16toF(gUssSWConfig.algorithmsConfig->calibObject.flowCalibObject->pMeterConfiguration[i].iq16Slope);
            mcValues[2] = _IQ16toF(gUssSWConfig.algorithmsConfig->calibObject.flowCalibObject->pMeterConfiguration[i].iq16Offset);

            // Scale Minimum VFR by additional scale factor
            mcValues[0] *= USS_VFR_LARGE_PIPE_ADDL_SF;
            // Scale Offset by additional scale factor
            mcValues[2] *= USS_VFR_LARGE_PIPE_ADDL_SF;

            temp = (uint8_t*) &mcValues[0];  //temp points to the address of the meter constant calibration
            for(j = 0 ; j < 12 ; j++)
            {
                packet->payload[j+4] = *(temp+j);
            }
            Comm_writePacket(packet);
            
            __delay_cycles((uint32_t)(USS_MCLK_FREQ_IN_HZ*.001));       //Delay for 1ms
        }
    }
    else    //GUI initiating an MCU Config
    {
        gCommandHandler.updateCalib = packet->payload[5];   //Store the calibration start/stop signal

        //Send Device ACK
        packet->payload[COMMAND_HANDLER_R_W_BYTE_POS] = COMMAND_HANDLER_WRITE_CMD;
        packet->payload[3] = packet->payload[COMMAND_HANDLER_CMD_BYTE_POS]; //Store the previous Command ID
        packet->payload[COMMAND_HANDLER_CMD_BYTE_POS] = COMMAND_HANDLER_DEVICE_ACK;
        Comm_writePacket(packet);
    }
#endif
}

void Handler_max_vfr_id(Packet_t *packet)
{
#if (USS_ALG_VFR_CALIB_MODE == USS_ALG_VFR_CALIB_OPTION_FLOW)
    //
    // check if WRITE command
    //
    if (packet->payload[COMMAND_HANDLER_R_W_BYTE_POS] ==
            COMMAND_HANDLER_WRITE_CMD)
    {
        // This command has been deprecated

        //Send Device ACK
        packet->payload[COMMAND_HANDLER_R_W_BYTE_POS] = COMMAND_HANDLER_WRITE_CMD;
        packet->payload[3] = packet->payload[COMMAND_HANDLER_CMD_BYTE_POS]; //Store the previous Command ID
        packet->payload[COMMAND_HANDLER_CMD_BYTE_POS] = COMMAND_HANDLER_DEVICE_ACK;
        Comm_writePacket(packet);

    }

#endif
}

void Handler_calib_linear_constants_id(Packet_t *packet)
{
#if (USS_ALG_VFR_CALIB_MODE == USS_ALG_VFR_CALIB_OPTION_FLOW)
    uint8_t i = 3;
    uint8_t j = 0;
    uint8_t rangeNum = 0;
    uint8_t* temp;
    float mcValues[3];

    //
    // check if WRITE command
    //
    if (packet->payload[COMMAND_HANDLER_R_W_BYTE_POS] ==
            COMMAND_HANDLER_WRITE_CMD)
    {
        rangeNum = (packet->payload[i])-1;

        temp = (uint8_t*) &mcValues[0];

        for(j = 0 ; j < 12 ; j++)
        {
            *(temp+j) = packet->payload[j+4];
        }

        // Scale Minimum VFR by additional scale factor
        mcValues[0] /= USS_VFR_LARGE_PIPE_ADDL_SF;
        // Scale Offset by additional scale factor
        mcValues[2] /= USS_VFR_LARGE_PIPE_ADDL_SF;

        // Store results
        gUssSWConfig.algorithmsConfig->calibObject.flowCalibObject->pMeterConfiguration[rangeNum].iq16minimumVFR = _IQ16(mcValues[0]);
        gUssSWConfig.algorithmsConfig->calibObject.flowCalibObject->pMeterConfiguration[rangeNum].iq16Slope = _IQ16(mcValues[1]);
        gUssSWConfig.algorithmsConfig->calibObject.flowCalibObject->pMeterConfiguration[rangeNum].iq16Offset = _IQ16(mcValues[2]);

        //Send Device ACK
        packet->payload[COMMAND_HANDLER_R_W_BYTE_POS] = COMMAND_HANDLER_WRITE_CMD;
        packet->payload[3] = packet->payload[COMMAND_HANDLER_CMD_BYTE_POS]; //Store the previous Command ID
        packet->payload[COMMAND_HANDLER_CMD_BYTE_POS] = COMMAND_HANDLER_DEVICE_ACK;
        Comm_writePacket(packet);
    }
#endif
}

uint32_t resolveRXFlag(uint8_t command)
{
    uint32_t flag;
    switch (command) {
    case COMMAND_HANDLER_GAP_PLS_ADC_START_ID:
        flag = COMMAND_HANDLER_GAP_PLS_ADC_START_RX_FLAG;
        break;
    case COMMAND_HANDLER_NUM_PLS_ID:
        flag = COMMAND_HANDLER_NUM_PLS_RX_FLAG;
        break;
    case COMMAND_HANDLER_GAP_UPS_DNS_ID:
        flag = COMMAND_HANDLER_GAP_UPS_DNS_RX_FLAG;
        break;
    case COMMAND_HANDLER_GAP_UPS_UPS_ID:
        flag = COMMAND_HANDLER_GAP_UPS_UPS_RX_FLAG;
        break;
    case COMMAND_HANDLER_GAIN_CONTROL_ID:
        flag = COMMAND_HANDLER_GAIN_CONTROL_RX_FLAG;
        break;
    case COMMAND_HANDLER_METER_CONSTANT_ID:
        flag = COMMAND_HANDLER_METER_CONSTANT_RX_FLAG;
        break;
    case COMMAND_HANDLER_XT2_FREQ_ID:
        flag = COMMAND_HANDLER_XT2_FREQ_RX_FLAG;
        break;
    case COMMAND_HANDLER_ADC_SAMP_FREQ_ID:
        flag = COMMAND_HANDLER_ADC_SAMP_FREQ_RX_FLAG;
        break;
    case COMMAND_HANDLER_SIG_SAMP_FREQ_ID:
        flag = COMMAND_HANDLER_SIG_SAMP_FREQ_RX_FLAG;
        break;
    case COMMAND_HANDLER_ADC_OVERSAMPLING_ID:
        flag = COMMAND_HANDLER_ADC_OVERSAMPLING_RX_FLAG;
        break;
    case COMMAND_HANDLER_DELTA_TOF_OFFSET_ID:
        flag = COMMAND_HANDLER_DELTA_TOF_OFFSET_RX_FLAG;
        break;
    case COMMAND_HANDLER_ABS_TOF_ADDITIONAL_ID:
        flag = COMMAND_HANDLER_ABS_TOF_ADDITIONAL_RX_FLAG;
        break;
    case COMMAND_HANDLER_CAPTURE_DURATION_ID:
        flag = COMMAND_HANDLER_CAPTURE_DURATION_RX_FLAG;
        break;
#if defined(USS_GAS_CONFIGURATION)			
    case COMMAND_HANDLER_COMPUTATION_MODE_ID:
        flag = COMMAND_HANDLER_COMPUTATION_MODE_RX_FLAG;
        break;
    case COMMAND_HANDLER_ENV_CROSS_THRESHOLD_ID:
        flag = COMMAND_HANDLER_ENV_CROSS_THRESHOLD_RX_FLAG;
        break;
    case COMMAND_HANDLER_TMA_STARTPPG_ID:
        flag = COMMAND_HANDLER_TMA_STARTPPG_RX_FLAG;
        break;
    case COMMAND_HANDLER_TMB_ADCON_ID:
        flag = COMMAND_HANDLER_TMB_ADCON_RX_FLAG;
        break;
    case COMMAND_HANDLER_TMC_PGABIAS_ID:
        flag = COMMAND_HANDLER_TMC_PGABIAS_FLAG;
        break;
    case COMMAND_HANDLER_XTAL_SETTLING_ID:
        flag = COMMAND_HANDLER_XTAL_SETTLING_FLAG;
        break;
    case COMMAND_HANDLER_NEG_RNG_DTOF_ID:
        flag = COMMAND_HANDLER_NEG_RNG_DTOF_RX_FLAG;
        break;
    case COMMAND_HANDLER_POS_RNG_DTOF_ID:
        flag = COMMAND_HANDLER_POS_RNG_DTOF_RX_FLAG;
        break;
    case COMMAND_HANDLER_SEARCH_RNG_ABS_TOF_ID:
        flag = COMMAND_HANDLER_SEARCH_RNG_ABS_TOF_RX_FLAG;
        break;
    case COMMAND_HANDLER_PARAM10_ID:
        flag = COMMAND_HANDLER_PARAM10_RX_FLAG;
        break;
#else
	case COMMAND_HANDLER_PARAM1_ID:
        flag = COMMAND_HANDLER_PARAM1_RX_FLAG;
        break;
    case COMMAND_HANDLER_PARAM2_ID:
        flag = COMMAND_HANDLER_PARAM2_RX_FLAG;
        break;
    case COMMAND_HANDLER_PARAM3_ID:
        flag = COMMAND_HANDLER_PARAM3_RX_FLAG;
        break;
    case COMMAND_HANDLER_PARAM4_ID:
        flag = COMMAND_HANDLER_PARAM4_RX_FLAG;
        break;
	case COMMAND_HANDLER_PARAM5_ID:
        flag = COMMAND_HANDLER_PARAM5_RX_FLAG;
        break;
    case COMMAND_HANDLER_PARAM6_ID:
        flag = COMMAND_HANDLER_PARAM6_RX_FLAG;
        break;	
    case COMMAND_HANDLER_PARAM7_ID:
        flag = COMMAND_HANDLER_PARAM7_RX_FLAG;
        break;
    case COMMAND_HANDLER_PARAM8_ID:
        flag = COMMAND_HANDLER_PARAM8_RX_FLAG;
        break;
    case COMMAND_HANDLER_PARAM9_ID:
        flag = COMMAND_HANDLER_PARAM9_RX_FLAG;
        break;
    case COMMAND_HANDLER_PARAM10_ID:
        flag = COMMAND_HANDLER_PARAM10_RX_FLAG;
        break;
#endif		
    case COMMAND_HANDLER_LEA_ENABLE_ID:
        flag = COMMAND_HANDLER_LEA_ENABLE_RX_FLAG;
        break;
    case COMMAND_HANDLER_F1_F2_ID:
        flag = COMMAND_HANDLER_F1_F2_RX_FLAG;
        break;
    case COMMAND_HANDLER_PATTERN_OPT_ID:
        flag = COMMAND_HANDLER_PATTERN_OPTION_RX_FLAG;
        break;
    case COMMAND_HANDLER_METER_CALIBRATION_TABLE_ID:
        flag = COMMAND_HANDLER_METER_CALIBRATION_TABLE_RX_FLAG;
        break;
    default:
        flag = 0;
        break;
    }

    return flag;
}

/**********CommandHandler_setApplicationVersion**********/
/* this function initializes the global variable "gComandHandler" of type "COMAND_HANDLER"
 * ... "COMAND_HANDLER" is the struct that is used to hold all the data received from the GUI
 * this global variable is used to store all the desired values/data retrieved from a GUI 'Request Update'
 *
 * specifically the following routine will initialize the appType, deviceID, hwId, and fwId variables within
 * the "COMMAND_HANDLER" struct for "gComandHandler"
 */
void CommandHandler_setApplicationVersion(
        COMMAND_HANDLER_APP_TYPE appType,
        COMMAND_HANDLER_DEVICE_TYPE deviceID,
        COMMAND_HANDLER_HARDWARE_ID hwId,
        COMMAND_HANDLER_FIRMWARE_ID fwId)
{
    gCommandHandler.appType = appType;
    gCommandHandler.deviceId = deviceID;
    gCommandHandler.hwId = hwId;
    gCommandHandler.fwId = fwId;
}

void CommandHandler_setAdvMtrCalibTableStatus(
        COMMAND_HANDLER_ADV_CALIB_TABLE_STATUS advCalTbleStatus)
{
    gCommandHandler.mtr_calibration_table_status = advCalTbleStatus;

}

void CommandHandler_transmittDebugData(
        Packet_t *packet, float data)
{
    uint8_t* pData = (uint8_t*)(&data);

    // Generate packet ADC capture packets in START mode
    packet->length = COMMAND_HANDLER_CONFIG_PACKET_SIZE;
    packet->payload[0] = COMMAND_HANDLER_USS_GUI_ID_BYTE;
    packet->payload[1] = COMMAND_HANDLER_PLOT_GENERIC_PLOT_ID;
    packet->payload[2] = COMMAND_HANDLER_WRITE_CMD;
    packet->payload[3] = *pData++;
    packet->payload[4] = *pData++;
    packet->payload[5] = *pData++;
    packet->payload[6] = *pData;

    Comm_writePacket(packet);

}

void CommandHandler_transmittAdvancedDebugData(
        Packet_t *packet, float data, uint8_t plotterNumber)
{
    uint8_t* pData = (uint8_t*)(&data);

    // Generate packet ADC capture packets in START mode
    packet->length = COMMAND_HANDLER_ADVANCED_DEBUG_PACKET_SIZE;
    packet->payload[0] = COMMAND_HANDLER_USS_GUI_ID_BYTE;
    packet->payload[1] = COMMAND_HANDLER_PLOT_ADVANCED_GENERIC_PLOT_ID;
    packet->payload[2] = COMMAND_HANDLER_WRITE_CMD;
    packet->payload[3] = *pData++;
    packet->payload[4] = *pData++;
    packet->payload[5] = *pData++;
    packet->payload[6] = *pData;
    packet->payload[7] = plotterNumber;

    Comm_writePacket(packet);

}

void CommandHandler_transmitErrorPacket(Packet_t *packet,
        USS_message_code code)
{

    if((USS_message_code_no_error != code) || (USS_message_code_valid_results != code))
    {
        // Generate packet ADC capture packets in START mode
        packet->length = COMMAND_HANDLER_CONFIG_PACKET_SIZE;
        packet->payload[0] = COMMAND_HANDLER_USS_GUI_ID_BYTE;
        packet->payload[1] = COMMAND_HANDLER_ERROR_ID;
        packet->payload[2] = COMMAND_HANDLER_WRITE_CMD;
        packet->payload[3] = (uint8_t) code;

        Comm_writePacket(packet);
    }
}

void CommandHandler_transmitUserMessagePacket(Packet_t *packet,
        uint16_t appMessageCode)
{
    // Generate packet ADC capture packets in START mode
    packet->length = COMMAND_HANDLER_CONFIG_PACKET_SIZE;
    packet->payload[0] = COMMAND_HANDLER_USS_GUI_ID_BYTE;
    packet->payload[1] = COMMAND_HANDLER_USR_MSG_ID;
    packet->payload[2] = COMMAND_HANDLER_WRITE_CMD;
    packet->payload[3] = (uint8_t)((appMessageCode & 0x00ff));
    packet->payload[4] = (uint8_t)((appMessageCode & 0xff00) >> 8);

    Comm_writePacket(packet);
}

void CommandHandler_transmitUserErrorMsgPacket(Packet_t *packet,
        uint8_t appMessageCode)
{
    // Generate packet ADC capture packets in START mode
    packet->length = COMMAND_HANDLER_CONFIG_PACKET_SIZE;
    packet->payload[0] = COMMAND_HANDLER_USS_GUI_ID_BYTE;
    packet->payload[1] = COMMAND_HANDLER_USR_MSG_ID;
    packet->payload[2] = COMMAND_HANDLER_WRITE_CMD;
    packet->payload[3] = 0x01;  // Error Code
    packet->payload[4] = 0x00;
    packet->payload[5] = appMessageCode;
    packet->payload[6] = 0x55;  // Password to enable extra message code

    Comm_writePacket(packet);
}
