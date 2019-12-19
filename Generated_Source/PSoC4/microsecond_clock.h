/*******************************************************************************
* File Name: microsecond_clock.h
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

#if !defined(CY_CLOCK_microsecond_clock_H)
#define CY_CLOCK_microsecond_clock_H

#include <cytypes.h>
#include <cyfitter.h>


/***************************************
*        Function Prototypes
***************************************/
#if defined CYREG_PERI_DIV_CMD

void microsecond_clock_StartEx(uint32 alignClkDiv);
#define microsecond_clock_Start() \
    microsecond_clock_StartEx(microsecond_clock__PA_DIV_ID)

#else

void microsecond_clock_Start(void);

#endif/* CYREG_PERI_DIV_CMD */

void microsecond_clock_Stop(void);

void microsecond_clock_SetFractionalDividerRegister(uint16 clkDivider, uint8 clkFractional);

uint16 microsecond_clock_GetDividerRegister(void);
uint8  microsecond_clock_GetFractionalDividerRegister(void);

#define microsecond_clock_Enable()                         microsecond_clock_Start()
#define microsecond_clock_Disable()                        microsecond_clock_Stop()
#define microsecond_clock_SetDividerRegister(clkDivider, reset)  \
    microsecond_clock_SetFractionalDividerRegister((clkDivider), 0u)
#define microsecond_clock_SetDivider(clkDivider)           microsecond_clock_SetDividerRegister((clkDivider), 1u)
#define microsecond_clock_SetDividerValue(clkDivider)      microsecond_clock_SetDividerRegister((clkDivider) - 1u, 1u)


/***************************************
*             Registers
***************************************/
#if defined CYREG_PERI_DIV_CMD

#define microsecond_clock_DIV_ID     microsecond_clock__DIV_ID

#define microsecond_clock_CMD_REG    (*(reg32 *)CYREG_PERI_DIV_CMD)
#define microsecond_clock_CTRL_REG   (*(reg32 *)microsecond_clock__CTRL_REGISTER)
#define microsecond_clock_DIV_REG    (*(reg32 *)microsecond_clock__DIV_REGISTER)

#define microsecond_clock_CMD_DIV_SHIFT          (0u)
#define microsecond_clock_CMD_PA_DIV_SHIFT       (8u)
#define microsecond_clock_CMD_DISABLE_SHIFT      (30u)
#define microsecond_clock_CMD_ENABLE_SHIFT       (31u)

#define microsecond_clock_CMD_DISABLE_MASK       ((uint32)((uint32)1u << microsecond_clock_CMD_DISABLE_SHIFT))
#define microsecond_clock_CMD_ENABLE_MASK        ((uint32)((uint32)1u << microsecond_clock_CMD_ENABLE_SHIFT))

#define microsecond_clock_DIV_FRAC_MASK  (0x000000F8u)
#define microsecond_clock_DIV_FRAC_SHIFT (3u)
#define microsecond_clock_DIV_INT_MASK   (0xFFFFFF00u)
#define microsecond_clock_DIV_INT_SHIFT  (8u)

#else 

#define microsecond_clock_DIV_REG        (*(reg32 *)microsecond_clock__REGISTER)
#define microsecond_clock_ENABLE_REG     microsecond_clock_DIV_REG
#define microsecond_clock_DIV_FRAC_MASK  microsecond_clock__FRAC_MASK
#define microsecond_clock_DIV_FRAC_SHIFT (16u)
#define microsecond_clock_DIV_INT_MASK   microsecond_clock__DIVIDER_MASK
#define microsecond_clock_DIV_INT_SHIFT  (0u)

#endif/* CYREG_PERI_DIV_CMD */

#endif /* !defined(CY_CLOCK_microsecond_clock_H) */

/* [] END OF FILE */
