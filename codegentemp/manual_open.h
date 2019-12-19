/*******************************************************************************
* File Name: manual_open.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_manual_open_H) /* Pins manual_open_H */
#define CY_PINS_manual_open_H

#include "cytypes.h"
#include "cyfitter.h"
#include "manual_open_aliases.h"


/***************************************
*     Data Struct Definitions
***************************************/

/**
* \addtogroup group_structures
* @{
*/
    
/* Structure for sleep mode support */
typedef struct
{
    uint32 pcState; /**< State of the port control register */
    uint32 sioState; /**< State of the SIO configuration */
    uint32 usbState; /**< State of the USBIO regulator */
} manual_open_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   manual_open_Read(void);
void    manual_open_Write(uint8 value);
uint8   manual_open_ReadDataReg(void);
#if defined(manual_open__PC) || (CY_PSOC4_4200L) 
    void    manual_open_SetDriveMode(uint8 mode);
#endif
void    manual_open_SetInterruptMode(uint16 position, uint16 mode);
uint8   manual_open_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void manual_open_Sleep(void); 
void manual_open_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(manual_open__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define manual_open_DRIVE_MODE_BITS        (3)
    #define manual_open_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - manual_open_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the manual_open_SetDriveMode() function.
         *  @{
         */
        #define manual_open_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define manual_open_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define manual_open_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define manual_open_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define manual_open_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define manual_open_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define manual_open_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define manual_open_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define manual_open_MASK               manual_open__MASK
#define manual_open_SHIFT              manual_open__SHIFT
#define manual_open_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in manual_open_SetInterruptMode() function.
     *  @{
     */
        #define manual_open_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define manual_open_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define manual_open_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define manual_open_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(manual_open__SIO)
    #define manual_open_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(manual_open__PC) && (CY_PSOC4_4200L)
    #define manual_open_USBIO_ENABLE               ((uint32)0x80000000u)
    #define manual_open_USBIO_DISABLE              ((uint32)(~manual_open_USBIO_ENABLE))
    #define manual_open_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define manual_open_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define manual_open_USBIO_ENTER_SLEEP          ((uint32)((1u << manual_open_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << manual_open_USBIO_SUSPEND_DEL_SHIFT)))
    #define manual_open_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << manual_open_USBIO_SUSPEND_SHIFT)))
    #define manual_open_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << manual_open_USBIO_SUSPEND_DEL_SHIFT)))
    #define manual_open_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(manual_open__PC)
    /* Port Configuration */
    #define manual_open_PC                 (* (reg32 *) manual_open__PC)
#endif
/* Pin State */
#define manual_open_PS                     (* (reg32 *) manual_open__PS)
/* Data Register */
#define manual_open_DR                     (* (reg32 *) manual_open__DR)
/* Input Buffer Disable Override */
#define manual_open_INP_DIS                (* (reg32 *) manual_open__PC2)

/* Interrupt configuration Registers */
#define manual_open_INTCFG                 (* (reg32 *) manual_open__INTCFG)
#define manual_open_INTSTAT                (* (reg32 *) manual_open__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define manual_open_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(manual_open__SIO)
    #define manual_open_SIO_REG            (* (reg32 *) manual_open__SIO)
#endif /* (manual_open__SIO_CFG) */

/* USBIO registers */
#if !defined(manual_open__PC) && (CY_PSOC4_4200L)
    #define manual_open_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define manual_open_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define manual_open_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define manual_open_DRIVE_MODE_SHIFT       (0x00u)
#define manual_open_DRIVE_MODE_MASK        (0x07u << manual_open_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins manual_open_H */


/* [] END OF FILE */
