/*******************************************************************************
* File Name: start_pulse.h
* Version 3.30
*
* Description:
*  Contains the prototypes and constants for the functions available to the
*  PWM user module.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
********************************************************************************/

#if !defined(CY_PWM_start_pulse_H)
#define CY_PWM_start_pulse_H

#include "cyfitter.h"
#include "cytypes.h"
#include "CyLib.h" /* For CyEnterCriticalSection() and CyExitCriticalSection() functions */

extern uint8 start_pulse_initVar;


/***************************************
* Conditional Compilation Parameters
***************************************/
#define start_pulse_Resolution                     (16u)
#define start_pulse_UsingFixedFunction             (0u)
#define start_pulse_DeadBandMode                   (0u)
#define start_pulse_KillModeMinTime                (0u)
#define start_pulse_KillMode                       (0u)
#define start_pulse_PWMMode                        (0u)
#define start_pulse_PWMModeIsCenterAligned         (0u)
#define start_pulse_DeadBandUsed                   (0u)
#define start_pulse_DeadBand2_4                    (0u)

#if !defined(start_pulse_PWMUDB_genblk8_stsreg__REMOVED)
    #define start_pulse_UseStatus                  (1u)
#else
    #define start_pulse_UseStatus                  (0u)
#endif /* !defined(start_pulse_PWMUDB_genblk8_stsreg__REMOVED) */

#if !defined(start_pulse_PWMUDB_genblk1_ctrlreg__REMOVED)
    #define start_pulse_UseControl                 (0u)
#else
    #define start_pulse_UseControl                 (0u)
#endif /* !defined(start_pulse_PWMUDB_genblk1_ctrlreg__REMOVED) */

#define start_pulse_UseOneCompareMode              (1u)
#define start_pulse_MinimumKillTime                (1u)
#define start_pulse_EnableMode                     (1u)

#define start_pulse_CompareMode1SW                 (0u)
#define start_pulse_CompareMode2SW                 (0u)

/* Check to see if required defines such as CY_PSOC5LP are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5LP)
    #error Component PWM_v3_30 requires cy_boot v3.0 or later
#endif /* (CY_ PSOC5LP) */

/* Use Kill Mode Enumerated Types */
#define start_pulse__B_PWM__DISABLED 0
#define start_pulse__B_PWM__ASYNCHRONOUS 1
#define start_pulse__B_PWM__SINGLECYCLE 2
#define start_pulse__B_PWM__LATCHED 3
#define start_pulse__B_PWM__MINTIME 4


/* Use Dead Band Mode Enumerated Types */
#define start_pulse__B_PWM__DBMDISABLED 0
#define start_pulse__B_PWM__DBM_2_4_CLOCKS 1
#define start_pulse__B_PWM__DBM_256_CLOCKS 2


/* Used PWM Mode Enumerated Types */
#define start_pulse__B_PWM__ONE_OUTPUT 0
#define start_pulse__B_PWM__TWO_OUTPUTS 1
#define start_pulse__B_PWM__DUAL_EDGE 2
#define start_pulse__B_PWM__CENTER_ALIGN 3
#define start_pulse__B_PWM__DITHER 5
#define start_pulse__B_PWM__HARDWARESELECT 4


/* Used PWM Compare Mode Enumerated Types */
#define start_pulse__B_PWM__LESS_THAN 1
#define start_pulse__B_PWM__LESS_THAN_OR_EQUAL 2
#define start_pulse__B_PWM__GREATER_THAN 3
#define start_pulse__B_PWM__GREATER_THAN_OR_EQUAL_TO 4
#define start_pulse__B_PWM__EQUAL 0
#define start_pulse__B_PWM__FIRMWARE 5



/***************************************
* Data Struct Definition
***************************************/


/**************************************************************************
 * Sleep Wakeup Backup structure for PWM Component
 *************************************************************************/
typedef struct
{

    uint8 PWMEnableState;

    #if(!start_pulse_UsingFixedFunction)
        uint16 PWMUdb;               /* PWM Current Counter value  */
        #if(!start_pulse_PWMModeIsCenterAligned)
            uint16 PWMPeriod;
        #endif /* (!start_pulse_PWMModeIsCenterAligned) */
        #if (start_pulse_UseStatus)
            uint8 InterruptMaskValue;   /* PWM Current Interrupt Mask */
        #endif /* (start_pulse_UseStatus) */

        /* Backup for Deadband parameters */
        #if(start_pulse_DeadBandMode == start_pulse__B_PWM__DBM_256_CLOCKS || \
            start_pulse_DeadBandMode == start_pulse__B_PWM__DBM_2_4_CLOCKS)
            uint8 PWMdeadBandValue; /* Dead Band Counter Current Value */
        #endif /* deadband count is either 2-4 clocks or 256 clocks */

        /* Backup Kill Mode Counter*/
        #if(start_pulse_KillModeMinTime)
            uint8 PWMKillCounterPeriod; /* Kill Mode period value */
        #endif /* (start_pulse_KillModeMinTime) */

        /* Backup control register */
        #if(start_pulse_UseControl)
            uint8 PWMControlRegister; /* PWM Control Register value */
        #endif /* (start_pulse_UseControl) */

    #endif /* (!start_pulse_UsingFixedFunction) */

}start_pulse_backupStruct;


/***************************************
*        Function Prototypes
 **************************************/

void    start_pulse_Start(void) ;
void    start_pulse_Stop(void) ;

#if (start_pulse_UseStatus || start_pulse_UsingFixedFunction)
    void  start_pulse_SetInterruptMode(uint8 interruptMode) ;
    uint8 start_pulse_ReadStatusRegister(void) ;
#endif /* (start_pulse_UseStatus || start_pulse_UsingFixedFunction) */

#define start_pulse_GetInterruptSource() start_pulse_ReadStatusRegister()

#if (start_pulse_UseControl)
    uint8 start_pulse_ReadControlRegister(void) ;
    void  start_pulse_WriteControlRegister(uint8 control)
          ;
#endif /* (start_pulse_UseControl) */

#if (start_pulse_UseOneCompareMode)
   #if (start_pulse_CompareMode1SW)
       void    start_pulse_SetCompareMode(uint8 comparemode)
               ;
   #endif /* (start_pulse_CompareMode1SW) */
#else
    #if (start_pulse_CompareMode1SW)
        void    start_pulse_SetCompareMode1(uint8 comparemode)
                ;
    #endif /* (start_pulse_CompareMode1SW) */
    #if (start_pulse_CompareMode2SW)
        void    start_pulse_SetCompareMode2(uint8 comparemode)
                ;
    #endif /* (start_pulse_CompareMode2SW) */
#endif /* (start_pulse_UseOneCompareMode) */

#if (!start_pulse_UsingFixedFunction)
    uint16   start_pulse_ReadCounter(void) ;
    uint16 start_pulse_ReadCapture(void) ;

    #if (start_pulse_UseStatus)
            void start_pulse_ClearFIFO(void) ;
    #endif /* (start_pulse_UseStatus) */

    void    start_pulse_WriteCounter(uint16 counter)
            ;
#endif /* (!start_pulse_UsingFixedFunction) */

void    start_pulse_WritePeriod(uint16 period)
        ;
uint16 start_pulse_ReadPeriod(void) ;

#if (start_pulse_UseOneCompareMode)
    void    start_pulse_WriteCompare(uint16 compare)
            ;
    uint16 start_pulse_ReadCompare(void) ;
#else
    void    start_pulse_WriteCompare1(uint16 compare)
            ;
    uint16 start_pulse_ReadCompare1(void) ;
    void    start_pulse_WriteCompare2(uint16 compare)
            ;
    uint16 start_pulse_ReadCompare2(void) ;
#endif /* (start_pulse_UseOneCompareMode) */


#if (start_pulse_DeadBandUsed)
    void    start_pulse_WriteDeadTime(uint8 deadtime) ;
    uint8   start_pulse_ReadDeadTime(void) ;
#endif /* (start_pulse_DeadBandUsed) */

#if ( start_pulse_KillModeMinTime)
    void start_pulse_WriteKillTime(uint8 killtime) ;
    uint8 start_pulse_ReadKillTime(void) ;
#endif /* ( start_pulse_KillModeMinTime) */

void start_pulse_Init(void) ;
void start_pulse_Enable(void) ;
void start_pulse_Sleep(void) ;
void start_pulse_Wakeup(void) ;
void start_pulse_SaveConfig(void) ;
void start_pulse_RestoreConfig(void) ;


/***************************************
*         Initialization Values
**************************************/
#define start_pulse_INIT_PERIOD_VALUE          (65535u)
#define start_pulse_INIT_COMPARE_VALUE1        (15535u)
#define start_pulse_INIT_COMPARE_VALUE2        (63u)
#define start_pulse_INIT_INTERRUPTS_MODE       (uint8)(((uint8)(0u <<   \
                                                    start_pulse_STATUS_TC_INT_EN_MASK_SHIFT)) | \
                                                    (uint8)((uint8)(0u <<  \
                                                    start_pulse_STATUS_CMP2_INT_EN_MASK_SHIFT)) | \
                                                    (uint8)((uint8)(0u <<  \
                                                    start_pulse_STATUS_CMP1_INT_EN_MASK_SHIFT )) | \
                                                    (uint8)((uint8)(0u <<  \
                                                    start_pulse_STATUS_KILL_INT_EN_MASK_SHIFT )))
#define start_pulse_DEFAULT_COMPARE2_MODE      (uint8)((uint8)1u <<  start_pulse_CTRL_CMPMODE2_SHIFT)
#define start_pulse_DEFAULT_COMPARE1_MODE      (uint8)((uint8)3u <<  start_pulse_CTRL_CMPMODE1_SHIFT)
#define start_pulse_INIT_DEAD_TIME             (1u)


/********************************
*         Registers
******************************** */

#if (start_pulse_UsingFixedFunction)
   #define start_pulse_PERIOD_LSB              (*(reg16 *) start_pulse_PWMHW__PER0)
   #define start_pulse_PERIOD_LSB_PTR          ( (reg16 *) start_pulse_PWMHW__PER0)
   #define start_pulse_COMPARE1_LSB            (*(reg16 *) start_pulse_PWMHW__CNT_CMP0)
   #define start_pulse_COMPARE1_LSB_PTR        ( (reg16 *) start_pulse_PWMHW__CNT_CMP0)
   #define start_pulse_COMPARE2_LSB            (0x00u)
   #define start_pulse_COMPARE2_LSB_PTR        (0x00u)
   #define start_pulse_COUNTER_LSB             (*(reg16 *) start_pulse_PWMHW__CNT_CMP0)
   #define start_pulse_COUNTER_LSB_PTR         ( (reg16 *) start_pulse_PWMHW__CNT_CMP0)
   #define start_pulse_CAPTURE_LSB             (*(reg16 *) start_pulse_PWMHW__CAP0)
   #define start_pulse_CAPTURE_LSB_PTR         ( (reg16 *) start_pulse_PWMHW__CAP0)
   #define start_pulse_RT1                     (*(reg8 *)  start_pulse_PWMHW__RT1)
   #define start_pulse_RT1_PTR                 ( (reg8 *)  start_pulse_PWMHW__RT1)

#else
   #if (start_pulse_Resolution == 8u) /* 8bit - PWM */

       #if(start_pulse_PWMModeIsCenterAligned)
           #define start_pulse_PERIOD_LSB      (*(reg8 *)  start_pulse_PWMUDB_sP16_pwmdp_u0__D1_REG)
           #define start_pulse_PERIOD_LSB_PTR  ((reg8 *)   start_pulse_PWMUDB_sP16_pwmdp_u0__D1_REG)
       #else
           #define start_pulse_PERIOD_LSB      (*(reg8 *)  start_pulse_PWMUDB_sP16_pwmdp_u0__F0_REG)
           #define start_pulse_PERIOD_LSB_PTR  ((reg8 *)   start_pulse_PWMUDB_sP16_pwmdp_u0__F0_REG)
       #endif /* (start_pulse_PWMModeIsCenterAligned) */

       #define start_pulse_COMPARE1_LSB        (*(reg8 *)  start_pulse_PWMUDB_sP16_pwmdp_u0__D0_REG)
       #define start_pulse_COMPARE1_LSB_PTR    ((reg8 *)   start_pulse_PWMUDB_sP16_pwmdp_u0__D0_REG)
       #define start_pulse_COMPARE2_LSB        (*(reg8 *)  start_pulse_PWMUDB_sP16_pwmdp_u0__D1_REG)
       #define start_pulse_COMPARE2_LSB_PTR    ((reg8 *)   start_pulse_PWMUDB_sP16_pwmdp_u0__D1_REG)
       #define start_pulse_COUNTERCAP_LSB      (*(reg8 *)  start_pulse_PWMUDB_sP16_pwmdp_u0__A1_REG)
       #define start_pulse_COUNTERCAP_LSB_PTR  ((reg8 *)   start_pulse_PWMUDB_sP16_pwmdp_u0__A1_REG)
       #define start_pulse_COUNTER_LSB         (*(reg8 *)  start_pulse_PWMUDB_sP16_pwmdp_u0__A0_REG)
       #define start_pulse_COUNTER_LSB_PTR     ((reg8 *)   start_pulse_PWMUDB_sP16_pwmdp_u0__A0_REG)
       #define start_pulse_CAPTURE_LSB         (*(reg8 *)  start_pulse_PWMUDB_sP16_pwmdp_u0__F1_REG)
       #define start_pulse_CAPTURE_LSB_PTR     ((reg8 *)   start_pulse_PWMUDB_sP16_pwmdp_u0__F1_REG)

   #else
        #if(CY_PSOC3) /* 8-bit address space */
            #if(start_pulse_PWMModeIsCenterAligned)
               #define start_pulse_PERIOD_LSB      (*(reg16 *) start_pulse_PWMUDB_sP16_pwmdp_u0__D1_REG)
               #define start_pulse_PERIOD_LSB_PTR  ((reg16 *)  start_pulse_PWMUDB_sP16_pwmdp_u0__D1_REG)
            #else
               #define start_pulse_PERIOD_LSB      (*(reg16 *) start_pulse_PWMUDB_sP16_pwmdp_u0__F0_REG)
               #define start_pulse_PERIOD_LSB_PTR  ((reg16 *)  start_pulse_PWMUDB_sP16_pwmdp_u0__F0_REG)
            #endif /* (start_pulse_PWMModeIsCenterAligned) */

            #define start_pulse_COMPARE1_LSB       (*(reg16 *) start_pulse_PWMUDB_sP16_pwmdp_u0__D0_REG)
            #define start_pulse_COMPARE1_LSB_PTR   ((reg16 *)  start_pulse_PWMUDB_sP16_pwmdp_u0__D0_REG)
            #define start_pulse_COMPARE2_LSB       (*(reg16 *) start_pulse_PWMUDB_sP16_pwmdp_u0__D1_REG)
            #define start_pulse_COMPARE2_LSB_PTR   ((reg16 *)  start_pulse_PWMUDB_sP16_pwmdp_u0__D1_REG)
            #define start_pulse_COUNTERCAP_LSB     (*(reg16 *) start_pulse_PWMUDB_sP16_pwmdp_u0__A1_REG)
            #define start_pulse_COUNTERCAP_LSB_PTR ((reg16 *)  start_pulse_PWMUDB_sP16_pwmdp_u0__A1_REG)
            #define start_pulse_COUNTER_LSB        (*(reg16 *) start_pulse_PWMUDB_sP16_pwmdp_u0__A0_REG)
            #define start_pulse_COUNTER_LSB_PTR    ((reg16 *)  start_pulse_PWMUDB_sP16_pwmdp_u0__A0_REG)
            #define start_pulse_CAPTURE_LSB        (*(reg16 *) start_pulse_PWMUDB_sP16_pwmdp_u0__F1_REG)
            #define start_pulse_CAPTURE_LSB_PTR    ((reg16 *)  start_pulse_PWMUDB_sP16_pwmdp_u0__F1_REG)
        #else
            #if(start_pulse_PWMModeIsCenterAligned)
               #define start_pulse_PERIOD_LSB      (*(reg16 *) start_pulse_PWMUDB_sP16_pwmdp_u0__16BIT_D1_REG)
               #define start_pulse_PERIOD_LSB_PTR  ((reg16 *)  start_pulse_PWMUDB_sP16_pwmdp_u0__16BIT_D1_REG)
            #else
               #define start_pulse_PERIOD_LSB      (*(reg16 *) start_pulse_PWMUDB_sP16_pwmdp_u0__16BIT_F0_REG)
               #define start_pulse_PERIOD_LSB_PTR  ((reg16 *)  start_pulse_PWMUDB_sP16_pwmdp_u0__16BIT_F0_REG)
            #endif /* (start_pulse_PWMModeIsCenterAligned) */

            #define start_pulse_COMPARE1_LSB       (*(reg16 *) start_pulse_PWMUDB_sP16_pwmdp_u0__16BIT_D0_REG)
            #define start_pulse_COMPARE1_LSB_PTR   ((reg16 *)  start_pulse_PWMUDB_sP16_pwmdp_u0__16BIT_D0_REG)
            #define start_pulse_COMPARE2_LSB       (*(reg16 *) start_pulse_PWMUDB_sP16_pwmdp_u0__16BIT_D1_REG)
            #define start_pulse_COMPARE2_LSB_PTR   ((reg16 *)  start_pulse_PWMUDB_sP16_pwmdp_u0__16BIT_D1_REG)
            #define start_pulse_COUNTERCAP_LSB     (*(reg16 *) start_pulse_PWMUDB_sP16_pwmdp_u0__16BIT_A1_REG)
            #define start_pulse_COUNTERCAP_LSB_PTR ((reg16 *)  start_pulse_PWMUDB_sP16_pwmdp_u0__16BIT_A1_REG)
            #define start_pulse_COUNTER_LSB        (*(reg16 *) start_pulse_PWMUDB_sP16_pwmdp_u0__16BIT_A0_REG)
            #define start_pulse_COUNTER_LSB_PTR    ((reg16 *)  start_pulse_PWMUDB_sP16_pwmdp_u0__16BIT_A0_REG)
            #define start_pulse_CAPTURE_LSB        (*(reg16 *) start_pulse_PWMUDB_sP16_pwmdp_u0__16BIT_F1_REG)
            #define start_pulse_CAPTURE_LSB_PTR    ((reg16 *)  start_pulse_PWMUDB_sP16_pwmdp_u0__16BIT_F1_REG)
        #endif /* (CY_PSOC3) */

       #define start_pulse_AUX_CONTROLDP1          (*(reg8 *)  start_pulse_PWMUDB_sP16_pwmdp_u1__DP_AUX_CTL_REG)
       #define start_pulse_AUX_CONTROLDP1_PTR      ((reg8 *)   start_pulse_PWMUDB_sP16_pwmdp_u1__DP_AUX_CTL_REG)

   #endif /* (start_pulse_Resolution == 8) */

   #define start_pulse_COUNTERCAP_LSB_PTR_8BIT ( (reg8 *)  start_pulse_PWMUDB_sP16_pwmdp_u0__A1_REG)
   #define start_pulse_AUX_CONTROLDP0          (*(reg8 *)  start_pulse_PWMUDB_sP16_pwmdp_u0__DP_AUX_CTL_REG)
   #define start_pulse_AUX_CONTROLDP0_PTR      ((reg8 *)   start_pulse_PWMUDB_sP16_pwmdp_u0__DP_AUX_CTL_REG)

#endif /* (start_pulse_UsingFixedFunction) */

#if(start_pulse_KillModeMinTime )
    #define start_pulse_KILLMODEMINTIME        (*(reg8 *)  start_pulse_PWMUDB_sKM_killmodecounterdp_u0__D0_REG)
    #define start_pulse_KILLMODEMINTIME_PTR    ((reg8 *)   start_pulse_PWMUDB_sKM_killmodecounterdp_u0__D0_REG)
    /* Fixed Function Block has no Kill Mode parameters because it is Asynchronous only */
#endif /* (start_pulse_KillModeMinTime ) */

#if(start_pulse_DeadBandMode == start_pulse__B_PWM__DBM_256_CLOCKS)
    #define start_pulse_DEADBAND_COUNT         (*(reg8 *)  start_pulse_PWMUDB_sDB255_deadbandcounterdp_u0__D0_REG)
    #define start_pulse_DEADBAND_COUNT_PTR     ((reg8 *)   start_pulse_PWMUDB_sDB255_deadbandcounterdp_u0__D0_REG)
    #define start_pulse_DEADBAND_LSB_PTR       ((reg8 *)   start_pulse_PWMUDB_sDB255_deadbandcounterdp_u0__A0_REG)
    #define start_pulse_DEADBAND_LSB           (*(reg8 *)  start_pulse_PWMUDB_sDB255_deadbandcounterdp_u0__A0_REG)
#elif(start_pulse_DeadBandMode == start_pulse__B_PWM__DBM_2_4_CLOCKS)
    
    /* In Fixed Function Block these bits are in the control blocks control register */
    #if (start_pulse_UsingFixedFunction)
        #define start_pulse_DEADBAND_COUNT         (*(reg8 *)  start_pulse_PWMHW__CFG0)
        #define start_pulse_DEADBAND_COUNT_PTR     ((reg8 *)   start_pulse_PWMHW__CFG0)
        #define start_pulse_DEADBAND_COUNT_MASK    (uint8)((uint8)0x03u << start_pulse_DEADBAND_COUNT_SHIFT)

        /* As defined by the Register Map as DEADBAND_PERIOD[1:0] in CFG0 */
        #define start_pulse_DEADBAND_COUNT_SHIFT   (0x06u)
    #else
        /* Lower two bits of the added control register define the count 1-3 */
        #define start_pulse_DEADBAND_COUNT         (*(reg8 *)  start_pulse_PWMUDB_genblk7_dbctrlreg__CONTROL_REG)
        #define start_pulse_DEADBAND_COUNT_PTR     ((reg8 *)   start_pulse_PWMUDB_genblk7_dbctrlreg__CONTROL_REG)
        #define start_pulse_DEADBAND_COUNT_MASK    (uint8)((uint8)0x03u << start_pulse_DEADBAND_COUNT_SHIFT)

        /* As defined by the verilog implementation of the Control Register */
        #define start_pulse_DEADBAND_COUNT_SHIFT   (0x00u)
    #endif /* (start_pulse_UsingFixedFunction) */
#endif /* (start_pulse_DeadBandMode == start_pulse__B_PWM__DBM_256_CLOCKS) */



#if (start_pulse_UsingFixedFunction)
    #define start_pulse_STATUS                 (*(reg8 *) start_pulse_PWMHW__SR0)
    #define start_pulse_STATUS_PTR             ((reg8 *) start_pulse_PWMHW__SR0)
    #define start_pulse_STATUS_MASK            (*(reg8 *) start_pulse_PWMHW__SR0)
    #define start_pulse_STATUS_MASK_PTR        ((reg8 *) start_pulse_PWMHW__SR0)
    #define start_pulse_CONTROL                (*(reg8 *) start_pulse_PWMHW__CFG0)
    #define start_pulse_CONTROL_PTR            ((reg8 *) start_pulse_PWMHW__CFG0)
    #define start_pulse_CONTROL2               (*(reg8 *) start_pulse_PWMHW__CFG1)
    #define start_pulse_CONTROL3               (*(reg8 *) start_pulse_PWMHW__CFG2)
    #define start_pulse_GLOBAL_ENABLE          (*(reg8 *) start_pulse_PWMHW__PM_ACT_CFG)
    #define start_pulse_GLOBAL_ENABLE_PTR      ( (reg8 *) start_pulse_PWMHW__PM_ACT_CFG)
    #define start_pulse_GLOBAL_STBY_ENABLE     (*(reg8 *) start_pulse_PWMHW__PM_STBY_CFG)
    #define start_pulse_GLOBAL_STBY_ENABLE_PTR ( (reg8 *) start_pulse_PWMHW__PM_STBY_CFG)


    /***********************************
    *          Constants
    ***********************************/

    /* Fixed Function Block Chosen */
    #define start_pulse_BLOCK_EN_MASK          (start_pulse_PWMHW__PM_ACT_MSK)
    #define start_pulse_BLOCK_STBY_EN_MASK     (start_pulse_PWMHW__PM_STBY_MSK)
    
    /* Control Register definitions */
    #define start_pulse_CTRL_ENABLE_SHIFT      (0x00u)

    /* As defined by Register map as MODE_CFG bits in CFG2*/
    #define start_pulse_CTRL_CMPMODE1_SHIFT    (0x04u)

    /* As defined by Register map */
    #define start_pulse_CTRL_DEAD_TIME_SHIFT   (0x06u)  

    /* Fixed Function Block Only CFG register bit definitions */
    /*  Set to compare mode */
    #define start_pulse_CFG0_MODE              (0x02u)   

    /* Enable the block to run */
    #define start_pulse_CFG0_ENABLE            (0x01u)   
    
    /* As defined by Register map as DB bit in CFG0 */
    #define start_pulse_CFG0_DB                (0x20u)   

    /* Control Register Bit Masks */
    #define start_pulse_CTRL_ENABLE            (uint8)((uint8)0x01u << start_pulse_CTRL_ENABLE_SHIFT)
    #define start_pulse_CTRL_RESET             (uint8)((uint8)0x01u << start_pulse_CTRL_RESET_SHIFT)
    #define start_pulse_CTRL_CMPMODE2_MASK     (uint8)((uint8)0x07u << start_pulse_CTRL_CMPMODE2_SHIFT)
    #define start_pulse_CTRL_CMPMODE1_MASK     (uint8)((uint8)0x07u << start_pulse_CTRL_CMPMODE1_SHIFT)

    /* Control2 Register Bit Masks */
    /* As defined in Register Map, Part of the TMRX_CFG1 register */
    #define start_pulse_CTRL2_IRQ_SEL_SHIFT    (0x00u)
    #define start_pulse_CTRL2_IRQ_SEL          (uint8)((uint8)0x01u << start_pulse_CTRL2_IRQ_SEL_SHIFT)

    /* Status Register Bit Locations */
    /* As defined by Register map as TC in SR0 */
    #define start_pulse_STATUS_TC_SHIFT        (0x07u)   
    
    /* As defined by the Register map as CAP_CMP in SR0 */
    #define start_pulse_STATUS_CMP1_SHIFT      (0x06u)   

    /* Status Register Interrupt Enable Bit Locations */
    #define start_pulse_STATUS_KILL_INT_EN_MASK_SHIFT          (0x00u)
    #define start_pulse_STATUS_TC_INT_EN_MASK_SHIFT            (start_pulse_STATUS_TC_SHIFT - 4u)
    #define start_pulse_STATUS_CMP2_INT_EN_MASK_SHIFT          (0x00u)
    #define start_pulse_STATUS_CMP1_INT_EN_MASK_SHIFT          (start_pulse_STATUS_CMP1_SHIFT - 4u)

    /* Status Register Bit Masks */
    #define start_pulse_STATUS_TC              (uint8)((uint8)0x01u << start_pulse_STATUS_TC_SHIFT)
    #define start_pulse_STATUS_CMP1            (uint8)((uint8)0x01u << start_pulse_STATUS_CMP1_SHIFT)

    /* Status Register Interrupt Bit Masks */
    #define start_pulse_STATUS_TC_INT_EN_MASK              (uint8)((uint8)start_pulse_STATUS_TC >> 4u)
    #define start_pulse_STATUS_CMP1_INT_EN_MASK            (uint8)((uint8)start_pulse_STATUS_CMP1 >> 4u)

    /*RT1 Synch Constants */
    #define start_pulse_RT1_SHIFT             (0x04u)

    /* Sync TC and CMP bit masks */
    #define start_pulse_RT1_MASK              (uint8)((uint8)0x03u << start_pulse_RT1_SHIFT)
    #define start_pulse_SYNC                  (uint8)((uint8)0x03u << start_pulse_RT1_SHIFT)
    #define start_pulse_SYNCDSI_SHIFT         (0x00u)

    /* Sync all DSI inputs */
    #define start_pulse_SYNCDSI_MASK          (uint8)((uint8)0x0Fu << start_pulse_SYNCDSI_SHIFT)

    /* Sync all DSI inputs */
    #define start_pulse_SYNCDSI_EN            (uint8)((uint8)0x0Fu << start_pulse_SYNCDSI_SHIFT)


#else
    #define start_pulse_STATUS                (*(reg8 *)   start_pulse_PWMUDB_genblk8_stsreg__STATUS_REG )
    #define start_pulse_STATUS_PTR            ((reg8 *)    start_pulse_PWMUDB_genblk8_stsreg__STATUS_REG )
    #define start_pulse_STATUS_MASK           (*(reg8 *)   start_pulse_PWMUDB_genblk8_stsreg__MASK_REG)
    #define start_pulse_STATUS_MASK_PTR       ((reg8 *)    start_pulse_PWMUDB_genblk8_stsreg__MASK_REG)
    #define start_pulse_STATUS_AUX_CTRL       (*(reg8 *)   start_pulse_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG)
    #define start_pulse_CONTROL               (*(reg8 *)   start_pulse_PWMUDB_genblk1_ctrlreg__CONTROL_REG)
    #define start_pulse_CONTROL_PTR           ((reg8 *)    start_pulse_PWMUDB_genblk1_ctrlreg__CONTROL_REG)


    /***********************************
    *          Constants
    ***********************************/

    /* Control Register bit definitions */
    #define start_pulse_CTRL_ENABLE_SHIFT      (0x07u)
    #define start_pulse_CTRL_RESET_SHIFT       (0x06u)
    #define start_pulse_CTRL_CMPMODE2_SHIFT    (0x03u)
    #define start_pulse_CTRL_CMPMODE1_SHIFT    (0x00u)
    #define start_pulse_CTRL_DEAD_TIME_SHIFT   (0x00u)   /* No Shift Needed for UDB block */
    
    /* Control Register Bit Masks */
    #define start_pulse_CTRL_ENABLE            (uint8)((uint8)0x01u << start_pulse_CTRL_ENABLE_SHIFT)
    #define start_pulse_CTRL_RESET             (uint8)((uint8)0x01u << start_pulse_CTRL_RESET_SHIFT)
    #define start_pulse_CTRL_CMPMODE2_MASK     (uint8)((uint8)0x07u << start_pulse_CTRL_CMPMODE2_SHIFT)
    #define start_pulse_CTRL_CMPMODE1_MASK     (uint8)((uint8)0x07u << start_pulse_CTRL_CMPMODE1_SHIFT)

    /* Status Register Bit Locations */
    #define start_pulse_STATUS_KILL_SHIFT          (0x05u)
    #define start_pulse_STATUS_FIFONEMPTY_SHIFT    (0x04u)
    #define start_pulse_STATUS_FIFOFULL_SHIFT      (0x03u)
    #define start_pulse_STATUS_TC_SHIFT            (0x02u)
    #define start_pulse_STATUS_CMP2_SHIFT          (0x01u)
    #define start_pulse_STATUS_CMP1_SHIFT          (0x00u)

    /* Status Register Interrupt Enable Bit Locations - UDB Status Interrupt Mask match Status Bit Locations*/
    #define start_pulse_STATUS_KILL_INT_EN_MASK_SHIFT          (start_pulse_STATUS_KILL_SHIFT)
    #define start_pulse_STATUS_FIFONEMPTY_INT_EN_MASK_SHIFT    (start_pulse_STATUS_FIFONEMPTY_SHIFT)
    #define start_pulse_STATUS_FIFOFULL_INT_EN_MASK_SHIFT      (start_pulse_STATUS_FIFOFULL_SHIFT)
    #define start_pulse_STATUS_TC_INT_EN_MASK_SHIFT            (start_pulse_STATUS_TC_SHIFT)
    #define start_pulse_STATUS_CMP2_INT_EN_MASK_SHIFT          (start_pulse_STATUS_CMP2_SHIFT)
    #define start_pulse_STATUS_CMP1_INT_EN_MASK_SHIFT          (start_pulse_STATUS_CMP1_SHIFT)

    /* Status Register Bit Masks */
    #define start_pulse_STATUS_KILL            (uint8)((uint8)0x00u << start_pulse_STATUS_KILL_SHIFT )
    #define start_pulse_STATUS_FIFOFULL        (uint8)((uint8)0x01u << start_pulse_STATUS_FIFOFULL_SHIFT)
    #define start_pulse_STATUS_FIFONEMPTY      (uint8)((uint8)0x01u << start_pulse_STATUS_FIFONEMPTY_SHIFT)
    #define start_pulse_STATUS_TC              (uint8)((uint8)0x01u << start_pulse_STATUS_TC_SHIFT)
    #define start_pulse_STATUS_CMP2            (uint8)((uint8)0x01u << start_pulse_STATUS_CMP2_SHIFT)
    #define start_pulse_STATUS_CMP1            (uint8)((uint8)0x01u << start_pulse_STATUS_CMP1_SHIFT)

    /* Status Register Interrupt Bit Masks  - UDB Status Interrupt Mask match Status Bit Locations */
    #define start_pulse_STATUS_KILL_INT_EN_MASK            (start_pulse_STATUS_KILL)
    #define start_pulse_STATUS_FIFOFULL_INT_EN_MASK        (start_pulse_STATUS_FIFOFULL)
    #define start_pulse_STATUS_FIFONEMPTY_INT_EN_MASK      (start_pulse_STATUS_FIFONEMPTY)
    #define start_pulse_STATUS_TC_INT_EN_MASK              (start_pulse_STATUS_TC)
    #define start_pulse_STATUS_CMP2_INT_EN_MASK            (start_pulse_STATUS_CMP2)
    #define start_pulse_STATUS_CMP1_INT_EN_MASK            (start_pulse_STATUS_CMP1)

    /* Datapath Auxillary Control Register bit definitions */
    #define start_pulse_AUX_CTRL_FIFO0_CLR         (0x01u)
    #define start_pulse_AUX_CTRL_FIFO1_CLR         (0x02u)
    #define start_pulse_AUX_CTRL_FIFO0_LVL         (0x04u)
    #define start_pulse_AUX_CTRL_FIFO1_LVL         (0x08u)
    #define start_pulse_STATUS_ACTL_INT_EN_MASK    (0x10u) /* As defined for the ACTL Register */
#endif /* start_pulse_UsingFixedFunction */

#endif  /* CY_PWM_start_pulse_H */


/* [] END OF FILE */
