/*******************************************************************************
* File Name: en_5.c  
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
#include "en_5.h"

static en_5_BACKUP_STRUCT  en_5_backup = {0u, 0u, 0u};


/*******************************************************************************
* Function Name: en_5_Sleep
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
*  \snippet en_5_SUT.c usage_en_5_Sleep_Wakeup
*******************************************************************************/
void en_5_Sleep(void)
{
    #if defined(en_5__PC)
        en_5_backup.pcState = en_5_PC;
    #else
        #if (CY_PSOC4_4200L)
            /* Save the regulator state and put the PHY into suspend mode */
            en_5_backup.usbState = en_5_CR1_REG;
            en_5_USB_POWER_REG |= en_5_USBIO_ENTER_SLEEP;
            en_5_CR1_REG &= en_5_USBIO_CR1_OFF;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(en_5__SIO)
        en_5_backup.sioState = en_5_SIO_REG;
        /* SIO requires unregulated output buffer and single ended input buffer */
        en_5_SIO_REG &= (uint32)(~en_5_SIO_LPM_MASK);
    #endif  
}


/*******************************************************************************
* Function Name: en_5_Wakeup
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
*  Refer to en_5_Sleep() for an example usage.
*******************************************************************************/
void en_5_Wakeup(void)
{
    #if defined(en_5__PC)
        en_5_PC = en_5_backup.pcState;
    #else
        #if (CY_PSOC4_4200L)
            /* Restore the regulator state and come out of suspend mode */
            en_5_USB_POWER_REG &= en_5_USBIO_EXIT_SLEEP_PH1;
            en_5_CR1_REG = en_5_backup.usbState;
            en_5_USB_POWER_REG &= en_5_USBIO_EXIT_SLEEP_PH2;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(en_5__SIO)
        en_5_SIO_REG = en_5_backup.sioState;
    #endif
}


/* [] END OF FILE */
