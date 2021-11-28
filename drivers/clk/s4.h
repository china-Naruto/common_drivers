/* SPDX-License-Identifier: (GPL-2.0+ OR MIT) */
/*
 *
 * Copyright (c) 2018 Amlogic, inc.
 *
 */

#ifndef __S4_H
#define __S4_H

/*
 * Clock controller register offsets
 * REG_BASE:  REGISTER_BASE_ADDR = 0xfe000000
 */
#define CLKCTRL_OSCIN_CTRL                         ((0x0001 << 2))
#define CLKCTRL_RTC_BY_OSCIN_CTRL0                 ((0x0002 << 2))
#define CLKCTRL_RTC_BY_OSCIN_CTRL1                 ((0x0003 << 2))
#define CLKCTRL_RTC_CTRL                           ((0x0004 << 2))
#define CLKCTRL_CHECK_CLK_RESULT                   ((0x0005 << 2))
#define CLKCTRL_MBIST_ATSPEED_CTRL                 ((0x0006 << 2))
#define CLKCTRL_LOCK_BIT_REG0                      ((0x0008 << 2))
#define CLKCTRL_LOCK_BIT_REG1                      ((0x0009 << 2))
#define CLKCTRL_LOCK_BIT_REG2                      ((0x000a << 2))
#define CLKCTRL_LOCK_BIT_REG3                      ((0x000b << 2))
#define CLKCTRL_PROT_BIT_REG0                      ((0x000c << 2))
#define CLKCTRL_PROT_BIT_REG1                      ((0x000d << 2))
#define CLKCTRL_PROT_BIT_REG2                      ((0x000e << 2))
#define CLKCTRL_PROT_BIT_REG3                      ((0x000f << 2))
#define CLKCTRL_SYS_CLK_CTRL0                      ((0x0010 << 2))
#define CLKCTRL_SYS_CLK_EN0_REG0                   ((0x0011 << 2))
#define CLKCTRL_SYS_CLK_EN0_REG1                   ((0x0012 << 2))
#define CLKCTRL_SYS_CLK_EN0_REG2                   ((0x0013 << 2))
#define CLKCTRL_SYS_CLK_EN0_REG3                   ((0x0014 << 2))
#define CLKCTRL_SYS_CLK_EN1_REG0                   ((0x0015 << 2))
#define CLKCTRL_SYS_CLK_EN1_REG1                   ((0x0016 << 2))
#define CLKCTRL_SYS_CLK_EN1_REG2                   ((0x0017 << 2))
#define CLKCTRL_SYS_CLK_EN1_REG3                   ((0x0018 << 2))
#define CLKCTRL_SYS_CLK_VPU_EN0                    ((0x0019 << 2))
#define CLKCTRL_SYS_CLK_VPU_EN1                    ((0x001a << 2))
#define CLKCTRL_AXI_CLK_CTRL0                      ((0x001b << 2))
#define CLKCTRL_TST_CTRL0                          ((0x0020 << 2))
#define CLKCTRL_TST_CTRL1                          ((0x0021 << 2))
#define CLKCTRL_CECA_CTRL0                         ((0x0022 << 2))
#define CLKCTRL_CECA_CTRL1                         ((0x0023 << 2))
#define CLKCTRL_CECB_CTRL0                         ((0x0024 << 2))
#define CLKCTRL_CECB_CTRL1                         ((0x0025 << 2))
#define CLKCTRL_SC_CLK_CTRL                        ((0x0026 << 2))
#define CLKCTRL_DSPA_CLK_CTRL0                     ((0x0027 << 2))
#define CLKCTRL_DSPB_CLK_CTRL0                     ((0x0028 << 2))
#define CLKCTRL_RAMA_CLK_CTRL0                     ((0x0029 << 2))
#define CLKCTRL_CLK12_24_CTRL                      ((0x002a << 2))
#define CLKCTRL_VID_CLK_CTRL                       ((0x0030 << 2))
#define CLKCTRL_VID_CLK_CTRL2                      ((0x0031 << 2))
#define CLKCTRL_VID_CLK_DIV                        ((0x0032 << 2))
#define CLKCTRL_VIID_CLK_DIV                       ((0x0033 << 2))
#define CLKCTRL_VIID_CLK_CTRL                      ((0x0034 << 2))
#define CLKCTRL_HDMI_CLK_CTRL                      ((0x0038 << 2))
#define CLKCTRL_VID_PLL_CLK_DIV                    ((0x0039 << 2))
#define CLKCTRL_VPU_CLK_CTRL                       ((0x003a << 2))
#define CLKCTRL_VPU_CLKB_CTRL                      ((0x003b << 2))
#define CLKCTRL_VPU_CLKC_CTRL                      ((0x003c << 2))
#define CLKCTRL_VID_LOCK_CLK_CTRL                  ((0x003d << 2))
#define CLKCTRL_VDIN_MEAS_CLK_CTRL                 ((0x003e << 2))
#define CLKCTRL_VAPBCLK_CTRL                       ((0x003f << 2))
#define CLKCTRL_HDCP22_CTRL                        ((0x0040 << 2))
#define CLKCTRL_MIPIDSI_PHY_CLK_CTRL               ((0x0041 << 2))
#define CLKCTRL_CDAC_CLK_CTRL                      ((0x0042 << 2))
#define CLKCTRL_MIPI_CSI_PHY_CLK_CTRL              ((0x0043 << 2))
#define CLKCTRL_CSI2_ADAPT_CLK_CTRL                ((0x0044 << 2))
#define CLKCTRL_VDEC_CLK_CTRL                      ((0x0050 << 2))
#define CLKCTRL_VDEC2_CLK_CTRL                     ((0x0051 << 2))
#define CLKCTRL_VDEC3_CLK_CTRL                     ((0x0052 << 2))
#define CLKCTRL_VDEC4_CLK_CTRL                     ((0x0053 << 2))
#define CLKCTRL_WAVE420L_CLK_CTRL                  ((0x0054 << 2))
#define CLKCTRL_WAVE420L_CLK_CTRL2                 ((0x0055 << 2))
#define CLKCTRL_TS_CLK_CTRL                        ((0x0056 << 2))
#define CLKCTRL_MALI_CLK_CTRL                      ((0x0057 << 2))
#define CLKCTRL_VIPNANOQ_CLK_CTRL                  ((0x0058 << 2))
#define CLKCTRL_ETH_CLK_CTRL                       ((0x0059 << 2))
#define CLKCTRL_NAND_CLK_CTRL                      ((0x005a << 2))
#define CLKCTRL_SD_EMMC_CLK_CTRL                   ((0x005b << 2))
#define CLKCTRL_BT656_CLK_CTRL                     ((0x005c << 2))
#define CLKCTRL_SPICC_CLK_CTRL                     ((0x005d << 2))
#define CLKCTRL_GEN_CLK_CTRL                       ((0x005e << 2))
#define CLKCTRL_SAR_CLK_CTRL                       ((0x005f << 2))
#define CLKCTRL_PWM_CLK_AB_CTRL                    ((0x0060 << 2))
#define CLKCTRL_PWM_CLK_CD_CTRL                    ((0x0061 << 2))
#define CLKCTRL_PWM_CLK_EF_CTRL                    ((0x0062 << 2))
#define CLKCTRL_PWM_CLK_GH_CTRL                    ((0x0063 << 2))
#define CLKCTRL_PWM_CLK_IJ_CTRL                    ((0x0064 << 2))
#define CLKCTRL_DEMOD_CLK_CTRL                     ((0x0080 << 2))
#define CLKCTRL_DEMOD_CLK_CTRL1                    ((0x0081 << 2))
#define CLKCTRL_DEMOD_32K_CTRL0                    ((0x0082 << 2))
#define CLKCTRL_DEMOD_32K_CTRL1                    ((0x0083 << 2))
#define CLKCTRL_TIMESTAMP_CTRL                     ((0x0100 << 2))
#define CLKCTRL_TIMESTAMP_CTRL1                    ((0x0101 << 2))
#define CLKCTRL_TIMESTAMP_CTRL2                    ((0x0103 << 2))
#define CLKCTRL_TIMESTAMP_RD0                      ((0x0104 << 2))
#define CLKCTRL_TIMESTAMP_RD1                      ((0x0105 << 2))
#define CLKCTRL_TIMEBASE_CTRL0                     ((0x0106 << 2))
#define CLKCTRL_TIMEBASE_CTRL1                     ((0x0107 << 2))
#define CLKCTRL_EFUSE_CPU_CFG01                    ((0x0120 << 2))
#define CLKCTRL_EFUSE_CPU_CFG2                     ((0x0121 << 2))
#define CLKCTRL_EFUSE_ENCP_CFG0                    ((0x0122 << 2))
#define CLKCTRL_EFUSE_MALI_CFG01                   ((0x0123 << 2))
#define CLKCTRL_EFUSE_HEVCB_CFG01                  ((0x0124 << 2))
#define CLKCTRL_EFUSE_HEVCB_CFG2                   ((0x0125 << 2))
#define CLKCTRL_EFUSE_LOCK                         ((0x0126 << 2))

/*  ANA_CTRL - Registers
 *REG_BASE:  REGISTER_BASE_ADDR = 0xfe008000
 */
#define ANACTRL_SYSPLL_CTRL0                       ((0x0000 << 2))
#define ANACTRL_SYSPLL_CTRL1                       ((0x0001 << 2))
#define ANACTRL_SYSPLL_CTRL2                       ((0x0002 << 2))
#define ANACTRL_SYSPLL_CTRL3                       ((0x0003 << 2))
#define ANACTRL_SYSPLL_CTRL4                       ((0x0004 << 2))
#define ANACTRL_SYSPLL_CTRL5                       ((0x0005 << 2))
#define ANACTRL_SYSPLL_CTRL6                       ((0x0006 << 2))
#define ANACTRL_SYSPLL_STS                         ((0x0007 << 2))
#define ANACTRL_FIXPLL_CTRL0                       ((0x0010 << 2))
#define ANACTRL_FIXPLL_CTRL1                       ((0x0011 << 2))
#define ANACTRL_FIXPLL_CTRL2                       ((0x0012 << 2))
#define ANACTRL_FIXPLL_CTRL3                       ((0x0013 << 2))
#define ANACTRL_FIXPLL_CTRL4                       ((0x0014 << 2))
#define ANACTRL_FIXPLL_CTRL5                       ((0x0015 << 2))
#define ANACTRL_FIXPLL_CTRL6                       ((0x0016 << 2))
#define ANACTRL_FIXPLL_STS                         ((0x0017 << 2))
#define ANACTRL_GP0PLL_CTRL0                       ((0x0020 << 2))
#define ANACTRL_GP0PLL_CTRL1                       ((0x0021 << 2))
#define ANACTRL_GP0PLL_CTRL2                       ((0x0022 << 2))
#define ANACTRL_GP0PLL_CTRL3                       ((0x0023 << 2))
#define ANACTRL_GP0PLL_CTRL4                       ((0x0024 << 2))
#define ANACTRL_GP0PLL_CTRL5                       ((0x0025 << 2))
#define ANACTRL_GP0PLL_CTRL6                       ((0x0026 << 2))
#define ANACTRL_GP0PLL_STS                         ((0x0027 << 2))
#define ANACTRL_GP1PLL_CTRL0                       ((0x0030 << 2))
#define ANACTRL_GP1PLL_CTRL1                       ((0x0031 << 2))
#define ANACTRL_GP1PLL_CTRL2                       ((0x0032 << 2))
#define ANACTRL_GP1PLL_CTRL3                       ((0x0033 << 2))
#define ANACTRL_GP1PLL_CTRL4                       ((0x0034 << 2))
#define ANACTRL_GP1PLL_CTRL5                       ((0x0035 << 2))
#define ANACTRL_GP1PLL_CTRL6                       ((0x0036 << 2))
#define ANACTRL_GP1PLL_STS                         ((0x0037 << 2))
#define ANACTRL_HIFIPLL_CTRL0                      ((0x0040 << 2))
#define ANACTRL_HIFIPLL_CTRL1                      ((0x0041 << 2))
#define ANACTRL_HIFIPLL_CTRL2                      ((0x0042 << 2))
#define ANACTRL_HIFIPLL_CTRL3                      ((0x0043 << 2))
#define ANACTRL_HIFIPLL_CTRL4                      ((0x0044 << 2))
#define ANACTRL_HIFIPLL_CTRL5                      ((0x0045 << 2))
#define ANACTRL_HIFIPLL_CTRL6                      ((0x0046 << 2))
#define ANACTRL_HIFIPLL_STS                        ((0x0047 << 2))
#define ANACTRL_PCIEPLL_CTRL0                      ((0x0050 << 2))
#define ANACTRL_PCIEPLL_CTRL1                      ((0x0051 << 2))
#define ANACTRL_PCIEPLL_CTRL2                      ((0x0052 << 2))
#define ANACTRL_PCIEPLL_CTRL3                      ((0x0053 << 2))
#define ANACTRL_PCIEPLL_CTRL4                      ((0x0054 << 2))
#define ANACTRL_PCIEPLL_CTRL5                      ((0x0055 << 2))
#define ANACTRL_PCIEPLL_STS                        ((0x0056 << 2))
#define ANACTRL_MPLL_CTRL0                         ((0x0060 << 2))
#define ANACTRL_MPLL_CTRL1                         ((0x0061 << 2))
#define ANACTRL_MPLL_CTRL2                         ((0x0062 << 2))
#define ANACTRL_MPLL_CTRL3                         ((0x0063 << 2))
#define ANACTRL_MPLL_CTRL4                         ((0x0064 << 2))
#define ANACTRL_MPLL_CTRL5                         ((0x0065 << 2))
#define ANACTRL_MPLL_CTRL6                         ((0x0066 << 2))
#define ANACTRL_MPLL_CTRL7                         ((0x0067 << 2))
#define ANACTRL_MPLL_CTRL8                         ((0x0068 << 2))
#define ANACTRL_MPLL_STS                           ((0x0069 << 2))
#define ANACTRL_HDMIPLL_CTRL0                      ((0x0070 << 2))
#define ANACTRL_HDMIPLL_CTRL1                      ((0x0071 << 2))
#define ANACTRL_HDMIPLL_CTRL2                      ((0x0072 << 2))
#define ANACTRL_HDMIPLL_CTRL3                      ((0x0073 << 2))
#define ANACTRL_HDMIPLL_CTRL4                      ((0x0074 << 2))
#define ANACTRL_HDMIPLL_CTRL5                      ((0x0075 << 2))
#define ANACTRL_HDMIPLL_CTRL6                      ((0x0076 << 2))
#define ANACTRL_HDMIPLL_STS                        ((0x0077 << 2))
#define ANACTRL_HDMIPLL_VLOCK                      ((0x0079 << 2))
#define ANACTRL_HDMIPHY_CTRL0                      ((0x0080 << 2))
#define ANACTRL_HDMIPHY_CTRL1                      ((0x0081 << 2))
#define ANACTRL_HDMIPHY_CTRL2                      ((0x0082 << 2))
#define ANACTRL_HDMIPHY_CTRL3                      ((0x0083 << 2))
#define ANACTRL_HDMIPHY_CTRL4                      ((0x0084 << 2))
#define ANACTRL_HDMIPHY_CTRL5                      ((0x0085 << 2))
#define ANACTRL_HDMIPHY_STS                        ((0x0086 << 2))
#define ANACTRL_MIPICSI_CTRL0                      ((0x0090 << 2))
#define ANACTRL_MIPICSI_CTRL1                      ((0x0091 << 2))
#define ANACTRL_MIPICSI_CTRL2                      ((0x0092 << 2))
#define ANACTRL_MIPICSI_CTRL3                      ((0x0093 << 2))
#define ANACTRL_MIPICSI_CTRL4                      ((0x0094 << 2))
#define ANACTRL_MIPICSI_CTRL5                      ((0x0095 << 2))
#define ANACTRL_MIPIDSI_CTRL0                      ((0x00a0 << 2))
#define ANACTRL_MIPIDSI_CTRL1                      ((0x00a1 << 2))
#define ANACTRL_MIPIDSI_CTRL2                      ((0x00a2 << 2))
#define ANACTRL_MIPIDSI_STS                        ((0x00a3 << 2))
#define ANACTRL_VDAC_CTRL0                         ((0x00b0 << 2))
#define ANACTRL_VDAC_CTRL1                         ((0x00b1 << 2))
#define ANACTRL_POR_CTRL                           ((0x00b6 << 2))
#define ANACTRL_LOCK_BIT                           ((0x00b8 << 2))
#define ANACTRL_PROT_BIT                           ((0x00b9 << 2))
#define ANACTRL_ADC_PLL_CTRL                       ((0x00c0 << 2))
#define ANACTRL_ADC_PLL_CTRL1                      ((0x00c1 << 2))
#define ANACTRL_ADC_PLL_CTRL2                      ((0x00c2 << 2))
#define ANACTRL_ADC_PLL_CTRL3                      ((0x00c3 << 2))
#define ANACTRL_ADC_PLL_CTRL4                      ((0x00c4 << 2))
#define ANACTRL_ADC_PLL_CTRL5                      ((0x00c5 << 2))
#define ANACTRL_ADC_PLL_CTRL6                      ((0x00c6 << 2))
#define ANACTRL_ADC_PLL_STS                        ((0x00c7 << 2))
#define ANACTRL_S2_DADC_CTRL                       ((0x00d0 << 2))
#define ANACTRL_S2_DADC_CTRL2                      ((0x00d1 << 2))

/* CPU_CTRL
 * REG_BASE:  REGISTER_BASE_ADDR = 0xfe00e000
 */
#define CPUCTRL_SYS_CPU_RESET_CNTL                 ((0x0050 << 2))
#define CPUCTRL_SYS_CPU_CLK_CTRL                   ((0x0051 << 2))
#define CPUCTRL_SYS_CPU_CLK_CTRL1                  ((0x0052 << 2))
#define CPUCTRL_SYS_CPU_CLK_CTRL2                  ((0x0053 << 2))
#define CPUCTRL_SYS_CPU_CLK_CTRL3                  ((0x0054 << 2))
#define CPUCTRL_SYS_CPU_CLK_CTRL4                  ((0x0055 << 2))
#define CPUCTRL_SYS_CPU_CLK_CTRL5                  ((0x0056 << 2))
#define CPUCTRL_SYS_CPU_CLK_CTRL6                  ((0x0057 << 2))
#define CPUCTRL_SYS_CPU_CLK_RESULT                 ((0x0058 << 2))

#define SECURE_PLL_CLK			0x82000098
#define SECURE_CPU_CLK			0x82000099

/* PLL secure clock index */
enum sec_pll {
	SECID_SYS0_DCO_PLL = 0,
	SECID_SYS0_DCO_PLL_DIS,
	SECID_SYS0_PLL_OD,
	SECID_SYS1_DCO_PLL,
	SECID_SYS1_DCO_PLL_DIS,
	SECID_SYS1_PLL_OD,
	SECID_CPU_CLK_SEL,
	SECID_CPU_CLK_RD,
	SECID_CPU_CLK_DYN,
	SECID_A73_CLK_SEL,
	SECID_A73_CLK_RD,
	SECID_A73_CLK_DYN,
	SECID_GP1_DCO_PLL,
	SECID_GP1_DCO_PLL_DIS,
	SECID_GP1_PLL_OD,
};

#endif /* __S4_H */
