/*******************************************************************************
 * Copyright 2019-2020 Microchip FPGA Embedded Systems Solutions.
 *
 * PolarFire PCIe Read and Write Application.
 *
 * Please refer README.txt in the root folder of this project for more details.
 *
 */

#include <stdio.h>
#include "hal.h"
#include "hw_platform.h"
#include "pf_pcie.h"

int main(void)
{
    pf_pcie_slave_atr_cfg_t  p_cfg;
    pf_pcie_ebuff_t  * p_pcie_enum_data;
    pf_pcie_bar_info_t * p_pcie_bar_data;

    uint8_t slv_table_no = 0u;
    uint8_t tlp = PF_PCIE_TLP_MEM;

    /* AXI slave address= 0x70000000, bus num = 0, device = 0, fun num = 0 */
    uint32_t ecam_addr = 0x70000000u;
    uint8_t * p_pcie_end_point;

    uint32_t read_data, count;
    uint32_t error = 0u;

    /* PCIe AXI slave ATR table setup on RootPort */
    p_cfg.state = PF_PCIE_ATR_TABLE_ENABLE;
    p_cfg.size = PF_PCIE_SIZE_256MB;
    p_cfg.src_addr = 0x70000000u;
    p_cfg.src_addr_msb = 0;
    p_cfg.trns_addr = 0x70000000u;
    p_cfg.trns_addr_msb = 0u;

    PF_PCIE_slave_atr_table_init(PCIE_APB_BASE_ADDR, PF_PCIE_CTRL_1, &p_cfg, slv_table_no, tlp);

    /* PCIe enumeration */
    p_pcie_enum_data = PF_PCIE_enumeration(PCIE_APB_BASE_ADDR, PF_PCIE_CTRL_1, ecam_addr);

    if (p_pcie_enum_data->no_of_devices_attached != 0u)
    {
        /* Allocate memory - EndPoint connected to RootPort with bus 1 device 0 fun 0
         * ecam = 0x70100000 - AXI slave address= 0x70000000, bus num = 1, device = 0, fun num = 0
         * allocate addr = 0x70000000 */
        p_pcie_bar_data = PF_PCIE_allocate_memory(0x70100000u, 0x70000000u);

        p_pcie_end_point = (uint8_t *)((uintptr_t)p_pcie_bar_data->bar2_address);

        /* EP memory write */
        for (count = 0u; count < 128u; count++)
        {
            *(p_pcie_end_point + count)= count + 5u;
        }
        /* EP memory read and compare */
        for (count = 0u; count < 128u; count++)
        {
            read_data = *(p_pcie_end_point + count);
            if (read_data != count + 5u)
            {
                ++error;
            }
        }
    }
    while (1)
    {

    }
}
