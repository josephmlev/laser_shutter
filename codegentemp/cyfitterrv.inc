;
; File Name: cyfitterrv.inc
; 
; PSoC Creator  4.2
;
; Description:
; 
;
;-------------------------------------------------------------------------------
; Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
; You may use this file only in accordance with the license, terms, conditions, 
; disclaimers, and limitations in the end user license agreement accompanying 
; the software package with which this file was provided.
;-------------------------------------------------------------------------------

    IF :LNOT::DEF:INCLUDED_CYFITTERRV_INC
INCLUDED_CYFITTERRV_INC EQU 1
    GET cydevicerv_trm.inc

; red
red__0__DM__MASK EQU 0x7000
red__0__DM__SHIFT EQU 12
red__0__DR EQU CYREG_PRT1_DR
red__0__HSIOM EQU CYREG_HSIOM_PORT_SEL1
red__0__HSIOM_MASK EQU 0x000F0000
red__0__HSIOM_SHIFT EQU 16
red__0__INTCFG EQU CYREG_PRT1_INTCFG
red__0__INTSTAT EQU CYREG_PRT1_INTSTAT
red__0__MASK EQU 0x10
red__0__OUT_SEL EQU CYREG_UDB_PA1_CFG10
red__0__OUT_SEL_SHIFT EQU 8
red__0__OUT_SEL_VAL EQU 2
red__0__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
red__0__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
red__0__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
red__0__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
red__0__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
red__0__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
red__0__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
red__0__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
red__0__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
red__0__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
red__0__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
red__0__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
red__0__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
red__0__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
red__0__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
red__0__PC EQU CYREG_PRT1_PC
red__0__PC2 EQU CYREG_PRT1_PC2
red__0__PORT EQU 1
red__0__PS EQU CYREG_PRT1_PS
red__0__SHIFT EQU 4
red__DR EQU CYREG_PRT1_DR
red__INTCFG EQU CYREG_PRT1_INTCFG
red__INTSTAT EQU CYREG_PRT1_INTSTAT
red__MASK EQU 0x10
red__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
red__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
red__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
red__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
red__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
red__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
red__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
red__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
red__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
red__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
red__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
red__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
red__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
red__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
red__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
red__PC EQU CYREG_PRT1_PC
red__PC2 EQU CYREG_PRT1_PC2
red__PORT EQU 1
red__PS EQU CYREG_PRT1_PS
red__SHIFT EQU 4

; en_5
en_5__0__DM__MASK EQU 0x1C0
en_5__0__DM__SHIFT EQU 6
en_5__0__DR EQU CYREG_PRT0_DR
en_5__0__HSIOM EQU CYREG_HSIOM_PORT_SEL0
en_5__0__HSIOM_MASK EQU 0x00000F00
en_5__0__HSIOM_SHIFT EQU 8
en_5__0__INTCFG EQU CYREG_PRT0_INTCFG
en_5__0__INTSTAT EQU CYREG_PRT0_INTSTAT
en_5__0__MASK EQU 0x04
en_5__0__OUT_SEL EQU CYREG_UDB_PA0_CFG10
en_5__0__OUT_SEL_SHIFT EQU 4
en_5__0__OUT_SEL_VAL EQU 2
en_5__0__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
en_5__0__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
en_5__0__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
en_5__0__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
en_5__0__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
en_5__0__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
en_5__0__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
en_5__0__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
en_5__0__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
en_5__0__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
en_5__0__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
en_5__0__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
en_5__0__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
en_5__0__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
en_5__0__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
en_5__0__PC EQU CYREG_PRT0_PC
en_5__0__PC2 EQU CYREG_PRT0_PC2
en_5__0__PORT EQU 0
en_5__0__PS EQU CYREG_PRT0_PS
en_5__0__SHIFT EQU 2
en_5__DR EQU CYREG_PRT0_DR
en_5__INTCFG EQU CYREG_PRT0_INTCFG
en_5__INTSTAT EQU CYREG_PRT0_INTSTAT
en_5__MASK EQU 0x04
en_5__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
en_5__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
en_5__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
en_5__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
en_5__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
en_5__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
en_5__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
en_5__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
en_5__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
en_5__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
en_5__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
en_5__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
en_5__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
en_5__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
en_5__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
en_5__PC EQU CYREG_PRT0_PC
en_5__PC2 EQU CYREG_PRT0_PC2
en_5__PORT EQU 0
en_5__PS EQU CYREG_PRT0_PS
en_5__SHIFT EQU 2

; en_24
en_24__0__DM__MASK EQU 0x38000
en_24__0__DM__SHIFT EQU 15
en_24__0__DR EQU CYREG_PRT0_DR
en_24__0__HSIOM EQU CYREG_HSIOM_PORT_SEL0
en_24__0__HSIOM_MASK EQU 0x00F00000
en_24__0__HSIOM_SHIFT EQU 20
en_24__0__INTCFG EQU CYREG_PRT0_INTCFG
en_24__0__INTSTAT EQU CYREG_PRT0_INTSTAT
en_24__0__MASK EQU 0x20
en_24__0__OUT_SEL EQU CYREG_UDB_PA0_CFG10
en_24__0__OUT_SEL_SHIFT EQU 10
en_24__0__OUT_SEL_VAL EQU 3
en_24__0__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
en_24__0__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
en_24__0__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
en_24__0__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
en_24__0__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
en_24__0__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
en_24__0__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
en_24__0__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
en_24__0__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
en_24__0__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
en_24__0__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
en_24__0__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
en_24__0__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
en_24__0__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
en_24__0__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
en_24__0__PC EQU CYREG_PRT0_PC
en_24__0__PC2 EQU CYREG_PRT0_PC2
en_24__0__PORT EQU 0
en_24__0__PS EQU CYREG_PRT0_PS
en_24__0__SHIFT EQU 5
en_24__DR EQU CYREG_PRT0_DR
en_24__INTCFG EQU CYREG_PRT0_INTCFG
en_24__INTSTAT EQU CYREG_PRT0_INTSTAT
en_24__MASK EQU 0x20
en_24__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
en_24__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
en_24__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
en_24__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
en_24__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
en_24__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
en_24__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
en_24__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
en_24__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
en_24__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
en_24__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
en_24__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
en_24__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
en_24__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
en_24__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
en_24__PC EQU CYREG_PRT0_PC
en_24__PC2 EQU CYREG_PRT0_PC2
en_24__PORT EQU 0
en_24__PS EQU CYREG_PRT0_PS
en_24__SHIFT EQU 5

; green
green__0__DM__MASK EQU 0xE00
green__0__DM__SHIFT EQU 9
green__0__DR EQU CYREG_PRT1_DR
green__0__HSIOM EQU CYREG_HSIOM_PORT_SEL1
green__0__HSIOM_MASK EQU 0x0000F000
green__0__HSIOM_SHIFT EQU 12
green__0__INTCFG EQU CYREG_PRT1_INTCFG
green__0__INTSTAT EQU CYREG_PRT1_INTSTAT
green__0__MASK EQU 0x08
green__0__OUT_SEL EQU CYREG_UDB_PA1_CFG10
green__0__OUT_SEL_SHIFT EQU 6
green__0__OUT_SEL_VAL EQU 3
green__0__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
green__0__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
green__0__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
green__0__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
green__0__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
green__0__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
green__0__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
green__0__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
green__0__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
green__0__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
green__0__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
green__0__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
green__0__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
green__0__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
green__0__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
green__0__PC EQU CYREG_PRT1_PC
green__0__PC2 EQU CYREG_PRT1_PC2
green__0__PORT EQU 1
green__0__PS EQU CYREG_PRT1_PS
green__0__SHIFT EQU 3
green__DR EQU CYREG_PRT1_DR
green__INTCFG EQU CYREG_PRT1_INTCFG
green__INTSTAT EQU CYREG_PRT1_INTSTAT
green__MASK EQU 0x08
green__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
green__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
green__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
green__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
green__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
green__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
green__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
green__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
green__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
green__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
green__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
green__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
green__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
green__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
green__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
green__PC EQU CYREG_PRT1_PC
green__PC2 EQU CYREG_PRT1_PC2
green__PORT EQU 1
green__PS EQU CYREG_PRT1_PS
green__SHIFT EQU 3

; Timer_1
Timer_1_TimerUDB_rstSts_stsreg__0__MASK EQU 0x01
Timer_1_TimerUDB_rstSts_stsreg__0__POS EQU 0
Timer_1_TimerUDB_rstSts_stsreg__2__MASK EQU 0x04
Timer_1_TimerUDB_rstSts_stsreg__2__POS EQU 2
Timer_1_TimerUDB_rstSts_stsreg__3__MASK EQU 0x08
Timer_1_TimerUDB_rstSts_stsreg__3__POS EQU 3
Timer_1_TimerUDB_rstSts_stsreg__MASK EQU 0x0D
Timer_1_TimerUDB_rstSts_stsreg__MASK_REG EQU CYREG_UDB_W8_MSK_03
Timer_1_TimerUDB_rstSts_stsreg__STATUS_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL_03
Timer_1_TimerUDB_rstSts_stsreg__STATUS_REG EQU CYREG_UDB_W8_ST_03
Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_A0_REG EQU CYREG_UDB_W16_A0_02
Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_A1_REG EQU CYREG_UDB_W16_A1_02
Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_D0_REG EQU CYREG_UDB_W16_D0_02
Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_D1_REG EQU CYREG_UDB_W16_D1_02
Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_UDB_W16_ACTL_02
Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_F0_REG EQU CYREG_UDB_W16_F0_02
Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_F1_REG EQU CYREG_UDB_W16_F1_02
Timer_1_TimerUDB_sT16_timerdp_u0__A0_A1_REG EQU CYREG_UDB_CAT16_A_02
Timer_1_TimerUDB_sT16_timerdp_u0__A0_REG EQU CYREG_UDB_W8_A0_02
Timer_1_TimerUDB_sT16_timerdp_u0__A1_REG EQU CYREG_UDB_W8_A1_02
Timer_1_TimerUDB_sT16_timerdp_u0__D0_D1_REG EQU CYREG_UDB_CAT16_D_02
Timer_1_TimerUDB_sT16_timerdp_u0__D0_REG EQU CYREG_UDB_W8_D0_02
Timer_1_TimerUDB_sT16_timerdp_u0__D1_REG EQU CYREG_UDB_W8_D1_02
Timer_1_TimerUDB_sT16_timerdp_u0__DP_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL_02
Timer_1_TimerUDB_sT16_timerdp_u0__F0_F1_REG EQU CYREG_UDB_CAT16_F_02
Timer_1_TimerUDB_sT16_timerdp_u0__F0_REG EQU CYREG_UDB_W8_F0_02
Timer_1_TimerUDB_sT16_timerdp_u0__F1_REG EQU CYREG_UDB_W8_F1_02
Timer_1_TimerUDB_sT16_timerdp_u1__A0_A1_REG EQU CYREG_UDB_CAT16_A_03
Timer_1_TimerUDB_sT16_timerdp_u1__A0_REG EQU CYREG_UDB_W8_A0_03
Timer_1_TimerUDB_sT16_timerdp_u1__A1_REG EQU CYREG_UDB_W8_A1_03
Timer_1_TimerUDB_sT16_timerdp_u1__D0_D1_REG EQU CYREG_UDB_CAT16_D_03
Timer_1_TimerUDB_sT16_timerdp_u1__D0_REG EQU CYREG_UDB_W8_D0_03
Timer_1_TimerUDB_sT16_timerdp_u1__D1_REG EQU CYREG_UDB_W8_D1_03
Timer_1_TimerUDB_sT16_timerdp_u1__DP_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL_03
Timer_1_TimerUDB_sT16_timerdp_u1__F0_F1_REG EQU CYREG_UDB_CAT16_F_03
Timer_1_TimerUDB_sT16_timerdp_u1__F0_REG EQU CYREG_UDB_W8_F0_03
Timer_1_TimerUDB_sT16_timerdp_u1__F1_REG EQU CYREG_UDB_W8_F1_03

; HS_Clock
HS_Clock__DIVIDER_MASK EQU 0x0000FFFF
HS_Clock__ENABLE EQU CYREG_CLK_DIVIDER_A00
HS_Clock__ENABLE_MASK EQU 0x80000000
HS_Clock__MASK EQU 0x80000000
HS_Clock__REGISTER EQU CYREG_CLK_DIVIDER_A00

; open_ind
open_ind__0__DM__MASK EQU 0x38
open_ind__0__DM__SHIFT EQU 3
open_ind__0__DR EQU CYREG_PRT1_DR
open_ind__0__HSIOM EQU CYREG_HSIOM_PORT_SEL1
open_ind__0__HSIOM_MASK EQU 0x000000F0
open_ind__0__HSIOM_SHIFT EQU 4
open_ind__0__INTCFG EQU CYREG_PRT1_INTCFG
open_ind__0__INTSTAT EQU CYREG_PRT1_INTSTAT
open_ind__0__MASK EQU 0x02
open_ind__0__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
open_ind__0__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
open_ind__0__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
open_ind__0__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
open_ind__0__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
open_ind__0__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
open_ind__0__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
open_ind__0__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
open_ind__0__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
open_ind__0__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
open_ind__0__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
open_ind__0__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
open_ind__0__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
open_ind__0__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
open_ind__0__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
open_ind__0__PC EQU CYREG_PRT1_PC
open_ind__0__PC2 EQU CYREG_PRT1_PC2
open_ind__0__PORT EQU 1
open_ind__0__PS EQU CYREG_PRT1_PS
open_ind__0__SHIFT EQU 1
open_ind__DR EQU CYREG_PRT1_DR
open_ind__INTCFG EQU CYREG_PRT1_INTCFG
open_ind__INTSTAT EQU CYREG_PRT1_INTSTAT
open_ind__MASK EQU 0x02
open_ind__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
open_ind__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
open_ind__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
open_ind__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
open_ind__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
open_ind__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
open_ind__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
open_ind__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
open_ind__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
open_ind__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
open_ind__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
open_ind__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
open_ind__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
open_ind__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
open_ind__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
open_ind__PC EQU CYREG_PRT1_PC
open_ind__PC2 EQU CYREG_PRT1_PC2
open_ind__PORT EQU 1
open_ind__PS EQU CYREG_PRT1_PS
open_ind__SHIFT EQU 1

; manual_open
manual_open__0__DM__MASK EQU 0x1C0
manual_open__0__DM__SHIFT EQU 6
manual_open__0__DR EQU CYREG_PRT2_DR
manual_open__0__HSIOM EQU CYREG_HSIOM_PORT_SEL2
manual_open__0__HSIOM_MASK EQU 0x00000F00
manual_open__0__HSIOM_SHIFT EQU 8
manual_open__0__INTCFG EQU CYREG_PRT2_INTCFG
manual_open__0__INTSTAT EQU CYREG_PRT2_INTSTAT
manual_open__0__MASK EQU 0x04
manual_open__0__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
manual_open__0__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
manual_open__0__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
manual_open__0__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
manual_open__0__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
manual_open__0__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
manual_open__0__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
manual_open__0__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
manual_open__0__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
manual_open__0__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
manual_open__0__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
manual_open__0__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
manual_open__0__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
manual_open__0__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
manual_open__0__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
manual_open__0__PC EQU CYREG_PRT2_PC
manual_open__0__PC2 EQU CYREG_PRT2_PC2
manual_open__0__PORT EQU 2
manual_open__0__PS EQU CYREG_PRT2_PS
manual_open__0__SHIFT EQU 2
manual_open__DR EQU CYREG_PRT2_DR
manual_open__INTCFG EQU CYREG_PRT2_INTCFG
manual_open__INTSTAT EQU CYREG_PRT2_INTSTAT
manual_open__MASK EQU 0x04
manual_open__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
manual_open__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
manual_open__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
manual_open__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
manual_open__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
manual_open__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
manual_open__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
manual_open__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
manual_open__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
manual_open__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
manual_open__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
manual_open__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
manual_open__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
manual_open__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
manual_open__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
manual_open__PC EQU CYREG_PRT2_PC
manual_open__PC2 EQU CYREG_PRT2_PC2
manual_open__PORT EQU 2
manual_open__PS EQU CYREG_PRT2_PS
manual_open__SHIFT EQU 2

; start_pulse
start_pulse_PWMUDB_genblk8_stsreg__0__MASK EQU 0x01
start_pulse_PWMUDB_genblk8_stsreg__0__POS EQU 0
start_pulse_PWMUDB_genblk8_stsreg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_UDB_W16_ACTL_01
start_pulse_PWMUDB_genblk8_stsreg__16BIT_STATUS_REG EQU CYREG_UDB_W16_ST_01
start_pulse_PWMUDB_genblk8_stsreg__2__MASK EQU 0x04
start_pulse_PWMUDB_genblk8_stsreg__2__POS EQU 2
start_pulse_PWMUDB_genblk8_stsreg__3__MASK EQU 0x08
start_pulse_PWMUDB_genblk8_stsreg__3__POS EQU 3
start_pulse_PWMUDB_genblk8_stsreg__MASK EQU 0x0D
start_pulse_PWMUDB_genblk8_stsreg__MASK_REG EQU CYREG_UDB_W8_MSK_01
start_pulse_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL_01
start_pulse_PWMUDB_genblk8_stsreg__STATUS_REG EQU CYREG_UDB_W8_ST_01
start_pulse_PWMUDB_sP16_pwmdp_u0__16BIT_A0_REG EQU CYREG_UDB_W16_A0_00
start_pulse_PWMUDB_sP16_pwmdp_u0__16BIT_A1_REG EQU CYREG_UDB_W16_A1_00
start_pulse_PWMUDB_sP16_pwmdp_u0__16BIT_D0_REG EQU CYREG_UDB_W16_D0_00
start_pulse_PWMUDB_sP16_pwmdp_u0__16BIT_D1_REG EQU CYREG_UDB_W16_D1_00
start_pulse_PWMUDB_sP16_pwmdp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_UDB_W16_ACTL_00
start_pulse_PWMUDB_sP16_pwmdp_u0__16BIT_F0_REG EQU CYREG_UDB_W16_F0_00
start_pulse_PWMUDB_sP16_pwmdp_u0__16BIT_F1_REG EQU CYREG_UDB_W16_F1_00
start_pulse_PWMUDB_sP16_pwmdp_u0__32BIT_A0_REG EQU CYREG_UDB_W32_A0_00
start_pulse_PWMUDB_sP16_pwmdp_u0__32BIT_A1_REG EQU CYREG_UDB_W32_A1_00
start_pulse_PWMUDB_sP16_pwmdp_u0__32BIT_D0_REG EQU CYREG_UDB_W32_D0_00
start_pulse_PWMUDB_sP16_pwmdp_u0__32BIT_D1_REG EQU CYREG_UDB_W32_D1_00
start_pulse_PWMUDB_sP16_pwmdp_u0__32BIT_DP_AUX_CTL_REG EQU CYREG_UDB_W32_ACTL_00
start_pulse_PWMUDB_sP16_pwmdp_u0__32BIT_F0_REG EQU CYREG_UDB_W32_F0_00
start_pulse_PWMUDB_sP16_pwmdp_u0__32BIT_F1_REG EQU CYREG_UDB_W32_F1_00
start_pulse_PWMUDB_sP16_pwmdp_u0__A0_A1_REG EQU CYREG_UDB_CAT16_A_00
start_pulse_PWMUDB_sP16_pwmdp_u0__A0_REG EQU CYREG_UDB_W8_A0_00
start_pulse_PWMUDB_sP16_pwmdp_u0__A1_REG EQU CYREG_UDB_W8_A1_00
start_pulse_PWMUDB_sP16_pwmdp_u0__D0_D1_REG EQU CYREG_UDB_CAT16_D_00
start_pulse_PWMUDB_sP16_pwmdp_u0__D0_REG EQU CYREG_UDB_W8_D0_00
start_pulse_PWMUDB_sP16_pwmdp_u0__D1_REG EQU CYREG_UDB_W8_D1_00
start_pulse_PWMUDB_sP16_pwmdp_u0__DP_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL_00
start_pulse_PWMUDB_sP16_pwmdp_u0__F0_F1_REG EQU CYREG_UDB_CAT16_F_00
start_pulse_PWMUDB_sP16_pwmdp_u0__F0_REG EQU CYREG_UDB_W8_F0_00
start_pulse_PWMUDB_sP16_pwmdp_u0__F1_REG EQU CYREG_UDB_W8_F1_00
start_pulse_PWMUDB_sP16_pwmdp_u1__16BIT_A0_REG EQU CYREG_UDB_W16_A0_01
start_pulse_PWMUDB_sP16_pwmdp_u1__16BIT_A1_REG EQU CYREG_UDB_W16_A1_01
start_pulse_PWMUDB_sP16_pwmdp_u1__16BIT_D0_REG EQU CYREG_UDB_W16_D0_01
start_pulse_PWMUDB_sP16_pwmdp_u1__16BIT_D1_REG EQU CYREG_UDB_W16_D1_01
start_pulse_PWMUDB_sP16_pwmdp_u1__16BIT_DP_AUX_CTL_REG EQU CYREG_UDB_W16_ACTL_01
start_pulse_PWMUDB_sP16_pwmdp_u1__16BIT_F0_REG EQU CYREG_UDB_W16_F0_01
start_pulse_PWMUDB_sP16_pwmdp_u1__16BIT_F1_REG EQU CYREG_UDB_W16_F1_01
start_pulse_PWMUDB_sP16_pwmdp_u1__A0_A1_REG EQU CYREG_UDB_CAT16_A_01
start_pulse_PWMUDB_sP16_pwmdp_u1__A0_REG EQU CYREG_UDB_W8_A0_01
start_pulse_PWMUDB_sP16_pwmdp_u1__A1_REG EQU CYREG_UDB_W8_A1_01
start_pulse_PWMUDB_sP16_pwmdp_u1__D0_D1_REG EQU CYREG_UDB_CAT16_D_01
start_pulse_PWMUDB_sP16_pwmdp_u1__D0_REG EQU CYREG_UDB_W8_D0_01
start_pulse_PWMUDB_sP16_pwmdp_u1__D1_REG EQU CYREG_UDB_W8_D1_01
start_pulse_PWMUDB_sP16_pwmdp_u1__DP_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL_01
start_pulse_PWMUDB_sP16_pwmdp_u1__F0_F1_REG EQU CYREG_UDB_CAT16_F_01
start_pulse_PWMUDB_sP16_pwmdp_u1__F0_REG EQU CYREG_UDB_W8_F0_01
start_pulse_PWMUDB_sP16_pwmdp_u1__F1_REG EQU CYREG_UDB_W8_F1_01

; manual_close
manual_close__0__DM__MASK EQU 0x38
manual_close__0__DM__SHIFT EQU 3
manual_close__0__DR EQU CYREG_PRT2_DR
manual_close__0__HSIOM EQU CYREG_HSIOM_PORT_SEL2
manual_close__0__HSIOM_MASK EQU 0x000000F0
manual_close__0__HSIOM_SHIFT EQU 4
manual_close__0__INTCFG EQU CYREG_PRT2_INTCFG
manual_close__0__INTSTAT EQU CYREG_PRT2_INTSTAT
manual_close__0__MASK EQU 0x02
manual_close__0__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
manual_close__0__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
manual_close__0__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
manual_close__0__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
manual_close__0__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
manual_close__0__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
manual_close__0__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
manual_close__0__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
manual_close__0__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
manual_close__0__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
manual_close__0__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
manual_close__0__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
manual_close__0__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
manual_close__0__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
manual_close__0__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
manual_close__0__PC EQU CYREG_PRT2_PC
manual_close__0__PC2 EQU CYREG_PRT2_PC2
manual_close__0__PORT EQU 2
manual_close__0__PS EQU CYREG_PRT2_PS
manual_close__0__SHIFT EQU 1
manual_close__DR EQU CYREG_PRT2_DR
manual_close__INTCFG EQU CYREG_PRT2_INTCFG
manual_close__INTSTAT EQU CYREG_PRT2_INTSTAT
manual_close__MASK EQU 0x02
manual_close__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
manual_close__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
manual_close__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
manual_close__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
manual_close__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
manual_close__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
manual_close__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
manual_close__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
manual_close__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
manual_close__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
manual_close__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
manual_close__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
manual_close__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
manual_close__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
manual_close__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
manual_close__PC EQU CYREG_PRT2_PC
manual_close__PC2 EQU CYREG_PRT2_PC2
manual_close__PORT EQU 2
manual_close__PS EQU CYREG_PRT2_PS
manual_close__SHIFT EQU 1

; Interrupt_Out
Interrupt_Out__0__DM__MASK EQU 0x07
Interrupt_Out__0__DM__SHIFT EQU 0
Interrupt_Out__0__DR EQU CYREG_PRT0_DR
Interrupt_Out__0__HSIOM EQU CYREG_HSIOM_PORT_SEL0
Interrupt_Out__0__HSIOM_MASK EQU 0x0000000F
Interrupt_Out__0__HSIOM_SHIFT EQU 0
Interrupt_Out__0__INTCFG EQU CYREG_PRT0_INTCFG
Interrupt_Out__0__INTSTAT EQU CYREG_PRT0_INTSTAT
Interrupt_Out__0__MASK EQU 0x01
Interrupt_Out__0__OUT_SEL EQU CYREG_UDB_PA0_CFG10
Interrupt_Out__0__OUT_SEL_SHIFT EQU 0
Interrupt_Out__0__OUT_SEL_VAL EQU 3
Interrupt_Out__0__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
Interrupt_Out__0__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
Interrupt_Out__0__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
Interrupt_Out__0__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
Interrupt_Out__0__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
Interrupt_Out__0__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
Interrupt_Out__0__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
Interrupt_Out__0__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
Interrupt_Out__0__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
Interrupt_Out__0__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
Interrupt_Out__0__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
Interrupt_Out__0__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
Interrupt_Out__0__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
Interrupt_Out__0__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
Interrupt_Out__0__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
Interrupt_Out__0__PC EQU CYREG_PRT0_PC
Interrupt_Out__0__PC2 EQU CYREG_PRT0_PC2
Interrupt_Out__0__PORT EQU 0
Interrupt_Out__0__PS EQU CYREG_PRT0_PS
Interrupt_Out__0__SHIFT EQU 0
Interrupt_Out__DR EQU CYREG_PRT0_DR
Interrupt_Out__INTCFG EQU CYREG_PRT0_INTCFG
Interrupt_Out__INTSTAT EQU CYREG_PRT0_INTSTAT
Interrupt_Out__MASK EQU 0x01
Interrupt_Out__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
Interrupt_Out__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
Interrupt_Out__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
Interrupt_Out__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
Interrupt_Out__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
Interrupt_Out__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
Interrupt_Out__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
Interrupt_Out__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
Interrupt_Out__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
Interrupt_Out__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
Interrupt_Out__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
Interrupt_Out__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
Interrupt_Out__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
Interrupt_Out__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
Interrupt_Out__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
Interrupt_Out__PC EQU CYREG_PRT0_PC
Interrupt_Out__PC2 EQU CYREG_PRT0_PC2
Interrupt_Out__PORT EQU 0
Interrupt_Out__PS EQU CYREG_PRT0_PS
Interrupt_Out__SHIFT EQU 0

; digital_control
digital_control__0__DM__MASK EQU 0x38000
digital_control__0__DM__SHIFT EQU 15
digital_control__0__DR EQU CYREG_PRT2_DR
digital_control__0__HSIOM EQU CYREG_HSIOM_PORT_SEL2
digital_control__0__HSIOM_MASK EQU 0x00F00000
digital_control__0__HSIOM_SHIFT EQU 20
digital_control__0__INTCFG EQU CYREG_PRT2_INTCFG
digital_control__0__INTSTAT EQU CYREG_PRT2_INTSTAT
digital_control__0__MASK EQU 0x20
digital_control__0__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
digital_control__0__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
digital_control__0__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
digital_control__0__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
digital_control__0__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
digital_control__0__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
digital_control__0__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
digital_control__0__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
digital_control__0__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
digital_control__0__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
digital_control__0__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
digital_control__0__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
digital_control__0__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
digital_control__0__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
digital_control__0__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
digital_control__0__PC EQU CYREG_PRT2_PC
digital_control__0__PC2 EQU CYREG_PRT2_PC2
digital_control__0__PORT EQU 2
digital_control__0__PS EQU CYREG_PRT2_PS
digital_control__0__SHIFT EQU 5
digital_control__DR EQU CYREG_PRT2_DR
digital_control__INTCFG EQU CYREG_PRT2_INTCFG
digital_control__INTSTAT EQU CYREG_PRT2_INTSTAT
digital_control__MASK EQU 0x20
digital_control__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
digital_control__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
digital_control__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
digital_control__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
digital_control__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
digital_control__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
digital_control__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
digital_control__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
digital_control__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
digital_control__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
digital_control__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
digital_control__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
digital_control__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
digital_control__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
digital_control__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
digital_control__PC EQU CYREG_PRT2_PC
digital_control__PC2 EQU CYREG_PRT2_PC2
digital_control__PORT EQU 2
digital_control__PS EQU CYREG_PRT2_PS
digital_control__SHIFT EQU 5

; microsecond_clock
microsecond_clock__DIVIDER_MASK EQU 0x0000FFFF
microsecond_clock__ENABLE EQU CYREG_CLK_DIVIDER_B00
microsecond_clock__ENABLE_MASK EQU 0x80000000
microsecond_clock__MASK EQU 0x80000000
microsecond_clock__REGISTER EQU CYREG_CLK_DIVIDER_B00
microsecond_clock_1__DIVIDER_MASK EQU 0x0000FFFF
microsecond_clock_1__ENABLE EQU CYREG_CLK_DIVIDER_C00
microsecond_clock_1__ENABLE_MASK EQU 0x80000000
microsecond_clock_1__MASK EQU 0x80000000
microsecond_clock_1__REGISTER EQU CYREG_CLK_DIVIDER_C00

; Miscellaneous
CYDEV_BCLK__HFCLK__HZ EQU 24000000
CYDEV_BCLK__HFCLK__KHZ EQU 24000
CYDEV_BCLK__HFCLK__MHZ EQU 24
CYDEV_BCLK__SYSCLK__HZ EQU 24000000
CYDEV_BCLK__SYSCLK__KHZ EQU 24000
CYDEV_BCLK__SYSCLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 18
CYDEV_CHIP_DIE_PSOC5LP EQU 2
CYDEV_CHIP_DIE_PSOC5TM EQU 3
CYDEV_CHIP_DIE_TMA4 EQU 4
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 5
CYDEV_CHIP_FAMILY_FM3 EQU 6
CYDEV_CHIP_FAMILY_FM4 EQU 7
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_PSOC6 EQU 4
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC4
CYDEV_CHIP_JTAG_ID EQU 0x04C81193
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 18
CYDEV_CHIP_MEMBER_4D EQU 13
CYDEV_CHIP_MEMBER_4E EQU 6
CYDEV_CHIP_MEMBER_4F EQU 19
CYDEV_CHIP_MEMBER_4G EQU 4
CYDEV_CHIP_MEMBER_4H EQU 17
CYDEV_CHIP_MEMBER_4I EQU 23
CYDEV_CHIP_MEMBER_4J EQU 14
CYDEV_CHIP_MEMBER_4K EQU 15
CYDEV_CHIP_MEMBER_4L EQU 22
CYDEV_CHIP_MEMBER_4M EQU 21
CYDEV_CHIP_MEMBER_4N EQU 10
CYDEV_CHIP_MEMBER_4O EQU 7
CYDEV_CHIP_MEMBER_4P EQU 20
CYDEV_CHIP_MEMBER_4Q EQU 12
CYDEV_CHIP_MEMBER_4R EQU 8
CYDEV_CHIP_MEMBER_4S EQU 11
CYDEV_CHIP_MEMBER_4T EQU 9
CYDEV_CHIP_MEMBER_4U EQU 5
CYDEV_CHIP_MEMBER_4V EQU 16
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 2
CYDEV_CHIP_MEMBER_6A EQU 24
CYDEV_CHIP_MEMBER_FM3 EQU 28
CYDEV_CHIP_MEMBER_FM4 EQU 29
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 25
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 26
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 27
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_4A
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4R_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4S_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4T_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4V_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_6A_ES EQU 17
CYDEV_CHIP_REVISION_6A_NO_UDB EQU 33
CYDEV_CHIP_REVISION_6A_PRODUCTION EQU 33
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_4A_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_READ_ACCELERATOR EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_Disallowed
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_PROTECT_KILL EQU 4
CYDEV_DEBUG_PROTECT_OPEN EQU 1
CYDEV_DEBUG_PROTECT EQU CYDEV_DEBUG_PROTECT_OPEN
CYDEV_DEBUG_PROTECT_PROTECTED EQU 2
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DFT_SELECT_CLK0 EQU 1
CYDEV_DFT_SELECT_CLK1 EQU 2
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_IMO_TRIMMED_BY_USB EQU 0
CYDEV_IMO_TRIMMED_BY_WCO EQU 0
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 2
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_STACK_SIZE EQU 0x0400
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 1
CYDEV_VDDA_MV EQU 3300
CYDEV_VDDD_MV EQU 3300
CYDEV_WDT_GENERATE_ISR EQU 1
CYIPBLOCK_M0S8_CTBM_VERSION EQU 0
CYIPBLOCK_m0s8cpuss_VERSION EQU 0
CYIPBLOCK_m0s8csd_VERSION EQU 0
CYIPBLOCK_m0s8gpio2_VERSION EQU 0
CYIPBLOCK_m0s8hsiom4a_VERSION EQU 0
CYIPBLOCK_m0s8lcd_VERSION EQU 0
CYIPBLOCK_m0s8lpcomp_VERSION EQU 0
CYIPBLOCK_m0s8pclk_VERSION EQU 0
CYIPBLOCK_m0s8sar_VERSION EQU 0
CYIPBLOCK_m0s8scb_VERSION EQU 0
CYIPBLOCK_m0s8srssv2_VERSION EQU 1
CYIPBLOCK_m0s8tcpwm_VERSION EQU 0
CYIPBLOCK_m0s8udbif_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 2
CYDEV_BOOTLOADER_ENABLE EQU 0
    ENDIF
    END
