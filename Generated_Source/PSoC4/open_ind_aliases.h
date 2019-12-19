/*******************************************************************************
* File Name: open_ind.h  
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

#if !defined(CY_PINS_open_ind_ALIASES_H) /* Pins open_ind_ALIASES_H */
#define CY_PINS_open_ind_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define open_ind_0			(open_ind__0__PC)
#define open_ind_0_PS		(open_ind__0__PS)
#define open_ind_0_PC		(open_ind__0__PC)
#define open_ind_0_DR		(open_ind__0__DR)
#define open_ind_0_SHIFT	(open_ind__0__SHIFT)
#define open_ind_0_INTR	((uint16)((uint16)0x0003u << (open_ind__0__SHIFT*2u)))

#define open_ind_INTR_ALL	 ((uint16)(open_ind_0_INTR))


#endif /* End Pins open_ind_ALIASES_H */


/* [] END OF FILE */
