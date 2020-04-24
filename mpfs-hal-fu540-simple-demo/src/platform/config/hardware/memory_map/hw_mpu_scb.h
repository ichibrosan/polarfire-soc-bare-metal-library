/*******************************************************************************
 * Copyright 2019 Microchip Corporation.
 * 
 * SPDX-License-Identifier: MIT
 * 
 * @file hw_mpu_scb.h
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
 * mss_sw_config.h is included prior to the hw_mpu_scb.h in the hal 
 * (see platform//mpfs_hal//mss_hal.h)
 *
 */ 

#ifndef HW_MPU_SCB_H_
#define HW_MPU_SCB_H_


#ifdef __cplusplus
extern  "C" {
#endif

#if !defined (LIBERO_SETTING_SCB_MPU_CFG_PMP0)
/*mpu setup register, 64 bits */ 
#define LIBERO_SETTING_SCB_MPU_CFG_PMP0    0x0500000000000022ULL
    /* PMP                               [0:38]  RW value= 0x22 */ 
    /* RESERVED                          [38:18] RW value= 0x0 */ 
    /* MODE                              [56:8]  RW value= 0x5 */ 
#endif
#if !defined (LIBERO_SETTING_SCB_MPU_CFG_PMP1)
/*mpu setup register, 64 bits */ 
#define LIBERO_SETTING_SCB_MPU_CFG_PMP1    0x0500000000000022ULL
    /* PMP                               [0:38]  RW value= 0x22 */ 
    /* RESERVED                          [38:18] RW value= 0x0 */ 
    /* MODE                              [56:8]  RW value= 0x5 */ 
#endif
#if !defined (LIBERO_SETTING_SCB_MPU_CFG_PMP2)
/*pmp setup register, 64 bits */ 
#define LIBERO_SETTING_SCB_MPU_CFG_PMP2    0x0500000000000022ULL
    /* PMP                               [0:38]  RW value= 0x22 */ 
    /* RESERVED                          [38:18] RW value= 0x0 */ 
    /* MODE                              [56:8]  RW value= 0x5 */ 
#endif
#if !defined (LIBERO_SETTING_SCB_MPU_CFG_PMP3)
/*pmp setup register, 64 bits */ 
#define LIBERO_SETTING_SCB_MPU_CFG_PMP3    0x0500000000000022ULL
    /* PMP                               [0:38]  RW value= 0x22 */ 
    /* RESERVED                          [38:18] RW value= 0x0 */ 
    /* MODE                              [56:8]  RW value= 0x5 */ 
#endif
#if !defined (LIBERO_SETTING_SCB_MPU_CFG_PMP4)
/*pmp setup register, 64 bits */ 
#define LIBERO_SETTING_SCB_MPU_CFG_PMP4    0x0500000000000022ULL
    /* PMP                               [0:38]  RW value= 0x22 */ 
    /* RESERVED                          [38:18] RW value= 0x0 */ 
    /* MODE                              [56:8]  RW value= 0x5 */ 
#endif
#if !defined (LIBERO_SETTING_SCB_MPU_CFG_PMP5)
/*pmp setup register, 64 bits */ 
#define LIBERO_SETTING_SCB_MPU_CFG_PMP5    0x0500000000000022ULL
    /* PMP                               [0:38]  RW value= 0x22 */ 
    /* RESERVED                          [38:18] RW value= 0x0 */ 
    /* MODE                              [56:8]  RW value= 0x5 */ 
#endif
#if !defined (LIBERO_SETTING_SCB_MPU_CFG_PMP6)
/*pmp setup register, 64 bits */ 
#define LIBERO_SETTING_SCB_MPU_CFG_PMP6    0x0500000000000022ULL
    /* PMP                               [0:38]  RW value= 0x22 */ 
    /* RESERVED                          [38:18] RW value= 0x0 */ 
    /* MODE                              [56:8]  RW value= 0x5 */ 
#endif
#if !defined (LIBERO_SETTING_SCB_MPU_CFG_PMP7)
/*pmp setup register, 64 bits */ 
#define LIBERO_SETTING_SCB_MPU_CFG_PMP7    0x0500000000000022ULL
    /* PMP                               [0:38]  RW value= 0x22 */ 
    /* RESERVED                          [38:18] RW value= 0x0 */ 
    /* MODE                              [56:8]  RW value= 0x5 */ 
#endif

#ifdef __cplusplus
}
#endif


#endif /* #ifdef HW_MPU_SCB_H_ */

