/*******************************************************************************
* File Name: Interrupt_Out.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Interrupt_Out_ALIASES_H) /* Pins Interrupt_Out_ALIASES_H */
#define CY_PINS_Interrupt_Out_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define Interrupt_Out_0			(Interrupt_Out__0__PC)
#define Interrupt_Out_0_PS		(Interrupt_Out__0__PS)
#define Interrupt_Out_0_PC		(Interrupt_Out__0__PC)
#define Interrupt_Out_0_DR		(Interrupt_Out__0__DR)
#define Interrupt_Out_0_SHIFT	(Interrupt_Out__0__SHIFT)
#define Interrupt_Out_0_INTR	((uint16)((uint16)0x0003u << (Interrupt_Out__0__SHIFT*2u)))

#define Interrupt_Out_INTR_ALL	 ((uint16)(Interrupt_Out_0_INTR))


#endif /* End Pins Interrupt_Out_ALIASES_H */


/* [] END OF FILE */
