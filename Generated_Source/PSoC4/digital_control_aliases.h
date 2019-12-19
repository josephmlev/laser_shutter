/*******************************************************************************
* File Name: digital_control.h  
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

#if !defined(CY_PINS_digital_control_ALIASES_H) /* Pins digital_control_ALIASES_H */
#define CY_PINS_digital_control_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define digital_control_0			(digital_control__0__PC)
#define digital_control_0_PS		(digital_control__0__PS)
#define digital_control_0_PC		(digital_control__0__PC)
#define digital_control_0_DR		(digital_control__0__DR)
#define digital_control_0_SHIFT	(digital_control__0__SHIFT)
#define digital_control_0_INTR	((uint16)((uint16)0x0003u << (digital_control__0__SHIFT*2u)))

#define digital_control_INTR_ALL	 ((uint16)(digital_control_0_INTR))


#endif /* End Pins digital_control_ALIASES_H */


/* [] END OF FILE */
