/*******************************************************************************
* File Name: en_24.h  
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

#if !defined(CY_PINS_en_24_H) /* Pins en_24_H */
#define CY_PINS_en_24_H

#include "cytypes.h"
#include "cyfitter.h"
#include "en_24_aliases.h"


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
} en_24_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   en_24_Read(void);
void    en_24_Write(uint8 value);
uint8   en_24_ReadDataReg(void);
#if defined(en_24__PC) || (CY_PSOC4_4200L) 
    void    en_24_SetDriveMode(uint8 mode);
#endif
void    en_24_SetInterruptMode(uint16 position, uint16 mode);
uint8   en_24_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void en_24_Sleep(void); 
void en_24_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(en_24__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define en_24_DRIVE_MODE_BITS        (3)
    #define en_24_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - en_24_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the en_24_SetDriveMode() function.
         *  @{
         */
        #define en_24_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define en_24_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define en_24_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define en_24_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define en_24_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define en_24_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define en_24_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define en_24_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define en_24_MASK               en_24__MASK
#define en_24_SHIFT              en_24__SHIFT
#define en_24_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in en_24_SetInterruptMode() function.
     *  @{
     */
        #define en_24_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define en_24_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define en_24_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define en_24_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(en_24__SIO)
    #define en_24_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(en_24__PC) && (CY_PSOC4_4200L)
    #define en_24_USBIO_ENABLE               ((uint32)0x80000000u)
    #define en_24_USBIO_DISABLE              ((uint32)(~en_24_USBIO_ENABLE))
    #define en_24_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define en_24_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define en_24_USBIO_ENTER_SLEEP          ((uint32)((1u << en_24_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << en_24_USBIO_SUSPEND_DEL_SHIFT)))
    #define en_24_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << en_24_USBIO_SUSPEND_SHIFT)))
    #define en_24_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << en_24_USBIO_SUSPEND_DEL_SHIFT)))
    #define en_24_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(en_24__PC)
    /* Port Configuration */
    #define en_24_PC                 (* (reg32 *) en_24__PC)
#endif
/* Pin State */
#define en_24_PS                     (* (reg32 *) en_24__PS)
/* Data Register */
#define en_24_DR                     (* (reg32 *) en_24__DR)
/* Input Buffer Disable Override */
#define en_24_INP_DIS                (* (reg32 *) en_24__PC2)

/* Interrupt configuration Registers */
#define en_24_INTCFG                 (* (reg32 *) en_24__INTCFG)
#define en_24_INTSTAT                (* (reg32 *) en_24__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define en_24_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(en_24__SIO)
    #define en_24_SIO_REG            (* (reg32 *) en_24__SIO)
#endif /* (en_24__SIO_CFG) */

/* USBIO registers */
#if !defined(en_24__PC) && (CY_PSOC4_4200L)
    #define en_24_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define en_24_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define en_24_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define en_24_DRIVE_MODE_SHIFT       (0x00u)
#define en_24_DRIVE_MODE_MASK        (0x07u << en_24_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins en_24_H */


/* [] END OF FILE */
