/*******************************************************************************
* File Name: cyfittergnu.inc
* 
* PSoC Creator  4.2
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu_trm.inc"

/* red */
.set red__0__DM__MASK, 0x7000
.set red__0__DM__SHIFT, 12
.set red__0__DR, CYREG_PRT1_DR
.set red__0__HSIOM, CYREG_HSIOM_PORT_SEL1
.set red__0__HSIOM_MASK, 0x000F0000
.set red__0__HSIOM_SHIFT, 16
.set red__0__INTCFG, CYREG_PRT1_INTCFG
.set red__0__INTSTAT, CYREG_PRT1_INTSTAT
.set red__0__MASK, 0x10
.set red__0__OUT_SEL, CYREG_UDB_PA1_CFG10
.set red__0__OUT_SEL_SHIFT, 8
.set red__0__OUT_SEL_VAL, 2
.set red__0__PA__CFG0, CYREG_UDB_PA1_CFG0
.set red__0__PA__CFG1, CYREG_UDB_PA1_CFG1
.set red__0__PA__CFG10, CYREG_UDB_PA1_CFG10
.set red__0__PA__CFG11, CYREG_UDB_PA1_CFG11
.set red__0__PA__CFG12, CYREG_UDB_PA1_CFG12
.set red__0__PA__CFG13, CYREG_UDB_PA1_CFG13
.set red__0__PA__CFG14, CYREG_UDB_PA1_CFG14
.set red__0__PA__CFG2, CYREG_UDB_PA1_CFG2
.set red__0__PA__CFG3, CYREG_UDB_PA1_CFG3
.set red__0__PA__CFG4, CYREG_UDB_PA1_CFG4
.set red__0__PA__CFG5, CYREG_UDB_PA1_CFG5
.set red__0__PA__CFG6, CYREG_UDB_PA1_CFG6
.set red__0__PA__CFG7, CYREG_UDB_PA1_CFG7
.set red__0__PA__CFG8, CYREG_UDB_PA1_CFG8
.set red__0__PA__CFG9, CYREG_UDB_PA1_CFG9
.set red__0__PC, CYREG_PRT1_PC
.set red__0__PC2, CYREG_PRT1_PC2
.set red__0__PORT, 1
.set red__0__PS, CYREG_PRT1_PS
.set red__0__SHIFT, 4
.set red__DR, CYREG_PRT1_DR
.set red__INTCFG, CYREG_PRT1_INTCFG
.set red__INTSTAT, CYREG_PRT1_INTSTAT
.set red__MASK, 0x10
.set red__PA__CFG0, CYREG_UDB_PA1_CFG0
.set red__PA__CFG1, CYREG_UDB_PA1_CFG1
.set red__PA__CFG10, CYREG_UDB_PA1_CFG10
.set red__PA__CFG11, CYREG_UDB_PA1_CFG11
.set red__PA__CFG12, CYREG_UDB_PA1_CFG12
.set red__PA__CFG13, CYREG_UDB_PA1_CFG13
.set red__PA__CFG14, CYREG_UDB_PA1_CFG14
.set red__PA__CFG2, CYREG_UDB_PA1_CFG2
.set red__PA__CFG3, CYREG_UDB_PA1_CFG3
.set red__PA__CFG4, CYREG_UDB_PA1_CFG4
.set red__PA__CFG5, CYREG_UDB_PA1_CFG5
.set red__PA__CFG6, CYREG_UDB_PA1_CFG6
.set red__PA__CFG7, CYREG_UDB_PA1_CFG7
.set red__PA__CFG8, CYREG_UDB_PA1_CFG8
.set red__PA__CFG9, CYREG_UDB_PA1_CFG9
.set red__PC, CYREG_PRT1_PC
.set red__PC2, CYREG_PRT1_PC2
.set red__PORT, 1
.set red__PS, CYREG_PRT1_PS
.set red__SHIFT, 4

/* en_5 */
.set en_5__0__DM__MASK, 0x1C0
.set en_5__0__DM__SHIFT, 6
.set en_5__0__DR, CYREG_PRT0_DR
.set en_5__0__HSIOM, CYREG_HSIOM_PORT_SEL0
.set en_5__0__HSIOM_MASK, 0x00000F00
.set en_5__0__HSIOM_SHIFT, 8
.set en_5__0__INTCFG, CYREG_PRT0_INTCFG
.set en_5__0__INTSTAT, CYREG_PRT0_INTSTAT
.set en_5__0__MASK, 0x04
.set en_5__0__OUT_SEL, CYREG_UDB_PA0_CFG10
.set en_5__0__OUT_SEL_SHIFT, 4
.set en_5__0__OUT_SEL_VAL, 2
.set en_5__0__PA__CFG0, CYREG_UDB_PA0_CFG0
.set en_5__0__PA__CFG1, CYREG_UDB_PA0_CFG1
.set en_5__0__PA__CFG10, CYREG_UDB_PA0_CFG10
.set en_5__0__PA__CFG11, CYREG_UDB_PA0_CFG11
.set en_5__0__PA__CFG12, CYREG_UDB_PA0_CFG12
.set en_5__0__PA__CFG13, CYREG_UDB_PA0_CFG13
.set en_5__0__PA__CFG14, CYREG_UDB_PA0_CFG14
.set en_5__0__PA__CFG2, CYREG_UDB_PA0_CFG2
.set en_5__0__PA__CFG3, CYREG_UDB_PA0_CFG3
.set en_5__0__PA__CFG4, CYREG_UDB_PA0_CFG4
.set en_5__0__PA__CFG5, CYREG_UDB_PA0_CFG5
.set en_5__0__PA__CFG6, CYREG_UDB_PA0_CFG6
.set en_5__0__PA__CFG7, CYREG_UDB_PA0_CFG7
.set en_5__0__PA__CFG8, CYREG_UDB_PA0_CFG8
.set en_5__0__PA__CFG9, CYREG_UDB_PA0_CFG9
.set en_5__0__PC, CYREG_PRT0_PC
.set en_5__0__PC2, CYREG_PRT0_PC2
.set en_5__0__PORT, 0
.set en_5__0__PS, CYREG_PRT0_PS
.set en_5__0__SHIFT, 2
.set en_5__DR, CYREG_PRT0_DR
.set en_5__INTCFG, CYREG_PRT0_INTCFG
.set en_5__INTSTAT, CYREG_PRT0_INTSTAT
.set en_5__MASK, 0x04
.set en_5__PA__CFG0, CYREG_UDB_PA0_CFG0
.set en_5__PA__CFG1, CYREG_UDB_PA0_CFG1
.set en_5__PA__CFG10, CYREG_UDB_PA0_CFG10
.set en_5__PA__CFG11, CYREG_UDB_PA0_CFG11
.set en_5__PA__CFG12, CYREG_UDB_PA0_CFG12
.set en_5__PA__CFG13, CYREG_UDB_PA0_CFG13
.set en_5__PA__CFG14, CYREG_UDB_PA0_CFG14
.set en_5__PA__CFG2, CYREG_UDB_PA0_CFG2
.set en_5__PA__CFG3, CYREG_UDB_PA0_CFG3
.set en_5__PA__CFG4, CYREG_UDB_PA0_CFG4
.set en_5__PA__CFG5, CYREG_UDB_PA0_CFG5
.set en_5__PA__CFG6, CYREG_UDB_PA0_CFG6
.set en_5__PA__CFG7, CYREG_UDB_PA0_CFG7
.set en_5__PA__CFG8, CYREG_UDB_PA0_CFG8
.set en_5__PA__CFG9, CYREG_UDB_PA0_CFG9
.set en_5__PC, CYREG_PRT0_PC
.set en_5__PC2, CYREG_PRT0_PC2
.set en_5__PORT, 0
.set en_5__PS, CYREG_PRT0_PS
.set en_5__SHIFT, 2

/* en_24 */
.set en_24__0__DM__MASK, 0x38000
.set en_24__0__DM__SHIFT, 15
.set en_24__0__DR, CYREG_PRT0_DR
.set en_24__0__HSIOM, CYREG_HSIOM_PORT_SEL0
.set en_24__0__HSIOM_MASK, 0x00F00000
.set en_24__0__HSIOM_SHIFT, 20
.set en_24__0__INTCFG, CYREG_PRT0_INTCFG
.set en_24__0__INTSTAT, CYREG_PRT0_INTSTAT
.set en_24__0__MASK, 0x20
.set en_24__0__OUT_SEL, CYREG_UDB_PA0_CFG10
.set en_24__0__OUT_SEL_SHIFT, 10
.set en_24__0__OUT_SEL_VAL, 3
.set en_24__0__PA__CFG0, CYREG_UDB_PA0_CFG0
.set en_24__0__PA__CFG1, CYREG_UDB_PA0_CFG1
.set en_24__0__PA__CFG10, CYREG_UDB_PA0_CFG10
.set en_24__0__PA__CFG11, CYREG_UDB_PA0_CFG11
.set en_24__0__PA__CFG12, CYREG_UDB_PA0_CFG12
.set en_24__0__PA__CFG13, CYREG_UDB_PA0_CFG13
.set en_24__0__PA__CFG14, CYREG_UDB_PA0_CFG14
.set en_24__0__PA__CFG2, CYREG_UDB_PA0_CFG2
.set en_24__0__PA__CFG3, CYREG_UDB_PA0_CFG3
.set en_24__0__PA__CFG4, CYREG_UDB_PA0_CFG4
.set en_24__0__PA__CFG5, CYREG_UDB_PA0_CFG5
.set en_24__0__PA__CFG6, CYREG_UDB_PA0_CFG6
.set en_24__0__PA__CFG7, CYREG_UDB_PA0_CFG7
.set en_24__0__PA__CFG8, CYREG_UDB_PA0_CFG8
.set en_24__0__PA__CFG9, CYREG_UDB_PA0_CFG9
.set en_24__0__PC, CYREG_PRT0_PC
.set en_24__0__PC2, CYREG_PRT0_PC2
.set en_24__0__PORT, 0
.set en_24__0__PS, CYREG_PRT0_PS
.set en_24__0__SHIFT, 5
.set en_24__DR, CYREG_PRT0_DR
.set en_24__INTCFG, CYREG_PRT0_INTCFG
.set en_24__INTSTAT, CYREG_PRT0_INTSTAT
.set en_24__MASK, 0x20
.set en_24__PA__CFG0, CYREG_UDB_PA0_CFG0
.set en_24__PA__CFG1, CYREG_UDB_PA0_CFG1
.set en_24__PA__CFG10, CYREG_UDB_PA0_CFG10
.set en_24__PA__CFG11, CYREG_UDB_PA0_CFG11
.set en_24__PA__CFG12, CYREG_UDB_PA0_CFG12
.set en_24__PA__CFG13, CYREG_UDB_PA0_CFG13
.set en_24__PA__CFG14, CYREG_UDB_PA0_CFG14
.set en_24__PA__CFG2, CYREG_UDB_PA0_CFG2
.set en_24__PA__CFG3, CYREG_UDB_PA0_CFG3
.set en_24__PA__CFG4, CYREG_UDB_PA0_CFG4
.set en_24__PA__CFG5, CYREG_UDB_PA0_CFG5
.set en_24__PA__CFG6, CYREG_UDB_PA0_CFG6
.set en_24__PA__CFG7, CYREG_UDB_PA0_CFG7
.set en_24__PA__CFG8, CYREG_UDB_PA0_CFG8
.set en_24__PA__CFG9, CYREG_UDB_PA0_CFG9
.set en_24__PC, CYREG_PRT0_PC
.set en_24__PC2, CYREG_PRT0_PC2
.set en_24__PORT, 0
.set en_24__PS, CYREG_PRT0_PS
.set en_24__SHIFT, 5

/* green */
.set green__0__DM__MASK, 0xE00
.set green__0__DM__SHIFT, 9
.set green__0__DR, CYREG_PRT1_DR
.set green__0__HSIOM, CYREG_HSIOM_PORT_SEL1
.set green__0__HSIOM_MASK, 0x0000F000
.set green__0__HSIOM_SHIFT, 12
.set green__0__INTCFG, CYREG_PRT1_INTCFG
.set green__0__INTSTAT, CYREG_PRT1_INTSTAT
.set green__0__MASK, 0x08
.set green__0__OUT_SEL, CYREG_UDB_PA1_CFG10
.set green__0__OUT_SEL_SHIFT, 6
.set green__0__OUT_SEL_VAL, 3
.set green__0__PA__CFG0, CYREG_UDB_PA1_CFG0
.set green__0__PA__CFG1, CYREG_UDB_PA1_CFG1
.set green__0__PA__CFG10, CYREG_UDB_PA1_CFG10
.set green__0__PA__CFG11, CYREG_UDB_PA1_CFG11
.set green__0__PA__CFG12, CYREG_UDB_PA1_CFG12
.set green__0__PA__CFG13, CYREG_UDB_PA1_CFG13
.set green__0__PA__CFG14, CYREG_UDB_PA1_CFG14
.set green__0__PA__CFG2, CYREG_UDB_PA1_CFG2
.set green__0__PA__CFG3, CYREG_UDB_PA1_CFG3
.set green__0__PA__CFG4, CYREG_UDB_PA1_CFG4
.set green__0__PA__CFG5, CYREG_UDB_PA1_CFG5
.set green__0__PA__CFG6, CYREG_UDB_PA1_CFG6
.set green__0__PA__CFG7, CYREG_UDB_PA1_CFG7
.set green__0__PA__CFG8, CYREG_UDB_PA1_CFG8
.set green__0__PA__CFG9, CYREG_UDB_PA1_CFG9
.set green__0__PC, CYREG_PRT1_PC
.set green__0__PC2, CYREG_PRT1_PC2
.set green__0__PORT, 1
.set green__0__PS, CYREG_PRT1_PS
.set green__0__SHIFT, 3
.set green__DR, CYREG_PRT1_DR
.set green__INTCFG, CYREG_PRT1_INTCFG
.set green__INTSTAT, CYREG_PRT1_INTSTAT
.set green__MASK, 0x08
.set green__PA__CFG0, CYREG_UDB_PA1_CFG0
.set green__PA__CFG1, CYREG_UDB_PA1_CFG1
.set green__PA__CFG10, CYREG_UDB_PA1_CFG10
.set green__PA__CFG11, CYREG_UDB_PA1_CFG11
.set green__PA__CFG12, CYREG_UDB_PA1_CFG12
.set green__PA__CFG13, CYREG_UDB_PA1_CFG13
.set green__PA__CFG14, CYREG_UDB_PA1_CFG14
.set green__PA__CFG2, CYREG_UDB_PA1_CFG2
.set green__PA__CFG3, CYREG_UDB_PA1_CFG3
.set green__PA__CFG4, CYREG_UDB_PA1_CFG4
.set green__PA__CFG5, CYREG_UDB_PA1_CFG5
.set green__PA__CFG6, CYREG_UDB_PA1_CFG6
.set green__PA__CFG7, CYREG_UDB_PA1_CFG7
.set green__PA__CFG8, CYREG_UDB_PA1_CFG8
.set green__PA__CFG9, CYREG_UDB_PA1_CFG9
.set green__PC, CYREG_PRT1_PC
.set green__PC2, CYREG_PRT1_PC2
.set green__PORT, 1
.set green__PS, CYREG_PRT1_PS
.set green__SHIFT, 3

/* Timer_1 */
.set Timer_1_TimerUDB_rstSts_stsreg__0__MASK, 0x01
.set Timer_1_TimerUDB_rstSts_stsreg__0__POS, 0
.set Timer_1_TimerUDB_rstSts_stsreg__2__MASK, 0x04
.set Timer_1_TimerUDB_rstSts_stsreg__2__POS, 2
.set Timer_1_TimerUDB_rstSts_stsreg__3__MASK, 0x08
.set Timer_1_TimerUDB_rstSts_stsreg__3__POS, 3
.set Timer_1_TimerUDB_rstSts_stsreg__MASK, 0x0D
.set Timer_1_TimerUDB_rstSts_stsreg__MASK_REG, CYREG_UDB_W8_MSK_03
.set Timer_1_TimerUDB_rstSts_stsreg__STATUS_AUX_CTL_REG, CYREG_UDB_W8_ACTL_03
.set Timer_1_TimerUDB_rstSts_stsreg__STATUS_REG, CYREG_UDB_W8_ST_03
.set Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_A0_REG, CYREG_UDB_W16_A0_02
.set Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_A1_REG, CYREG_UDB_W16_A1_02
.set Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_D0_REG, CYREG_UDB_W16_D0_02
.set Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_D1_REG, CYREG_UDB_W16_D1_02
.set Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_DP_AUX_CTL_REG, CYREG_UDB_W16_ACTL_02
.set Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_F0_REG, CYREG_UDB_W16_F0_02
.set Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_F1_REG, CYREG_UDB_W16_F1_02
.set Timer_1_TimerUDB_sT16_timerdp_u0__A0_A1_REG, CYREG_UDB_CAT16_A_02
.set Timer_1_TimerUDB_sT16_timerdp_u0__A0_REG, CYREG_UDB_W8_A0_02
.set Timer_1_TimerUDB_sT16_timerdp_u0__A1_REG, CYREG_UDB_W8_A1_02
.set Timer_1_TimerUDB_sT16_timerdp_u0__D0_D1_REG, CYREG_UDB_CAT16_D_02
.set Timer_1_TimerUDB_sT16_timerdp_u0__D0_REG, CYREG_UDB_W8_D0_02
.set Timer_1_TimerUDB_sT16_timerdp_u0__D1_REG, CYREG_UDB_W8_D1_02
.set Timer_1_TimerUDB_sT16_timerdp_u0__DP_AUX_CTL_REG, CYREG_UDB_W8_ACTL_02
.set Timer_1_TimerUDB_sT16_timerdp_u0__F0_F1_REG, CYREG_UDB_CAT16_F_02
.set Timer_1_TimerUDB_sT16_timerdp_u0__F0_REG, CYREG_UDB_W8_F0_02
.set Timer_1_TimerUDB_sT16_timerdp_u0__F1_REG, CYREG_UDB_W8_F1_02
.set Timer_1_TimerUDB_sT16_timerdp_u1__A0_A1_REG, CYREG_UDB_CAT16_A_03
.set Timer_1_TimerUDB_sT16_timerdp_u1__A0_REG, CYREG_UDB_W8_A0_03
.set Timer_1_TimerUDB_sT16_timerdp_u1__A1_REG, CYREG_UDB_W8_A1_03
.set Timer_1_TimerUDB_sT16_timerdp_u1__D0_D1_REG, CYREG_UDB_CAT16_D_03
.set Timer_1_TimerUDB_sT16_timerdp_u1__D0_REG, CYREG_UDB_W8_D0_03
.set Timer_1_TimerUDB_sT16_timerdp_u1__D1_REG, CYREG_UDB_W8_D1_03
.set Timer_1_TimerUDB_sT16_timerdp_u1__DP_AUX_CTL_REG, CYREG_UDB_W8_ACTL_03
.set Timer_1_TimerUDB_sT16_timerdp_u1__F0_F1_REG, CYREG_UDB_CAT16_F_03
.set Timer_1_TimerUDB_sT16_timerdp_u1__F0_REG, CYREG_UDB_W8_F0_03
.set Timer_1_TimerUDB_sT16_timerdp_u1__F1_REG, CYREG_UDB_W8_F1_03

/* HS_Clock */
.set HS_Clock__DIVIDER_MASK, 0x0000FFFF
.set HS_Clock__ENABLE, CYREG_CLK_DIVIDER_A00
.set HS_Clock__ENABLE_MASK, 0x80000000
.set HS_Clock__MASK, 0x80000000
.set HS_Clock__REGISTER, CYREG_CLK_DIVIDER_A00

/* open_ind */
.set open_ind__0__DM__MASK, 0x38
.set open_ind__0__DM__SHIFT, 3
.set open_ind__0__DR, CYREG_PRT1_DR
.set open_ind__0__HSIOM, CYREG_HSIOM_PORT_SEL1
.set open_ind__0__HSIOM_MASK, 0x000000F0
.set open_ind__0__HSIOM_SHIFT, 4
.set open_ind__0__INTCFG, CYREG_PRT1_INTCFG
.set open_ind__0__INTSTAT, CYREG_PRT1_INTSTAT
.set open_ind__0__MASK, 0x02
.set open_ind__0__PA__CFG0, CYREG_UDB_PA1_CFG0
.set open_ind__0__PA__CFG1, CYREG_UDB_PA1_CFG1
.set open_ind__0__PA__CFG10, CYREG_UDB_PA1_CFG10
.set open_ind__0__PA__CFG11, CYREG_UDB_PA1_CFG11
.set open_ind__0__PA__CFG12, CYREG_UDB_PA1_CFG12
.set open_ind__0__PA__CFG13, CYREG_UDB_PA1_CFG13
.set open_ind__0__PA__CFG14, CYREG_UDB_PA1_CFG14
.set open_ind__0__PA__CFG2, CYREG_UDB_PA1_CFG2
.set open_ind__0__PA__CFG3, CYREG_UDB_PA1_CFG3
.set open_ind__0__PA__CFG4, CYREG_UDB_PA1_CFG4
.set open_ind__0__PA__CFG5, CYREG_UDB_PA1_CFG5
.set open_ind__0__PA__CFG6, CYREG_UDB_PA1_CFG6
.set open_ind__0__PA__CFG7, CYREG_UDB_PA1_CFG7
.set open_ind__0__PA__CFG8, CYREG_UDB_PA1_CFG8
.set open_ind__0__PA__CFG9, CYREG_UDB_PA1_CFG9
.set open_ind__0__PC, CYREG_PRT1_PC
.set open_ind__0__PC2, CYREG_PRT1_PC2
.set open_ind__0__PORT, 1
.set open_ind__0__PS, CYREG_PRT1_PS
.set open_ind__0__SHIFT, 1
.set open_ind__DR, CYREG_PRT1_DR
.set open_ind__INTCFG, CYREG_PRT1_INTCFG
.set open_ind__INTSTAT, CYREG_PRT1_INTSTAT
.set open_ind__MASK, 0x02
.set open_ind__PA__CFG0, CYREG_UDB_PA1_CFG0
.set open_ind__PA__CFG1, CYREG_UDB_PA1_CFG1
.set open_ind__PA__CFG10, CYREG_UDB_PA1_CFG10
.set open_ind__PA__CFG11, CYREG_UDB_PA1_CFG11
.set open_ind__PA__CFG12, CYREG_UDB_PA1_CFG12
.set open_ind__PA__CFG13, CYREG_UDB_PA1_CFG13
.set open_ind__PA__CFG14, CYREG_UDB_PA1_CFG14
.set open_ind__PA__CFG2, CYREG_UDB_PA1_CFG2
.set open_ind__PA__CFG3, CYREG_UDB_PA1_CFG3
.set open_ind__PA__CFG4, CYREG_UDB_PA1_CFG4
.set open_ind__PA__CFG5, CYREG_UDB_PA1_CFG5
.set open_ind__PA__CFG6, CYREG_UDB_PA1_CFG6
.set open_ind__PA__CFG7, CYREG_UDB_PA1_CFG7
.set open_ind__PA__CFG8, CYREG_UDB_PA1_CFG8
.set open_ind__PA__CFG9, CYREG_UDB_PA1_CFG9
.set open_ind__PC, CYREG_PRT1_PC
.set open_ind__PC2, CYREG_PRT1_PC2
.set open_ind__PORT, 1
.set open_ind__PS, CYREG_PRT1_PS
.set open_ind__SHIFT, 1

/* manual_open */
.set manual_open__0__DM__MASK, 0x1C0
.set manual_open__0__DM__SHIFT, 6
.set manual_open__0__DR, CYREG_PRT2_DR
.set manual_open__0__HSIOM, CYREG_HSIOM_PORT_SEL2
.set manual_open__0__HSIOM_MASK, 0x00000F00
.set manual_open__0__HSIOM_SHIFT, 8
.set manual_open__0__INTCFG, CYREG_PRT2_INTCFG
.set manual_open__0__INTSTAT, CYREG_PRT2_INTSTAT
.set manual_open__0__MASK, 0x04
.set manual_open__0__PA__CFG0, CYREG_UDB_PA2_CFG0
.set manual_open__0__PA__CFG1, CYREG_UDB_PA2_CFG1
.set manual_open__0__PA__CFG10, CYREG_UDB_PA2_CFG10
.set manual_open__0__PA__CFG11, CYREG_UDB_PA2_CFG11
.set manual_open__0__PA__CFG12, CYREG_UDB_PA2_CFG12
.set manual_open__0__PA__CFG13, CYREG_UDB_PA2_CFG13
.set manual_open__0__PA__CFG14, CYREG_UDB_PA2_CFG14
.set manual_open__0__PA__CFG2, CYREG_UDB_PA2_CFG2
.set manual_open__0__PA__CFG3, CYREG_UDB_PA2_CFG3
.set manual_open__0__PA__CFG4, CYREG_UDB_PA2_CFG4
.set manual_open__0__PA__CFG5, CYREG_UDB_PA2_CFG5
.set manual_open__0__PA__CFG6, CYREG_UDB_PA2_CFG6
.set manual_open__0__PA__CFG7, CYREG_UDB_PA2_CFG7
.set manual_open__0__PA__CFG8, CYREG_UDB_PA2_CFG8
.set manual_open__0__PA__CFG9, CYREG_UDB_PA2_CFG9
.set manual_open__0__PC, CYREG_PRT2_PC
.set manual_open__0__PC2, CYREG_PRT2_PC2
.set manual_open__0__PORT, 2
.set manual_open__0__PS, CYREG_PRT2_PS
.set manual_open__0__SHIFT, 2
.set manual_open__DR, CYREG_PRT2_DR
.set manual_open__INTCFG, CYREG_PRT2_INTCFG
.set manual_open__INTSTAT, CYREG_PRT2_INTSTAT
.set manual_open__MASK, 0x04
.set manual_open__PA__CFG0, CYREG_UDB_PA2_CFG0
.set manual_open__PA__CFG1, CYREG_UDB_PA2_CFG1
.set manual_open__PA__CFG10, CYREG_UDB_PA2_CFG10
.set manual_open__PA__CFG11, CYREG_UDB_PA2_CFG11
.set manual_open__PA__CFG12, CYREG_UDB_PA2_CFG12
.set manual_open__PA__CFG13, CYREG_UDB_PA2_CFG13
.set manual_open__PA__CFG14, CYREG_UDB_PA2_CFG14
.set manual_open__PA__CFG2, CYREG_UDB_PA2_CFG2
.set manual_open__PA__CFG3, CYREG_UDB_PA2_CFG3
.set manual_open__PA__CFG4, CYREG_UDB_PA2_CFG4
.set manual_open__PA__CFG5, CYREG_UDB_PA2_CFG5
.set manual_open__PA__CFG6, CYREG_UDB_PA2_CFG6
.set manual_open__PA__CFG7, CYREG_UDB_PA2_CFG7
.set manual_open__PA__CFG8, CYREG_UDB_PA2_CFG8
.set manual_open__PA__CFG9, CYREG_UDB_PA2_CFG9
.set manual_open__PC, CYREG_PRT2_PC
.set manual_open__PC2, CYREG_PRT2_PC2
.set manual_open__PORT, 2
.set manual_open__PS, CYREG_PRT2_PS
.set manual_open__SHIFT, 2

/* start_pulse */
.set start_pulse_PWMUDB_genblk8_stsreg__0__MASK, 0x01
.set start_pulse_PWMUDB_genblk8_stsreg__0__POS, 0
.set start_pulse_PWMUDB_genblk8_stsreg__16BIT_STATUS_AUX_CTL_REG, CYREG_UDB_W16_ACTL_01
.set start_pulse_PWMUDB_genblk8_stsreg__16BIT_STATUS_REG, CYREG_UDB_W16_ST_01
.set start_pulse_PWMUDB_genblk8_stsreg__2__MASK, 0x04
.set start_pulse_PWMUDB_genblk8_stsreg__2__POS, 2
.set start_pulse_PWMUDB_genblk8_stsreg__3__MASK, 0x08
.set start_pulse_PWMUDB_genblk8_stsreg__3__POS, 3
.set start_pulse_PWMUDB_genblk8_stsreg__MASK, 0x0D
.set start_pulse_PWMUDB_genblk8_stsreg__MASK_REG, CYREG_UDB_W8_MSK_01
.set start_pulse_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG, CYREG_UDB_W8_ACTL_01
.set start_pulse_PWMUDB_genblk8_stsreg__STATUS_REG, CYREG_UDB_W8_ST_01
.set start_pulse_PWMUDB_sP16_pwmdp_u0__16BIT_A0_REG, CYREG_UDB_W16_A0_00
.set start_pulse_PWMUDB_sP16_pwmdp_u0__16BIT_A1_REG, CYREG_UDB_W16_A1_00
.set start_pulse_PWMUDB_sP16_pwmdp_u0__16BIT_D0_REG, CYREG_UDB_W16_D0_00
.set start_pulse_PWMUDB_sP16_pwmdp_u0__16BIT_D1_REG, CYREG_UDB_W16_D1_00
.set start_pulse_PWMUDB_sP16_pwmdp_u0__16BIT_DP_AUX_CTL_REG, CYREG_UDB_W16_ACTL_00
.set start_pulse_PWMUDB_sP16_pwmdp_u0__16BIT_F0_REG, CYREG_UDB_W16_F0_00
.set start_pulse_PWMUDB_sP16_pwmdp_u0__16BIT_F1_REG, CYREG_UDB_W16_F1_00
.set start_pulse_PWMUDB_sP16_pwmdp_u0__32BIT_A0_REG, CYREG_UDB_W32_A0_00
.set start_pulse_PWMUDB_sP16_pwmdp_u0__32BIT_A1_REG, CYREG_UDB_W32_A1_00
.set start_pulse_PWMUDB_sP16_pwmdp_u0__32BIT_D0_REG, CYREG_UDB_W32_D0_00
.set start_pulse_PWMUDB_sP16_pwmdp_u0__32BIT_D1_REG, CYREG_UDB_W32_D1_00
.set start_pulse_PWMUDB_sP16_pwmdp_u0__32BIT_DP_AUX_CTL_REG, CYREG_UDB_W32_ACTL_00
.set start_pulse_PWMUDB_sP16_pwmdp_u0__32BIT_F0_REG, CYREG_UDB_W32_F0_00
.set start_pulse_PWMUDB_sP16_pwmdp_u0__32BIT_F1_REG, CYREG_UDB_W32_F1_00
.set start_pulse_PWMUDB_sP16_pwmdp_u0__A0_A1_REG, CYREG_UDB_CAT16_A_00
.set start_pulse_PWMUDB_sP16_pwmdp_u0__A0_REG, CYREG_UDB_W8_A0_00
.set start_pulse_PWMUDB_sP16_pwmdp_u0__A1_REG, CYREG_UDB_W8_A1_00
.set start_pulse_PWMUDB_sP16_pwmdp_u0__D0_D1_REG, CYREG_UDB_CAT16_D_00
.set start_pulse_PWMUDB_sP16_pwmdp_u0__D0_REG, CYREG_UDB_W8_D0_00
.set start_pulse_PWMUDB_sP16_pwmdp_u0__D1_REG, CYREG_UDB_W8_D1_00
.set start_pulse_PWMUDB_sP16_pwmdp_u0__DP_AUX_CTL_REG, CYREG_UDB_W8_ACTL_00
.set start_pulse_PWMUDB_sP16_pwmdp_u0__F0_F1_REG, CYREG_UDB_CAT16_F_00
.set start_pulse_PWMUDB_sP16_pwmdp_u0__F0_REG, CYREG_UDB_W8_F0_00
.set start_pulse_PWMUDB_sP16_pwmdp_u0__F1_REG, CYREG_UDB_W8_F1_00
.set start_pulse_PWMUDB_sP16_pwmdp_u1__16BIT_A0_REG, CYREG_UDB_W16_A0_01
.set start_pulse_PWMUDB_sP16_pwmdp_u1__16BIT_A1_REG, CYREG_UDB_W16_A1_01
.set start_pulse_PWMUDB_sP16_pwmdp_u1__16BIT_D0_REG, CYREG_UDB_W16_D0_01
.set start_pulse_PWMUDB_sP16_pwmdp_u1__16BIT_D1_REG, CYREG_UDB_W16_D1_01
.set start_pulse_PWMUDB_sP16_pwmdp_u1__16BIT_DP_AUX_CTL_REG, CYREG_UDB_W16_ACTL_01
.set start_pulse_PWMUDB_sP16_pwmdp_u1__16BIT_F0_REG, CYREG_UDB_W16_F0_01
.set start_pulse_PWMUDB_sP16_pwmdp_u1__16BIT_F1_REG, CYREG_UDB_W16_F1_01
.set start_pulse_PWMUDB_sP16_pwmdp_u1__A0_A1_REG, CYREG_UDB_CAT16_A_01
.set start_pulse_PWMUDB_sP16_pwmdp_u1__A0_REG, CYREG_UDB_W8_A0_01
.set start_pulse_PWMUDB_sP16_pwmdp_u1__A1_REG, CYREG_UDB_W8_A1_01
.set start_pulse_PWMUDB_sP16_pwmdp_u1__D0_D1_REG, CYREG_UDB_CAT16_D_01
.set start_pulse_PWMUDB_sP16_pwmdp_u1__D0_REG, CYREG_UDB_W8_D0_01
.set start_pulse_PWMUDB_sP16_pwmdp_u1__D1_REG, CYREG_UDB_W8_D1_01
.set start_pulse_PWMUDB_sP16_pwmdp_u1__DP_AUX_CTL_REG, CYREG_UDB_W8_ACTL_01
.set start_pulse_PWMUDB_sP16_pwmdp_u1__F0_F1_REG, CYREG_UDB_CAT16_F_01
.set start_pulse_PWMUDB_sP16_pwmdp_u1__F0_REG, CYREG_UDB_W8_F0_01
.set start_pulse_PWMUDB_sP16_pwmdp_u1__F1_REG, CYREG_UDB_W8_F1_01

/* manual_close */
.set manual_close__0__DM__MASK, 0x38
.set manual_close__0__DM__SHIFT, 3
.set manual_close__0__DR, CYREG_PRT2_DR
.set manual_close__0__HSIOM, CYREG_HSIOM_PORT_SEL2
.set manual_close__0__HSIOM_MASK, 0x000000F0
.set manual_close__0__HSIOM_SHIFT, 4
.set manual_close__0__INTCFG, CYREG_PRT2_INTCFG
.set manual_close__0__INTSTAT, CYREG_PRT2_INTSTAT
.set manual_close__0__MASK, 0x02
.set manual_close__0__PA__CFG0, CYREG_UDB_PA2_CFG0
.set manual_close__0__PA__CFG1, CYREG_UDB_PA2_CFG1
.set manual_close__0__PA__CFG10, CYREG_UDB_PA2_CFG10
.set manual_close__0__PA__CFG11, CYREG_UDB_PA2_CFG11
.set manual_close__0__PA__CFG12, CYREG_UDB_PA2_CFG12
.set manual_close__0__PA__CFG13, CYREG_UDB_PA2_CFG13
.set manual_close__0__PA__CFG14, CYREG_UDB_PA2_CFG14
.set manual_close__0__PA__CFG2, CYREG_UDB_PA2_CFG2
.set manual_close__0__PA__CFG3, CYREG_UDB_PA2_CFG3
.set manual_close__0__PA__CFG4, CYREG_UDB_PA2_CFG4
.set manual_close__0__PA__CFG5, CYREG_UDB_PA2_CFG5
.set manual_close__0__PA__CFG6, CYREG_UDB_PA2_CFG6
.set manual_close__0__PA__CFG7, CYREG_UDB_PA2_CFG7
.set manual_close__0__PA__CFG8, CYREG_UDB_PA2_CFG8
.set manual_close__0__PA__CFG9, CYREG_UDB_PA2_CFG9
.set manual_close__0__PC, CYREG_PRT2_PC
.set manual_close__0__PC2, CYREG_PRT2_PC2
.set manual_close__0__PORT, 2
.set manual_close__0__PS, CYREG_PRT2_PS
.set manual_close__0__SHIFT, 1
.set manual_close__DR, CYREG_PRT2_DR
.set manual_close__INTCFG, CYREG_PRT2_INTCFG
.set manual_close__INTSTAT, CYREG_PRT2_INTSTAT
.set manual_close__MASK, 0x02
.set manual_close__PA__CFG0, CYREG_UDB_PA2_CFG0
.set manual_close__PA__CFG1, CYREG_UDB_PA2_CFG1
.set manual_close__PA__CFG10, CYREG_UDB_PA2_CFG10
.set manual_close__PA__CFG11, CYREG_UDB_PA2_CFG11
.set manual_close__PA__CFG12, CYREG_UDB_PA2_CFG12
.set manual_close__PA__CFG13, CYREG_UDB_PA2_CFG13
.set manual_close__PA__CFG14, CYREG_UDB_PA2_CFG14
.set manual_close__PA__CFG2, CYREG_UDB_PA2_CFG2
.set manual_close__PA__CFG3, CYREG_UDB_PA2_CFG3
.set manual_close__PA__CFG4, CYREG_UDB_PA2_CFG4
.set manual_close__PA__CFG5, CYREG_UDB_PA2_CFG5
.set manual_close__PA__CFG6, CYREG_UDB_PA2_CFG6
.set manual_close__PA__CFG7, CYREG_UDB_PA2_CFG7
.set manual_close__PA__CFG8, CYREG_UDB_PA2_CFG8
.set manual_close__PA__CFG9, CYREG_UDB_PA2_CFG9
.set manual_close__PC, CYREG_PRT2_PC
.set manual_close__PC2, CYREG_PRT2_PC2
.set manual_close__PORT, 2
.set manual_close__PS, CYREG_PRT2_PS
.set manual_close__SHIFT, 1

/* Interrupt_Out */
.set Interrupt_Out__0__DM__MASK, 0x07
.set Interrupt_Out__0__DM__SHIFT, 0
.set Interrupt_Out__0__DR, CYREG_PRT0_DR
.set Interrupt_Out__0__HSIOM, CYREG_HSIOM_PORT_SEL0
.set Interrupt_Out__0__HSIOM_MASK, 0x0000000F
.set Interrupt_Out__0__HSIOM_SHIFT, 0
.set Interrupt_Out__0__INTCFG, CYREG_PRT0_INTCFG
.set Interrupt_Out__0__INTSTAT, CYREG_PRT0_INTSTAT
.set Interrupt_Out__0__MASK, 0x01
.set Interrupt_Out__0__OUT_SEL, CYREG_UDB_PA0_CFG10
.set Interrupt_Out__0__OUT_SEL_SHIFT, 0
.set Interrupt_Out__0__OUT_SEL_VAL, 3
.set Interrupt_Out__0__PA__CFG0, CYREG_UDB_PA0_CFG0
.set Interrupt_Out__0__PA__CFG1, CYREG_UDB_PA0_CFG1
.set Interrupt_Out__0__PA__CFG10, CYREG_UDB_PA0_CFG10
.set Interrupt_Out__0__PA__CFG11, CYREG_UDB_PA0_CFG11
.set Interrupt_Out__0__PA__CFG12, CYREG_UDB_PA0_CFG12
.set Interrupt_Out__0__PA__CFG13, CYREG_UDB_PA0_CFG13
.set Interrupt_Out__0__PA__CFG14, CYREG_UDB_PA0_CFG14
.set Interrupt_Out__0__PA__CFG2, CYREG_UDB_PA0_CFG2
.set Interrupt_Out__0__PA__CFG3, CYREG_UDB_PA0_CFG3
.set Interrupt_Out__0__PA__CFG4, CYREG_UDB_PA0_CFG4
.set Interrupt_Out__0__PA__CFG5, CYREG_UDB_PA0_CFG5
.set Interrupt_Out__0__PA__CFG6, CYREG_UDB_PA0_CFG6
.set Interrupt_Out__0__PA__CFG7, CYREG_UDB_PA0_CFG7
.set Interrupt_Out__0__PA__CFG8, CYREG_UDB_PA0_CFG8
.set Interrupt_Out__0__PA__CFG9, CYREG_UDB_PA0_CFG9
.set Interrupt_Out__0__PC, CYREG_PRT0_PC
.set Interrupt_Out__0__PC2, CYREG_PRT0_PC2
.set Interrupt_Out__0__PORT, 0
.set Interrupt_Out__0__PS, CYREG_PRT0_PS
.set Interrupt_Out__0__SHIFT, 0
.set Interrupt_Out__DR, CYREG_PRT0_DR
.set Interrupt_Out__INTCFG, CYREG_PRT0_INTCFG
.set Interrupt_Out__INTSTAT, CYREG_PRT0_INTSTAT
.set Interrupt_Out__MASK, 0x01
.set Interrupt_Out__PA__CFG0, CYREG_UDB_PA0_CFG0
.set Interrupt_Out__PA__CFG1, CYREG_UDB_PA0_CFG1
.set Interrupt_Out__PA__CFG10, CYREG_UDB_PA0_CFG10
.set Interrupt_Out__PA__CFG11, CYREG_UDB_PA0_CFG11
.set Interrupt_Out__PA__CFG12, CYREG_UDB_PA0_CFG12
.set Interrupt_Out__PA__CFG13, CYREG_UDB_PA0_CFG13
.set Interrupt_Out__PA__CFG14, CYREG_UDB_PA0_CFG14
.set Interrupt_Out__PA__CFG2, CYREG_UDB_PA0_CFG2
.set Interrupt_Out__PA__CFG3, CYREG_UDB_PA0_CFG3
.set Interrupt_Out__PA__CFG4, CYREG_UDB_PA0_CFG4
.set Interrupt_Out__PA__CFG5, CYREG_UDB_PA0_CFG5
.set Interrupt_Out__PA__CFG6, CYREG_UDB_PA0_CFG6
.set Interrupt_Out__PA__CFG7, CYREG_UDB_PA0_CFG7
.set Interrupt_Out__PA__CFG8, CYREG_UDB_PA0_CFG8
.set Interrupt_Out__PA__CFG9, CYREG_UDB_PA0_CFG9
.set Interrupt_Out__PC, CYREG_PRT0_PC
.set Interrupt_Out__PC2, CYREG_PRT0_PC2
.set Interrupt_Out__PORT, 0
.set Interrupt_Out__PS, CYREG_PRT0_PS
.set Interrupt_Out__SHIFT, 0

/* digital_control */
.set digital_control__0__DM__MASK, 0x38000
.set digital_control__0__DM__SHIFT, 15
.set digital_control__0__DR, CYREG_PRT2_DR
.set digital_control__0__HSIOM, CYREG_HSIOM_PORT_SEL2
.set digital_control__0__HSIOM_MASK, 0x00F00000
.set digital_control__0__HSIOM_SHIFT, 20
.set digital_control__0__INTCFG, CYREG_PRT2_INTCFG
.set digital_control__0__INTSTAT, CYREG_PRT2_INTSTAT
.set digital_control__0__MASK, 0x20
.set digital_control__0__PA__CFG0, CYREG_UDB_PA2_CFG0
.set digital_control__0__PA__CFG1, CYREG_UDB_PA2_CFG1
.set digital_control__0__PA__CFG10, CYREG_UDB_PA2_CFG10
.set digital_control__0__PA__CFG11, CYREG_UDB_PA2_CFG11
.set digital_control__0__PA__CFG12, CYREG_UDB_PA2_CFG12
.set digital_control__0__PA__CFG13, CYREG_UDB_PA2_CFG13
.set digital_control__0__PA__CFG14, CYREG_UDB_PA2_CFG14
.set digital_control__0__PA__CFG2, CYREG_UDB_PA2_CFG2
.set digital_control__0__PA__CFG3, CYREG_UDB_PA2_CFG3
.set digital_control__0__PA__CFG4, CYREG_UDB_PA2_CFG4
.set digital_control__0__PA__CFG5, CYREG_UDB_PA2_CFG5
.set digital_control__0__PA__CFG6, CYREG_UDB_PA2_CFG6
.set digital_control__0__PA__CFG7, CYREG_UDB_PA2_CFG7
.set digital_control__0__PA__CFG8, CYREG_UDB_PA2_CFG8
.set digital_control__0__PA__CFG9, CYREG_UDB_PA2_CFG9
.set digital_control__0__PC, CYREG_PRT2_PC
.set digital_control__0__PC2, CYREG_PRT2_PC2
.set digital_control__0__PORT, 2
.set digital_control__0__PS, CYREG_PRT2_PS
.set digital_control__0__SHIFT, 5
.set digital_control__DR, CYREG_PRT2_DR
.set digital_control__INTCFG, CYREG_PRT2_INTCFG
.set digital_control__INTSTAT, CYREG_PRT2_INTSTAT
.set digital_control__MASK, 0x20
.set digital_control__PA__CFG0, CYREG_UDB_PA2_CFG0
.set digital_control__PA__CFG1, CYREG_UDB_PA2_CFG1
.set digital_control__PA__CFG10, CYREG_UDB_PA2_CFG10
.set digital_control__PA__CFG11, CYREG_UDB_PA2_CFG11
.set digital_control__PA__CFG12, CYREG_UDB_PA2_CFG12
.set digital_control__PA__CFG13, CYREG_UDB_PA2_CFG13
.set digital_control__PA__CFG14, CYREG_UDB_PA2_CFG14
.set digital_control__PA__CFG2, CYREG_UDB_PA2_CFG2
.set digital_control__PA__CFG3, CYREG_UDB_PA2_CFG3
.set digital_control__PA__CFG4, CYREG_UDB_PA2_CFG4
.set digital_control__PA__CFG5, CYREG_UDB_PA2_CFG5
.set digital_control__PA__CFG6, CYREG_UDB_PA2_CFG6
.set digital_control__PA__CFG7, CYREG_UDB_PA2_CFG7
.set digital_control__PA__CFG8, CYREG_UDB_PA2_CFG8
.set digital_control__PA__CFG9, CYREG_UDB_PA2_CFG9
.set digital_control__PC, CYREG_PRT2_PC
.set digital_control__PC2, CYREG_PRT2_PC2
.set digital_control__PORT, 2
.set digital_control__PS, CYREG_PRT2_PS
.set digital_control__SHIFT, 5

/* microsecond_clock */
.set microsecond_clock__DIVIDER_MASK, 0x0000FFFF
.set microsecond_clock__ENABLE, CYREG_CLK_DIVIDER_B00
.set microsecond_clock__ENABLE_MASK, 0x80000000
.set microsecond_clock__MASK, 0x80000000
.set microsecond_clock__REGISTER, CYREG_CLK_DIVIDER_B00
.set microsecond_clock_1__DIVIDER_MASK, 0x0000FFFF
.set microsecond_clock_1__ENABLE, CYREG_CLK_DIVIDER_C00
.set microsecond_clock_1__ENABLE_MASK, 0x80000000
.set microsecond_clock_1__MASK, 0x80000000
.set microsecond_clock_1__REGISTER, CYREG_CLK_DIVIDER_C00

/* Miscellaneous */
.set CYDEV_BCLK__HFCLK__HZ, 24000000
.set CYDEV_BCLK__HFCLK__KHZ, 24000
.set CYDEV_BCLK__HFCLK__MHZ, 24
.set CYDEV_BCLK__SYSCLK__HZ, 24000000
.set CYDEV_BCLK__SYSCLK__KHZ, 24000
.set CYDEV_BCLK__SYSCLK__MHZ, 24
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PSOC4A, 18
.set CYDEV_CHIP_DIE_PSOC5LP, 2
.set CYDEV_CHIP_DIE_PSOC5TM, 3
.set CYDEV_CHIP_DIE_TMA4, 4
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_FM0P, 5
.set CYDEV_CHIP_FAMILY_FM3, 6
.set CYDEV_CHIP_FAMILY_FM4, 7
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_PSOC6, 4
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC4
.set CYDEV_CHIP_JTAG_ID, 0x04C81193
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 18
.set CYDEV_CHIP_MEMBER_4D, 13
.set CYDEV_CHIP_MEMBER_4E, 6
.set CYDEV_CHIP_MEMBER_4F, 19
.set CYDEV_CHIP_MEMBER_4G, 4
.set CYDEV_CHIP_MEMBER_4H, 17
.set CYDEV_CHIP_MEMBER_4I, 23
.set CYDEV_CHIP_MEMBER_4J, 14
.set CYDEV_CHIP_MEMBER_4K, 15
.set CYDEV_CHIP_MEMBER_4L, 22
.set CYDEV_CHIP_MEMBER_4M, 21
.set CYDEV_CHIP_MEMBER_4N, 10
.set CYDEV_CHIP_MEMBER_4O, 7
.set CYDEV_CHIP_MEMBER_4P, 20
.set CYDEV_CHIP_MEMBER_4Q, 12
.set CYDEV_CHIP_MEMBER_4R, 8
.set CYDEV_CHIP_MEMBER_4S, 11
.set CYDEV_CHIP_MEMBER_4T, 9
.set CYDEV_CHIP_MEMBER_4U, 5
.set CYDEV_CHIP_MEMBER_4V, 16
.set CYDEV_CHIP_MEMBER_5A, 3
.set CYDEV_CHIP_MEMBER_5B, 2
.set CYDEV_CHIP_MEMBER_6A, 24
.set CYDEV_CHIP_MEMBER_FM3, 28
.set CYDEV_CHIP_MEMBER_FM4, 29
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1, 25
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2, 26
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3, 27
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_4A
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES0, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES1, 1
.set CYDEV_CHIP_REV_PSOC5TM_PRODUCTION, 1
.set CYDEV_CHIP_REV_TMA4_ES, 17
.set CYDEV_CHIP_REV_TMA4_ES2, 33
.set CYDEV_CHIP_REV_TMA4_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4I_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4J_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4K_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4N_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4O_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4P_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Q_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4R_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4S_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4T_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4V_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_6A_ES, 17
.set CYDEV_CHIP_REVISION_6A_NO_UDB, 33
.set CYDEV_CHIP_REVISION_6A_PRODUCTION, 33
.set CYDEV_CHIP_REVISION_FM3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_FM4_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_4A_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_READ_ACCELERATOR, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_Disallowed
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_PROTECT_KILL, 4
.set CYDEV_DEBUG_PROTECT_OPEN, 1
.set CYDEV_DEBUG_PROTECT, CYDEV_DEBUG_PROTECT_OPEN
.set CYDEV_DEBUG_PROTECT_PROTECTED, 2
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DFT_SELECT_CLK0, 1
.set CYDEV_DFT_SELECT_CLK1, 2
.set CYDEV_HEAP_SIZE, 0x80
.set CYDEV_IMO_TRIMMED_BY_USB, 0
.set CYDEV_IMO_TRIMMED_BY_WCO, 0
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 2
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_STACK_SIZE, 0x0400
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 1
.set CYDEV_VDDA_MV, 3300
.set CYDEV_VDDD_MV, 3300
.set CYDEV_WDT_GENERATE_ISR, 1
.set CYIPBLOCK_M0S8_CTBM_VERSION, 0
.set CYIPBLOCK_m0s8cpuss_VERSION, 0
.set CYIPBLOCK_m0s8csd_VERSION, 0
.set CYIPBLOCK_m0s8gpio2_VERSION, 0
.set CYIPBLOCK_m0s8hsiom4a_VERSION, 0
.set CYIPBLOCK_m0s8lcd_VERSION, 0
.set CYIPBLOCK_m0s8lpcomp_VERSION, 0
.set CYIPBLOCK_m0s8pclk_VERSION, 0
.set CYIPBLOCK_m0s8sar_VERSION, 0
.set CYIPBLOCK_m0s8scb_VERSION, 0
.set CYIPBLOCK_m0s8srssv2_VERSION, 1
.set CYIPBLOCK_m0s8tcpwm_VERSION, 0
.set CYIPBLOCK_m0s8udbif_VERSION, 0
.set CYIPBLOCK_S8_GPIO_VERSION, 2
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif
