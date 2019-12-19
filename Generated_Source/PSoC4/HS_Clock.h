/*******************************************************************************
* File Name: HS_Clock.h
* Version 2.20
*
*  Description:
*   Provides the function and constant definitions for the clock component.
*
*  Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_CLOCK_HS_Clock_H)
#define CY_CLOCK_HS_Clock_H

#include <cytypes.h>
#include <cyfitter.h>


/***************************************
*        Function Prototypes
***************************************/
#if defined CYREG_PERI_DIV_CMD

void HS_Clock_StartEx(uint32 alignClkDiv);
#define HS_Clock_Start() \
    HS_Clock_StartEx(HS_Clock__PA_DIV_ID)

#else

void HS_Clock_Start(void);

#endif/* CYREG_PERI_DIV_CMD */

void HS_Clock_Stop(void);

void HS_Clock_SetFractionalDividerRegister(uint16 clkDivider, uint8 clkFractional);

uint16 HS_Clock_GetDividerRegister(void);
uint8  HS_Clock_GetFractionalDividerRegister(void);

#define HS_Clock_Enable()                         HS_Clock_Start()
#define HS_Clock_Disable()                        HS_Clock_Stop()
#define HS_Clock_SetDividerRegister(clkDivider, reset)  \
    HS_Clock_SetFractionalDividerRegister((clkDivider), 0u)
#define HS_Clock_SetDivider(clkDivider)           HS_Clock_SetDividerRegister((clkDivider), 1u)
#define HS_Clock_SetDividerValue(clkDivider)      HS_Clock_SetDividerRegister((clkDivider) - 1u, 1u)


/***************************************
*             Registers
***************************************/
#if defined CYREG_PERI_DIV_CMD

#define HS_Clock_DIV_ID     HS_Clock__DIV_ID

#define HS_Clock_CMD_REG    (*(reg32 *)CYREG_PERI_DIV_CMD)
#define HS_Clock_CTRL_REG   (*(reg32 *)HS_Clock__CTRL_REGISTER)
#define HS_Clock_DIV_REG    (*(reg32 *)HS_Clock__DIV_REGISTER)

#define HS_Clock_CMD_DIV_SHIFT          (0u)
#define HS_Clock_CMD_PA_DIV_SHIFT       (8u)
#define HS_Clock_CMD_DISABLE_SHIFT      (30u)
#define HS_Clock_CMD_ENABLE_SHIFT       (31u)

#define HS_Clock_CMD_DISABLE_MASK       ((uint32)((uint32)1u << HS_Clock_CMD_DISABLE_SHIFT))
#define HS_Clock_CMD_ENABLE_MASK        ((uint32)((uint32)1u << HS_Clock_CMD_ENABLE_SHIFT))

#define HS_Clock_DIV_FRAC_MASK  (0x000000F8u)
#define HS_Clock_DIV_FRAC_SHIFT (3u)
#define HS_Clock_DIV_INT_MASK   (0xFFFFFF00u)
#define HS_Clock_DIV_INT_SHIFT  (8u)

#else 

#define HS_Clock_DIV_REG        (*(reg32 *)HS_Clock__REGISTER)
#define HS_Clock_ENABLE_REG     HS_Clock_DIV_REG
#define HS_Clock_DIV_FRAC_MASK  HS_Clock__FRAC_MASK
#define HS_Clock_DIV_FRAC_SHIFT (16u)
#define HS_Clock_DIV_INT_MASK   HS_Clock__DIVIDER_MASK
#define HS_Clock_DIV_INT_SHIFT  (0u)

#endif/* CYREG_PERI_DIV_CMD */

#endif /* !defined(CY_CLOCK_HS_Clock_H) */

/* [] END OF FILE */
