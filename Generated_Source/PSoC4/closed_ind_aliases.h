/*******************************************************************************
* File Name: closed_ind.h  
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

#if !defined(CY_PINS_closed_ind_ALIASES_H) /* Pins closed_ind_ALIASES_H */
#define CY_PINS_closed_ind_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define closed_ind_0			(closed_ind__0__PC)
#define closed_ind_0_PS		(closed_ind__0__PS)
#define closed_ind_0_PC		(closed_ind__0__PC)
#define closed_ind_0_DR		(closed_ind__0__DR)
#define closed_ind_0_SHIFT	(closed_ind__0__SHIFT)
#define closed_ind_0_INTR	((uint16)((uint16)0x0003u << (closed_ind__0__SHIFT*2u)))

#define closed_ind_INTR_ALL	 ((uint16)(closed_ind_0_INTR))


#endif /* End Pins closed_ind_ALIASES_H */


/* [] END OF FILE */
