/*******************************************************************************
* File Name: closed_ind.h  
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

#if !defined(CY_PINS_closed_ind_H) /* Pins closed_ind_H */
#define CY_PINS_closed_ind_H

#include "cytypes.h"
#include "cyfitter.h"
#include "closed_ind_aliases.h"


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
} closed_ind_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   closed_ind_Read(void);
void    closed_ind_Write(uint8 value);
uint8   closed_ind_ReadDataReg(void);
#if defined(closed_ind__PC) || (CY_PSOC4_4200L) 
    void    closed_ind_SetDriveMode(uint8 mode);
#endif
void    closed_ind_SetInterruptMode(uint16 position, uint16 mode);
uint8   closed_ind_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void closed_ind_Sleep(void); 
void closed_ind_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(closed_ind__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define closed_ind_DRIVE_MODE_BITS        (3)
    #define closed_ind_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - closed_ind_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the closed_ind_SetDriveMode() function.
         *  @{
         */
        #define closed_ind_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define closed_ind_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define closed_ind_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define closed_ind_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define closed_ind_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define closed_ind_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define closed_ind_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define closed_ind_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define closed_ind_MASK               closed_ind__MASK
#define closed_ind_SHIFT              closed_ind__SHIFT
#define closed_ind_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in closed_ind_SetInterruptMode() function.
     *  @{
     */
        #define closed_ind_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define closed_ind_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define closed_ind_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define closed_ind_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(closed_ind__SIO)
    #define closed_ind_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(closed_ind__PC) && (CY_PSOC4_4200L)
    #define closed_ind_USBIO_ENABLE               ((uint32)0x80000000u)
    #define closed_ind_USBIO_DISABLE              ((uint32)(~closed_ind_USBIO_ENABLE))
    #define closed_ind_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define closed_ind_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define closed_ind_USBIO_ENTER_SLEEP          ((uint32)((1u << closed_ind_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << closed_ind_USBIO_SUSPEND_DEL_SHIFT)))
    #define closed_ind_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << closed_ind_USBIO_SUSPEND_SHIFT)))
    #define closed_ind_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << closed_ind_USBIO_SUSPEND_DEL_SHIFT)))
    #define closed_ind_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(closed_ind__PC)
    /* Port Configuration */
    #define closed_ind_PC                 (* (reg32 *) closed_ind__PC)
#endif
/* Pin State */
#define closed_ind_PS                     (* (reg32 *) closed_ind__PS)
/* Data Register */
#define closed_ind_DR                     (* (reg32 *) closed_ind__DR)
/* Input Buffer Disable Override */
#define closed_ind_INP_DIS                (* (reg32 *) closed_ind__PC2)

/* Interrupt configuration Registers */
#define closed_ind_INTCFG                 (* (reg32 *) closed_ind__INTCFG)
#define closed_ind_INTSTAT                (* (reg32 *) closed_ind__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define closed_ind_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(closed_ind__SIO)
    #define closed_ind_SIO_REG            (* (reg32 *) closed_ind__SIO)
#endif /* (closed_ind__SIO_CFG) */

/* USBIO registers */
#if !defined(closed_ind__PC) && (CY_PSOC4_4200L)
    #define closed_ind_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define closed_ind_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define closed_ind_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define closed_ind_DRIVE_MODE_SHIFT       (0x00u)
#define closed_ind_DRIVE_MODE_MASK        (0x07u << closed_ind_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins closed_ind_H */


/* [] END OF FILE */
