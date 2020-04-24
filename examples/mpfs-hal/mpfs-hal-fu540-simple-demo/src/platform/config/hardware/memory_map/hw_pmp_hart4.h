/*******************************************************************************
 * Copyright 2019-2020 Microchip FPGA Embedded Systems Solutions.
 * 
 * SPDX-License-Identifier: MIT
 * 
 * @file hw_pmp_hart4.h
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
 * mss_sw_config.h is included prior to the hw_pmp_hart4.h in the hal 
 * (see platform//mpfs_hal//mss_hal.h)
 *
 */ 

#ifndef HW_PMP_HART4_H_
#define HW_PMP_HART4_H_


#ifdef __cplusplus
extern  "C" {
#endif

#if !defined (LIBERO_SETTING_HART4_CSR_PMPCFG0)
/*PMP configuration for 8 adress regions, bit 0 read, bit 1 write, bit 2 
execute, bit 7 disable, bits 3,4 address format (0x18 => NAPOT) */ 
#define LIBERO_SETTING_HART4_CSR_PMPCFG0    0x0000000000000000ULL
    /* PMP0CFG                           [0:8]   RW value= 0 */ 
    /* PMP1CFG                           [8:8]   RW value= 0 */ 
    /* PMP2CFG                           [16:8]  RW value= 0 */ 
    /* PMP3CFG                           [24:8]  RW value= 0 */ 
    /* PMP4CFG                           [32:8]  RW value= 0 */ 
    /* PMP5CFG                           [40:8]  RW value= 0 */ 
    /* PMP6CFG                           [48:8]  RW value= 0 */ 
    /* PMP7CFG                           [56:8]  RW value= 0 */ 
#endif
#if !defined (LIBERO_SETTING_HART4_CSR_PMPCFG2)
/*PMP configuration for 8 address regions, bit 0 read, bit 1 write, bit 2 
execute, bit 7 disable, bits 3,4 address format (0x18 => NAPOT) */ 
#define LIBERO_SETTING_HART4_CSR_PMPCFG2    0x0000000000000000ULL
    /* PMP8CFG                           [0:8]   RW value= 0 */ 
    /* PMP9CFG                           [8:8]   RW value= 0 */ 
    /* PMP10CFG                          [16:8]  RW value= 0 */ 
    /* PMP11CFG                          [24:8]  RW value= 0 */ 
    /* PMP12CFG                          [32:8]  RW value= 0 */ 
    /* PMP13CFG                          [40:8]  RW value= 0 */ 
    /* PMP14CFG                          [48:8]  RW value= 0 */ 
    /* PMP15CFG                          [56:8]  RW value= 0 */ 
#endif
#if !defined (LIBERO_SETTING_HART4_CSR_PMPADDR0)
/*PMP ADRESS and size, format determined from bit 3 and 4 of configuration byte 
in CSR_PMPCFGx */ 
#define LIBERO_SETTING_HART4_CSR_PMPADDR0    0x0000000000000000ULL
    /* CSR_PMPADDR0                      [0:64]  RW value= 0 */ 
#endif
#if !defined (LIBERO_SETTING_HART4_CSR_PMPADDR1)
/*PMP ADRESS and size, format determined from bit 3 and 4 of configuration byte 
in CSR_PMPCFGx */ 
#define LIBERO_SETTING_HART4_CSR_PMPADDR1    0x0000000000000000ULL
    /* CSR_PMPADDR1                      [0:64]  RW value= 0 */ 
#endif
#if !defined (LIBERO_SETTING_HART4_CSR_PMPADDR2)
/*PMP ADRESS and size, format determined from bit 3 and 4 of configuration byte 
in CSR_PMPCFGx */ 
#define LIBERO_SETTING_HART4_CSR_PMPADDR2    0x0000000000000000ULL
    /* CSR_PMPADDR2                      [0:64]  RW value= 0 */ 
#endif
#if !defined (LIBERO_SETTING_HART4_CSR_PMPADDR3)
/*PMP ADRESS and size, format determined from bit 3 and 4 of configuration byte 
in CSR_PMPCFGx */ 
#define LIBERO_SETTING_HART4_CSR_PMPADDR3    0x0000000000000000ULL
    /* CSR_PMPADDR3                      [0:64]  RW value= 0 */ 
#endif
#if !defined (LIBERO_SETTING_HART4_CSR_PMPADDR4)
/*PMP ADRESS and size, format determined from bit 3 and 4 of configuration byte 
in CSR_PMPCFGx */ 
#define LIBERO_SETTING_HART4_CSR_PMPADDR4    0x0000000000000000ULL
    /* CSR_PMPADDR4                      [0:64]  RW value= 0 */ 
#endif
#if !defined (LIBERO_SETTING_HART4_CSR_PMPADDR5)
/*PMP ADRESS and size, format determined from bit 3 and 4 of configuration byte 
in CSR_PMPCFGx */ 
#define LIBERO_SETTING_HART4_CSR_PMPADDR5    0x0000000000000000ULL
    /* CSR_PMPADDR5                      [0:64]  RW value= 0 */ 
#endif
#if !defined (LIBERO_SETTING_HART4_CSR_PMPADDR6)
/*PMP ADRESS and size, format determined from bit 3 and 4 of configuration byte 
in CSR_PMPCFGx */ 
#define LIBERO_SETTING_HART4_CSR_PMPADDR6    0x0000000000000000ULL
    /* CSR_PMPADDR6                      [0:64]  RW value= 0 */ 
#endif
#if !defined (LIBERO_SETTING_HART4_CSR_PMPADDR7)
/*PMP ADRESS and size, format determined from bit 3 and 4 of configuration byte 
in CSR_PMPCFGx */ 
#define LIBERO_SETTING_HART4_CSR_PMPADDR7    0x0000000000000000ULL
    /* CSR_PMPADDR7                      [0:64]  RW value= 0 */ 
#endif
#if !defined (LIBERO_SETTING_HART4_CSR_PMPADDR8)
/*PMP ADRESS and size, format determined from bit 3 and 4 of configuration byte 
in CSR_PMPCFGx */ 
#define LIBERO_SETTING_HART4_CSR_PMPADDR8    0x0000000000000000ULL
    /* CSR_PMPADDR8                      [0:64]  RW value= 0 */ 
#endif
#if !defined (LIBERO_SETTING_HART4_CSR_PMPADDR9)
/*PMP ADRESS and size, format determined from bit 3 and 4 of configuration byte 
in CSR_PMPCFGx */ 
#define LIBERO_SETTING_HART4_CSR_PMPADDR9    0x0000000000000000ULL
    /* CSR_PMPADDR9                      [0:64]  RW value= 0 */ 
#endif
#if !defined (LIBERO_SETTING_HART4_CSR_PMPADDR10)
/*PMP ADRESS and size, format determined from bit 3 and 4 of configuration byte 
in CSR_PMPCFGx */ 
#define LIBERO_SETTING_HART4_CSR_PMPADDR10    0x0000000000000000ULL
    /* CSR_PMPADDR10                     [0:64]  RW value= 0 */ 
#endif
#if !defined (LIBERO_SETTING_HART4_CSR_PMPADDR11)
/*PMP ADRESS and size, format determined from bit 3 and 4 of configuration byte 
in CSR_PMPCFGx */ 
#define LIBERO_SETTING_HART4_CSR_PMPADDR11    0x0000000000000000ULL
    /* CSR_PMPADDR11                     [0:64]  RW value= 0 */ 
#endif
#if !defined (LIBERO_SETTING_HART4_CSR_PMPADDR12)
/*PMP ADRESS and size, format determined from bit 3 and 4 of configuration byte 
in CSR_PMPCFGx */ 
#define LIBERO_SETTING_HART4_CSR_PMPADDR12    0x0000000000000000ULL
    /* CSR_PMPADDR12                     [0:64]  RW value= 0 */ 
#endif
#if !defined (LIBERO_SETTING_HART4_CSR_PMPADDR13)
/*PMP ADRESS and size, format determined from bit 3 and 4 of configuration byte 
in CSR_PMPCFGx */ 
#define LIBERO_SETTING_HART4_CSR_PMPADDR13    0x0000000000000000ULL
    /* CSR_PMPADDR13                     [0:64]  RW value= 0 */ 
#endif
#if !defined (LIBERO_SETTING_HART4_CSR_PMPADDR14)
/*PMP ADRESS and size, format determined from bit 3 and 4 of configuration byte 
in CSR_PMPCFGx */ 
#define LIBERO_SETTING_HART4_CSR_PMPADDR14    0x0000000000000000ULL
    /* CSR_PMPADDR14                     [0:64]  RW value= 0 */ 
#endif
#if !defined (LIBERO_SETTING_HART4_CSR_PMPADDR15)
/*PMP ADRESS and size, format determined from bit 3 and 4 of configuration byte 
in CSR_PMPCFGx */ 
#define LIBERO_SETTING_HART4_CSR_PMPADDR15    0x0000000000000000ULL
    /* CSR_PMPADDR15                     [0:64]  RW value= 0 */ 
#endif

#ifdef __cplusplus
}
#endif


#endif /* #ifdef HW_PMP_HART4_H_ */

