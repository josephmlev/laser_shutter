/*******************************************************************************
* File Name: en_24.c  
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
#include "en_24.h"

static en_24_BACKUP_STRUCT  en_24_backup = {0u, 0u, 0u};


/*******************************************************************************
* Function Name: en_24_Sleep
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
*  \snippet en_24_SUT.c usage_en_24_Sleep_Wakeup
*******************************************************************************/
void en_24_Sleep(void)
{
    #if defined(en_24__PC)
        en_24_backup.pcState = en_24_PC;
    #else
        #if (CY_PSOC4_4200L)
            /* Save the regulator state and put the PHY into suspend mode */
            en_24_backup.usbState = en_24_CR1_REG;
            en_24_USB_POWER_REG |= en_24_USBIO_ENTER_SLEEP;
            en_24_CR1_REG &= en_24_USBIO_CR1_OFF;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(en_24__SIO)
        en_24_backup.sioState = en_24_SIO_REG;
        /* SIO requires unregulated output buffer and single ended input buffer */
        en_24_SIO_REG &= (uint32)(~en_24_SIO_LPM_MASK);
    #endif  
}


/*******************************************************************************
* Function Name: en_24_Wakeup
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
*  Refer to en_24_Sleep() for an example usage.
*******************************************************************************/
void en_24_Wakeup(void)
{
    #if defined(en_24__PC)
        en_24_PC = en_24_backup.pcState;
    #else
        #if (CY_PSOC4_4200L)
            /* Restore the regulator state and come out of suspend mode */
            en_24_USB_POWER_REG &= en_24_USBIO_EXIT_SLEEP_PH1;
            en_24_CR1_REG = en_24_backup.usbState;
            en_24_USB_POWER_REG &= en_24_USBIO_EXIT_SLEEP_PH2;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(en_24__SIO)
        en_24_SIO_REG = en_24_backup.sioState;
    #endif
}


/* [] END OF FILE */
