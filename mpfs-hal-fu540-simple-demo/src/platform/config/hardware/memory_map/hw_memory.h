/*******************************************************************************
 * Copyright 2019 Microchip Corporation.
 * 
 * SPDX-License-Identifier: MIT
 * 
 * @file hw_memory.h
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
 * mss_sw_config.h is included prior to the hw_memory.h in the hal 
 * (see platform//mpfs_hal//mss_hal.h)
 *
 */ 

#ifndef HW_MEMORY_H_
#define HW_MEMORY_H_


#ifdef __cplusplus
extern  "C" {
#endif

#if !defined (LIBERO_SETTING_RESET_VECTOR_HART0)
/*Reset vector hart0 */ 
#define LIBERO_SETTING_RESET_VECTOR_HART0    0x20220000 */ 
#define LIBERO_SETTING_RESET_VECTOR_HART0_SIZE    0x4    /* Length of memory block*/ 
#endif
#if !defined (LIBERO_SETTING_RESET_VECTOR_HART1)
/*Reset vector hart1 */ 
#define LIBERO_SETTING_RESET_VECTOR_HART1    0x20220000 */ 
#define LIBERO_SETTING_RESET_VECTOR_HART1_SIZE    0x4    /* Length of memory block*/ 
#endif
#if !defined (LIBERO_SETTING_RESET_VECTOR_HART2)
/*Reset vector hart2 */ 
#define LIBERO_SETTING_RESET_VECTOR_HART2    0x20220000 */ 
#define LIBERO_SETTING_RESET_VECTOR_HART2_SIZE    0x4    /* Length of memory block*/ 
#endif
#if !defined (LIBERO_SETTING_RESET_VECTOR_HART3)
/*Reset vector hart3 */ 
#define LIBERO_SETTING_RESET_VECTOR_HART3    0x20220000 */ 
#define LIBERO_SETTING_RESET_VECTOR_HART3_SIZE    0x4    /* Length of memory block*/ 
#endif
#if !defined (LIBERO_SETTING_RESET_VECTOR_HART4)
/*Reset vector hart4 */ 
#define LIBERO_SETTING_RESET_VECTOR_HART4    0x20220000 */ 
#define LIBERO_SETTING_RESET_VECTOR_HART4_SIZE    0x4    /* Length of memory block*/ 
#endif
#if !defined (LIBERO_SETTING_DDR_32_CACHE)
/*example instance of memory */ 
#define LIBERO_SETTING_DDR_32_CACHE    0x80000000 */ 
#define LIBERO_SETTING_DDR_32_CACHE_SIZE    0x100000    /* Length of memory block*/ 
#endif
#if !defined (LIBERO_SETTING_DDR_32_NON_CACHE)
/*example instance */ 
#define LIBERO_SETTING_DDR_32_NON_CACHE    0xA0000000 */ 
#define LIBERO_SETTING_DDR_32_NON_CACHE_SIZE    0x100000    /* Length of memory block*/ 
#endif
#if !defined (LIBERO_SETTING_DDR_64_CACHE)
/*64 bit address  */ 
#define LIBERO_SETTING_DDR_64_CACHE    0x1000000000 */ 
#define LIBERO_SETTING_DDR_64_CACHE_SIZE    0x100000    /* Length of memory block*/ 
#endif
#if !defined (LIBERO_SETTING_DDR_64_NON_CACHE)
/*64 bit address  */ 
#define LIBERO_SETTING_DDR_64_NON_CACHE    0x1400000000 */ 
#define LIBERO_SETTING_DDR_64_NON_CACHE_SIZE    0x100000    /* Length of memory block*/ 
#endif
#if !defined (LIBERO_SETTING_DDR_32_WCB)
/*example instance */ 
#define LIBERO_SETTING_DDR_32_WCB    0xD0000000 */ 
#define LIBERO_SETTING_DDR_32_WCB_SIZE    0x100000    /* Length of memory block*/ 
#endif
#if !defined (LIBERO_SETTING_DDR_64_WCB)
/*64 bit address  */ 
#define LIBERO_SETTING_DDR_64_WCB    0x1800000000 */ 
#define LIBERO_SETTING_DDR_64_WCB_SIZE    0x100000    /* Length of memory block*/ 
#endif

#ifdef __cplusplus
}
#endif


#endif /* #ifdef HW_MEMORY_H_ */

