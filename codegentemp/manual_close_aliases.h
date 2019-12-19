/*******************************************************************************
* File Name: manual_close.h  
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

#if !defined(CY_PINS_manual_close_ALIASES_H) /* Pins manual_close_ALIASES_H */
#define CY_PINS_manual_close_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define manual_close_0			(manual_close__0__PC)
#define manual_close_0_PS		(manual_close__0__PS)
#define manual_close_0_PC		(manual_close__0__PC)
#define manual_close_0_DR		(manual_close__0__DR)
#define manual_close_0_SHIFT	(manual_close__0__SHIFT)
#define manual_close_0_INTR	((uint16)((uint16)0x0003u << (manual_close__0__SHIFT*2u)))

#define manual_close_INTR_ALL	 ((uint16)(manual_close_0_INTR))


#endif /* End Pins manual_close_ALIASES_H */


/* [] END OF FILE */
