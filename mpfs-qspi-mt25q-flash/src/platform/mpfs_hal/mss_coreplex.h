/*******************************************************************************
 * Copyright 2019-2020 Microchip FPGA Embedded Systems Solutions.
 *
 * SPDX-License-Identifier: MIT
 *
 * MPFS HAL Embedded Software
 *
 */

/***************************************************************************
 * @file mss_coreplex.h
 * @author Microchip FPGA Embedded Systems Solutions
 * @brief Coreplex definitions
 *
 */
#ifndef MSS_COREPLEX_H
#define MSS_COREPLEX_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 * U5 COREPLEX DEFINITIONS
 */
#define U5CP_CLINT_BASE                          (0x02000000)
#define U5CP_CACHE_CTRL_PORT_BASE                (0x02010000)
#define CACHE_CTRL_NUM_BANKS_OFFSET                   (0x000)
#define CACHE_CTRL_NUM_WAYS_OFFSET                    (0x001)
#define CACHE_CTRL_NUM_SETS_OFFSET                    (0x002)
#define CACHE_CTRL_BLKSIZE_OFFSET                     (0x003)
#define CACHE_CTRL_WAYENB_OFFSET                      (0x008)
#define CACHE_CTRL_ERR_INJ_OFFSET                     (0x040)
#define CACHE_CTRL_ADDR_META_DATA_ERR_OFFSET          (0x100)
#define CACHE_CTRL_NUM_META_DATA_ERRS_OFFSET          (0x108)
#define CACHE_CTRL_ADDR_DATA_ERR_OFFSET               (0x140)
#define CACHE_CTRL_NUM_DATA_ERRS_OFFSET               (0x148)
#define CACHE_CTRL_ADDR_UNCORRECTABLE_DATA_OFFSET     (0x160)
#define CACHE_CTRL_NUM_UNCORRECTABLE_DATA_ERRS_OFFSET (0x168)
#define CACHE_CTRL_FLUSH64_OFFSET                     (0x200)
#define CACHE_CTRL_FLUSH32_OFFSET                     (0x240)
#define CACHE_CTRL_MASTER0_WAY_OFFSET                 (0x800)

#define CACHE_CTRL_NUM_BANKS_REG     \
     (U5CP_CACHE_CTRL_PORT_BASE + CACHE_CTRL_NUM_BANKS_OFFSET)
#define CACHE_CTRL_NUM_WAYS_REG      \
     (U5CP_CACHE_CTRL_PORT_BASE + CACHE_CTRL_NUM_WAYS_OFFSET)
#define CACHE_CTRL_NUM_SETS_REG      \
     (U5CP_CACHE_CTRL_PORT_BASE + CACHE_CTRL_NUM_SETS_OFFSET)
#define CACHE_CTRL_BLKSIZE_REG       \
     (U5CP_CACHE_CTRL_PORT_BASE + CACHE_CTRL_BLKSIZE_OFFSET)
#define CACHE_CTRL_WAYENB_REG    \
     (U5CP_CACHE_CTRL_PORT_BASE + CACHE_CTRL_WAYENB_OFFSET)
#define CACHE_CTRL_ERR_INJ_REG       \
     (U5CP_CACHE_CTRL_PORT_BASE + CACHE_CTRL_ERR_INJ_OFFSET)
#define CACHE_CTRL_ADDR_META_DATA_ERR_REG \
     (U5CP_CACHE_CTRL_PORT_BASE + CACHE_CTRL_ADDR_META_DATA_ERR_OFFSET)
#define CACHE_CTRL_NUM_META_DATA_ERRS_REG \
     (U5CP_CACHE_CTRL_PORT_BASE + CACHE_CTRL_NUM_META_DATA_ERRS_OFFSET)
#define CACHE_CTRL_ADDR_DATA_ERR_REG \
     (U5CP_CACHE_CTRL_PORT_BASE + CACHE_CTRL_ADDR_DATA_ERR_OFFSET)
#define CACHE_CTRL_NUM_DATA_ERRS_REG      \
     (U5CP_CACHE_CTRL_PORT_BASE + CACHE_CTRL_NUM_DATA_ERRS_OFFSET)
#define CACHE_CTRL_ADDR_UNCORRECTABLE_DATA_REG \
     (U5CP_CACHE_CTRL_PORT_BASE + CACHE_CTRL_ADDR_UNCORRECTABLE_DATA_OFFSET)
#define CACHE_CTRL_NUM_UNCORRECTABLE_DATA_ERRS_REG \
     (U5CP_CACHE_CTRL_PORT_BASE + CACHE_CTRL_NUM_UNCORRECTABLE_DATA_ERRS_OFFSET)
#define CACHE_CTRL_FLUSH64_REG \
     (U5CP_CACHE_CTRL_PORT_BASE + CACHE_CTRL_FLUSH64_OFFSET)
#define CACHE_CTRL_FLUSH32_REG \
     (U5CP_CACHE_CTRL_PORT_BASE + CACHE_CTRL_FLUSH32_OFFSET)
#define CACHE_CTRL_MASTER0_WAY_REG \
     (U5CP_CACHE_CTRL_PORT_BASE + CACHE_CTRL_MASTER0_WAY_OFFSET)

#define U5CP_MSIP_BASE (U5CP_CLINT_BASE)
#define U5CP_MSIP_H0   (U5CP_MSIP_BASE + 0x00)
#define U5CP_MSIP_H1   (U5CP_MSIP_BASE + 0x04)
#define U5CP_MSIP_H2   (U5CP_MSIP_BASE + 0x08)
#define U5CP_MSIP_H3   (U5CP_MSIP_BASE + 0x0C)
#define U5CP_MSIP_H4   (U5CP_MSIP_BASE + 0x10)

#define U5CP_MTIMECMP_BASE (U5CP_CLINT_BASE + 0x4000)
#define U5CP_MTIMECMP_H0   (U5CP_MTIMECMP_BASE + 0x00)
#define U5CP_MTIMECMP_H1   (U5CP_MTIMECMP_BASE + 0x04)
#define U5CP_MTIMECMP_H2   (U5CP_MTIMECMP_BASE + 0x08)
#define U5CP_MTIMECMP_H3   (U5CP_MTIMECMP_BASE + 0x0C)
#define U5CP_MTIMECMP_H4   (U5CP_MTIMECMP_BASE + 0x10)

#define U5CP_MTIME_BASE (U5CP_CLINT_BASE + 0xBFF8)
#define U5CP_MTIME_H0   (U5CP_MTIME_BASE + 0x00)
#define U5CP_MTIME_H1   (U5CP_MTIME_BASE + 0x00)
#define U5CP_MTIME_H2   (U5CP_MTIME_BASE + 0x00)
#define U5CP_MTIME_H3   (U5CP_MTIME_BASE + 0x00)
#define U5CP_MTIME_H4   (U5CP_MTIME_BASE + 0x00)

#ifdef __cplusplus
}
#endif

#endif  /* MSS_COREPLEX_H */
