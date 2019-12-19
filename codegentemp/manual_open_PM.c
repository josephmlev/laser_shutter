/*******************************************************************************
* File Name: manual_open.c  
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
#include "manual_open.h"

static manual_open_BACKUP_STRUCT  manual_open_backup = {0u, 0u, 0u};


/*******************************************************************************
* Function Name: manual_open_Sleep
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
*  \snippet manual_open_SUT.c usage_manual_open_Sleep_Wakeup
*******************************************************************************/
void manual_open_Sleep(void)
{
    #if defined(manual_open__PC)
        manual_open_backup.pcState = manual_open_PC;
    #else
        #if (CY_PSOC4_4200L)
            /* Save the regulator state and put the PHY into suspend mode */
            manual_open_backup.usbState = manual_open_CR1_REG;
            manual_open_USB_POWER_REG |= manual_open_USBIO_ENTER_SLEEP;
            manual_open_CR1_REG &= manual_open_USBIO_CR1_OFF;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(manual_open__SIO)
        manual_open_backup.sioState = manual_open_SIO_REG;
        /* SIO requires unregulated output buffer and single ended input buffer */
        manual_open_SIO_REG &= (uint32)(~manual_open_SIO_LPM_MASK);
    #endif  
}


/*******************************************************************************
* Function Name: manual_open_Wakeup
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
*  Refer to manual_open_Sleep() for an example usage.
*******************************************************************************/
void manual_open_Wakeup(void)
{
    #if defined(manual_open__PC)
        manual_open_PC = manual_open_backup.pcState;
    #else
        #if (CY_PSOC4_4200L)
            /* Restore the regulator state and come out of suspend mode */
            manual_open_USB_POWER_REG &= manual_open_USBIO_EXIT_SLEEP_PH1;
            manual_open_CR1_REG = manual_open_backup.usbState;
            manual_open_USB_POWER_REG &= manual_open_USBIO_EXIT_SLEEP_PH2;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(manual_open__SIO)
        manual_open_SIO_REG = manual_open_backup.sioState;
    #endif
}


/* [] END OF FILE */
