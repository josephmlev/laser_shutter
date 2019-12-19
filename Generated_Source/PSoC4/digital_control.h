/*******************************************************************************
* File Name: digital_control.h  
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

#if !defined(CY_PINS_digital_control_H) /* Pins digital_control_H */
#define CY_PINS_digital_control_H

#include "cytypes.h"
#include "cyfitter.h"
#include "digital_control_aliases.h"


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
} digital_control_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   digital_control_Read(void);
void    digital_control_Write(uint8 value);
uint8   digital_control_ReadDataReg(void);
#if defined(digital_control__PC) || (CY_PSOC4_4200L) 
    void    digital_control_SetDriveMode(uint8 mode);
#endif
void    digital_control_SetInterruptMode(uint16 position, uint16 mode);
uint8   digital_control_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void digital_control_Sleep(void); 
void digital_control_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(digital_control__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define digital_control_DRIVE_MODE_BITS        (3)
    #define digital_control_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - digital_control_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the digital_control_SetDriveMode() function.
         *  @{
         */
        #define digital_control_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define digital_control_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define digital_control_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define digital_control_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define digital_control_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define digital_control_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define digital_control_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define digital_control_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define digital_control_MASK               digital_control__MASK
#define digital_control_SHIFT              digital_control__SHIFT
#define digital_control_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in digital_control_SetInterruptMode() function.
     *  @{
     */
        #define digital_control_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define digital_control_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define digital_control_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define digital_control_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(digital_control__SIO)
    #define digital_control_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(digital_control__PC) && (CY_PSOC4_4200L)
    #define digital_control_USBIO_ENABLE               ((uint32)0x80000000u)
    #define digital_control_USBIO_DISABLE              ((uint32)(~digital_control_USBIO_ENABLE))
    #define digital_control_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define digital_control_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define digital_control_USBIO_ENTER_SLEEP          ((uint32)((1u << digital_control_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << digital_control_USBIO_SUSPEND_DEL_SHIFT)))
    #define digital_control_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << digital_control_USBIO_SUSPEND_SHIFT)))
    #define digital_control_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << digital_control_USBIO_SUSPEND_DEL_SHIFT)))
    #define digital_control_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(digital_control__PC)
    /* Port Configuration */
    #define digital_control_PC                 (* (reg32 *) digital_control__PC)
#endif
/* Pin State */
#define digital_control_PS                     (* (reg32 *) digital_control__PS)
/* Data Register */
#define digital_control_DR                     (* (reg32 *) digital_control__DR)
/* Input Buffer Disable Override */
#define digital_control_INP_DIS                (* (reg32 *) digital_control__PC2)

/* Interrupt configuration Registers */
#define digital_control_INTCFG                 (* (reg32 *) digital_control__INTCFG)
#define digital_control_INTSTAT                (* (reg32 *) digital_control__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define digital_control_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(digital_control__SIO)
    #define digital_control_SIO_REG            (* (reg32 *) digital_control__SIO)
#endif /* (digital_control__SIO_CFG) */

/* USBIO registers */
#if !defined(digital_control__PC) && (CY_PSOC4_4200L)
    #define digital_control_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define digital_control_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define digital_control_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define digital_control_DRIVE_MODE_SHIFT       (0x00u)
#define digital_control_DRIVE_MODE_MASK        (0x07u << digital_control_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins digital_control_H */


/* [] END OF FILE */
