/*******************************************************************************
* File Name: status_green.c  
* Version 2.20
*
* Description:
*  This file contains APIs to set up the Pins component for low power modes.
*
* Note:
*
********************************************************************************
* Copyright 2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "status_green.h"

static status_green_BACKUP_STRUCT  status_green_backup = {0u, 0u, 0u};


/*******************************************************************************
* Function Name: status_green_Sleep
****************************************************************************//**
*
* \brief Stores the pin configuration and prepares the pin for entering chip 
*  deep-sleep/hibernate modes. This function applies only to SIO and USBIO pins.
*  It should not be called for GPIO or GPIO_OVT pins.
*
* <b>Note</b> This function is available in PSoC 4 only.
*
* \return 
*  None 
*  
* \sideeffect
*  For SIO pins, this function configures the pin input threshold to CMOS and
*  drive level to Vddio. This is needed for SIO pins when in device 
*  deep-sleep/hibernate modes.
*
* \funcusage
*  \snippet status_green_SUT.c usage_status_green_Sleep_Wakeup
*******************************************************************************/
void status_green_Sleep(void)
{
    #if defined(status_green__PC)
        status_green_backup.pcState = status_green_PC;
    #else
        #if (CY_PSOC4_4200L)
            /* Save the regulator state and put the PHY into suspend mode */
            status_green_backup.usbState = status_green_CR1_REG;
            status_green_USB_POWER_REG |= status_green_USBIO_ENTER_SLEEP;
            status_green_CR1_REG &= status_green_USBIO_CR1_OFF;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(status_green__SIO)
        status_green_backup.sioState = status_green_SIO_REG;
        /* SIO requires unregulated output buffer and single ended input buffer */
        status_green_SIO_REG &= (uint32)(~status_green_SIO_LPM_MASK);
    #endif  
}


/*******************************************************************************
* Function Name: status_green_Wakeup
****************************************************************************//**
*
* \brief Restores the pin configuration that was saved during Pin_Sleep(). This 
* function applies only to SIO and USBIO pins. It should not be called for
* GPIO or GPIO_OVT pins.
*
* For USBIO pins, the wakeup is only triggered for falling edge interrupts.
*
* <b>Note</b> This function is available in PSoC 4 only.
*
* \return 
*  None
*  
* \funcusage
*  Refer to status_green_Sleep() for an example usage.
*******************************************************************************/
void status_green_Wakeup(void)
{
    #if defined(status_green__PC)
        status_green_PC = status_green_backup.pcState;
    #else
        #if (CY_PSOC4_4200L)
            /* Restore the regulator state and come out of suspend mode */
            status_green_USB_POWER_REG &= status_green_USBIO_EXIT_SLEEP_PH1;
            status_green_CR1_REG = status_green_backup.usbState;
            status_green_USB_POWER_REG &= status_green_USBIO_EXIT_SLEEP_PH2;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(status_green__SIO)
        status_green_SIO_REG = status_green_backup.sioState;
    #endif
}


/* [] END OF FILE */
