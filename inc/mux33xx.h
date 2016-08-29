/*
 * AM33XX pad control register macros.
 *
 * Copyright (C) 2011 Texas Instruments, Inc. - http://www.ti.com/
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation version 2.
 *
 * This program is distributed "as is" WITHOUT ANY WARRANTY of any
 * kind, whether express or implied; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __ARCH_ARM_MACH_OMAP2_MUX335X_H
#define __ARCH_ARM_MACH_OMAP2_MUX335X_H

#define AM33XX_CONTROL_PADCONF_MUX_PBASE			0x44E10000LU

/* If pin is not defined as input, pull would get disabled.
 * If defined as input, flags supplied will determine pull on/off.
 */
#define AM33XX_MUX(mode0, mux_value)					\
{									\
	.reg_offset	= (AM33XX_CONTROL_PADCONF_##mode0##_OFFSET),	\
	.value		= (((mux_value) & AM33XX_INPUT_EN) ? (mux_value)\
				: ((mux_value) | AM33XX_PULL_DISA)),	\
}

/*
 * AM33XX CONTROL_PADCONF* register offsets for pin-muxing
 *
 * Add AM33XX_CONTROL_PADCONF_MUX_PBASE to these values to get the
 * absolute addresses. The macro names below are mode-0 names of
 * corresponding pins.
 */

#define AM33XX_CONTROL_PADCONF_GPMC_AD0_OFFSET			0x0800
#define AM33XX_CONTROL_PADCONF_GPMC_AD1_OFFSET			0x0804
#define AM33XX_CONTROL_PADCONF_GPMC_AD2_OFFSET			0x0808
#define AM33XX_CONTROL_PADCONF_GPMC_AD3_OFFSET			0x080C
#define AM33XX_CONTROL_PADCONF_GPMC_AD4_OFFSET			0x0810
#define AM33XX_CONTROL_PADCONF_GPMC_AD5_OFFSET			0x0814
#define AM33XX_CONTROL_PADCONF_GPMC_AD6_OFFSET			0x0818
#define AM33XX_CONTROL_PADCONF_GPMC_AD7_OFFSET			0x081C
#define AM33XX_CONTROL_PADCONF_GPMC_AD8_OFFSET			0x0820
#define AM33XX_CONTROL_PADCONF_GPMC_AD9_OFFSET			0x0824
#define AM33XX_CONTROL_PADCONF_GPMC_AD10_OFFSET			0x0828
#define AM33XX_CONTROL_PADCONF_GPMC_AD11_OFFSET			0x082C
#define AM33XX_CONTROL_PADCONF_GPMC_AD12_OFFSET			0x0830
#define AM33XX_CONTROL_PADCONF_GPMC_AD13_OFFSET			0x0834
#define AM33XX_CONTROL_PADCONF_GPMC_AD14_OFFSET			0x0838
#define AM33XX_CONTROL_PADCONF_GPMC_AD15_OFFSET			0x083C
#define AM33XX_CONTROL_PADCONF_GPMC_A0_OFFSET			0x0840
#define AM33XX_CONTROL_PADCONF_GPMC_A1_OFFSET			0x0844
#define AM33XX_CONTROL_PADCONF_GPMC_A2_OFFSET			0x0848
#define AM33XX_CONTROL_PADCONF_GPMC_A3_OFFSET			0x084C
#define AM33XX_CONTROL_PADCONF_GPMC_A4_OFFSET			0x0850
#define AM33XX_CONTROL_PADCONF_GPMC_A5_OFFSET			0x0854
#define AM33XX_CONTROL_PADCONF_GPMC_A6_OFFSET			0x0858
#define AM33XX_CONTROL_PADCONF_GPMC_A7_OFFSET			0x085C
#define AM33XX_CONTROL_PADCONF_GPMC_A8_OFFSET			0x0860
#define AM33XX_CONTROL_PADCONF_GPMC_A9_OFFSET			0x0864
#define AM33XX_CONTROL_PADCONF_GPMC_A10_OFFSET			0x0868
#define AM33XX_CONTROL_PADCONF_GPMC_A11_OFFSET			0x086C
#define AM33XX_CONTROL_PADCONF_GPMC_WAIT0_OFFSET		0x0870
#define AM33XX_CONTROL_PADCONF_GPMC_WPN_OFFSET			0x0874
#define AM33XX_CONTROL_PADCONF_GPMC_BEN1_OFFSET			0x0878
#define AM33XX_CONTROL_PADCONF_GPMC_CSN0_OFFSET			0x087C
#define AM33XX_CONTROL_PADCONF_GPMC_CSN1_OFFSET			0x0880
#define AM33XX_CONTROL_PADCONF_GPMC_CSN2_OFFSET			0x0884
#define AM33XX_CONTROL_PADCONF_GPMC_CSN3_OFFSET			0x0888
#define AM33XX_CONTROL_PADCONF_GPMC_CLK_OFFSET			0x088C
#define AM33XX_CONTROL_PADCONF_GPMC_ADVN_ALE_OFFSET		0x0890
#define AM33XX_CONTROL_PADCONF_GPMC_OEN_REN_OFFSET		0x0894
#define AM33XX_CONTROL_PADCONF_GPMC_WEN_OFFSET			0x0898
#define AM33XX_CONTROL_PADCONF_GPMC_BEN0_CLE_OFFSET		0x089C
#define AM33XX_CONTROL_PADCONF_LCD_DATA0_OFFSET			0x08A0
#define AM33XX_CONTROL_PADCONF_LCD_DATA1_OFFSET			0x08A4
#define AM33XX_CONTROL_PADCONF_LCD_DATA2_OFFSET			0x08A8
#define AM33XX_CONTROL_PADCONF_LCD_DATA3_OFFSET			0x08AC
#define AM33XX_CONTROL_PADCONF_LCD_DATA4_OFFSET			0x08B0
#define AM33XX_CONTROL_PADCONF_LCD_DATA5_OFFSET			0x08B4
#define AM33XX_CONTROL_PADCONF_LCD_DATA6_OFFSET			0x08B8
#define AM33XX_CONTROL_PADCONF_LCD_DATA7_OFFSET			0x08BC
#define AM33XX_CONTROL_PADCONF_LCD_DATA8_OFFSET			0x08C0
#define AM33XX_CONTROL_PADCONF_LCD_DATA9_OFFSET			0x08C4
#define AM33XX_CONTROL_PADCONF_LCD_DATA10_OFFSET		0x08C8
#define AM33XX_CONTROL_PADCONF_LCD_DATA11_OFFSET		0x08CC
#define AM33XX_CONTROL_PADCONF_LCD_DATA12_OFFSET		0x08D0
#define AM33XX_CONTROL_PADCONF_LCD_DATA13_OFFSET		0x08D4
#define AM33XX_CONTROL_PADCONF_LCD_DATA14_OFFSET		0x08D8
#define AM33XX_CONTROL_PADCONF_LCD_DATA15_OFFSET		0x08DC
#define AM33XX_CONTROL_PADCONF_LCD_VSYNC_OFFSET			0x08E0
#define AM33XX_CONTROL_PADCONF_LCD_HSYNC_OFFSET			0x08E4
#define AM33XX_CONTROL_PADCONF_LCD_PCLK_OFFSET			0x08E8
#define AM33XX_CONTROL_PADCONF_LCD_AC_BIAS_EN_OFFSET		0x08EC
#define AM33XX_CONTROL_PADCONF_MMC0_DAT3_OFFSET			0x08F0
#define AM33XX_CONTROL_PADCONF_MMC0_DAT2_OFFSET			0x08F4
#define AM33XX_CONTROL_PADCONF_MMC0_DAT1_OFFSET			0x08F8
#define AM33XX_CONTROL_PADCONF_MMC0_DAT0_OFFSET			0x08FC
#define AM33XX_CONTROL_PADCONF_MMC0_CLK_OFFSET			0x0900
#define AM33XX_CONTROL_PADCONF_MMC0_CMD_OFFSET			0x0904
#define AM33XX_CONTROL_PADCONF_MII1_COL_OFFSET			0x0908
#define AM33XX_CONTROL_PADCONF_MII1_CRS_OFFSET			0x090C
#define AM33XX_CONTROL_PADCONF_MII1_RXERR_OFFSET		0x0910
#define AM33XX_CONTROL_PADCONF_MII1_TXEN_OFFSET			0x0914
#define AM33XX_CONTROL_PADCONF_MII1_RXDV_OFFSET			0x0918
#define AM33XX_CONTROL_PADCONF_MII1_TXD3_OFFSET			0x091C
#define AM33XX_CONTROL_PADCONF_MII1_TXD2_OFFSET			0x0920
#define AM33XX_CONTROL_PADCONF_MII1_TXD1_OFFSET			0x0924
#define AM33XX_CONTROL_PADCONF_MII1_TXD0_OFFSET			0x0928
#define AM33XX_CONTROL_PADCONF_MII1_TXCLK_OFFSET		0x092C
#define AM33XX_CONTROL_PADCONF_MII1_RXCLK_OFFSET		0x0930
#define AM33XX_CONTROL_PADCONF_MII1_RXD3_OFFSET			0x0934
#define AM33XX_CONTROL_PADCONF_MII1_RXD2_OFFSET			0x0938
#define AM33XX_CONTROL_PADCONF_MII1_RXD1_OFFSET			0x093C
#define AM33XX_CONTROL_PADCONF_MII1_RXD0_OFFSET			0x0940
#define AM33XX_CONTROL_PADCONF_MII1_REFCLK_OFFSET		0x0944
#define AM33XX_CONTROL_PADCONF_MDIO_DATA_OFFSET			0x0948
#define AM33XX_CONTROL_PADCONF_MDIO_CLK_OFFSET			0x094C
#define AM33XX_CONTROL_PADCONF_SPI0_SCLK_OFFSET			0x0950
#define AM33XX_CONTROL_PADCONF_SPI0_D0_OFFSET			0x0954
#define AM33XX_CONTROL_PADCONF_SPI0_D1_OFFSET			0x0958
#define AM33XX_CONTROL_PADCONF_SPI0_CS0_OFFSET			0x095C
#define AM33XX_CONTROL_PADCONF_SPI0_CS1_OFFSET			0x0960
#define AM33XX_CONTROL_PADCONF_ECAP0_IN_PWM0_OUT_OFFSET		0x0964
#define AM33XX_CONTROL_PADCONF_UART0_CTSN_OFFSET		0x0968
#define AM33XX_CONTROL_PADCONF_UART0_RTSN_OFFSET		0x096C
#define AM33XX_CONTROL_PADCONF_UART0_RXD_OFFSET			0x0970
#define AM33XX_CONTROL_PADCONF_UART0_TXD_OFFSET			0x0974
#define AM33XX_CONTROL_PADCONF_UART1_CTSN_OFFSET		0x0978
#define AM33XX_CONTROL_PADCONF_UART1_RTSN_OFFSET		0x097C
#define AM33XX_CONTROL_PADCONF_UART1_RXD_OFFSET			0x0980
#define AM33XX_CONTROL_PADCONF_UART1_TXD_OFFSET			0x0984
#define AM33XX_CONTROL_PADCONF_I2C0_SDA_OFFSET			0x0988
#define AM33XX_CONTROL_PADCONF_I2C0_SCL_OFFSET			0x098C
#define AM33XX_CONTROL_PADCONF_MCASP0_ACLKX_OFFSET		0x0990
#define AM33XX_CONTROL_PADCONF_MCASP0_FSX_OFFSET		0x0994
#define AM33XX_CONTROL_PADCONF_MCASP0_AXR0_OFFSET		0x0998
#define AM33XX_CONTROL_PADCONF_MCASP0_AHCLKR_OFFSET		0x099C
#define AM33XX_CONTROL_PADCONF_MCASP0_ACLKR_OFFSET		0x09A0
#define AM33XX_CONTROL_PADCONF_MCASP0_FSR_OFFSET		0x09A4
#define AM33XX_CONTROL_PADCONF_MCASP0_AXR1_OFFSET		0x09A8
#define AM33XX_CONTROL_PADCONF_MCASP0_AHCLKX_OFFSET		0x09AC
#define AM33XX_CONTROL_PADCONF_XDMA_EVENT_INTR0_OFFSET		0x09B0
#define AM33XX_CONTROL_PADCONF_XDMA_EVENT_INTR1_OFFSET		0x09B4
#define AM33XX_CONTROL_PADCONF_WARMRSTN_OFFSET			0x09B8
#define AM33XX_CONTROL_PADCONF_PWRONRSTN_OFFSET			0x09BC
#define AM33XX_CONTROL_PADCONF_NMIN_OFFSET			0x09C0
#define AM33XX_CONTROL_PADCONF_XTALIN_OFFSET			0x09C4
#define AM33XX_CONTROL_PADCONF_XTALOUT_OFFSET			0x09C8
#define AM33XX_CONTROL_PADCONF_TMS_OFFSET			0x09D0
#define AM33XX_CONTROL_PADCONF_TDI_OFFSET			0x09D4
#define AM33XX_CONTROL_PADCONF_TDO_OFFSET			0x09D8
#define AM33XX_CONTROL_PADCONF_TCK_OFFSET			0x09DC
#define AM33XX_CONTROL_PADCONF_TRSTN_OFFSET			0x09E0
#define AM33XX_CONTROL_PADCONF_EMU0_OFFSET			0x09E4
#define AM33XX_CONTROL_PADCONF_EMU1_OFFSET			0x09E8
#define AM33XX_CONTROL_PADCONF_RTC_XTALIN_OFFSET		0x09EC
#define AM33XX_CONTROL_PADCONF_RTC_XTALOUT_OFFSET		0x09F0
#define AM33XX_CONTROL_PADCONF_RTC_PWRONRSTN_OFFSET		0x09F8
#define AM33XX_CONTROL_PADCONF_EXT_WAKEUP_OFFSET		0x0A00
#define AM33XX_CONTROL_PADCONF_PMIC_POWER_EN_OFFSET		0x09F4
#define AM33XX_CONTROL_PADCONF_RTC_KALDO_ENN_OFFSET		0x0A04
#define AM33XX_CONTROL_PADCONF_USB0_DM_OFFSET			0x0A08
#define AM33XX_CONTROL_PADCONF_USB0_DP_OFFSET		        0x0A0C
#define AM33XX_CONTROL_PADCONF_USB0_CE_OFFSET		        0x0A10
#define AM33XX_CONTROL_PADCONF_USB0_ID_OFFSET		        0x0A14
#define AM33XX_CONTROL_PADCONF_USB0_VBUS_OFFSET			0x0A18
#define AM33XX_CONTROL_PADCONF_USB0_DRVVBUS_OFFSET		0x0A1C
#define AM33XX_CONTROL_PADCONF_USB1_DM_OFFSET			0x0A20
#define AM33XX_CONTROL_PADCONF_USB1_DP_OFFSET		        0x0A24
#define AM33XX_CONTROL_PADCONF_USB1_CE_OFFSET		        0x0A28
#define AM33XX_CONTROL_PADCONF_USB1_ID_OFFSET		        0x0A2C
#define AM33XX_CONTROL_PADCONF_USB1_VBUS_OFFSET			0x0A30
#define AM33XX_CONTROL_PADCONF_USB1_DRVVBUS_OFFSET		0x0A34
#define AM33XX_CONTROL_PADCONF_DDR_RESETN_OFFSET		0x0A38
#define AM33XX_CONTROL_PADCONF_DDR_CSN0_OFFSET			0x0A3C
#define AM33XX_CONTROL_PADCONF_DDR_CKE_OFFSET			0x0A40
#define AM33XX_CONTROL_PADCONF_DDR_CK_OFFSET			0x0A44
#define AM33XX_CONTROL_PADCONF_DDR_CKN_OFFSET			0x0A48
#define AM33XX_CONTROL_PADCONF_DDR_CASN_OFFSET			0x0A4C
#define AM33XX_CONTROL_PADCONF_DDR_RASN_OFFSET			0x0A50
#define AM33XX_CONTROL_PADCONF_DDR_WEN_OFFSET			0x0A54
#define AM33XX_CONTROL_PADCONF_DDR_BA0_OFFSET			0x0A58
#define AM33XX_CONTROL_PADCONF_DDR_BA1_OFFSET			0x0A5C
#define AM33XX_CONTROL_PADCONF_DDR_BA2_OFFSET			0x0A60
#define AM33XX_CONTROL_PADCONF_DDR_A0_OFFSET			0x0A64
#define AM33XX_CONTROL_PADCONF_DDR_A1_OFFSET			0x0A68
#define AM33XX_CONTROL_PADCONF_DDR_A2_OFFSET			0x0A6C
#define AM33XX_CONTROL_PADCONF_DDR_A3_OFFSET			0x0A70
#define AM33XX_CONTROL_PADCONF_DDR_A4_OFFSET			0x0A74
#define AM33XX_CONTROL_PADCONF_DDR_A5_OFFSET			0x0A78
#define AM33XX_CONTROL_PADCONF_DDR_A6_OFFSET			0x0A7C
#define AM33XX_CONTROL_PADCONF_DDR_A7_OFFSET			0x0A80
#define AM33XX_CONTROL_PADCONF_DDR_A8_OFFSET			0x0A84
#define AM33XX_CONTROL_PADCONF_DDR_A9_OFFSET			0x0A88
#define AM33XX_CONTROL_PADCONF_DDR_A10_OFFSET			0x0A8C
#define AM33XX_CONTROL_PADCONF_DDR_A11_OFFSET			0x0A90
#define AM33XX_CONTROL_PADCONF_DDR_A12_OFFSET			0x0A94
#define AM33XX_CONTROL_PADCONF_DDR_A13_OFFSET			0x0A98
#define AM33XX_CONTROL_PADCONF_DDR_A14_OFFSET			0x0A9C
#define AM33XX_CONTROL_PADCONF_DDR_A15_OFFSET			0x0AA0
#define AM33XX_CONTROL_PADCONF_DDR_ODT_OFFSET			0x0AA4
#define AM33XX_CONTROL_PADCONF_DDR_D0_OFFSET			0x0AA8
#define AM33XX_CONTROL_PADCONF_DDR_D1_OFFSET			0x0AAC
#define AM33XX_CONTROL_PADCONF_DDR_D2_OFFSET			0x0AB0
#define AM33XX_CONTROL_PADCONF_DDR_D3_OFFSET			0x0AB4
#define AM33XX_CONTROL_PADCONF_DDR_D4_OFFSET			0x0AB8
#define AM33XX_CONTROL_PADCONF_DDR_D5_OFFSET			0x0ABC
#define AM33XX_CONTROL_PADCONF_DDR_D6_OFFSET			0x0AC0
#define AM33XX_CONTROL_PADCONF_DDR_D7_OFFSET			0x0AC4
#define AM33XX_CONTROL_PADCONF_DDR_D8_OFFSET			0x0AC8
#define AM33XX_CONTROL_PADCONF_DDR_D9_OFFSET			0x0ACC
#define AM33XX_CONTROL_PADCONF_DDR_D10_OFFSET			0x0AD0
#define AM33XX_CONTROL_PADCONF_DDR_D11_OFFSET			0x0AD4
#define AM33XX_CONTROL_PADCONF_DDR_D12_OFFSET			0x0AD8
#define AM33XX_CONTROL_PADCONF_DDR_D13_OFFSET			0x0ADC
#define AM33XX_CONTROL_PADCONF_DDR_D14_OFFSET			0x0AE0
#define AM33XX_CONTROL_PADCONF_DDR_D15_OFFSET			0x0AE4
#define AM33XX_CONTROL_PADCONF_DDR_DQM0_OFFSET			0x0AE8
#define AM33XX_CONTROL_PADCONF_DDR_DQM1_OFFSET			0x0AEC
#define AM33XX_CONTROL_PADCONF_DDR_DQS0_OFFSET			0x0AF0
#define AM33XX_CONTROL_PADCONF_DDR_DQSN0_OFFSET			0x0AF4
#define AM33XX_CONTROL_PADCONF_DDR_DQS1_OFFSET			0x0AF8
#define AM33XX_CONTROL_PADCONF_DDR_DQSN1_OFFSET			0x0AFC
#define AM33XX_CONTROL_PADCONF_DDR_VREF_OFFSET			0x0B00
#define AM33XX_CONTROL_PADCONF_DDR_VTP_OFFSET			0x0B04
#define AM33XX_CONTROL_PADCONF_AIN3_OFFSET			0x0B20
#define AM33XX_CONTROL_PADCONF_AIN2_OFFSET			0x0B24
#define AM33XX_CONTROL_PADCONF_AIN1_OFFSET			0x0B28
#define AM33XX_CONTROL_PADCONF_AIN0_OFFSET			0x0B2C
#define AM33XX_CONTROL_PADCONF_VREFP_OFFSET			0x0B30
#define AM33XX_CONTROL_PADCONF_VREFN_OFFSET			0x0B34

#define AM33XX_CONTROL_PADCONF_UART4_RXD_OFFSET			0x0B38
#define AM33XX_CONTROL_PADCONF_UART4_TXD_OFFSET			0x0B3C

#define AM33XX_CONTROL_PADCONF_MUX_SIZE				\
		(AM33XX_CONTROL_PADCONF_VREFN_OFFSET + 0x4)

#endif
