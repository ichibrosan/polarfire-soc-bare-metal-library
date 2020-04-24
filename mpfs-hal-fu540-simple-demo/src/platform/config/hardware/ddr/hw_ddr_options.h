/*******************************************************************************
 * Copyright 2019 Microchip Corporation.
 * 
 * SPDX-License-Identifier: MIT
 * 
 * @file hw_ddr_options.h
 * @author Microchip-FPGA Embedded Systems Solutions
 * 
 * Generated using Libero version: 10.0.0
 * Libero design name: test design
 * MPFS part number used in design: M2PFS250T_ES
 * Date generated by Libero: 2019-11-28 16:59:04
 * Format version of XML description: 0.2.7
 * PolarFire SoC Configuration Generator version: 0.2.7
 * 
 * Note 1: This file should not be edited. If you need to modify a parameter,
 * without going through the Libero flow or editing the associated xml file,
 * the following method is recommended:
 *   1. edit the file platform//config//software//mpfs_hal//mss_sw_config.h
 *   2. define the value you want to override there. (Note: There is a 
 *      commented example in mss_sw_config.h)
 * Note 2: The definition in mss_sw_config.h takes precedence, as 
 * mss_sw_config.h is included prior to the hw_ddr_options.h in the hal 
 * (see platform//mpfs_hal//mss_hal.h)
 *
 */ 

#ifndef HW_DDR_OPTIONS_H_
#define HW_DDR_OPTIONS_H_


#ifdef __cplusplus
extern  "C" {
#endif

#if !defined (LIBERO_SETTING_CA_BUS_RX_OFF_POST_TRAINING)
/*Tip config: Referenced receivers in the CA bus are turned on for CA training. 
These burn static power.(0x01 => turn off ; 0x00 => no action ) */ 
#define LIBERO_SETTING_CA_BUS_RX_OFF_POST_TRAINING    0x00000001UL
    /* CA_BUS_RX_OFF_POST_TRAINING       [0:1]   RW value= 0x1 */ 
#endif
#if !defined (LIBERO_SETTING_USER_INPUT_PHY_RANKS_TO_TRAIN)
/*Tip config: 1 => 1 rank, 3 => 2 ranks */ 
#define LIBERO_SETTING_USER_INPUT_PHY_RANKS_TO_TRAIN    0x00000003UL
    /* USER_INPUT_PHY_RANKS_TO_TRAIN     [0:2]   RW value= 0x3 */ 
#endif
#if !defined (LIBERO_SETTING_TRAINING_SKIP_SETTING)
/*Tip config: Pick what trainings we want performed by the TIP, default is 0x1F 
*/ 
#define LIBERO_SETTING_TRAINING_SKIP_SETTING    0x0000001FUL
    /* SKIP_BCLKSCLK_TIP_TRAINING        [0:1]   RW value= 0x1 */ 
    /* SKIP_ADDCMD_TIP_TRAINING          [1:1]   RW value= 0x1 */ 
    /* SKIP_WRLVL_TIP_TRAINING           [2:1]   RW value= 0x1 */ 
    /* SKIP_RDGATE_TIP_TRAINING          [3:1]   RW value= 0x1 */ 
    /* SKIP_DQ_DQS_OPT_TIP_TRAINING      [4:1]   RW value= 0x1 */ 
#endif
#if !defined (LIBERO_SETTING_TIP_CFG_PARAMS)
/*Tip config: default: 0x2,0x4,0x0,0x1F,0x1F */ 
#define LIBERO_SETTING_TIP_CFG_PARAMS    0x07C3E022UL
    /* ADDCMD_OFFSET                     [0:3]   RW value= 0x2 */ 
    /* BCKLSCLK_OFFSET                   [3:3]   RW value= 0x4 */ 
    /* WRCALIB_WRITE_COUNT               [6:7]   RW value= 0x0 */ 
    /* READ_GATE_MIN_READS               [13:8]  RW value= 0x1F */ 
    /* ADDRCMD_WAIT_COUNT                [22:8]  RW value= 0x1F */ 
#endif
#if !defined (LIBERO_SETTING_TIP_CONFIG_PARAMS_BCLK_VCOPHS_OFFSET)
/*in simulation we need to set this to 2, for hardware it will be dependent on 
the trace lengths */ 
#define LIBERO_SETTING_TIP_CONFIG_PARAMS_BCLK_VCOPHS_OFFSET    0x00000002UL
    /* TIP_CONFIG_PARAMS_BCLK_VCOPHS     [0:32]  RW value= 0x02 */ 
#endif

#ifdef __cplusplus
}
#endif


#endif /* #ifdef HW_DDR_OPTIONS_H_ */

