/** @file
*
*  Copyright (c) 2018 Microsoft Corporation. All rights reserved.
*
*  This program and the accompanying materials
*  are licensed and made available under the terms and conditions of the BSD License
*  which accompanies this distribution.  The full text of the license may be found at
*  http://opensource.org/licenses/bsd-license.php
*
*  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
*  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
*
**/

#ifndef _IMX6_CLK_PWR_SX_H_
#define _IMX6_CLK_PWR_SX_H_

// Clock signal definitions
// Figure 19-2 Clock Tree
typedef enum {
  IMX_CLK_NONE,
  IMX_OSC_CLK,
  IMX_PLL1_MAIN_CLK,
  IMX_PLL2_MAIN_CLK,
  IMX_PLL2_PFD0,
  IMX_PLL2_PFD1,
  IMX_PLL2_PFD2,
  IMX_PLL2_PFD3,
  IMX_PLL3_MAIN_CLK,
  IMX_PLL3_PFD0,
  IMX_PLL3_PFD1,
  IMX_PLL3_PFD2,
  IMX_PLL3_PFD3,
  IMX_PLL4_MAIN_CLK,
  IMX_PLL5_MAIN_CLK,
  IMX_CLK1,
  IMX_CLK2,
  IMX_PLL1_SW_CLK,
  IMX_STEP_CLK,
  IMX_PLL3_SW_CLK,
  IMX_PERIPH_CLK2,
  IMX_PERIPH_CLK,
  IMX_PRE_PERIPH_CLK,
  IMX_ARM_CLK_ROOT,
  IMX_MMDC_CLK_ROOT,
  IMX_FABRIC_CLK_ROOT,
  IMX_OCRAM_CLK_ROOT,
  IMX_PCIE_CLK_ROOT,
  IMX_AHB_CLK_ROOT,
  IMX_PERCLK_CLK_ROOT,
  IMX_IPG_CLK_ROOT,
  IMX_USDHC1_CLK_ROOT,
  IMX_USDHC2_CLK_ROOT,
  IMX_USDHC3_CLK_ROOT,
  IMX_USDHC4_CLK_ROOT,
  IMX_ACLK_EIM_SLOW_CLK_ROOT,
  IMX_GPU_AXI_CLK_ROOT,
  IMX_GPU_CORE_CLK_ROOT,
  IMX_VID_CLK_ROOT,
  IMX_ESAI_CLK_ROOT,
  IMX_AUDIO_CLK_ROOT,
  IMX_SPDIF0_CLK_ROOT,
  IMX_SSI1_CLK_ROOT,
  IMX_SSI2_CLK_ROOT,
  IMX_SSI3_CLK_ROOT,
  IMX_LCDIF2_PIX_CLK_ROOT,
  IMX_LCDIF1_PIX_CLK_ROOT,
  IMX_LVDS_CLK_ROOT,
  IMX_M4_CLK_ROOT,
  IMX_ENET_CLK_ROOT,
  IMX_QSPI1_CLK_ROOT,
  IMX_QSPI2_CLK_ROOT,
  IMX_DISPLAY_CLK_ROOT,
  IMX_CSI_CLK_ROOT,
  IMX_CAN_CLK_ROOT,
  IMX_ECSPI_CLK_ROOT,
  IMX_UART_CLK_ROOT,
  IMX_CLK_MAX,
} IMX_CLK;

// Clock gate definitions
typedef enum {
  IMX_AIPS_TZ1_CLK_ENABLE,
  IMX_AIPS_TZ2_CLK_ENABLE,
  IMX_APBHDMA_HCLK_ENABLE,
  IMX_ASRC_CLK_ENABLE,
  IMX_CAAM_SECURE_MEM_CLK_ENABLE,
  IMX_CAAM_WRAPPER_ACLK_ENABLE,
  IMX_CAAM_WRAPPER_IPG_ENABLE,
  IMX_CAN1_CLK_ENABLE,
  IMX_CAN1_SERIAL_CLK_ENABLE,
  IMX_CAN2_CLK_ENABLE,
  IMX_CAN2_SERIAL_CLK_ENABLE,
  IMX_ARM_DBG_CLK_ENABLE,
  IMX_DCIC1_CLK_ENABLE,
  IMX_DCIC2_CLK_ENABLE,
  IMX_AIPS_TZ3_CLK_ENABLE,
  IMX_ECSPI1_CLK_ENABLE,
  IMX_ECSPI2_CLK_ENABLE,
  IMX_ECSPI3_CLK_ENABLE,
  IMX_ECSPI4_CLK_ENABLE,
  IMX_ECSPI5_CLK_ENABLE,
  IMX_EPIT1_CLK_ENABLE,
  IMX_EPIT2_CLK_ENABLE,
  IMX_ESAI_CLK_ENABLE,
  IMX_WAKEUP_CLK_ENABLE,
  IMX_GPT_CLK_ENABLE,
  IMX_GPT_SERIAL_CLK_ENABLE,
  IMX_GPU_CLK_ENABLE,
  IMX_OCRAM_S_CLK_ENABLE,
  IMX_CANFD_CLK_ENABLE,
  IMX_CSI_CLK_ENABLE,
  IMX_I2C1_SERIAL_CLK_ENABLE,
  IMX_I2C2_SERIAL_CLK_ENABLE,
  IMX_I2C3_SERIAL_CLK_ENABLE,
  IMX_IIM_CLK_ENABLE,
  IMX_IOMUX_IPT_CLK_IO_ENABLE,
  IMX_IPMUX1_CLK_ENABLE,
  IMX_IPMUX2_CLK_ENABLE,
  IMX_IPMUX3_CLK_ENABLE,
  IMX_IPSYNC_IP2APB_TZASC1_IPG_MASTER_CLK_ENABLE,
  IMX_LCD_CLK_ENABLE,
  IMX_PXP_CLK_ENABLE,
  IMX_M4_CLK_ENABLE,
  IMX_ENET_CLK_ENABLE,
  IMX_DISP_AXI_CLK_ENABLE,
  IMX_LCDIF2_PIX_CLK_ENABLE,
  IMX_LCDIF1_PIX_CLK_ENABLE,
  IMX_LDB_DI0_CLK_ENABLE,
  IMX_QSPI1_CLK_ENABLE,
  IMX_MLB_CLK_ENABLE,
  IMX_MMDC_CORE_ACLK_FAST_CORE_P0_ENABLE,
  IMX_MMDC_CORE_IPG_CLK_P0_ENABLE,
  IMX_MMDC_CORE_IPG_CLK_P1_ENABLE,
  IMX_OCRAM_CLK_ENABLE,
  IMX_PCIE_ROOT_ENABLE,
  IMX_QSPI2_CLK_ENABLE,
  IMX_PL301_MX6QPER1_BCHCLK_ENABLE,
  IMX_PL301_MX6QPER2_MAINCLK_ENABLE,
  IMX_PWM1_CLK_ENABLE,
  IMX_PWM2_CLK_ENABLE,
  IMX_PWM3_CLK_ENABLE,
  IMX_PWM4_CLK_ENABLE,
  IMX_RAWNAND_U_BCH_INPUT_APB_CLK_ENABLE,
  IMX_RAWNAND_U_GPMI_BCH_INPUT_BCH_CLK_ENABLE,
  IMX_RAWNAND_U_GPMI_BCH_INPUT_GPMI_IO_CLK_ENABLE,
  IMX_RAWNAND_U_GPMI_INPUT_APB_CLK_ENABLE,
  IMX_ROM_CLK_ENABLE,
  IMX_SDMA_CLK_ENABLE,
  IMX_SPBA_CLK_ENABLE,
  IMX_SPDIF_AND_AUDIO_CLK_ENABLE,
  IMX_SSI1_CLK_ENABLE,
  IMX_SSI2_CLK_ENABLE,
  IMX_SSI3_CLK_ENABLE,
  IMX_UART_CLK_ENABLE,
  IMX_UART_SERIAL_CLK_ENABLE,
  IMX_SAI1_CLK_ENABLE,
  IMX_SAI2_CLK_ENABLE,
  IMX_USBOH3_CLK_ENABLE,
  IMX_USDHC1_CLK_ENABLE,
  IMX_USDHC2_CLK_ENABLE,
  IMX_USDHC3_CLK_ENABLE,
  IMX_USDHC4_CLK_ENABLE,
  IMX_EIM_SLOW_CLK_ENABLE,
  IMX_PWM8_CLK_ENABLE,
  IMX_VADC_CLK_ENABLE,
  IMX_GIS_CLK_ENABLE,
  IMX_I2C4_SERIAL_CLK_ENABLE,
  IMX_PWM5_CLK_ENABLE,
  IMX_PWM6_CLK_ENABLE,
  IMX_PWM7_CLK_ENABLE,
  IMX_CLK_GATE_MAX,
} IMX_CLK_GATE;

VOID
ImxClkPwrLcdClockDisable (
  VOID
  );

VOID
ImxClkPwrLcdClockEnable (
  VOID
  );

EFI_STATUS
ImxSetLcdIfClockRate (
  IN  UINT32  ClockRate
  );

#endif  /* _IMX6_CLK_PWR_SX_H_ */
