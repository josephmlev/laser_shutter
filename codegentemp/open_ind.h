/*******************************************************************************
* File Name: open_ind.h  
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

#if !defined(CY_PINS_open_ind_H) /* Pins open_ind_H */
#define CY_PINS_open_ind_H

#include "cytypes.h"
#include "cyfitter.h"
#include "open_ind_aliases.h"


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
} open_ind_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   open_ind_Read(void);
void    open_ind_Write(uint8 value);
uint8   open_ind_ReadDataReg(void);
#if defined(open_ind__PC) || (CY_PSOC4_4200L) 
    void    open_ind_SetDriveMode(uint8 mode);
#endif
void    open_ind_SetInterruptMode(uint16 position, uint16 mode);
uint8   open_ind_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void open_ind_Sleep(void); 
void open_ind_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(open_ind__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define open_ind_DRIVE_MODE_BITS        (3)
    #define open_ind_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - open_ind_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the open_ind_SetDriveMode() function.
         *  @{
         */
        #define open_ind_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define open_ind_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define open_ind_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define open_ind_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define open_ind_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define open_ind_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define open_ind_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define open_ind_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define open_ind_MASK               open_ind__MASK
#define open_ind_SHIFT              open_ind__SHIFT
#define open_ind_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in open_ind_SetInterruptMode() function.
     *  @{
     */
        #define open_ind_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define open_ind_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define open_ind_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define open_ind_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(open_ind__SIO)
    #define open_ind_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(open_ind__PC) && (CY_PSOC4_4200L)
    #define open_ind_USBIO_ENABLE               ((uint32)0x80000000u)
    #define open_ind_USBIO_DISABLE              ((uint32)(~open_ind_USBIO_ENABLE))
    #define open_ind_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define open_ind_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define open_ind_USBIO_ENTER_SLEEP          ((uint32)((1u << open_ind_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << open_ind_USBIO_SUSPEND_DEL_SHIFT)))
    #define open_ind_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << open_ind_USBIO_SUSPEND_SHIFT)))
    #define open_ind_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << open_ind_USBIO_SUSPEND_DEL_SHIFT)))
    #define open_ind_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(open_ind__PC)
    /* Port Configuration */
    #define open_ind_PC                 (* (reg32 *) open_ind__PC)
#endif
/* Pin State */
#define open_ind_PS                     (* (reg32 *) open_ind__PS)
/* Data Register */
#define open_ind_DR                     (* (reg32 *) open_ind__DR)
/* Input Buffer Disable Override */
#define open_ind_INP_DIS                (* (reg32 *) open_ind__PC2)

/* Interrupt configuration Registers */
#define open_ind_INTCFG                 (* (reg32 *) open_ind__INTCFG)
#define open_ind_INTSTAT                (* (reg32 *) open_ind__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define open_ind_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(open_ind__SIO)
    #define open_ind_SIO_REG            (* (reg32 *) open_ind__SIO)
#endif /* (open_ind__SIO_CFG) */

/* USBIO registers */
#if !defined(open_ind__PC) && (CY_PSOC4_4200L)
    #define open_ind_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define open_ind_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define open_ind_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define open_ind_DRIVE_MODE_SHIFT       (0x00u)
#define open_ind_DRIVE_MODE_MASK        (0x07u << open_ind_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins open_ind_H */


/* [] END OF FILE */
