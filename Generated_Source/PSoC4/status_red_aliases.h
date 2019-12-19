/*******************************************************************************
* File Name: status_red.h  
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

#if !defined(CY_PINS_status_red_ALIASES_H) /* Pins status_red_ALIASES_H */
#define CY_PINS_status_red_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define status_red_0			(status_red__0__PC)
#define status_red_0_PS		(status_red__0__PS)
#define status_red_0_PC		(status_red__0__PC)
#define status_red_0_DR		(status_red__0__DR)
#define status_red_0_SHIFT	(status_red__0__SHIFT)
#define status_red_0_INTR	((uint16)((uint16)0x0003u << (status_red__0__SHIFT*2u)))

#define status_red_INTR_ALL	 ((uint16)(status_red_0_INTR))


#endif /* End Pins status_red_ALIASES_H */


/* [] END OF FILE */
