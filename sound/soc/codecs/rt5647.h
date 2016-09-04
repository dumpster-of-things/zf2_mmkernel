/*
 * rt5647.h  --  RT5647 ALSA SoC audio driver
 *
 * Copyright 2011 Realtek Microelectronics
 * Author: Johnny Hsu <johnnyhsu@realtek.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __RT5647_H__
#define __RT5647_H__

/* Info */
#define RT5647_RESET				0x00
#define RT5647_VENDOR_ID			0xfd
#define RT5647_VENDOR_ID1			0xfe
#define RT5647_VENDOR_ID2			0xff
/*  I/O - Output */
#define RT5647_SPK_VOL				0x01
#define RT5647_HP_VOL				0x02
#define RT5647_LOUT1				0x03
#define RT5647_MONO_OUT				0x04
#define RT5647_LOUT2				0x05
/* I/O - Input */
#define RT5647_CJ_CTRL1				0x0a
#define RT5647_CJ_CTRL2				0x0b
#define RT5647_CJ_CTRL3				0x0c
#define RT5647_IN2				0x0d
#define RT5647_IN3				0x0e
#define RT5647_INL1_INR1_VOL			0x0f
/* I/O - ADC/DAC/DMIC */
#define RT5647_SIDETONE_CTRL			0x18
#define RT5647_DAC1_DIG_VOL			0x19
#define RT5647_DAC2_DIG_VOL			0x1a
#define RT5647_DAC_CTRL				0x1b
#define RT5647_STO1_ADC_DIG_VOL			0x1c
#define RT5647_MONO_ADC_DIG_VOL			0x1d
#define RT5647_ADC_BST_VOL1			0x1e
/* Mixer - D-D */
#define RT5647_ADC_BST_VOL2			0x20
#define RT5647_STO1_ADC_MIXER			0x27
#define RT5647_MONO_ADC_MIXER			0x28
#define RT5647_AD_DA_MIXER			0x29
#define RT5647_STO_DAC_MIXER			0x2a
#define RT5647_MONO_DAC_MIXER			0x2b
#define RT5647_DIG_MIXER			0x2c
#define RT5647_DIG_INF1_DATA			0x2f
/* Mixer - PDM */
#define RT5647_PDM_OUT_CTRL			0x31
#define RT5647_PDM_DATA_CTRL1			0x32
#define RT5647_PDM1_DATA_CTRL2			0x33
#define RT5647_PDM1_DATA_CTRL3			0x34
#define RT5647_PDM1_DATA_CTRL4			0x35
#define RT5647_PDM2_DATA_CTRL2			0x36
#define RT5647_PDM2_DATA_CTRL3			0x37
#define RT5647_PDM2_DATA_CTRL4			0x38
/* Mixer - ADC */
#define RT5647_REC_L1_MIXER			0x3b
#define RT5647_REC_L2_MIXER			0x3c
#define RT5647_REC_R1_MIXER			0x3d
#define RT5647_REC_R2_MIXER			0x3e
/* Mixer - DAC */
#define RT5647_HPMIXL_CTRL			0x3f
#define RT5647_HPOMIXL_CTRL			0x40
#define RT5647_HPMIXR_CTRL			0x41
#define RT5647_HPOMIXR_CTRL			0x42
#define RT5647_HPO_MIXER			0x45
#define RT5647_SPK_L_MIXER			0x46
#define RT5647_SPK_R_MIXER			0x47
#define RT5647_SPO_MIXER			0x48
#define RT5647_SPO_CLSD_RATIO			0x4a
#define RT5647_MONO_MIXER1			0x4b
#define RT5647_MONO_MIXER2			0x4c
#define RT5647_OUTMIXL_CTRL1			0x4d
#define RT5647_OUTMIXL_CTRL2			0x4e
#define RT5647_OUTMIXL_CTRL3			0x4f
#define RT5647_OUTMIXR_CTRL1			0x50
#define RT5647_OUTMIXR_CTRL2			0x51
#define RT5647_OUTMIXR_CTRL3			0x52
#define RT5647_LOUT_MIXER			0x53
/* Haptic */
#define RT5647_HAPTIC_CTRL1			0x56
#define RT5647_HAPTIC_CTRL2			0x57
#define RT5647_HAPTIC_CTRL3			0x58
#define RT5647_HAPTIC_CTRL4			0x59
#define RT5647_HAPTIC_CTRL5			0x5a
#define RT5647_HAPTIC_CTRL6			0x5b
#define RT5647_HAPTIC_CTRL7			0x5c
#define RT5647_HAPTIC_CTRL8			0x5d
#define RT5647_HAPTIC_CTRL9			0x5e
#define RT5647_HAPTIC_CTRL10			0x5f
/* Power */
#define RT5647_PWR_DIG1				0x61
#define RT5647_PWR_DIG2				0x62
#define RT5647_PWR_ANLG1			0x63
#define RT5647_PWR_ANLG2			0x64
#define RT5647_PWR_MIXER			0x65
#define RT5647_PWR_VOL				0x66
/* Private Register Control */
#define RT5647_PRIV_INDEX			0x6a
#define RT5647_PRIV_DATA			0x6c
/* Format - ADC/DAC */
#define RT5647_I2S1_SDP				0x70
#define RT5647_I2S2_SDP				0x71
#define RT5647_I2S3_SDP				0x72
#define RT5647_ADDA_CLK1			0x73
#define RT5647_ADDA_CLK2			0x74
#define RT5647_DMIC_CTRL1			0x75
#define RT5647_DMIC_CTRL2			0x76
/* Format - TDM Control */
#define RT5647_TDM_CTRL_1			0x77
#define RT5647_TDM_CTRL_2			0x78
#define RT5647_TDM_CTRL_3			0x79

/* Function - Analog */
#define RT5647_GLB_CLK				0x80
#define RT5647_PLL_CTRL1			0x81
#define RT5647_PLL_CTRL2			0x82
#define RT5647_ASRC_1				0x83
#define RT5647_ASRC_2				0x84
#define RT5647_ASRC_3				0x85
#define RT5647_ASRC_4				0x8a
#define RT5647_DEPOP_M1				0x8e
#define RT5647_DEPOP_M2				0x8f
#define RT5647_DEPOP_M3				0x90
#define RT5647_CHARGE_PUMP			0x91
#define RT5647_MICBIAS				0x93
#define RT5647_A_JD_CTRL1			0x94
#define RT5647_VAD_CTRL1			0x9a
#define RT5647_VAD_CTRL2			0x9b
#define RT5647_VAD_CTRL3			0x9c
#define RT5647_VAD_CTRL4			0x9d
#define RT5647_VAD_CTRL5			0x9e
#define RT5647_CLSD_OUT_CTRL			0xa0
#define RT5647_CLSD_OUT_CTRL1			0xa1
#define RT5647_CLSD_OUT_CTRL2			0xa2
/* Function - Digital */
#define RT5647_ADC_EQ_CTRL1			0xae
#define RT5647_ADC_EQ_CTRL2			0xaf
#define RT5647_EQ_CTRL1				0xb0
#define RT5647_EQ_CTRL2				0xb1
#define RT5647_ALC_DRC_CTRL1			0xb2
#define RT5647_ALC_DRC_CTRL2			0xb3
#define RT5647_ALC_CTRL_1			0xb4
#define RT5647_ALC_CTRL_2			0xb5
#define RT5647_ALC_CTRL_3			0xb6
#define RT5647_ALC_CTRL_4			0xb7
#define RT5647_JD_CTRL				0xbb
#define RT5647_IRQ_CTRL1			0xbc
#define RT5647_IRQ_CTRL2			0xbd
#define RT5647_IRQ_CTRL3			0xbe
#define RT5647_INT_IRQ_ST			0xbf
#define RT5647_GPIO_CTRL1			0xc0
#define RT5647_GPIO_CTRL2			0xc1
#define RT5647_GPIO_CTRL3			0xc2
#define RT5647_GPIO_CTRL4			0xc3
#define RT5647_SCRABBLE_FUN			0xcd
#define RT5647_SCRABBLE_CTRL			0xce
#define RT5647_BASE_BACK			0xcf
#define RT5647_MP3_PLUS1			0xd0
#define RT5647_MP3_PLUS2			0xd1
#define RT5647_ADJ_HPF1				0xd3
#define RT5647_ADJ_HPF2				0xd4
#define RT5647_HP_CALIB_AMP_DET			0xd6
#define RT5647_SV_ZCD1				0xd9
#define RT5647_SV_ZCD2				0xda
#define RT5647_IL_CMD				0xdb
#define RT5647_IL_CMD2				0xdc
#define RT5647_IL_CMD3				0xdd
#define RT5647_DRC1_HL_CTRL1			0xe6
#define RT5647_DRC1_HL_CTRL2			0xe7
#define RT5647_DRC2_HL_CTRL1			0xe8
#define RT5647_DRC2_HL_CTRL2			0xe9
#define RT5647_MUTI_DRC_CTRL1			0xea
#define RT5647_ADC_MONO_HP_CTRL1		0xec
#define RT5647_ADC_MONO_HP_CTRL2		0xed
#define RT5647_DRC2_CTRL1			0xf0
#define RT5647_DRC2_CTRL2			0xf1
#define RT5647_DRC2_CTRL3			0xf2
#define RT5647_DRC2_CTRL4			0xf3
#define RT5647_DRC2_CTRL5			0xf4
#define RT5647_JD_CTRL3				0xf8
#define RT5647_JD_CTRL4				0xf9
/* General Control */
#define RT5647_DIG_MISC				0xfa
#define RT5647_GEN_CTRL2			0xfb
#define RT5647_GEN_CTRL3			0xfc


/* Index of Codec Private Register definition */
#define RT5647_DIG_VOL				0x00
#define RT5647_PR_ALC_CTRL_1			0x01
#define RT5647_PR_ALC_CTRL_2			0x02
#define RT5647_PR_ALC_CTRL_3			0x03
#define RT5647_PR_ALC_CTRL_4			0x04
#define RT5647_PR_ALC_CTRL_5			0x05
#define RT5647_PR_ALC_CTRL_6			0x06
#define RT5647_BIAS_CUR1			0x12
#define RT5647_BIAS_CUR3			0x14
#define RT5647_CLSD_INT_REG1			0x1c
#define RT5647_MAMP_INT_REG2			0x37
#define RT5647_CHOP_DAC_ADC			0x3d
#define RT5647_MIXER_INT_REG			0x3f
#define RT5647_3D_SPK				0x63
#define RT5647_WND_1				0x6c
#define RT5647_WND_2				0x6d
#define RT5647_WND_3				0x6e
#define RT5647_WND_4				0x6f
#define RT5647_WND_5				0x70
#define RT5647_WND_8				0x73
#define RT5647_DIP_SPK_INF			0x75
#define RT5647_HP_DCC_INT1			0x77
#define RT5647_EQ_BW_LOP			0xa0
#define RT5647_EQ_GN_LOP			0xa1
#define RT5647_EQ_FC_BP1			0xa2
#define RT5647_EQ_BW_BP1			0xa3
#define RT5647_EQ_GN_BP1			0xa4
#define RT5647_EQ_FC_BP2			0xa5
#define RT5647_EQ_BW_BP2			0xa6
#define RT5647_EQ_GN_BP2			0xa7
#define RT5647_EQ_FC_BP3			0xa8
#define RT5647_EQ_BW_BP3			0xa9
#define RT5647_EQ_GN_BP3			0xaa
#define RT5647_EQ_FC_BP4			0xab
#define RT5647_EQ_BW_BP4			0xac
#define RT5647_EQ_GN_BP4			0xad
#define RT5647_EQ_FC_HIP1			0xae
#define RT5647_EQ_GN_HIP1			0xaf
#define RT5647_EQ_FC_HIP2			0xb0
#define RT5647_EQ_BW_HIP2			0xb1
#define RT5647_EQ_GN_HIP2			0xb2
#define RT5647_EQ_PRE_VOL			0xb3
#define RT5647_EQ_PST_VOL			0xb4


/* global definition */
#define RT5647_L_MUTE				(0x1 << 15)
#define RT5647_L_MUTE_SFT			15
#define RT5647_VOL_L_MUTE			(0x1 << 14)
#define RT5647_VOL_L_SFT			14
#define RT5647_R_MUTE				(0x1 << 7)
#define RT5647_R_MUTE_SFT			7
#define RT5647_VOL_R_MUTE			(0x1 << 6)
#define RT5647_VOL_R_SFT			6
#define RT5647_L_VOL_MASK			(0x3f << 8)
#define RT5647_L_VOL_SFT			8
#define RT5647_R_VOL_MASK			(0x3f)
#define RT5647_R_VOL_SFT			0

/* Combo Jack Control 1 (0x0a) */
#define RT5647_CBJ_BST1_MASK			(0xf << 12)
#define RT5647_CBJ_BST1_SFT			(12)
#define RT5647_CBJ_JD_HP_EN			(0x1 << 9)
#define RT5647_CBJ_JD_MIC_EN			(0x1 << 8)
#define RT5647_CBJ_JD_MIC_SW_EN			(0x1 << 7)
#define RT5647_CBJ_MIC_SEL_R			(0x1 << 6)
#define RT5647_CBJ_MIC_SEL_L			(0x1 << 5)
#define RT5647_CBJ_MIC_SW			(0x1 << 4)
#define RT5647_CBJ_BST1_EN			(0x1 << 2)

/* Combo Jack Control 2 (0x0b) */
#define RT5647_CBJ_MN_JD			(0x1 << 12)
#define RT5647_CAPLESS_EN			(0x1 << 11)
#define RT5647_CBJ_DET_MODE			(0x1 << 7)

/* Combo Jack Control 3 (0x0c) */
#define RT5647_CBJ_TIE_G_L			(0x1 << 15)
#define RT5647_CBJ_TIE_G_R			(0x1 << 14)

/* IN2 Control (0x0d) */
/* IN3 Control (0x0e) */
#define RT5647_BST_MASK1			(0xf<<12)
#define RT5647_BST_SFT1				12
#define RT5647_BST_MASK2			(0xf<<8)
#define RT5647_BST_SFT2				8
#define RT5647_IN_DF1				(0x1 << 7)
#define RT5647_IN_SFT1				7
#define RT5647_IN_DF2				(0x1 << 6)
#define RT5647_IN_SFT2				6

/* INL and INR Volume Control (0x0f) */
#define RT5647_INL_SEL_MASK			(0x1 << 15)
#define RT5647_INL_SEL_SFT			15
#define RT5647_INL_SEL_IN4P			(0x0 << 15)
#define RT5647_INL_SEL_MONOP			(0x1 << 15)
#define RT5647_INL_VOL_MASK			(0x1f << 8)
#define RT5647_INL_VOL_SFT			8
#define RT5647_INR_SEL_MASK			(0x1 << 7)
#define RT5647_INR_SEL_SFT			7
#define RT5647_INR_SEL_IN4N			(0x0 << 7)
#define RT5647_INR_SEL_MONON			(0x1 << 7)
#define RT5647_INR_VOL_MASK			(0x1f)
#define RT5647_INR_VOL_SFT			0

/* Sidetone Control (0x18) */
#define RT5647_ST_SEL_MASK			(0x7 << 9)
#define RT5647_ST_SEL_SFT			9
#define RT5647_M_ST_DACR2			(0x1 << 8)
#define RT5647_M_ST_DACR2_SFT			8
#define RT5647_M_ST_DACL2			(0x1 << 7)
#define RT5647_M_ST_DACL2_SFT			7
#define RT5647_ST_EN				(0x1 << 6)
#define RT5647_ST_EN_SFT			6

/* DAC1 Digital Volume (0x19) */
#define RT5647_DAC_L1_VOL_MASK			(0xff << 8)
#define RT5647_DAC_L1_VOL_SFT			8
#define RT5647_DAC_R1_VOL_MASK			(0xff)
#define RT5647_DAC_R1_VOL_SFT			0

/* DAC2 Digital Volume (0x1a) */
#define RT5647_DAC_L2_VOL_MASK			(0xff << 8)
#define RT5647_DAC_L2_VOL_SFT			8
#define RT5647_DAC_R2_VOL_MASK			(0xff)
#define RT5647_DAC_R2_VOL_SFT			0

/* DAC2 Control (0x1b) */
#define RT5647_M_DAC_L2_VOL			(0x1 << 13)
#define RT5647_M_DAC_L2_VOL_SFT			13
#define RT5647_M_DAC_R2_VOL			(0x1 << 12)
#define RT5647_M_DAC_R2_VOL_SFT			12
#define RT5647_DAC2_L_SEL_MASK			(0x7 << 4)
#define RT5647_DAC2_L_SEL_SFT			4
#define RT5647_DAC2_R_SEL_MASK			(0x7 << 0)
#define RT5647_DAC2_R_SEL_SFT			0

/* ADC Digital Volume Control (0x1c) */
#define RT5647_ADC_L_VOL_MASK			(0x7f << 8)
#define RT5647_ADC_L_VOL_SFT			8
#define RT5647_ADC_R_VOL_MASK			(0x7f)
#define RT5647_ADC_R_VOL_SFT			0

/* Mono ADC Digital Volume Control (0x1d) */
#define RT5647_MONO_ADC_L_VOL_MASK		(0x7f << 8)
#define RT5647_MONO_ADC_L_VOL_SFT		8
#define RT5647_MONO_ADC_R_VOL_MASK		(0x7f)
#define RT5647_MONO_ADC_R_VOL_SFT		0

/* ADC Boost Volume Control (0x1e) */
#define RT5647_STO1_ADC_L_BST_MASK		(0x3 << 14)
#define RT5647_STO1_ADC_L_BST_SFT		14
#define RT5647_STO1_ADC_R_BST_MASK		(0x3 << 12)
#define RT5647_STO1_ADC_R_BST_SFT		12
#define RT5647_STO1_ADC_COMP_MASK		(0x3 << 10)
#define RT5647_STO1_ADC_COMP_SFT		10
#define RT5647_STO2_ADC_L_BST_MASK		(0x3 << 8)
#define RT5647_STO2_ADC_L_BST_SFT		8
#define RT5647_STO2_ADC_R_BST_MASK		(0x3 << 6)
#define RT5647_STO2_ADC_R_BST_SFT		6
#define RT5647_STO2_ADC_COMP_MASK		(0x3 << 4)
#define RT5647_STO2_ADC_COMP_SFT		4

/* Mono ADC Boost Volume Control (0x20) */
#define RT5647_MONO_ADC_L_BST_MASK		(0x3 << 14)
#define RT5647_MONO_ADC_L_BST_SFT		14
#define RT5647_MONO_ADC_R_BST_MASK		(0x3 << 12)
#define RT5647_MONO_ADC_R_BST_SFT		12
#define RT5647_MONO_ADC_COMP_MASK		(0x3 << 10)
#define RT5647_MONO_ADC_COMP_SFT		10

/* Stereo2 ADC Mixer Control (0x26) */
#define RT5647_STO2_ADC_SRC_MASK		(0x1 << 15)
#define RT5647_STO2_ADC_SRC_SFT			15

/* Stereo ADC Mixer Control (0x27) */
#define RT5647_M_ADC_L1				(0x1 << 14)
#define RT5647_M_ADC_L1_SFT			14
#define RT5647_M_ADC_L2				(0x1 << 13)
#define RT5647_M_ADC_L2_SFT			13
#define RT5647_ADC_1_SRC_MASK			(0x1 << 12)
#define RT5647_ADC_1_SRC_SFT			12
#define RT5647_ADC_1_SRC_ADC			(0x1 << 12)
#define RT5647_ADC_1_SRC_DACMIX			(0x0 << 12)
#define RT5647_ADC_2_SRC_MASK			(0x1 << 11)
#define RT5647_ADC_2_SRC_SFT			11
#define RT5647_DMIC_SRC_MASK			(0x1 << 8)
#define RT5647_DMIC_SRC_SFT			8
#define RT5647_M_ADC_R1				(0x1 << 6)
#define RT5647_M_ADC_R1_SFT			6
#define RT5647_M_ADC_R2				(0x1 << 5)
#define RT5647_M_ADC_R2_SFT			5
#define RT5647_DMIC3_SRC_MASK			(0x1 << 1)
#define RT5647_DMIC3_SRC_SFT			0

/* Mono ADC Mixer Control (0x28) */
#define RT5647_M_MONO_ADC_L1			(0x1 << 14)
#define RT5647_M_MONO_ADC_L1_SFT		14
#define RT5647_M_MONO_ADC_L2			(0x1 << 13)
#define RT5647_M_MONO_ADC_L2_SFT		13
#define RT5647_MONO_ADC_L1_SRC_MASK		(0x1 << 12)
#define RT5647_MONO_ADC_L1_SRC_SFT		12
#define RT5647_MONO_ADC_L1_SRC_DACMIXL		(0x0 << 12)
#define RT5647_MONO_ADC_L1_SRC_ADCL		(0x1 << 12)
#define RT5647_MONO_ADC_L2_SRC_MASK		(0x1 << 11)
#define RT5647_MONO_ADC_L2_SRC_SFT		11
#define RT5647_MONO_DMIC_L_SRC_MASK		(0x1 << 8)
#define RT5647_MONO_DMIC_L_SRC_SFT		8
#define RT5647_M_MONO_ADC_R1			(0x1 << 6)
#define RT5647_M_MONO_ADC_R1_SFT		6
#define RT5647_M_MONO_ADC_R2			(0x1 << 5)
#define RT5647_M_MONO_ADC_R2_SFT		5
#define RT5647_MONO_ADC_R1_SRC_MASK		(0x1 << 4)
#define RT5647_MONO_ADC_R1_SRC_SFT		4
#define RT5647_MONO_ADC_R1_SRC_ADCR		(0x1 << 4)
#define RT5647_MONO_ADC_R1_SRC_DACMIXR		(0x0 << 4)
#define RT5647_MONO_ADC_R2_SRC_MASK		(0x1 << 3)
#define RT5647_MONO_ADC_R2_SRC_SFT		3
#define RT5647_MONO_DMIC_R_SRC_MASK		(0x3)
#define RT5647_MONO_DMIC_R_SRC_SFT		0

/* ADC Mixer to DAC Mixer Control (0x29) */
#define RT5647_M_ADCMIX_L			(0x1 << 15)
#define RT5647_M_ADCMIX_L_SFT			15
#define RT5647_M_DAC1_L				(0x1 << 14)
#define RT5647_M_DAC1_L_SFT			14
#define RT5647_DAC1_R_SEL_MASK			(0x3 << 10)
#define RT5647_DAC1_R_SEL_SFT			10
#define RT5647_DAC1_R_SEL_IF1			(0x0 << 10)
#define RT5647_DAC1_R_SEL_IF2			(0x1 << 10)
#define RT5647_DAC1_R_SEL_IF3			(0x2 << 10)
#define RT5647_DAC1_R_SEL_IF4			(0x3 << 10)
#define RT5647_DAC1_L_SEL_MASK			(0x3 << 8)
#define RT5647_DAC1_L_SEL_SFT			8
#define RT5647_DAC1_L_SEL_IF1			(0x0 << 8)
#define RT5647_DAC1_L_SEL_IF2			(0x1 << 8)
#define RT5647_DAC1_L_SEL_IF3			(0x2 << 8)
#define RT5647_DAC1_L_SEL_IF4			(0x3 << 8)
#define RT5647_M_ADCMIX_R			(0x1 << 7)
#define RT5647_M_ADCMIX_R_SFT			7
#define RT5647_M_DAC1_R				(0x1 << 6)
#define RT5647_M_DAC1_R_SFT			6

/* Stereo DAC Mixer Control (0x2a) */
#define RT5647_M_DAC_L1				(0x1 << 14)
#define RT5647_M_DAC_L1_SFT			14
#define RT5647_DAC_L1_STO_L_VOL_MASK		(0x1 << 13)
#define RT5647_DAC_L1_STO_L_VOL_SFT		13
#define RT5647_M_DAC_L2				(0x1 << 12)
#define RT5647_M_DAC_L2_SFT			12
#define RT5647_DAC_L2_STO_L_VOL_MASK		(0x1 << 11)
#define RT5647_DAC_L2_STO_L_VOL_SFT		11
#define RT5647_M_ANC_DAC_L			(0x1 << 10)
#define RT5647_M_ANC_DAC_L_SFT			10
#define RT5647_M_DAC_R1_STO_L			(0x1 << 9)
#define RT5647_M_DAC_R1_STO_L_SFT			9
#define RT5647_DAC_R1_STO_L_VOL_MASK		(0x1 << 8)
#define RT5647_DAC_R1_STO_L_VOL_SFT		8
#define RT5647_M_DAC_R1				(0x1 << 6)
#define RT5647_M_DAC_R1_SFT			6
#define RT5647_DAC_R1_STO_R_VOL_MASK		(0x1 << 5)
#define RT5647_DAC_R1_STO_R_VOL_SFT		5
#define RT5647_M_DAC_R2				(0x1 << 4)
#define RT5647_M_DAC_R2_SFT			4
#define RT5647_DAC_R2_STO_R_VOL_MASK		(0x1 << 3)
#define RT5647_DAC_R2_STO_R_VOL_SFT		3
#define RT5647_M_ANC_DAC_R			(0x1 << 2)
#define RT5647_M_ANC_DAC_R_SFT			2
#define RT5647_M_DAC_L1_STO_R			(0x1 << 1)
#define RT5647_M_DAC_L1_STO_R_SFT			1
#define RT5647_DAC_L1_STO_R_VOL_MASK		(0x1)
#define RT5647_DAC_L1_STO_R_VOL_SFT		0

/* Mono DAC Mixer Control (0x2b) */
#define RT5647_M_DAC_L1_MONO_L			(0x1 << 14)
#define RT5647_M_DAC_L1_MONO_L_SFT		14
#define RT5647_DAC_L1_MONO_L_VOL_MASK		(0x1 << 13)
#define RT5647_DAC_L1_MONO_L_VOL_SFT		13
#define RT5647_M_DAC_L2_MONO_L			(0x1 << 12)
#define RT5647_M_DAC_L2_MONO_L_SFT		12
#define RT5647_DAC_L2_MONO_L_VOL_MASK		(0x1 << 11)
#define RT5647_DAC_L2_MONO_L_VOL_SFT		11
#define RT5647_M_DAC_R2_MONO_L			(0x1 << 10)
#define RT5647_M_DAC_R2_MONO_L_SFT		10
#define RT5647_DAC_R2_MONO_L_VOL_MASK		(0x1 << 9)
#define RT5647_DAC_R2_MONO_L_VOL_SFT		9
#define RT5647_M_DAC_R1_MONO_R			(0x1 << 6)
#define RT5647_M_DAC_R1_MONO_R_SFT		6
#define RT5647_DAC_R1_MONO_R_VOL_MASK		(0x1 << 5)
#define RT5647_DAC_R1_MONO_R_VOL_SFT		5
#define RT5647_M_DAC_R2_MONO_R			(0x1 << 4)
#define RT5647_M_DAC_R2_MONO_R_SFT		4
#define RT5647_DAC_R2_MONO_R_VOL_MASK		(0x1 << 3)
#define RT5647_DAC_R2_MONO_R_VOL_SFT		3
#define RT5647_M_DAC_L2_MONO_R			(0x1 << 2)
#define RT5647_M_DAC_L2_MONO_R_SFT		2
#define RT5647_DAC_L2_MONO_R_VOL_MASK		(0x1 << 1)
#define RT5647_DAC_L2_MONO_R_VOL_SFT		1

/* Digital Mixer Control (0x2c) */
#define RT5647_M_STO_L_DAC_L			(0x1 << 15)
#define RT5647_M_STO_L_DAC_L_SFT		15
#define RT5647_STO_L_DAC_L_VOL_MASK		(0x1 << 14)
#define RT5647_STO_L_DAC_L_VOL_SFT		14
#define RT5647_M_DAC_L2_DAC_L			(0x1 << 13)
#define RT5647_M_DAC_L2_DAC_L_SFT		13
#define RT5647_DAC_L2_DAC_L_VOL_MASK		(0x1 << 12)
#define RT5647_DAC_L2_DAC_L_VOL_SFT		12
#define RT5647_M_STO_R_DAC_R			(0x1 << 11)
#define RT5647_M_STO_R_DAC_R_SFT		11
#define RT5647_STO_R_DAC_R_VOL_MASK		(0x1 << 10)
#define RT5647_STO_R_DAC_R_VOL_SFT		10
#define RT5647_M_DAC_R2_DAC_R			(0x1 << 9)
#define RT5647_M_DAC_R2_DAC_R_SFT		9
#define RT5647_DAC_R2_DAC_R_VOL_MASK		(0x1 << 8)
#define RT5647_DAC_R2_DAC_R_VOL_SFT		8
#define RT5647_M_DAC_R2_DAC_L			(0x1 << 7)
#define RT5647_M_DAC_R2_DAC_L_SFT		7
#define RT5647_DAC_R2_DAC_L_VOL_MASK		(0x1 << 6)
#define RT5647_DAC_R2_DAC_L_VOL_SFT		6
#define RT5647_M_DAC_L2_DAC_R			(0x1 << 5)
#define RT5647_M_DAC_L2_DAC_R_SFT		5
#define RT5647_DAC_L2_DAC_R_VOL_MASK		(0x1 << 4)
#define RT5647_DAC_L2_DAC_R_VOL_SFT		4

/* DSP Path Control 1 (0x2d) */
#define RT5647_RXDP_SEL_MASK			(0x7 << 13)
#define RT5647_RXDP_SEL_SFT			13
#define RT5647_RXDP_SRC_MASK			(0x1 << 15)
#define RT5647_RXDP_SRC_SFT			15
#define RT5647_RXDP_SRC_NOR			(0x0 << 15)
#define RT5647_RXDP_SRC_DIV3			(0x1 << 15)
#define RT5647_TXDP_SRC_MASK			(0x1 << 14)
#define RT5647_TXDP_SRC_SFT			14
#define RT5647_TXDP_SRC_NOR			(0x0 << 14)
#define RT5647_TXDP_SRC_DIV3			(0x1 << 14)
#define RT5647_DSP_UL_SEL			(0x1 << 1)
#define RT5647_DSP_UL_SFT			1
#define RT5647_DSP_DL_SEL			0x1
#define RT5647_DSP_DL_SFT			0

/* DSP Path Control 2 (0x2e) */
#define RT5647_TXDP_L_VOL_MASK			(0x7f << 8)
#define RT5647_TXDP_L_VOL_SFT			8
#define RT5647_TXDP_R_VOL_MASK			(0x7f)
#define RT5647_TXDP_R_VOL_SFT			0

/* Digital Interface Data Control (0x2f) */
#define RT5647_IF1_ADC2_IN_SEL			(0x1 << 15)
#define RT5647_IF1_ADC2_IN_SFT			15
#define RT5647_IF2_ADC_IN_MASK			(0x7 << 12)
#define RT5647_IF2_ADC_IN_SFT			12
#define RT5647_IF2_DAC_SEL_MASK			(0x3 << 10)
#define RT5647_IF2_DAC_SEL_SFT			10
#define RT5647_IF2_ADC_SEL_MASK			(0x3 << 8)
#define RT5647_IF2_ADC_SEL_SFT			8
#define RT5647_IF3_DAC_SEL_MASK			(0x3 << 6)
#define RT5647_IF3_DAC_SEL_SFT			6
#define RT5647_IF3_ADC_SEL_MASK			(0x3 << 4)
#define RT5647_IF3_ADC_SEL_SFT			4
#define RT5647_IF3_ADC_IN_MASK			(0x7)
#define RT5647_IF3_ADC_IN_SFT			0

/* PDM Output Control (0x31) */
#define RT5647_PDM1_L_MASK			(0x1 << 15)
#define RT5647_PDM1_L_SFT			15
#define RT5647_M_PDM1_L				(0x1 << 14)
#define RT5647_M_PDM1_L_SFT			14
#define RT5647_PDM1_R_MASK			(0x1 << 13)
#define RT5647_PDM1_R_SFT			13
#define RT5647_M_PDM1_R				(0x1 << 12)
#define RT5647_M_PDM1_R_SFT			12
#define RT5647_PDM2_L_MASK			(0x1 << 11)
#define RT5647_PDM2_L_SFT			11
#define RT5647_M_PDM2_L				(0x1 << 10)
#define RT5647_M_PDM2_L_SFT			10
#define RT5647_PDM2_R_MASK			(0x1 << 9)
#define RT5647_PDM2_R_SFT			9
#define RT5647_M_PDM2_R				(0x1 << 8)
#define RT5647_M_PDM2_R_SFT			8
#define RT5647_PDM2_BUSY			(0x1 << 7)
#define RT5647_PDM1_BUSY			(0x1 << 6)
#define RT5647_PDM_PATTERN			(0x1 << 5)
#define RT5647_PDM_GAIN				(0x1 << 4)
#define RT5647_PDM_DIV_MASK			(0x3)

/* REC Left Mixer Control 1 (0x3b) */
#define RT5647_G_HP_L_RM_L_MASK			(0x7 << 13)
#define RT5647_G_HP_L_RM_L_SFT			13
#define RT5647_G_IN_L_RM_L_MASK			(0x7 << 10)
#define RT5647_G_IN_L_RM_L_SFT			10
#define RT5647_G_BST4_RM_L_MASK			(0x7 << 7)
#define RT5647_G_BST4_RM_L_SFT			7
#define RT5647_G_BST3_RM_L_MASK			(0x7 << 4)
#define RT5647_G_BST3_RM_L_SFT			4
#define RT5647_G_BST2_RM_L_MASK			(0x7 << 1)
#define RT5647_G_BST2_RM_L_SFT			1

/* REC Left Mixer Control 2 (0x3c) */
#define RT5647_G_BST1_RM_L_MASK			(0x7 << 13)
#define RT5647_G_BST1_RM_L_SFT			13
#define RT5647_G_OM_L_RM_L_MASK			(0x7 << 10)
#define RT5647_G_OM_L_RM_L_SFT			10
#define RT5647_M_MM_L_RM_L			(0x1 << 6)
#define RT5647_M_MM_L_RM_L_SFT			6
#define RT5647_M_IN_L_RM_L			(0x1 << 5)
#define RT5647_M_IN_L_RM_L_SFT			5
#define RT5647_M_HP_L_RM_L			(0x1 << 4)
#define RT5647_M_HP_L_RM_L_SFT			4
#define RT5647_M_BST3_RM_L			(0x1 << 3)
#define RT5647_M_BST3_RM_L_SFT			3
#define RT5647_M_BST2_RM_L			(0x1 << 2)
#define RT5647_M_BST2_RM_L_SFT			2
#define RT5647_M_BST1_RM_L			(0x1 << 1)
#define RT5647_M_BST1_RM_L_SFT			1
#define RT5647_M_OM_L_RM_L			(0x1)
#define RT5647_M_OM_L_RM_L_SFT			0

/* REC Right Mixer Control 1 (0x3d) */
#define RT5647_G_HP_R_RM_R_MASK			(0x7 << 13)
#define RT5647_G_HP_R_RM_R_SFT			13
#define RT5647_G_IN_R_RM_R_MASK			(0x7 << 10)
#define RT5647_G_IN_R_RM_R_SFT			10
#define RT5647_G_BST4_RM_R_MASK			(0x7 << 7)
#define RT5647_G_BST4_RM_R_SFT			7
#define RT5647_G_BST3_RM_R_MASK			(0x7 << 4)
#define RT5647_G_BST3_RM_R_SFT			4
#define RT5647_G_BST2_RM_R_MASK			(0x7 << 1)
#define RT5647_G_BST2_RM_R_SFT			1

/* REC Right Mixer Control 2 (0x3e) */
#define RT5647_G_BST1_RM_R_MASK			(0x7 << 13)
#define RT5647_G_BST1_RM_R_SFT			13
#define RT5647_G_OM_R_RM_R_MASK			(0x7 << 10)
#define RT5647_G_OM_R_RM_R_SFT			10
#define RT5647_M_MM_R_RM_R			(0x1 << 6)
#define RT5647_M_MM_R_RM_R_SFT			6
#define RT5647_M_IN_R_RM_R			(0x1 << 5)
#define RT5647_M_IN_R_RM_R_SFT			5
#define RT5647_M_HP_R_RM_R			(0x1 << 4)
#define RT5647_M_HP_R_RM_R_SFT			4
#define RT5647_M_BST3_RM_R			(0x1 << 3)
#define RT5647_M_BST3_RM_R_SFT			3
#define RT5647_M_BST2_RM_R			(0x1 << 2)
#define RT5647_M_BST2_RM_R_SFT			2
#define RT5647_M_BST1_RM_R			(0x1 << 1)
#define RT5647_M_BST1_RM_R_SFT			1
#define RT5647_M_OM_R_RM_R			(0x1)
#define RT5647_M_OM_R_RM_R_SFT			0

/* HPOMIX Control (0x40) (0x42) */
#define RT5647_M_BST1_HV			(0x1 << 4)
#define RT5647_M_BST1_HV_SFT			4
#define RT5647_M_BST2_HV			(0x1 << 4)
#define RT5647_M_BST2_HV_SFT			4
#define RT5647_M_BST3_HV			(0x1 << 3)
#define RT5647_M_BST3_HV_SFT			3
#define RT5647_M_IN_HV				(0x1 << 2)
#define RT5647_M_IN_HV_SFT			2
#define RT5647_M_DAC2_HV			(0x1 << 1)
#define RT5647_M_DAC2_HV_SFT			1
#define RT5647_M_DAC1_HV			(0x1 << 0)
#define RT5647_M_DAC1_HV_SFT			0

/* HPMIX Control (0x45) */
#define RT5647_M_DAC1_HM			(0x1 << 14)
#define RT5647_M_DAC1_HM_SFT			14
#define RT5647_M_HPVOL_HM			(0x1 << 13)
#define RT5647_M_HPVOL_HM_SFT			13

/* SPK Left Mixer Control (0x46) */
#define RT5647_G_RM_L_SM_L_MASK			(0x3 << 14)
#define RT5647_G_RM_L_SM_L_SFT			14
#define RT5647_G_IN_L_SM_L_MASK			(0x3 << 12)
#define RT5647_G_IN_L_SM_L_SFT			12
#define RT5647_G_DAC_L1_SM_L_MASK		(0x3 << 10)
#define RT5647_G_DAC_L1_SM_L_SFT		10
#define RT5647_G_DAC_L2_SM_L_MASK		(0x3 << 8)
#define RT5647_G_DAC_L2_SM_L_SFT		8
#define RT5647_G_OM_L_SM_L_MASK			(0x3 << 6)
#define RT5647_G_OM_L_SM_L_SFT			6
#define RT5647_M_BST1_L_SM_L			(0x1 << 5)
#define RT5647_M_BST1_L_SM_L_SFT		5
#define RT5647_M_IN_L_SM_L			(0x1 << 3)
#define RT5647_M_IN_L_SM_L_SFT			3
#define RT5647_M_DAC_L1_SM_L			(0x1 << 1)
#define RT5647_M_DAC_L1_SM_L_SFT		1
#define RT5647_M_DAC_L2_SM_L			(0x1 << 2)
#define RT5647_M_DAC_L2_SM_L_SFT		2
#define RT5647_M_BST3_L_SM_L			(0x1 << 4)
#define RT5647_M_BST3_L_SM_L_SFT		4

/* SPK Right Mixer Control (0x47) */
#define RT5647_G_RM_R_SM_R_MASK			(0x3 << 14)
#define RT5647_G_RM_R_SM_R_SFT			14
#define RT5647_G_IN_R_SM_R_MASK			(0x3 << 12)
#define RT5647_G_IN_R_SM_R_SFT			12
#define RT5647_G_DAC_R1_SM_R_MASK		(0x3 << 10)
#define RT5647_G_DAC_R1_SM_R_SFT		10
#define RT5647_G_DAC_R2_SM_R_MASK		(0x3 << 8)
#define RT5647_G_DAC_R2_SM_R_SFT		8
#define RT5647_G_OM_R_SM_R_MASK			(0x3 << 6)
#define RT5647_G_OM_R_SM_R_SFT			6
#define RT5647_M_BST2_R_SM_R			(0x1 << 5)
#define RT5647_M_BST2_R_SM_R_SFT		5
#define RT5647_M_IN_R_SM_R			(0x1 << 3)
#define RT5647_M_IN_R_SM_R_SFT			3
#define RT5647_M_DAC_R1_SM_R			(0x1 << 1)
#define RT5647_M_DAC_R1_SM_R_SFT		1
#define RT5647_M_DAC_R2_SM_R			(0x1 << 2)
#define RT5647_M_DAC_R2_SM_R_SFT		2
#define RT5647_M_BST3_R_SM_R			(0x1 << 4)
#define RT5647_M_BST3_R_SM_R_SFT		4

/* SPOLMIX Control (0x48) */
#define RT5647_M_DAC_L1_SPM_L			(0x1 << 15)
#define RT5647_M_DAC_L1_SPM_L_SFT		15
#define RT5647_M_DAC_R1_SPM_L			(0x1 << 14)
#define RT5647_M_DAC_R1_SPM_L_SFT		14
#define RT5647_M_SV_L_SPM_L			(0x1 << 13)
#define RT5647_M_SV_L_SPM_L_SFT			13
#define RT5647_M_SV_R_SPM_L			(0x1 << 12)
#define RT5647_M_SV_R_SPM_L_SFT			12
#define RT5647_M_BST3_SPM_L			(0x1 << 11)
#define RT5647_M_BST3_SPM_L_SFT			11
#define RT5647_M_DAC_R1_SPM_R			(0x1 << 2)
#define RT5647_M_DAC_R1_SPM_R_SFT		2
#define RT5647_M_BST3_SPM_R			(0x1 << 1)
#define RT5647_M_BST3_SPM_R_SFT			1
#define RT5647_M_SV_R_SPM_R			(0x1 << 0)
#define RT5647_M_SV_R_SPM_R_SFT			0

/* Mono Output Mixer Control (0x4c) */
#define RT5647_M_OV_L_MM			(0x1 << 9)
#define RT5647_M_OV_L_MM_SFT			9
#define RT5647_M_DAC_L2_MA			(0x1 << 8)
#define RT5647_M_DAC_L2_MA_SFT			8
#define RT5647_G_MONOMIX_MASK			(0x1 << 10)
#define RT5647_G_MONOMIX_SFT			10
#define RT5647_M_BST2_MM			(0x1 << 4)
#define RT5647_M_BST2_MM_SFT			4
#define RT5647_M_DAC_R1_MM			(0x1 << 3)
#define RT5647_M_DAC_R1_MM_SFT			3
#define RT5647_M_DAC_R2_MM			(0x1 << 2)
#define RT5647_M_DAC_R2_MM_SFT			2
#define RT5647_M_DAC_L2_MM			(0x1 << 1)
#define RT5647_M_DAC_L2_MM_SFT			1
#define RT5647_M_BST3_MM			(0x1 << 0)
#define RT5647_M_BST3_MM_SFT			0

/* Output Left Mixer Control 1 (0x4d) */
#define RT5647_G_BST3_OM_L_MASK			(0x7 << 13)
#define RT5647_G_BST3_OM_L_SFT			13
#define RT5647_G_BST2_OM_L_MASK			(0x7 << 10)
#define RT5647_G_BST2_OM_L_SFT			10
#define RT5647_G_BST1_OM_L_MASK			(0x7 << 7)
#define RT5647_G_BST1_OM_L_SFT			7
#define RT5647_G_IN_L_OM_L_MASK			(0x7 << 4)
#define RT5647_G_IN_L_OM_L_SFT			4
#define RT5647_G_RM_L_OM_L_MASK			(0x7 << 1)
#define RT5647_G_RM_L_OM_L_SFT			1

/* Output Left Mixer Control 2 (0x4e) */
#define RT5647_G_DAC_R2_OM_L_MASK		(0x7 << 13)
#define RT5647_G_DAC_R2_OM_L_SFT		13
#define RT5647_G_DAC_L2_OM_L_MASK		(0x7 << 10)
#define RT5647_G_DAC_L2_OM_L_SFT		10
#define RT5647_G_DAC_L1_OM_L_MASK		(0x7 << 7)
#define RT5647_G_DAC_L1_OM_L_SFT		7

/* Output Left Mixer Control 3 (0x4f) */
#define RT5647_M_BST3_OM_L			(0x1 << 4)
#define RT5647_M_BST3_OM_L_SFT			4
#define RT5647_M_BST1_OM_L			(0x1 << 3)
#define RT5647_M_BST1_OM_L_SFT			3
#define RT5647_M_IN_L_OM_L			(0x1 << 2)
#define RT5647_M_IN_L_OM_L_SFT			2
#define RT5647_M_DAC_L2_OM_L			(0x1 << 1)
#define RT5647_M_DAC_L2_OM_L_SFT		1
#define RT5647_M_DAC_L1_OM_L			(0x1)
#define RT5647_M_DAC_L1_OM_L_SFT		0

/* Output Right Mixer Control 1 (0x50) */
#define RT5647_G_BST4_OM_R_MASK			(0x7 << 13)
#define RT5647_G_BST4_OM_R_SFT			13
#define RT5647_G_BST2_OM_R_MASK			(0x7 << 10)
#define RT5647_G_BST2_OM_R_SFT			10
#define RT5647_G_BST1_OM_R_MASK			(0x7 << 7)
#define RT5647_G_BST1_OM_R_SFT			7
#define RT5647_G_IN_R_OM_R_MASK			(0x7 << 4)
#define RT5647_G_IN_R_OM_R_SFT			4
#define RT5647_G_RM_R_OM_R_MASK			(0x7 << 1)
#define RT5647_G_RM_R_OM_R_SFT			1

/* Output Right Mixer Control 2 (0x51) */
#define RT5647_G_DAC_L2_OM_R_MASK		(0x7 << 13)
#define RT5647_G_DAC_L2_OM_R_SFT		13
#define RT5647_G_DAC_R2_OM_R_MASK		(0x7 << 10)
#define RT5647_G_DAC_R2_OM_R_SFT		10
#define RT5647_G_DAC_R1_OM_R_MASK		(0x7 << 7)
#define RT5647_G_DAC_R1_OM_R_SFT		7

/* Output Right Mixer Control 3 (0x52) */
#define RT5647_M_BST3_OM_R			(0x1 << 4)
#define RT5647_M_BST3_OM_R_SFT			4
#define RT5647_M_BST2_OM_R			(0x1 << 3)
#define RT5647_M_BST2_OM_R_SFT			3
#define RT5647_M_IN_R_OM_R			(0x1 << 2)
#define RT5647_M_IN_R_OM_R_SFT			2
#define RT5647_M_DAC_R2_OM_R			(0x1 << 1)
#define RT5647_M_DAC_R2_OM_R_SFT		1
#define RT5647_M_DAC_R1_OM_R			(0x1)
#define RT5647_M_DAC_R1_OM_R_SFT		0

/* LOUT Mixer Control (0x53) */
#define RT5647_M_DAC_L1_LM			(0x1 << 15)
#define RT5647_M_DAC_L1_LM_SFT			15
#define RT5647_M_DAC_R1_LM			(0x1 << 14)
#define RT5647_M_DAC_R1_LM_SFT			14
#define RT5647_M_OV_L_LM			(0x1 << 13)
#define RT5647_M_OV_L_LM_SFT			13
#define RT5647_M_OV_R_LM			(0x1 << 12)
#define RT5647_M_OV_R_LM_SFT			12
#define RT5647_G_LOUTMIX_MASK			(0x1 << 11)
#define RT5647_G_LOUTMIX_SFT			11

/* Haptic Generator Control (0x56) */
#define RT5647_HAPTIC_EN			(0x1 << 15)
#define RT5647_HAPTIC_EN_SFT			15
#define RT5647_HAPTIC_TYPE_MASK			(0x1 << 14)
#define RT5647_HAPTIC_TYPE_AC			(0x1 << 14)
#define RT5647_HAPTIC_TYPE_DC			(0x0 << 14)
#define RT5647_HAPTIC_TYPE_SFT			14
#define RT5647_HAPTIC_TG_MASK			(0x3 << 12)
#define RT5647_HAPTIC_TG_PRO			(0x3 << 12)
#define RT5647_HAPTIC_TG_CON			(0x2 << 12)
#define RT5647_HAPTIC_TG_ONE			(0x1 << 12)
#define RT5647_HAPTIC_TG_DIS			(0x0 << 12)
#define RT5647_HAPTIC_TG_SFT			12
#define RT5647_HAPTIC_FEQ_MASK			(0xfff)
#define RT5647_HAPTIC_FEQ_SFT			0

/* Power Management for Digital 1 (0x61) */
#define RT5647_PWR_I2S1				(0x1 << 15)
#define RT5647_PWR_I2S1_BIT			15
#define RT5647_PWR_I2S2				(0x1 << 14)
#define RT5647_PWR_I2S2_BIT			14
#define RT5647_PWR_I2S3				(0x1 << 13)
#define RT5647_PWR_I2S3_BIT			13
#define RT5647_PWR_DAC_L1			(0x1 << 12)
#define RT5647_PWR_DAC_L1_BIT			12
#define RT5647_PWR_DAC_R1			(0x1 << 11)
#define RT5647_PWR_DAC_R1_BIT			11
#define RT5647_PWR_CLS_D_R			(0x1 << 9)
#define RT5647_PWR_CLS_D_R_BIT			9
#define RT5647_PWR_CLS_D_L			(0x1 << 8)
#define RT5647_PWR_CLS_D_L_BIT			8
#define RT5647_PWR_ADC_R			(0x1 << 1)
#define RT5647_PWR_ADC_R_BIT			1
#define RT5647_PWR_DAC_L2			(0x1 << 7)
#define RT5647_PWR_DAC_L2_BIT			7
#define RT5647_PWR_DAC_R2			(0x1 << 6)
#define RT5647_PWR_DAC_R2_BIT			6
#define RT5647_PWR_ADC_L			(0x1 << 2)
#define RT5647_PWR_ADC_L_BIT			2
#define RT5647_PWR_ADC_R			(0x1 << 1)
#define RT5647_PWR_ADC_R_BIT			1
#define RT5647_PWR_CLS_D			(0x1)
#define RT5647_PWR_CLS_D_BIT			0

/* Power Management for Digital 2 (0x62) */
#define RT5647_PWR_ADC_S1F			(0x1 << 15)
#define RT5647_PWR_ADC_S1F_BIT			15
#define RT5647_PWR_ADC_MF_L			(0x1 << 14)
#define RT5647_PWR_ADC_MF_L_BIT			14
#define RT5647_PWR_ADC_MF_R			(0x1 << 13)
#define RT5647_PWR_ADC_MF_R_BIT			13
#define RT5647_PWR_I2S_DSP			(0x1 << 12)
#define RT5647_PWR_I2S_DSP_BIT			12
#define RT5647_PWR_DAC_S1F			(0x1 << 11)
#define RT5647_PWR_DAC_S1F_BIT			11
#define RT5647_PWR_DAC_MF_L			(0x1 << 10)
#define RT5647_PWR_DAC_MF_L_BIT			10
#define RT5647_PWR_DAC_MF_R			(0x1 << 9)
#define RT5647_PWR_DAC_MF_R_BIT			9
#define RT5647_PWR_ADC_S2F			(0x1 << 8)
#define RT5647_PWR_ADC_S2F_BIT			8
#define RT5647_PWR_PDM1				(0x1 << 7)
#define RT5647_PWR_PDM1_BIT			7
#define RT5647_PWR_PDM2				(0x1 << 6)
#define RT5647_PWR_PDM2_BIT			6
#define RT5647_PWR_IPTV				(0x1 << 1)
#define RT5647_PWR_IPTV_BIT			1
#define RT5647_PWR_PAD				(0x1)
#define RT5647_PWR_PAD_BIT			0

/* Power Management for Analog 1 (0x63) */
#define RT5647_PWR_VREF1			(0x1 << 15)
#define RT5647_PWR_VREF1_BIT			15
#define RT5647_PWR_FV1				(0x1 << 14)
#define RT5647_PWR_FV1_BIT			14
#define RT5647_PWR_MB				(0x1 << 13)
#define RT5647_PWR_MB_BIT			13
#define RT5647_PWR_LM				(0x1 << 12)
#define RT5647_PWR_LM_BIT			12
#define RT5647_PWR_BG				(0x1 << 11)
#define RT5647_PWR_BG_BIT			11
#define RT5647_PWR_MA				(0x1 << 10)
#define RT5647_PWR_MA_BIT			10
#define RT5647_PWR_HP_L				(0x1 << 7)
#define RT5647_PWR_HP_L_BIT			7
#define RT5647_PWR_HP_R				(0x1 << 6)
#define RT5647_PWR_HP_R_BIT			6
#define RT5647_PWR_HA				(0x1 << 5)
#define RT5647_PWR_HA_BIT			5
#define RT5647_PWR_VREF2			(0x1 << 4)
#define RT5647_PWR_VREF2_BIT			4
#define RT5647_PWR_FV2				(0x1 << 3)
#define RT5647_PWR_FV2_BIT			3
#define RT5647_LDO_SEL_MASK			(0x3)
#define RT5647_LDO_SEL_SFT			0

/* Power Management for Analog 2 (0x64) */
#define RT5647_PWR_BST1				(0x1 << 15)
#define RT5647_PWR_BST1_BIT			15
#define RT5647_PWR_BST2				(0x1 << 14)
#define RT5647_PWR_BST2_BIT			14
#define RT5647_PWR_BST3				(0x1 << 13)
#define RT5647_PWR_BST3_BIT			13
#define RT5647_PWR_OV_L_BIT			13
#define RT5647_PWR_BST4				(0x1 << 12)
#define RT5647_PWR_BST4_BIT			12
#define RT5647_PWR_OV_R_BIT			12
#define RT5647_PWR_MB1				(0x1 << 11)
#define RT5647_PWR_MB1_BIT			11
#define RT5647_PWR_MB2				(0x1 << 10)
#define RT5647_PWR_MB2_BIT			10
#define RT5647_PWR_PLL				(0x1 << 9)
#define RT5647_PWR_PLL_BIT			9
#define RT5647_PWR_BST2_P			(0x1 << 5)
#define RT5647_PWR_BST2_P_BIT			5
#define RT5647_PWR_BST3_P			(0x1 << 4)
#define RT5647_PWR_BST3_P_BIT			4
#define RT5647_PWR_BST4_P			(0x1 << 3)
#define RT5647_PWR_BST4_P_BIT			3
#define RT5647_PWR_JD1				(0x1 << 2)
#define RT5647_PWR_JD1_BIT			2
#define RT5647_PWR_JD				(0x1 << 1)
#define RT5647_PWR_JD_BIT			1

/* Power Management for Mixer (0x65) */
#define RT5647_PWR_OM_L				(0x1 << 15)
#define RT5647_PWR_OM_L_BIT			15
#define RT5647_PWR_OM_R				(0x1 << 14)
#define RT5647_PWR_OM_R_BIT			14
#define RT5647_PWR_SM_L				(0x1 << 13)
#define RT5647_PWR_SM_L_BIT			13
#define RT5647_PWR_SM_R				(0x1 << 12)
#define RT5647_PWR_SM_R_BIT			12
#define RT5647_PWR_RM_L				(0x1 << 11)
#define RT5647_PWR_RM_L_BIT			11
#define RT5647_PWR_RM_R				(0x1 << 10)
#define RT5647_PWR_RM_R_BIT			10
#define RT5647_PWR_MM				(0x1 << 8)
#define RT5647_PWR_MM_BIT			8
#define RT5647_PWR_HM_L				(0x1 << 7)
#define RT5647_PWR_HM_L_BIT			7
#define RT5647_PWR_HM_R				(0x1 << 6)
#define RT5647_PWR_HM_R_BIT			6
#define RT5647_PWR_LDO2				(0x1 << 1)
#define RT5647_PWR_LDO2_BIT			1

/* Power Management for Volume (0x66) */
#define RT5647_PWR_SV_L				(0x1 << 15)
#define RT5647_PWR_SV_L_BIT			15
#define RT5647_PWR_SV_R				(0x1 << 14)
#define RT5647_PWR_SV_R_BIT			14
#define RT5647_PWR_HV_L				(0x1 << 11)
#define RT5647_PWR_HV_L_BIT			11
#define RT5647_PWR_HV_R				(0x1 << 10)
#define RT5647_PWR_HV_R_BIT			10
#define RT5647_PWR_IN_L				(0x1 << 9)
#define RT5647_PWR_IN_L_BIT			9
#define RT5647_PWR_IN_R				(0x1 << 8)
#define RT5647_PWR_IN_R_BIT			8
#define RT5647_PWR_MV				(0x1 << 7)
#define RT5647_PWR_MV_BIT			7
#define RT5647_PWR_MIC_DET			(0x1 << 5)
#define RT5647_PWR_MIC_DET_BIT			5

/* I2S1/2/3 Audio Serial Data Port Control (0x70 0x71 0x72) */
#define RT5647_I2S_MS_MASK			(0x1 << 15)
#define RT5647_I2S_MS_SFT			15
#define RT5647_I2S_MS_M				(0x0 << 15)
#define RT5647_I2S_MS_S				(0x1 << 15)
#define RT5647_I2S_O_CP_MASK			(0x3 << 10)
#define RT5647_I2S_O_CP_SFT			10
#define RT5647_I2S_O_CP_OFF			(0x0 << 10)
#define RT5647_I2S_O_CP_U_LAW			(0x1 << 10)
#define RT5647_I2S_O_CP_A_LAW			(0x2 << 10)
#define RT5647_I2S_I_CP_MASK			(0x3 << 8)
#define RT5647_I2S_I_CP_SFT			8
#define RT5647_I2S_I_CP_OFF			(0x0 << 8)
#define RT5647_I2S_I_CP_U_LAW			(0x1 << 8)
#define RT5647_I2S_I_CP_A_LAW			(0x2 << 8)
#define RT5647_I2S_BP_MASK			(0x1 << 7)
#define RT5647_I2S_BP_SFT			7
#define RT5647_I2S_BP_NOR			(0x0 << 7)
#define RT5647_I2S_BP_INV			(0x1 << 7)
#define RT5647_I2S_DL_MASK			(0x3 << 2)
#define RT5647_I2S_DL_SFT			2
#define RT5647_I2S_DL_16			(0x0 << 2)
#define RT5647_I2S_DL_20			(0x1 << 2)
#define RT5647_I2S_DL_24			(0x2 << 2)
#define RT5647_I2S_DL_8				(0x3 << 2)
#define RT5647_I2S_DF_MASK			(0x3)
#define RT5647_I2S_DF_SFT			0
#define RT5647_I2S_DF_I2S			(0x0)
#define RT5647_I2S_DF_LEFT			(0x1)
#define RT5647_I2S_DF_PCM_A			(0x2)
#define RT5647_I2S_DF_PCM_B			(0x3)

/* I2S2 Audio Serial Data Port Control (0x71) */
#define RT5647_I2S2_SDI_MASK			(0x1 << 6)
#define RT5647_I2S2_SDI_SFT			6
#define RT5647_I2S2_SDI_I2S1			(0x0 << 6)
#define RT5647_I2S2_SDI_I2S2			(0x1 << 6)

/* ADC/DAC Clock Control 1 (0x73) */
#define RT5647_I2S_BCLK_MS1_MASK		(0x1 << 15)
#define RT5647_I2S_BCLK_MS1_SFT			15
#define RT5647_I2S_BCLK_MS1_32			(0x0 << 15)
#define RT5647_I2S_BCLK_MS1_64			(0x1 << 15)
#define RT5647_I2S_PD1_MASK			(0x7 << 12)
#define RT5647_I2S_PD1_SFT			12
#define RT5647_I2S_PD1_1			(0x0 << 12)
#define RT5647_I2S_PD1_2			(0x1 << 12)
#define RT5647_I2S_PD1_3			(0x2 << 12)
#define RT5647_I2S_PD1_4			(0x3 << 12)
#define RT5647_I2S_PD1_6			(0x4 << 12)
#define RT5647_I2S_PD1_8			(0x5 << 12)
#define RT5647_I2S_PD1_12			(0x6 << 12)
#define RT5647_I2S_PD1_16			(0x7 << 12)
#define RT5647_I2S_BCLK_MS2_MASK		(0x1 << 11)
#define RT5647_I2S_BCLK_MS2_SFT			11
#define RT5647_I2S_BCLK_MS2_32			(0x0 << 11)
#define RT5647_I2S_BCLK_MS2_64			(0x1 << 11)
#define RT5647_I2S_PD2_MASK			(0x7 << 8)
#define RT5647_I2S_PD2_SFT			8
#define RT5647_I2S_PD2_1			(0x0 << 8)
#define RT5647_I2S_PD2_2			(0x1 << 8)
#define RT5647_I2S_PD2_3			(0x2 << 8)
#define RT5647_I2S_PD2_4			(0x3 << 8)
#define RT5647_I2S_PD2_6			(0x4 << 8)
#define RT5647_I2S_PD2_8			(0x5 << 8)
#define RT5647_I2S_PD2_12			(0x6 << 8)
#define RT5647_I2S_PD2_16			(0x7 << 8)
#define RT5647_I2S_BCLK_MS3_MASK		(0x1 << 7)
#define RT5647_I2S_BCLK_MS3_SFT			7
#define RT5647_I2S_BCLK_MS3_32			(0x0 << 7)
#define RT5647_I2S_BCLK_MS3_64			(0x1 << 7)
#define RT5647_I2S_PD3_MASK			(0x7 << 4)
#define RT5647_I2S_PD3_SFT			4
#define RT5647_I2S_PD3_1			(0x0 << 4)
#define RT5647_I2S_PD3_2			(0x1 << 4)
#define RT5647_I2S_PD3_3			(0x2 << 4)
#define RT5647_I2S_PD3_4			(0x3 << 4)
#define RT5647_I2S_PD3_6			(0x4 << 4)
#define RT5647_I2S_PD3_8			(0x5 << 4)
#define RT5647_I2S_PD3_12			(0x6 << 4)
#define RT5647_I2S_PD3_16			(0x7 << 4)
#define RT5647_DAC_OSR_MASK			(0x3 << 2)
#define RT5647_DAC_OSR_SFT			2
#define RT5647_DAC_OSR_128			(0x0 << 2)
#define RT5647_DAC_OSR_64			(0x1 << 2)
#define RT5647_DAC_OSR_32			(0x2 << 2)
#define RT5647_DAC_OSR_16			(0x3 << 2)
#define RT5647_ADC_OSR_MASK			(0x3)
#define RT5647_ADC_OSR_SFT			0
#define RT5647_ADC_OSR_128			(0x0)
#define RT5647_ADC_OSR_64			(0x1)
#define RT5647_ADC_OSR_32			(0x2)
#define RT5647_ADC_OSR_16			(0x3)

/* ADC/DAC Clock Control 2 (0x74) */
#define RT5647_DAC_L_OSR_MASK			(0x3 << 14)
#define RT5647_DAC_L_OSR_SFT			14
#define RT5647_DAC_L_OSR_128			(0x0 << 14)
#define RT5647_DAC_L_OSR_64			(0x1 << 14)
#define RT5647_DAC_L_OSR_32			(0x2 << 14)
#define RT5647_DAC_L_OSR_16			(0x3 << 14)
#define RT5647_ADC_R_OSR_MASK			(0x3 << 12)
#define RT5647_ADC_R_OSR_SFT			12
#define RT5647_ADC_R_OSR_128			(0x0 << 12)
#define RT5647_ADC_R_OSR_64			(0x1 << 12)
#define RT5647_ADC_R_OSR_32			(0x2 << 12)
#define RT5647_ADC_R_OSR_16			(0x3 << 12)
#define RT5647_DAHPF_EN				(0x1 << 11)
#define RT5647_DAHPF_EN_SFT			11
#define RT5647_ADHPF_EN				(0x1 << 10)
#define RT5647_ADHPF_EN_SFT			10

/* Digital Microphone Control (0x75) */
#define RT5647_DMIC_1_EN_MASK			(0x1 << 15)
#define RT5647_DMIC_1_EN_SFT			15
#define RT5647_DMIC_1_DIS			(0x0 << 15)
#define RT5647_DMIC_1_EN			(0x1 << 15)
#define RT5647_DMIC_2_EN_MASK			(0x1 << 14)
#define RT5647_DMIC_2_EN_SFT			14
#define RT5647_DMIC_2_DIS			(0x0 << 14)
#define RT5647_DMIC_2_EN			(0x1 << 14)
#define RT5647_DMIC_1L_LH_MASK			(0x1 << 13)
#define RT5647_DMIC_1L_LH_SFT			13
#define RT5647_DMIC_1L_LH_FALLING		(0x0 << 13)
#define RT5647_DMIC_1L_LH_RISING		(0x1 << 13)
#define RT5647_DMIC_1R_LH_MASK			(0x1 << 12)
#define RT5647_DMIC_1R_LH_SFT			12
#define RT5647_DMIC_1R_LH_FALLING		(0x0 << 12)
#define RT5647_DMIC_1R_LH_RISING		(0x1 << 12)
#define RT5647_DMIC_2_DP_MASK			(0x3 << 10)
#define RT5647_DMIC_2_DP_SFT			10
#define RT5647_DMIC_2_DP_GPIO6			(0x0 << 10)
#define RT5647_DMIC_2_DP_GPIO10			(0x1 << 10)
#define RT5647_DMIC_2_DP_GPIO12			(0x2 << 10)
#define RT5647_DMIC_2L_LH_MASK			(0x1 << 9)
#define RT5647_DMIC_2L_LH_SFT			9
#define RT5647_DMIC_2L_LH_FALLING		(0x0 << 9)
#define RT5647_DMIC_2L_LH_RISING		(0x1 << 9)
#define RT5647_DMIC_2R_LH_MASK			(0x1 << 8)
#define RT5647_DMIC_2R_LH_SFT			8
#define RT5647_DMIC_2R_LH_FALLING		(0x0 << 8)
#define RT5647_DMIC_2R_LH_RISING		(0x1 << 8)
#define RT5647_DMIC_CLK_MASK			(0x7 << 5)
#define RT5647_DMIC_CLK_SFT			5
#define RT5647_DMIC_3_EN_MASK			(0x1 << 4)
#define RT5647_DMIC_3_EN_SFT			4
#define RT5647_DMIC_3_DIS			(0x0 << 4)
#define RT5647_DMIC_3_EN			(0x1 << 4)
#define RT5647_DMIC_1_DP_MASK			(0x3 << 0)
#define RT5647_DMIC_1_DP_SFT			0
#define RT5647_DMIC_1_DP_GPIO5			(0x0 << 0)
#define RT5647_DMIC_1_DP_IN2P			(0x1 << 0)
#define RT5647_DMIC_1_DP_GPIO11			(0x2 << 0)

/* TDM Control 1 (0x77) */
#define RT5647_IF1_ADC_IN_MASK			(0x3 << 8)
#define RT5647_IF1_ADC_IN_SFT			8

/* Global Clock Control (0x80) */
#define RT5647_SCLK_SRC_MASK			(0x3 << 14)
#define RT5647_SCLK_SRC_SFT			14
#define RT5647_SCLK_SRC_MCLK			(0x0 << 14)
#define RT5647_SCLK_SRC_PLL1			(0x1 << 14)
#define RT5647_SCLK_SRC_RCCLK			(0x2 << 14) /* 15MHz */
#define RT5647_PLL1_SRC_MASK			(0x3 << 12)
#define RT5647_PLL1_SRC_SFT			12
#define RT5647_PLL1_SRC_MCLK			(0x0 << 12)
#define RT5647_PLL1_SRC_BCLK1			(0x1 << 12)
#define RT5647_PLL1_SRC_BCLK2			(0x2 << 12)
#define RT5647_PLL1_SRC_BCLK3			(0x3 << 12)
#define RT5647_PLL1_PD_MASK			(0x1 << 3)
#define RT5647_PLL1_PD_SFT			3
#define RT5647_PLL1_PD_1			(0x0 << 3)
#define RT5647_PLL1_PD_2			(0x1 << 3)

#define RT5647_PLL_INP_MAX			40000000
#define RT5647_PLL_INP_MIN			256000
/* PLL M/N/K Code Control 1 (0x81) */
#define RT5647_PLL_N_MAX			0x1ff
#define RT5647_PLL_N_MASK			(RT5647_PLL_N_MAX << 7)
#define RT5647_PLL_N_SFT			7
#define RT5647_PLL_K_MAX			0x1f
#define RT5647_PLL_K_MASK			(RT5647_PLL_K_MAX)
#define RT5647_PLL_K_SFT			0

/* PLL M/N/K Code Control 2 (0x82) */
#define RT5647_PLL_M_MAX			0xf
#define RT5647_PLL_M_MASK			(RT5647_PLL_M_MAX << 12)
#define RT5647_PLL_M_SFT			12
#define RT5647_PLL_M_BP				(0x1 << 11)
#define RT5647_PLL_M_BP_SFT			11

/* ASRC Control 1 (0x83) */
#define RT5647_STO_T_MASK			(0x1 << 15)
#define RT5647_STO_T_SFT			15
#define RT5647_STO_T_SCLK			(0x0 << 15)
#define RT5647_STO_T_LRCK1			(0x1 << 15)
#define RT5647_M1_T_MASK			(0x1 << 14)
#define RT5647_M1_T_SFT				14
#define RT5647_M1_T_I2S2			(0x0 << 14)
#define RT5647_M1_T_I2S2_D3			(0x1 << 14)
#define RT5647_I2S2_F_MASK			(0x1 << 12)
#define RT5647_I2S2_F_SFT			12
#define RT5647_I2S2_F_I2S2_D2			(0x0 << 12)
#define RT5647_I2S2_F_I2S1_TCLK			(0x1 << 12)
#define RT5647_DMIC_1_M_MASK			(0x1 << 9)
#define RT5647_DMIC_1_M_SFT			9
#define RT5647_DMIC_1_M_NOR			(0x0 << 9)
#define RT5647_DMIC_1_M_ASYN			(0x1 << 9)
#define RT5647_DMIC_2_M_MASK			(0x1 << 8)
#define RT5647_DMIC_2_M_SFT			8
#define RT5647_DMIC_2_M_NOR			(0x0 << 8)
#define RT5647_DMIC_2_M_ASYN			(0x1 << 8)

/* ASRC Control 2 (0x84) */
#define RT5647_MDA_L_M_MASK			(0x1 << 15)
#define RT5647_MDA_L_M_SFT			15
#define RT5647_MDA_L_M_NOR			(0x0 << 15)
#define RT5647_MDA_L_M_ASYN			(0x1 << 15)
#define RT5647_MDA_R_M_MASK			(0x1 << 14)
#define RT5647_MDA_R_M_SFT			14
#define RT5647_MDA_R_M_NOR			(0x0 << 14)
#define RT5647_MDA_R_M_ASYN			(0x1 << 14)
#define RT5647_MAD_L_M_MASK			(0x1 << 13)
#define RT5647_MAD_L_M_SFT			13
#define RT5647_MAD_L_M_NOR			(0x0 << 13)
#define RT5647_MAD_L_M_ASYN			(0x1 << 13)
#define RT5647_MAD_R_M_MASK			(0x1 << 12)
#define RT5647_MAD_R_M_SFT			12
#define RT5647_MAD_R_M_NOR			(0x0 << 12)
#define RT5647_MAD_R_M_ASYN			(0x1 << 12)
#define RT5647_ADC_M_MASK			(0x1 << 11)
#define RT5647_ADC_M_SFT			11
#define RT5647_ADC_M_NOR			(0x0 << 11)
#define RT5647_ADC_M_ASYN			(0x1 << 11)
#define RT5647_STO_DAC_M_MASK			(0x1 << 5)
#define RT5647_STO_DAC_M_SFT			5
#define RT5647_STO_DAC_M_NOR			(0x0 << 5)
#define RT5647_STO_DAC_M_ASYN			(0x1 << 5)
#define RT5647_I2S1_R_D_MASK			(0x1 << 4)
#define RT5647_I2S1_R_D_SFT			4
#define RT5647_I2S1_R_D_DIS			(0x0 << 4)
#define RT5647_I2S1_R_D_EN			(0x1 << 4)
#define RT5647_I2S2_R_D_MASK			(0x1 << 3)
#define RT5647_I2S2_R_D_SFT			3
#define RT5647_I2S2_R_D_DIS			(0x0 << 3)
#define RT5647_I2S2_R_D_EN			(0x1 << 3)
#define RT5647_PRE_SCLK_MASK			(0x3)
#define RT5647_PRE_SCLK_SFT			0
#define RT5647_PRE_SCLK_512			(0x0)
#define RT5647_PRE_SCLK_1024			(0x1)
#define RT5647_PRE_SCLK_2048			(0x2)

/* ASRC Control 3 (0x85) */
#define RT5647_I2S1_RATE_MASK			(0xf << 12)
#define RT5647_I2S1_RATE_SFT			12
#define RT5647_I2S2_RATE_MASK			(0xf << 8)
#define RT5647_I2S2_RATE_SFT			8

/* ASRC Control 4 (0x89) */
#define RT5647_I2S1_PD_MASK			(0x7 << 12)
#define RT5647_I2S1_PD_SFT			12
#define RT5647_I2S2_PD_MASK			(0x7 << 8)
#define RT5647_I2S2_PD_SFT			8

/* HPOUT Over Current Detection (0x8b) */
#define RT5647_HP_OVCD_MASK			(0x1 << 10)
#define RT5647_HP_OVCD_SFT			10
#define RT5647_HP_OVCD_DIS			(0x0 << 10)
#define RT5647_HP_OVCD_EN			(0x1 << 10)
#define RT5647_HP_OC_TH_MASK			(0x3 << 8)
#define RT5647_HP_OC_TH_SFT			8
#define RT5647_HP_OC_TH_90			(0x0 << 8)
#define RT5647_HP_OC_TH_105			(0x1 << 8)
#define RT5647_HP_OC_TH_120			(0x2 << 8)
#define RT5647_HP_OC_TH_135			(0x3 << 8)

/* Class D Over Current Control (0x8c) */
#define RT5647_CLSD_OC_MASK			(0x1 << 9)
#define RT5647_CLSD_OC_SFT			9
#define RT5647_CLSD_OC_PU			(0x0 << 9)
#define RT5647_CLSD_OC_PD			(0x1 << 9)
#define RT5647_AUTO_PD_MASK			(0x1 << 8)
#define RT5647_AUTO_PD_SFT			8
#define RT5647_AUTO_PD_DIS			(0x0 << 8)
#define RT5647_AUTO_PD_EN			(0x1 << 8)
#define RT5647_CLSD_OC_TH_MASK			(0x3f)
#define RT5647_CLSD_OC_TH_SFT			0

/* Depop Mode Control 1 (0x8e) */
#define RT5647_SMT_TRIG_MASK			(0x1 << 15)
#define RT5647_SMT_TRIG_SFT			15
#define RT5647_SMT_TRIG_DIS			(0x0 << 15)
#define RT5647_SMT_TRIG_EN			(0x1 << 15)
#define RT5647_HP_L_SMT_MASK			(0x1 << 9)
#define RT5647_HP_L_SMT_SFT			9
#define RT5647_HP_L_SMT_DIS			(0x0 << 9)
#define RT5647_HP_L_SMT_EN			(0x1 << 9)
#define RT5647_HP_R_SMT_MASK			(0x1 << 8)
#define RT5647_HP_R_SMT_SFT			8
#define RT5647_HP_R_SMT_DIS			(0x0 << 8)
#define RT5647_HP_R_SMT_EN			(0x1 << 8)
#define RT5647_HP_CD_PD_MASK			(0x1 << 7)
#define RT5647_HP_CD_PD_SFT			7
#define RT5647_HP_CD_PD_DIS			(0x0 << 7)
#define RT5647_HP_CD_PD_EN			(0x1 << 7)
#define RT5647_RSTN_MASK			(0x1 << 6)
#define RT5647_RSTN_SFT				6
#define RT5647_RSTN_DIS				(0x0 << 6)
#define RT5647_RSTN_EN				(0x1 << 6)
#define RT5647_RSTP_MASK			(0x1 << 5)
#define RT5647_RSTP_SFT				5
#define RT5647_RSTP_DIS				(0x0 << 5)
#define RT5647_RSTP_EN				(0x1 << 5)
#define RT5647_HP_CO_MASK			(0x1 << 4)
#define RT5647_HP_CO_SFT			4
#define RT5647_HP_CO_DIS			(0x0 << 4)
#define RT5647_HP_CO_EN				(0x1 << 4)
#define RT5647_HP_CP_MASK			(0x1 << 3)
#define RT5647_HP_CP_SFT			3
#define RT5647_HP_CP_PD				(0x0 << 3)
#define RT5647_HP_CP_PU				(0x1 << 3)
#define RT5647_HP_SG_MASK			(0x1 << 2)
#define RT5647_HP_SG_SFT			2
#define RT5647_HP_SG_DIS			(0x0 << 2)
#define RT5647_HP_SG_EN				(0x1 << 2)
#define RT5647_HP_DP_MASK			(0x1 << 1)
#define RT5647_HP_DP_SFT			1
#define RT5647_HP_DP_PD				(0x0 << 1)
#define RT5647_HP_DP_PU				(0x1 << 1)
#define RT5647_HP_CB_MASK			(0x1)
#define RT5647_HP_CB_SFT			0
#define RT5647_HP_CB_PD				(0x0)
#define RT5647_HP_CB_PU				(0x1)

/* Depop Mode Control 2 (0x8f) */
#define RT5647_DEPOP_MASK			(0x1 << 13)
#define RT5647_DEPOP_SFT			13
#define RT5647_DEPOP_AUTO			(0x0 << 13)
#define RT5647_DEPOP_MAN			(0x1 << 13)
#define RT5647_RAMP_MASK			(0x1 << 12)
#define RT5647_RAMP_SFT				12
#define RT5647_RAMP_DIS				(0x0 << 12)
#define RT5647_RAMP_EN				(0x1 << 12)
#define RT5647_BPS_MASK				(0x1 << 11)
#define RT5647_BPS_SFT				11
#define RT5647_BPS_DIS				(0x0 << 11)
#define RT5647_BPS_EN				(0x1 << 11)
#define RT5647_FAST_UPDN_MASK			(0x1 << 10)
#define RT5647_FAST_UPDN_SFT			10
#define RT5647_FAST_UPDN_DIS			(0x0 << 10)
#define RT5647_FAST_UPDN_EN			(0x1 << 10)
#define RT5647_MRES_MASK			(0x3 << 8)
#define RT5647_MRES_SFT				8
#define RT5647_MRES_15MO			(0x0 << 8)
#define RT5647_MRES_25MO			(0x1 << 8)
#define RT5647_MRES_35MO			(0x2 << 8)
#define RT5647_MRES_45MO			(0x3 << 8)
#define RT5647_VLO_MASK				(0x1 << 7)
#define RT5647_VLO_SFT				7
#define RT5647_VLO_3V				(0x0 << 7)
#define RT5647_VLO_32V				(0x1 << 7)
#define RT5647_DIG_DP_MASK			(0x1 << 6)
#define RT5647_DIG_DP_SFT			6
#define RT5647_DIG_DP_DIS			(0x0 << 6)
#define RT5647_DIG_DP_EN			(0x1 << 6)
#define RT5647_DP_TH_MASK			(0x3 << 4)
#define RT5647_DP_TH_SFT			4

/* Depop Mode Control 3 (0x90) */
#define RT5647_CP_SYS_MASK			(0x7 << 12)
#define RT5647_CP_SYS_SFT			12
#define RT5647_CP_FQ1_MASK			(0x7 << 8)
#define RT5647_CP_FQ1_SFT			8
#define RT5647_CP_FQ2_MASK			(0x7 << 4)
#define RT5647_CP_FQ2_SFT			4
#define RT5647_CP_FQ3_MASK			(0x7)
#define RT5647_CP_FQ3_SFT			0
#define RT5647_CP_FQ_1_5_KHZ			0
#define RT5647_CP_FQ_3_KHZ			1
#define RT5647_CP_FQ_6_KHZ			2
#define RT5647_CP_FQ_12_KHZ			3
#define RT5647_CP_FQ_24_KHZ			4
#define RT5647_CP_FQ_48_KHZ			5
#define RT5647_CP_FQ_96_KHZ			6
#define RT5647_CP_FQ_192_KHZ			7

/* HPOUT charge pump (0x91) */
#define RT5647_OSW_L_MASK			(0x1 << 11)
#define RT5647_OSW_L_SFT			11
#define RT5647_OSW_L_DIS			(0x0 << 11)
#define RT5647_OSW_L_EN				(0x1 << 11)
#define RT5647_OSW_R_MASK			(0x1 << 10)
#define RT5647_OSW_R_SFT			10
#define RT5647_OSW_R_DIS			(0x0 << 10)
#define RT5647_OSW_R_EN				(0x1 << 10)
#define RT5647_PM_HP_MASK			(0x3 << 8)
#define RT5647_PM_HP_SFT			8
#define RT5647_PM_HP_LV				(0x0 << 8)
#define RT5647_PM_HP_MV				(0x1 << 8)
#define RT5647_PM_HP_HV				(0x2 << 8)
#define RT5647_IB_HP_MASK			(0x3 << 6)
#define RT5647_IB_HP_SFT			6
#define RT5647_IB_HP_125IL			(0x0 << 6)
#define RT5647_IB_HP_25IL			(0x1 << 6)
#define RT5647_IB_HP_5IL			(0x2 << 6)
#define RT5647_IB_HP_1IL			(0x3 << 6)

/* PV detection and SPK gain control (0x92) */
#define RT5647_PVDD_DET_MASK			(0x1 << 15)
#define RT5647_PVDD_DET_SFT			15
#define RT5647_PVDD_DET_DIS			(0x0 << 15)
#define RT5647_PVDD_DET_EN			(0x1 << 15)
#define RT5647_SPK_AG_MASK			(0x1 << 14)
#define RT5647_SPK_AG_SFT			14
#define RT5647_SPK_AG_DIS			(0x0 << 14)
#define RT5647_SPK_AG_EN			(0x1 << 14)

/* Micbias Control (0x93) */
#define RT5647_MIC1_BS_MASK			(0x1 << 15)
#define RT5647_MIC1_BS_SFT			15
#define RT5647_MIC1_BS_9AV			(0x0 << 15)
#define RT5647_MIC1_BS_75AV			(0x1 << 15)
#define RT5647_MIC2_BS_MASK			(0x1 << 14)
#define RT5647_MIC2_BS_SFT			14
#define RT5647_MIC2_BS_9AV			(0x0 << 14)
#define RT5647_MIC2_BS_75AV			(0x1 << 14)
#define RT5647_MIC1_CLK_MASK			(0x1 << 13)
#define RT5647_MIC1_CLK_SFT			13
#define RT5647_MIC1_CLK_DIS			(0x0 << 13)
#define RT5647_MIC1_CLK_EN			(0x1 << 13)
#define RT5647_MIC2_CLK_MASK			(0x1 << 12)
#define RT5647_MIC2_CLK_SFT			12
#define RT5647_MIC2_CLK_DIS			(0x0 << 12)
#define RT5647_MIC2_CLK_EN			(0x1 << 12)
#define RT5647_MIC1_OVCD_MASK			(0x1 << 11)
#define RT5647_MIC1_OVCD_SFT			11
#define RT5647_MIC1_OVCD_DIS			(0x0 << 11)
#define RT5647_MIC1_OVCD_EN			(0x1 << 11)
#define RT5647_MIC1_OVTH_MASK			(0x3 << 9)
#define RT5647_MIC1_OVTH_SFT			9
#define RT5647_MIC1_OVTH_600UA			(0x0 << 9)
#define RT5647_MIC1_OVTH_1500UA			(0x1 << 9)
#define RT5647_MIC1_OVTH_2000UA			(0x2 << 9)
#define RT5647_MIC2_OVCD_MASK			(0x1 << 8)
#define RT5647_MIC2_OVCD_SFT			8
#define RT5647_MIC2_OVCD_DIS			(0x0 << 8)
#define RT5647_MIC2_OVCD_EN			(0x1 << 8)
#define RT5647_MIC2_OVTH_MASK			(0x3 << 6)
#define RT5647_MIC2_OVTH_SFT			6
#define RT5647_MIC2_OVTH_600UA			(0x0 << 6)
#define RT5647_MIC2_OVTH_1500UA			(0x1 << 6)
#define RT5647_MIC2_OVTH_2000UA			(0x2 << 6)
#define RT5647_PWR_MB_MASK			(0x1 << 5)
#define RT5647_PWR_MB_SFT			5
#define RT5647_PWR_MB_PD			(0x0 << 5)
#define RT5647_PWR_MB_PU			(0x1 << 5)
#define RT5647_PWR_CLK25M_MASK			(0x1 << 4)
#define RT5647_PWR_CLK25M_SFT			4
#define RT5647_PWR_CLK25M_PD			(0x0 << 4)
#define RT5647_PWR_CLK25M_PU			(0x1 << 4)

/* VAD Control 4 (0x9d) */
#define RT5647_VAD_SEL_MASK			(0x3 << 8)
#define RT5647_VAD_SEL_SFT			8

/* Class D Output Control (0xa0) */
#define RT5647_CLSD_RATIO_MASK			(0xf << 12)
#define RT5647_CLSD_RATIO_SFT			12

/* EQ Control 1 (0xb0) */
#define RT5647_EQ_SRC_MASK			(0x1 << 15)
#define RT5647_EQ_SRC_SFT			15
#define RT5647_EQ_SRC_DAC			(0x0 << 15)
#define RT5647_EQ_SRC_ADC			(0x1 << 15)
#define RT5647_EQ_UPD				(0x1 << 14)
#define RT5647_EQ_UPD_BIT			14
#define RT5647_EQ_CD_MASK			(0x1 << 13)
#define RT5647_EQ_CD_SFT			13
#define RT5647_EQ_CD_DIS			(0x0 << 13)
#define RT5647_EQ_CD_EN				(0x1 << 13)
#define RT5647_EQ_DITH_MASK			(0x3 << 8)
#define RT5647_EQ_DITH_SFT			8
#define RT5647_EQ_DITH_NOR			(0x0 << 8)
#define RT5647_EQ_DITH_LSB			(0x1 << 8)
#define RT5647_EQ_DITH_LSB_1			(0x2 << 8)
#define RT5647_EQ_DITH_LSB_2			(0x3 << 8)

/* EQ Control 2 (0xb1) */
#define RT5647_EQ_HPF1_M_MASK			(0x1 << 8)
#define RT5647_EQ_HPF1_M_SFT			8
#define RT5647_EQ_HPF1_M_HI			(0x0 << 8)
#define RT5647_EQ_HPF1_M_1ST			(0x1 << 8)
#define RT5647_EQ_LPF1_M_MASK			(0x1 << 7)
#define RT5647_EQ_LPF1_M_SFT			7
#define RT5647_EQ_LPF1_M_LO			(0x0 << 7)
#define RT5647_EQ_LPF1_M_1ST			(0x1 << 7)
#define RT5647_EQ_HPF2_MASK			(0x1 << 6)
#define RT5647_EQ_HPF2_SFT			6
#define RT5647_EQ_HPF2_DIS			(0x0 << 6)
#define RT5647_EQ_HPF2_EN			(0x1 << 6)
#define RT5647_EQ_HPF1_MASK			(0x1 << 5)
#define RT5647_EQ_HPF1_SFT			5
#define RT5647_EQ_HPF1_DIS			(0x0 << 5)
#define RT5647_EQ_HPF1_EN			(0x1 << 5)
#define RT5647_EQ_BPF4_MASK			(0x1 << 4)
#define RT5647_EQ_BPF4_SFT			4
#define RT5647_EQ_BPF4_DIS			(0x0 << 4)
#define RT5647_EQ_BPF4_EN			(0x1 << 4)
#define RT5647_EQ_BPF3_MASK			(0x1 << 3)
#define RT5647_EQ_BPF3_SFT			3
#define RT5647_EQ_BPF3_DIS			(0x0 << 3)
#define RT5647_EQ_BPF3_EN			(0x1 << 3)
#define RT5647_EQ_BPF2_MASK			(0x1 << 2)
#define RT5647_EQ_BPF2_SFT			2
#define RT5647_EQ_BPF2_DIS			(0x0 << 2)
#define RT5647_EQ_BPF2_EN			(0x1 << 2)
#define RT5647_EQ_BPF1_MASK			(0x1 << 1)
#define RT5647_EQ_BPF1_SFT			1
#define RT5647_EQ_BPF1_DIS			(0x0 << 1)
#define RT5647_EQ_BPF1_EN			(0x1 << 1)
#define RT5647_EQ_LPF_MASK			(0x1)
#define RT5647_EQ_LPF_SFT			0
#define RT5647_EQ_LPF_DIS			(0x0)
#define RT5647_EQ_LPF_EN			(0x1)
#define RT5647_EQ_CTRL_MASK			(0x7f)

/* Memory Test (0xb2) */
#define RT5647_MT_MASK				(0x1 << 15)
#define RT5647_MT_SFT				15
#define RT5647_MT_DIS				(0x0 << 15)
#define RT5647_MT_EN				(0x1 << 15)

/* DRC/AGC Control 1 (0xb4) */
#define RT5647_DRC_AGC_P_MASK			(0x1 << 15)
#define RT5647_DRC_AGC_P_SFT			15
#define RT5647_DRC_AGC_P_DAC			(0x0 << 15)
#define RT5647_DRC_AGC_P_ADC			(0x1 << 15)
#define RT5647_DRC_AGC_MASK			(0x1 << 14)
#define RT5647_DRC_AGC_SFT			14
#define RT5647_DRC_AGC_DIS			(0x0 << 14)
#define RT5647_DRC_AGC_EN			(0x1 << 14)
#define RT5647_DRC_AGC_UPD			(0x1 << 13)
#define RT5647_DRC_AGC_UPD_BIT			13
#define RT5647_DRC_AGC_AR_MASK			(0x1f << 8)
#define RT5647_DRC_AGC_AR_SFT			8
#define RT5647_DRC_AGC_R_MASK			(0x7 << 5)
#define RT5647_DRC_AGC_R_SFT			5
#define RT5647_DRC_AGC_R_48K			(0x1 << 5)
#define RT5647_DRC_AGC_R_96K			(0x2 << 5)
#define RT5647_DRC_AGC_R_192K			(0x3 << 5)
#define RT5647_DRC_AGC_R_441K			(0x5 << 5)
#define RT5647_DRC_AGC_R_882K			(0x6 << 5)
#define RT5647_DRC_AGC_R_1764K			(0x7 << 5)
#define RT5647_DRC_AGC_RC_MASK			(0x1f)
#define RT5647_DRC_AGC_RC_SFT			0

/* DRC/AGC Control 2 (0xb5) */
#define RT5647_DRC_AGC_POB_MASK			(0x3f << 8)
#define RT5647_DRC_AGC_POB_SFT			8
#define RT5647_DRC_AGC_CP_MASK			(0x1 << 7)
#define RT5647_DRC_AGC_CP_SFT			7
#define RT5647_DRC_AGC_CP_DIS			(0x0 << 7)
#define RT5647_DRC_AGC_CP_EN			(0x1 << 7)
#define RT5647_DRC_AGC_CPR_MASK			(0x3 << 5)
#define RT5647_DRC_AGC_CPR_SFT			5
#define RT5647_DRC_AGC_CPR_1_1			(0x0 << 5)
#define RT5647_DRC_AGC_CPR_1_2			(0x1 << 5)
#define RT5647_DRC_AGC_CPR_1_3			(0x2 << 5)
#define RT5647_DRC_AGC_CPR_1_4			(0x3 << 5)
#define RT5647_DRC_AGC_PRB_MASK			(0x1f)
#define RT5647_DRC_AGC_PRB_SFT			0

/* DRC/AGC Control 3 (0xb6) */
#define RT5647_DRC_AGC_NGB_MASK			(0xf << 12)
#define RT5647_DRC_AGC_NGB_SFT			12
#define RT5647_DRC_AGC_TAR_MASK			(0x1f << 7)
#define RT5647_DRC_AGC_TAR_SFT			7
#define RT5647_DRC_AGC_NG_MASK			(0x1 << 6)
#define RT5647_DRC_AGC_NG_SFT			6
#define RT5647_DRC_AGC_NG_DIS			(0x0 << 6)
#define RT5647_DRC_AGC_NG_EN			(0x1 << 6)
#define RT5647_DRC_AGC_NGH_MASK			(0x1 << 5)
#define RT5647_DRC_AGC_NGH_SFT			5
#define RT5647_DRC_AGC_NGH_DIS			(0x0 << 5)
#define RT5647_DRC_AGC_NGH_EN			(0x1 << 5)
#define RT5647_DRC_AGC_NGT_MASK			(0x1f)
#define RT5647_DRC_AGC_NGT_SFT			0

/* ANC Control 1 (0xb8) */
#define RT5647_ANC_M_MASK			(0x1 << 15)
#define RT5647_ANC_M_SFT			15
#define RT5647_ANC_M_NOR			(0x0 << 15)
#define RT5647_ANC_M_REV			(0x1 << 15)
#define RT5647_ANC_MASK				(0x1 << 14)
#define RT5647_ANC_SFT				14
#define RT5647_ANC_DIS				(0x0 << 14)
#define RT5647_ANC_EN				(0x1 << 14)
#define RT5647_ANC_MD_MASK			(0x3 << 12)
#define RT5647_ANC_MD_SFT			12
#define RT5647_ANC_MD_DIS			(0x0 << 12)
#define RT5647_ANC_MD_67MS			(0x1 << 12)
#define RT5647_ANC_MD_267MS			(0x2 << 12)
#define RT5647_ANC_MD_1067MS			(0x3 << 12)
#define RT5647_ANC_SN_MASK			(0x1 << 11)
#define RT5647_ANC_SN_SFT			11
#define RT5647_ANC_SN_DIS			(0x0 << 11)
#define RT5647_ANC_SN_EN			(0x1 << 11)
#define RT5647_ANC_CLK_MASK			(0x1 << 10)
#define RT5647_ANC_CLK_SFT			10
#define RT5647_ANC_CLK_ANC			(0x0 << 10)
#define RT5647_ANC_CLK_REG			(0x1 << 10)
#define RT5647_ANC_ZCD_MASK			(0x3 << 8)
#define RT5647_ANC_ZCD_SFT			8
#define RT5647_ANC_ZCD_DIS			(0x0 << 8)
#define RT5647_ANC_ZCD_T1			(0x1 << 8)
#define RT5647_ANC_ZCD_T2			(0x2 << 8)
#define RT5647_ANC_ZCD_WT			(0x3 << 8)
#define RT5647_ANC_CS_MASK			(0x1 << 7)
#define RT5647_ANC_CS_SFT			7
#define RT5647_ANC_CS_DIS			(0x0 << 7)
#define RT5647_ANC_CS_EN			(0x1 << 7)
#define RT5647_ANC_SW_MASK			(0x1 << 6)
#define RT5647_ANC_SW_SFT			6
#define RT5647_ANC_SW_NOR			(0x0 << 6)
#define RT5647_ANC_SW_AUTO			(0x1 << 6)
#define RT5647_ANC_CO_L_MASK			(0x3f)
#define RT5647_ANC_CO_L_SFT			0

/* ANC Control 2 (0xb6) */
#define RT5647_ANC_FG_R_MASK			(0xf << 12)
#define RT5647_ANC_FG_R_SFT			12
#define RT5647_ANC_FG_L_MASK			(0xf << 8)
#define RT5647_ANC_FG_L_SFT			8
#define RT5647_ANC_CG_R_MASK			(0xf << 4)
#define RT5647_ANC_CG_R_SFT			4
#define RT5647_ANC_CG_L_MASK			(0xf)
#define RT5647_ANC_CG_L_SFT			0

/* ANC Control 3 (0xb6) */
#define RT5647_ANC_CD_MASK			(0x1 << 6)
#define RT5647_ANC_CD_SFT			6
#define RT5647_ANC_CD_BOTH			(0x0 << 6)
#define RT5647_ANC_CD_IND			(0x1 << 6)
#define RT5647_ANC_CO_R_MASK			(0x3f)
#define RT5647_ANC_CO_R_SFT			0

/* Jack Detect Control (0xbb) */
#define RT5647_JD_MASK				(0x7 << 13)
#define RT5647_JD_SFT				13
#define RT5647_JD_DIS				(0x0 << 13)
#define RT5647_JD_GPIO1				(0x1 << 13)
#define RT5647_JD_JD1_IN4P			(0x2 << 13)
#define RT5647_JD_JD2_IN4N			(0x3 << 13)
#define RT5647_JD_GPIO2				(0x4 << 13)
#define RT5647_JD_GPIO3				(0x5 << 13)
#define RT5647_JD_GPIO4				(0x6 << 13)
#define RT5647_JD_HP_MASK			(0x1 << 11)
#define RT5647_JD_HP_SFT			11
#define RT5647_JD_HP_DIS			(0x0 << 11)
#define RT5647_JD_HP_EN				(0x1 << 11)
#define RT5647_JD_HP_TRG_MASK			(0x1 << 10)
#define RT5647_JD_HP_TRG_SFT			10
#define RT5647_JD_HP_TRG_LO			(0x0 << 10)
#define RT5647_JD_HP_TRG_HI			(0x1 << 10)
#define RT5647_JD_SPL_MASK			(0x1 << 9)
#define RT5647_JD_SPL_SFT			9
#define RT5647_JD_SPL_DIS			(0x0 << 9)
#define RT5647_JD_SPL_EN			(0x1 << 9)
#define RT5647_JD_SPL_TRG_MASK			(0x1 << 8)
#define RT5647_JD_SPL_TRG_SFT			8
#define RT5647_JD_SPL_TRG_LO			(0x0 << 8)
#define RT5647_JD_SPL_TRG_HI			(0x1 << 8)
#define RT5647_JD_SPR_MASK			(0x1 << 7)
#define RT5647_JD_SPR_SFT			7
#define RT5647_JD_SPR_DIS			(0x0 << 7)
#define RT5647_JD_SPR_EN			(0x1 << 7)
#define RT5647_JD_SPR_TRG_MASK			(0x1 << 6)
#define RT5647_JD_SPR_TRG_SFT			6
#define RT5647_JD_SPR_TRG_LO			(0x0 << 6)
#define RT5647_JD_SPR_TRG_HI			(0x1 << 6)
#define RT5647_JD_MO_MASK			(0x1 << 5)
#define RT5647_JD_MO_SFT			5
#define RT5647_JD_MO_DIS			(0x0 << 5)
#define RT5647_JD_MO_EN				(0x1 << 5)
#define RT5647_JD_MO_TRG_MASK			(0x1 << 4)
#define RT5647_JD_MO_TRG_SFT			4
#define RT5647_JD_MO_TRG_LO			(0x0 << 4)
#define RT5647_JD_MO_TRG_HI			(0x1 << 4)
#define RT5647_JD_LO_MASK			(0x1 << 3)
#define RT5647_JD_LO_SFT			3
#define RT5647_JD_LO_DIS			(0x0 << 3)
#define RT5647_JD_LO_EN				(0x1 << 3)
#define RT5647_JD_LO_TRG_MASK			(0x1 << 2)
#define RT5647_JD_LO_TRG_SFT			2
#define RT5647_JD_LO_TRG_LO			(0x0 << 2)
#define RT5647_JD_LO_TRG_HI			(0x1 << 2)
#define RT5647_JD1_IN4P_MASK			(0x1 << 1)
#define RT5647_JD1_IN4P_SFT			1
#define RT5647_JD1_IN4P_DIS			(0x0 << 1)
#define RT5647_JD1_IN4P_EN			(0x1 << 1)
#define RT5647_JD2_IN4N_MASK			(0x1)
#define RT5647_JD2_IN4N_SFT			0
#define RT5647_JD2_IN4N_DIS			(0x0)
#define RT5647_JD2_IN4N_EN			(0x1)

/* Jack detect for ANC (0xbc) */
#define RT5647_ANC_DET_MASK			(0x3 << 4)
#define RT5647_ANC_DET_SFT			4
#define RT5647_ANC_DET_DIS			(0x0 << 4)
#define RT5647_ANC_DET_MB1			(0x1 << 4)
#define RT5647_ANC_DET_MB2			(0x2 << 4)
#define RT5647_ANC_DET_JD			(0x3 << 4)
#define RT5647_AD_TRG_MASK			(0x1 << 3)
#define RT5647_AD_TRG_SFT			3
#define RT5647_AD_TRG_LO			(0x0 << 3)
#define RT5647_AD_TRG_HI			(0x1 << 3)
#define RT5647_ANCM_DET_MASK			(0x3 << 4)
#define RT5647_ANCM_DET_SFT			4
#define RT5647_ANCM_DET_DIS			(0x0 << 4)
#define RT5647_ANCM_DET_MB1			(0x1 << 4)
#define RT5647_ANCM_DET_MB2			(0x2 << 4)
#define RT5647_ANCM_DET_JD			(0x3 << 4)
#define RT5647_AMD_TRG_MASK			(0x1 << 3)
#define RT5647_AMD_TRG_SFT			3
#define RT5647_AMD_TRG_LO			(0x0 << 3)
#define RT5647_AMD_TRG_HI			(0x1 << 3)

/* IRQ Control 1 (0xbd) */
#define RT5647_IRQ_JD_MASK			(0x1 << 15)
#define RT5647_IRQ_JD_SFT			15
#define RT5647_IRQ_JD_BP			(0x0 << 15)
#define RT5647_IRQ_JD_NOR			(0x1 << 15)
#define RT5647_IRQ_OT_MASK			(0x1 << 14)
#define RT5647_IRQ_OT_SFT			14
#define RT5647_IRQ_OT_BP			(0x0 << 14)
#define RT5647_IRQ_OT_NOR			(0x1 << 14)
#define RT5647_JD_STKY_MASK			(0x1 << 13)
#define RT5647_JD_STKY_SFT			13
#define RT5647_JD_STKY_DIS			(0x0 << 13)
#define RT5647_JD_STKY_EN			(0x1 << 13)
#define RT5647_OT_STKY_MASK			(0x1 << 12)
#define RT5647_OT_STKY_SFT			12
#define RT5647_OT_STKY_DIS			(0x0 << 12)
#define RT5647_OT_STKY_EN			(0x1 << 12)
#define RT5647_JD_P_MASK			(0x1 << 11)
#define RT5647_JD_P_SFT				11
#define RT5647_JD_P_NOR				(0x0 << 11)
#define RT5647_JD_P_INV				(0x1 << 11)
#define RT5647_OT_P_MASK			(0x1 << 10)
#define RT5647_OT_P_SFT				10
#define RT5647_OT_P_NOR				(0x0 << 10)
#define RT5647_OT_P_INV				(0x1 << 10)

/* IRQ Control 2 (0xbe) */
#define RT5647_IRQ_MB1_OC_MASK			(0x1 << 15)
#define RT5647_IRQ_MB1_OC_SFT			15
#define RT5647_IRQ_MB1_OC_BP			(0x0 << 15)
#define RT5647_IRQ_MB1_OC_NOR			(0x1 << 15)
#define RT5647_IRQ_MB2_OC_MASK			(0x1 << 14)
#define RT5647_IRQ_MB2_OC_SFT			14
#define RT5647_IRQ_MB2_OC_BP			(0x0 << 14)
#define RT5647_IRQ_MB2_OC_NOR			(0x1 << 14)
#define RT5647_MB1_OC_STKY_MASK			(0x1 << 11)
#define RT5647_MB1_OC_STKY_SFT			11
#define RT5647_MB1_OC_STKY_DIS			(0x0 << 11)
#define RT5647_MB1_OC_STKY_EN			(0x1 << 11)
#define RT5647_MB2_OC_STKY_MASK			(0x1 << 10)
#define RT5647_MB2_OC_STKY_SFT			10
#define RT5647_MB2_OC_STKY_DIS			(0x0 << 10)
#define RT5647_MB2_OC_STKY_EN			(0x1 << 10)
#define RT5647_MB1_OC_P_MASK			(0x1 << 7)
#define RT5647_MB1_OC_P_SFT			7
#define RT5647_MB1_OC_P_NOR			(0x0 << 7)
#define RT5647_MB1_OC_P_INV			(0x1 << 7)
#define RT5647_MB2_OC_P_MASK			(0x1 << 6)
#define RT5647_MB2_OC_P_SFT			6
#define RT5647_MB2_OC_P_NOR			(0x0 << 6)
#define RT5647_MB2_OC_P_INV			(0x1 << 6)
#define RT5647_MB1_OC_CLR			(0x1 << 3)
#define RT5647_MB1_OC_CLR_SFT			3
#define RT5647_MB2_OC_CLR			(0x1 << 2)
#define RT5647_MB2_OC_CLR_SFT			2

/* GPIO Control 1 (0xc0) */
#define RT5647_GP1_PIN_MASK			(0x1 << 15)
#define RT5647_GP1_PIN_SFT			15
#define RT5647_GP1_PIN_GPIO1			(0x0 << 15)
#define RT5647_GP1_PIN_IRQ			(0x1 << 15)
#define RT5647_GP2_PIN_MASK			(0x1 << 14)
#define RT5647_GP2_PIN_SFT			14
#define RT5647_GP2_PIN_GPIO2			(0x0 << 14)
#define RT5647_GP2_PIN_DMIC1_SCL		(0x1 << 14)
#define RT5647_GP3_PIN_MASK			(0x3 << 12)
#define RT5647_GP3_PIN_SFT			12
#define RT5647_GP3_PIN_GPIO3			(0x0 << 12)
#define RT5647_GP3_PIN_DMIC1_SDA		(0x1 << 12)
#define RT5647_GP3_PIN_IRQ			(0x2 << 12)
#define RT5647_GP4_PIN_MASK			(0x1 << 11)
#define RT5647_GP4_PIN_SFT			11
#define RT5647_GP4_PIN_GPIO4			(0x0 << 11)
#define RT5647_GP4_PIN_DMIC2_SDA		(0x1 << 11)
#define RT5647_DP_SIG_MASK			(0x1 << 10)
#define RT5647_DP_SIG_SFT			10
#define RT5647_DP_SIG_TEST			(0x0 << 10)
#define RT5647_DP_SIG_AP			(0x1 << 10)
#define RT5647_GPIO_M_MASK			(0x1 << 9)
#define RT5647_GPIO_M_SFT			9
#define RT5647_GPIO_M_FLT			(0x0 << 9)
#define RT5647_GPIO_M_PH			(0x1 << 9)
#define RT5647_I2S2_SEL				(0x1 << 8)
#define RT5647_I2S2_SEL_SFT			8
#define RT5647_GP5_PIN_MASK			(0x1 << 7)
#define RT5647_GP5_PIN_SFT			7
#define RT5647_GP5_PIN_GPIO5			(0x0 << 7)
#define RT5647_GP5_PIN_DMIC3_SCL		(0x1 << 7)
#define RT5647_GP7_PIN_MASK			(0x3 << 4)
#define RT5647_GP7_PIN_SFT			4
#define RT5647_GP7_PIN_GPIO7			(0x0 << 4)
#define RT5647_GP7_PIN_DMIC1_SDA		(0x1 << 4)
#define RT5647_GP7_PIN_PDM_SCL2			(0x2 << 4)
#define RT5647_GP8_PIN_MASK			(0x1 << 3)
#define RT5647_GP8_PIN_SFT			3
#define RT5647_GP8_PIN_GPIO8			(0x0 << 3)
#define RT5647_GP8_PIN_DMIC2_SDA		(0x1 << 3)
#define RT5647_GP9_PIN_MASK			(0x1 << 2)
#define RT5647_GP9_PIN_SFT			2
#define RT5647_GP9_PIN_GPIO9			(0x0 << 2)
#define RT5647_GP9_PIN_DMIC3_SDA		(0x1 << 2)
#define RT5647_GP10_PIN_MASK			(0x3)
#define RT5647_GP10_PIN_SFT			0
#define RT5647_GP10_PIN_GPIO9			(0x0)
#define RT5647_GP10_PIN_DMIC3_SDA		(0x1)
#define RT5647_GP10_PIN_PDM_ADT2		(0x2)

/* GPIO Control 3 (0xc2) */
#define RT5647_GP4_PF_MASK			(0x1 << 11)
#define RT5647_GP4_PF_SFT			11
#define RT5647_GP4_PF_IN			(0x0 << 11)
#define RT5647_GP4_PF_OUT			(0x1 << 11)
#define RT5647_GP4_OUT_MASK			(0x1 << 10)
#define RT5647_GP4_OUT_SFT			10
#define RT5647_GP4_OUT_LO			(0x0 << 10)
#define RT5647_GP4_OUT_HI			(0x1 << 10)
#define RT5647_GP4_P_MASK			(0x1 << 9)
#define RT5647_GP4_P_SFT			9
#define RT5647_GP4_P_NOR			(0x0 << 9)
#define RT5647_GP4_P_INV			(0x1 << 9)
#define RT5647_GP3_PF_MASK			(0x1 << 8)
#define RT5647_GP3_PF_SFT			8
#define RT5647_GP3_PF_IN			(0x0 << 8)
#define RT5647_GP3_PF_OUT			(0x1 << 8)
#define RT5647_GP3_OUT_MASK			(0x1 << 7)
#define RT5647_GP3_OUT_SFT			7
#define RT5647_GP3_OUT_LO			(0x0 << 7)
#define RT5647_GP3_OUT_HI			(0x1 << 7)
#define RT5647_GP3_P_MASK			(0x1 << 6)
#define RT5647_GP3_P_SFT			6
#define RT5647_GP3_P_NOR			(0x0 << 6)
#define RT5647_GP3_P_INV			(0x1 << 6)
#define RT5647_GP2_PF_MASK			(0x1 << 5)
#define RT5647_GP2_PF_SFT			5
#define RT5647_GP2_PF_IN			(0x0 << 5)
#define RT5647_GP2_PF_OUT			(0x1 << 5)
#define RT5647_GP2_OUT_MASK			(0x1 << 4)
#define RT5647_GP2_OUT_SFT			4
#define RT5647_GP2_OUT_LO			(0x0 << 4)
#define RT5647_GP2_OUT_HI			(0x1 << 4)
#define RT5647_GP2_P_MASK			(0x1 << 3)
#define RT5647_GP2_P_SFT			3
#define RT5647_GP2_P_NOR			(0x0 << 3)
#define RT5647_GP2_P_INV			(0x1 << 3)
#define RT5647_GP1_PF_MASK			(0x1 << 2)
#define RT5647_GP1_PF_SFT			2
#define RT5647_GP1_PF_IN			(0x0 << 2)
#define RT5647_GP1_PF_OUT			(0x1 << 2)
#define RT5647_GP1_OUT_MASK			(0x1 << 1)
#define RT5647_GP1_OUT_SFT			1
#define RT5647_GP1_OUT_LO			(0x0 << 1)
#define RT5647_GP1_OUT_HI			(0x1 << 1)
#define RT5647_GP1_P_MASK			(0x1)
#define RT5647_GP1_P_SFT			0
#define RT5647_GP1_P_NOR			(0x0)
#define RT5647_GP1_P_INV			(0x1)

/* Programmable Register Array Control 1 (0xc8) */
#define RT5647_REG_SEQ_MASK			(0xf << 12)
#define RT5647_REG_SEQ_SFT			12
#define RT5647_SEQ1_ST_MASK			(0x1 << 11) /*RO*/
#define RT5647_SEQ1_ST_SFT			11
#define RT5647_SEQ1_ST_RUN			(0x0 << 11)
#define RT5647_SEQ1_ST_FIN			(0x1 << 11)
#define RT5647_SEQ2_ST_MASK			(0x1 << 10) /*RO*/
#define RT5647_SEQ2_ST_SFT			10
#define RT5647_SEQ2_ST_RUN			(0x0 << 10)
#define RT5647_SEQ2_ST_FIN			(0x1 << 10)
#define RT5647_REG_LV_MASK			(0x1 << 9)
#define RT5647_REG_LV_SFT			9
#define RT5647_REG_LV_MX			(0x0 << 9)
#define RT5647_REG_LV_PR			(0x1 << 9)
#define RT5647_SEQ_2_PT_MASK			(0x1 << 8)
#define RT5647_SEQ_2_PT_BIT			8
#define RT5647_REG_IDX_MASK			(0xff)
#define RT5647_REG_IDX_SFT			0

/* Programmable Register Array Control 2 (0xc9) */
#define RT5647_REG_DAT_MASK			(0xffff)
#define RT5647_REG_DAT_SFT			0

/* Programmable Register Array Control 3 (0xca) */
#define RT5647_SEQ_DLY_MASK			(0xff << 8)
#define RT5647_SEQ_DLY_SFT			8
#define RT5647_PROG_MASK			(0x1 << 7)
#define RT5647_PROG_SFT				7
#define RT5647_PROG_DIS				(0x0 << 7)
#define RT5647_PROG_EN				(0x1 << 7)
#define RT5647_SEQ1_PT_RUN			(0x1 << 6)
#define RT5647_SEQ1_PT_RUN_BIT			6
#define RT5647_SEQ2_PT_RUN			(0x1 << 5)
#define RT5647_SEQ2_PT_RUN_BIT			5

/* Programmable Register Array Control 4 (0xcb) */
#define RT5647_SEQ1_START_MASK			(0xf << 8)
#define RT5647_SEQ1_START_SFT			8
#define RT5647_SEQ1_END_MASK			(0xf)
#define RT5647_SEQ1_END_SFT			0

/* Programmable Register Array Control 5 (0xcc) */
#define RT5647_SEQ2_START_MASK			(0xf << 8)
#define RT5647_SEQ2_START_SFT			8
#define RT5647_SEQ2_END_MASK			(0xf)
#define RT5647_SEQ2_END_SFT			0

/* Scramble Function (0xcd) */
#define RT5647_SCB_KEY_MASK			(0xff)
#define RT5647_SCB_KEY_SFT			0

/* Scramble Control (0xce) */
#define RT5647_SCB_SWAP_MASK			(0x1 << 15)
#define RT5647_SCB_SWAP_SFT			15
#define RT5647_SCB_SWAP_DIS			(0x0 << 15)
#define RT5647_SCB_SWAP_EN			(0x1 << 15)
#define RT5647_SCB_MASK				(0x1 << 14)
#define RT5647_SCB_SFT				14
#define RT5647_SCB_DIS				(0x0 << 14)
#define RT5647_SCB_EN				(0x1 << 14)

/* Baseback Control (0xcf) */
#define RT5647_BB_MASK				(0x1 << 15)
#define RT5647_BB_SFT				15
#define RT5647_BB_DIS				(0x0 << 15)
#define RT5647_BB_EN				(0x1 << 15)
#define RT5647_BB_CT_MASK			(0x7 << 12)
#define RT5647_BB_CT_SFT			12
#define RT5647_BB_CT_A				(0x0 << 12)
#define RT5647_BB_CT_B				(0x1 << 12)
#define RT5647_BB_CT_C				(0x2 << 12)
#define RT5647_BB_CT_D				(0x3 << 12)
#define RT5647_M_BB_L_MASK			(0x1 << 9)
#define RT5647_M_BB_L_SFT			9
#define RT5647_M_BB_R_MASK			(0x1 << 8)
#define RT5647_M_BB_R_SFT			8
#define RT5647_M_BB_HPF_L_MASK			(0x1 << 7)
#define RT5647_M_BB_HPF_L_SFT			7
#define RT5647_M_BB_HPF_R_MASK			(0x1 << 6)
#define RT5647_M_BB_HPF_R_SFT			6
#define RT5647_G_BB_BST_MASK			(0x3f)
#define RT5647_G_BB_BST_SFT			0

/* MP3 Plus Control 1 (0xd0) */
#define RT5647_M_MP3_L_MASK			(0x1 << 15)
#define RT5647_M_MP3_L_SFT			15
#define RT5647_M_MP3_R_MASK			(0x1 << 14)
#define RT5647_M_MP3_R_SFT			14
#define RT5647_M_MP3_MASK			(0x1 << 13)
#define RT5647_M_MP3_SFT			13
#define RT5647_M_MP3_DIS			(0x0 << 13)
#define RT5647_M_MP3_EN				(0x1 << 13)
#define RT5647_EG_MP3_MASK			(0x1f << 8)
#define RT5647_EG_MP3_SFT			8
#define RT5647_MP3_HLP_MASK			(0x1 << 7)
#define RT5647_MP3_HLP_SFT			7
#define RT5647_MP3_HLP_DIS			(0x0 << 7)
#define RT5647_MP3_HLP_EN			(0x1 << 7)
#define RT5647_M_MP3_ORG_L_MASK			(0x1 << 6)
#define RT5647_M_MP3_ORG_L_SFT			6
#define RT5647_M_MP3_ORG_R_MASK			(0x1 << 5)
#define RT5647_M_MP3_ORG_R_SFT			5

/* MP3 Plus Control 2 (0xd1) */
#define RT5647_MP3_WT_MASK			(0x1 << 13)
#define RT5647_MP3_WT_SFT			13
#define RT5647_MP3_WT_1_4			(0x0 << 13)
#define RT5647_MP3_WT_1_2			(0x1 << 13)
#define RT5647_OG_MP3_MASK			(0x1f << 8)
#define RT5647_OG_MP3_SFT			8
#define RT5647_HG_MP3_MASK			(0x3f)
#define RT5647_HG_MP3_SFT			0

/* 3D HP Control 1 (0xd2) */
#define RT5647_3D_CF_MASK			(0x1 << 15)
#define RT5647_3D_CF_SFT			15
#define RT5647_3D_CF_DIS			(0x0 << 15)
#define RT5647_3D_CF_EN				(0x1 << 15)
#define RT5647_3D_HP_MASK			(0x1 << 14)
#define RT5647_3D_HP_SFT			14
#define RT5647_3D_HP_DIS			(0x0 << 14)
#define RT5647_3D_HP_EN				(0x1 << 14)
#define RT5647_3D_BT_MASK			(0x1 << 13)
#define RT5647_3D_BT_SFT			13
#define RT5647_3D_BT_DIS			(0x0 << 13)
#define RT5647_3D_BT_EN				(0x1 << 13)
#define RT5647_3D_1F_MIX_MASK			(0x3 << 11)
#define RT5647_3D_1F_MIX_SFT			11
#define RT5647_3D_HP_M_MASK			(0x1 << 10)
#define RT5647_3D_HP_M_SFT			10
#define RT5647_3D_HP_M_SUR			(0x0 << 10)
#define RT5647_3D_HP_M_FRO			(0x1 << 10)
#define RT5647_M_3D_HRTF_MASK			(0x1 << 9)
#define RT5647_M_3D_HRTF_SFT			9
#define RT5647_M_3D_D2H_MASK			(0x1 << 8)
#define RT5647_M_3D_D2H_SFT			8
#define RT5647_M_3D_D2R_MASK			(0x1 << 7)
#define RT5647_M_3D_D2R_SFT			7
#define RT5647_M_3D_REVB_MASK			(0x1 << 6)
#define RT5647_M_3D_REVB_SFT			6

/* Adjustable high pass filter control 1 (0xd3) */
#define RT5647_2ND_HPF_MASK			(0x1 << 15)
#define RT5647_2ND_HPF_SFT			15
#define RT5647_2ND_HPF_DIS			(0x0 << 15)
#define RT5647_2ND_HPF_EN			(0x1 << 15)
#define RT5647_HPF_CF_L_MASK			(0x7 << 12)
#define RT5647_HPF_CF_L_SFT			12
#define RT5647_1ST_HPF_MASK			(0x1 << 11)
#define RT5647_1ST_HPF_SFT			11
#define RT5647_1ST_HPF_DIS			(0x0 << 11)
#define RT5647_1ST_HPF_EN			(0x1 << 11)
#define RT5647_HPF_CF_R_MASK			(0x7 << 8)
#define RT5647_HPF_CF_R_SFT			8
#define RT5647_ZD_T_MASK			(0x3 << 6)
#define RT5647_ZD_T_SFT				6
#define RT5647_ZD_F_MASK			(0x3 << 4)
#define RT5647_ZD_F_SFT				4
#define RT5647_ZD_F_IM				(0x0 << 4)
#define RT5647_ZD_F_ZC_IM			(0x1 << 4)
#define RT5647_ZD_F_ZC_IOD			(0x2 << 4)
#define RT5647_ZD_F_UN				(0x3 << 4)

/* HP calibration control and Amp detection (0xd6) */
#define RT5647_SI_DAC_MASK			(0x1 << 11)
#define RT5647_SI_DAC_SFT			11
#define RT5647_SI_DAC_AUTO			(0x0 << 11)
#define RT5647_SI_DAC_TEST			(0x1 << 11)
#define RT5647_DC_CAL_M_MASK			(0x1 << 10)
#define RT5647_DC_CAL_M_SFT			10
#define RT5647_DC_CAL_M_CAL			(0x0 << 10)
#define RT5647_DC_CAL_M_NOR			(0x1 << 10)
#define RT5647_DC_CAL_MASK			(0x1 << 9)
#define RT5647_DC_CAL_SFT			9
#define RT5647_DC_CAL_DIS			(0x0 << 9)
#define RT5647_DC_CAL_EN			(0x1 << 9)
#define RT5647_HPD_RCV_MASK			(0x7 << 6)
#define RT5647_HPD_RCV_SFT			6
#define RT5647_HPD_PS_MASK			(0x1 << 5)
#define RT5647_HPD_PS_SFT			5
#define RT5647_HPD_PS_DIS			(0x0 << 5)
#define RT5647_HPD_PS_EN			(0x1 << 5)
#define RT5647_CAL_M_MASK			(0x1 << 4)
#define RT5647_CAL_M_SFT			4
#define RT5647_CAL_M_DEP			(0x0 << 4)
#define RT5647_CAL_M_CAL			(0x1 << 4)
#define RT5647_CAL_MASK				(0x1 << 3)
#define RT5647_CAL_SFT				3
#define RT5647_CAL_DIS				(0x0 << 3)
#define RT5647_CAL_EN				(0x1 << 3)
#define RT5647_CAL_TEST_MASK			(0x1 << 2)
#define RT5647_CAL_TEST_SFT			2
#define RT5647_CAL_TEST_DIS			(0x0 << 2)
#define RT5647_CAL_TEST_EN			(0x1 << 2)
#define RT5647_CAL_P_MASK			(0x3)
#define RT5647_CAL_P_SFT			0
#define RT5647_CAL_P_NONE			(0x0)
#define RT5647_CAL_P_CAL			(0x1)
#define RT5647_CAL_P_DAC_CAL			(0x2)

/* Soft volume and zero cross control 1 (0xd9) */
#define RT5647_SV_MASK				(0x1 << 15)
#define RT5647_SV_SFT				15
#define RT5647_SV_DIS				(0x0 << 15)
#define RT5647_SV_EN				(0x1 << 15)
#define RT5647_SPO_SV_MASK			(0x1 << 14)
#define RT5647_SPO_SV_SFT			14
#define RT5647_SPO_SV_DIS			(0x0 << 14)
#define RT5647_SPO_SV_EN			(0x1 << 14)
#define RT5647_OUT_SV_MASK			(0x1 << 13)
#define RT5647_OUT_SV_SFT			13
#define RT5647_OUT_SV_DIS			(0x0 << 13)
#define RT5647_OUT_SV_EN			(0x1 << 13)
#define RT5647_HP_SV_MASK			(0x1 << 12)
#define RT5647_HP_SV_SFT			12
#define RT5647_HP_SV_DIS			(0x0 << 12)
#define RT5647_HP_SV_EN				(0x1 << 12)
#define RT5647_ZCD_DIG_MASK			(0x1 << 11)
#define RT5647_ZCD_DIG_SFT			11
#define RT5647_ZCD_DIG_DIS			(0x0 << 11)
#define RT5647_ZCD_DIG_EN			(0x1 << 11)
#define RT5647_ZCD_MASK				(0x1 << 10)
#define RT5647_ZCD_SFT				10
#define RT5647_ZCD_PD				(0x0 << 10)
#define RT5647_ZCD_PU				(0x1 << 10)
#define RT5647_M_ZCD_MASK			(0x3f << 4)
#define RT5647_M_ZCD_SFT			4
#define RT5647_M_ZCD_RM_L			(0x1 << 9)
#define RT5647_M_ZCD_RM_R			(0x1 << 8)
#define RT5647_M_ZCD_SM_L			(0x1 << 7)
#define RT5647_M_ZCD_SM_R			(0x1 << 6)
#define RT5647_M_ZCD_OM_L			(0x1 << 5)
#define RT5647_M_ZCD_OM_R			(0x1 << 4)
#define RT5647_SV_DLY_MASK			(0xf)
#define RT5647_SV_DLY_SFT			0

/* Soft volume and zero cross control 2 (0xda) */
#define RT5647_ZCD_HP_MASK			(0x1 << 15)
#define RT5647_ZCD_HP_SFT			15
#define RT5647_ZCD_HP_DIS			(0x0 << 15)
#define RT5647_ZCD_HP_EN			(0x1 << 15)


/* Codec Private Register definition */
/* 3D Speaker Control (0x63) */
#define RT5647_3D_SPK_MASK			(0x1 << 15)
#define RT5647_3D_SPK_SFT			15
#define RT5647_3D_SPK_DIS			(0x0 << 15)
#define RT5647_3D_SPK_EN			(0x1 << 15)
#define RT5647_3D_SPK_M_MASK			(0x3 << 13)
#define RT5647_3D_SPK_M_SFT			13
#define RT5647_3D_SPK_CG_MASK			(0x1f << 8)
#define RT5647_3D_SPK_CG_SFT			8
#define RT5647_3D_SPK_SG_MASK			(0x1f)
#define RT5647_3D_SPK_SG_SFT			0

/* Wind Noise Detection Control 1 (0x6c) */
#define RT5647_WND_MASK				(0x1 << 15)
#define RT5647_WND_SFT				15
#define RT5647_WND_DIS				(0x0 << 15)
#define RT5647_WND_EN				(0x1 << 15)

/* Wind Noise Detection Control 2 (0x6d) */
#define RT5647_WND_FC_NW_MASK			(0x3f << 10)
#define RT5647_WND_FC_NW_SFT			10
#define RT5647_WND_FC_WK_MASK			(0x3f << 4)
#define RT5647_WND_FC_WK_SFT			4

/* Wind Noise Detection Control 3 (0x6e) */
#define RT5647_HPF_FC_MASK			(0x3f << 6)
#define RT5647_HPF_FC_SFT			6
#define RT5647_WND_FC_ST_MASK			(0x3f)
#define RT5647_WND_FC_ST_SFT			0

/* Wind Noise Detection Control 4 (0x6f) */
#define RT5647_WND_TH_LO_MASK			(0x3ff)
#define RT5647_WND_TH_LO_SFT			0

/* Wind Noise Detection Control 5 (0x70) */
#define RT5647_WND_TH_HI_MASK			(0x3ff)
#define RT5647_WND_TH_HI_SFT			0

/* Wind Noise Detection Control 8 (0x73) */
#define RT5647_WND_WIND_MASK			(0x1 << 13) /* Read-Only */
#define RT5647_WND_WIND_SFT			13
#define RT5647_WND_STRONG_MASK			(0x1 << 12) /* Read-Only */
#define RT5647_WND_STRONG_SFT			12
enum {
	RT5647_NO_WIND,
	RT5647_BREEZE,
	RT5647_STORM,
};

/* Dipole Speaker Interface (0x75) */
#define RT5647_DP_ATT_MASK			(0x3 << 14)
#define RT5647_DP_ATT_SFT			14
#define RT5647_DP_SPK_MASK			(0x1 << 10)
#define RT5647_DP_SPK_SFT			10
#define RT5647_DP_SPK_DIS			(0x0 << 10)
#define RT5647_DP_SPK_EN			(0x1 << 10)

/* EQ Pre Volume Control (0xb3) */
#define RT5647_EQ_PRE_VOL_MASK			(0xffff)
#define RT5647_EQ_PRE_VOL_SFT			0

/* EQ Post Volume Control (0xb4) */
#define RT5647_EQ_PST_VOL_MASK			(0xffff)
#define RT5647_EQ_PST_VOL_SFT			0

/* Jack Detect Control 3 (0xf8) */
#define RT5647_CMP_MIC_IN_DET_MASK		(0x7 << 12)
#define RT5647_JD_CBJ_EN			(0x1 << 7)
#define RT5647_JD_CBJ_POL			(0x1 << 6)
#define RT5647_JD_TRI_CBJ_SEL_MASK		(0x7 << 3)
#define RT5647_JD_TRI_CBJ_SEL_SFT		(3)
#define RT5647_JD_TRI_HPO_SEL_MASK		(0x7)
#define RT5647_JD_TRI_HPO_SEL_SFT		(0)
#define RT5647_JD_F_GPIO_JD1			(0x0)
#define RT5647_JD_F_JD1_1			(0x1)
#define RT5647_JD_F_JD1_2			(0x2)
#define RT5647_JD_F_JD2				(0x3)
#define RT5647_JD_F_JD3				(0x4)
#define RT5647_JD_F_GPIO_JD2			(0x5)
#define RT5647_JD_F_MX0B_12			(0x6)

/* Digital Misc Control (0xfa) */
#define RT5647_RST_DSP				(0x1 << 13)
#define RT5647_IF1_ADC1_IN1_SEL			(0x1 << 12)
#define RT5647_IF1_ADC1_IN1_SFT			12
#define RT5647_IF1_ADC1_IN2_SEL			(0x1 << 11)
#define RT5647_IF1_ADC1_IN2_SFT			11
#define RT5647_IF1_ADC2_IN1_SEL			(0x1 << 10)
#define RT5647_IF1_ADC2_IN1_SFT			10
#define RT5647_DIG_GATE_CTRL			0x1

/* General Control2 (0xfb) */
#define RT5647_RXDC_SRC_MASK			(0x1 << 7)
#define RT5647_RXDC_SRC_STO			(0x0 << 7)
#define RT5647_RXDC_SRC_MONO			(0x1 << 7)
#define RT5647_RXDC_SRC_SFT			(7)
#define RT5647_RXDP2_SEL_MASK			(0x1 << 3)
#define RT5647_RXDP2_SEL_IF2			(0x0 << 3)
#define RT5647_RXDP2_SEL_ADC			(0x1 << 3)
#define RT5647_RXDP2_SEL_SFT			(3)


/* Vendor ID (0xfd) */
#define RT5647_VER_C				0x2
#define RT5647_VER_D				0x3

/* Debug String Length */
#define RT5647_REG_DISP_LEN 23

enum {
	RT5647_BP_EVENT = BIT(0), /* Button Push */
	RT5647_BR_EVENT = BIT(1), /* Button Release */
	RT5647_J_IN_EVENT = BIT(2), /* Jack insert */
	RT5647_J_OUT_EVENT = BIT(3), /* Jack evulse */
	RT5647_UN_EVENT = BIT(4), /* Unknown */
};

/* System Clock Source */
enum {
	RT5647_SCLK_S_MCLK,
	RT5647_SCLK_S_PLL1,
	RT5647_SCLK_S_RCCLK,
};

/* PLL1 Source */
enum {
	RT5647_PLL1_S_MCLK,
	RT5647_PLL1_S_BCLK1,
	RT5647_PLL1_S_BCLK2,
	RT5647_PLL1_S_BCLK3,
	RT5647_PLL1_S_BCLK4,
};

enum {
	RT5647_AIF1,
	RT5647_AIF2,
	RT5647_AIF3,
	RT5647_AIF4,
	RT5647_AIFS,
};

#define RT5647_U_IF1 (0x1)
#define RT5647_U_IF2 (0x1 << 1)
#define RT5647_U_IF3 (0x1 << 2)
#define RT5647_U_IF4 (0x1 << 3)

enum {
	RT5647_DMIC_DIS,
	RT5647_DMIC1,
	RT5647_DMIC2,
	RT5647_DMIC3,
};

struct rt5647_pll_code {
	bool m_bp; /* Indicates bypass m code or not. */
	int m_code;
	int n_code;
	int k_code;
};

struct rt5647_priv {
	struct snd_soc_codec *codec;
	struct delayed_work patch_work;

	int aif_pu;
	int sysclk;
	int sysclk_src;
	int lrck[RT5647_AIFS];
	int bclk[RT5647_AIFS];
	int master[RT5647_AIFS];

	int pll_src;
	int pll_in;
	int pll_out;

	int jack_type;
	int eq_mode;
	int dmic_en;
	bool combo_jack_en;
	int dsp_sw; /* expected parameter setting */
	bool dsp_play_pass;
	bool dsp_rec_pass;

	struct rt5647_custom_config *custom_cfg;
};

int rt5647_headset_detect(struct snd_soc_codec *codec, int jack_insert);
void rt5647_enable_push_button_irq(struct snd_soc_codec *codec, struct snd_soc_jack *jack);
int rt5647_button_detect(struct snd_soc_codec *codec);
int rt5647_check_irq_event(struct snd_soc_codec *codec);
void rt5647_i2s2_func_switch(struct snd_soc_codec *codec, bool enable);
void set_spk_unmute_delay_time(int delay_time);

#endif /* __RT5647_H__ */
