/*******************************************************************************
* File Name: start_pulse_PM.c
* Version 3.30
*
* Description:
*  This file provides the power management source code to API for the
*  PWM.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "start_pulse.h"

static start_pulse_backupStruct start_pulse_backup;


/*******************************************************************************
* Function Name: start_pulse_SaveConfig
********************************************************************************
*
* Summary:
*  Saves the current user configuration of the component.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  start_pulse_backup:  Variables of this global structure are modified to
*  store the values of non retention configuration registers when Sleep() API is
*  called.
*
*******************************************************************************/
void start_pulse_SaveConfig(void) 
{

    #if(!start_pulse_UsingFixedFunction)
        #if(!start_pulse_PWMModeIsCenterAligned)
            start_pulse_backup.PWMPeriod = start_pulse_ReadPeriod();
        #endif /* (!start_pulse_PWMModeIsCenterAligned) */
        start_pulse_backup.PWMUdb = start_pulse_ReadCounter();
        #if (start_pulse_UseStatus)
            start_pulse_backup.InterruptMaskValue = start_pulse_STATUS_MASK;
        #endif /* (start_pulse_UseStatus) */

        #if(start_pulse_DeadBandMode == start_pulse__B_PWM__DBM_256_CLOCKS || \
            start_pulse_DeadBandMode == start_pulse__B_PWM__DBM_2_4_CLOCKS)
            start_pulse_backup.PWMdeadBandValue = start_pulse_ReadDeadTime();
        #endif /*  deadband count is either 2-4 clocks or 256 clocks */

        #if(start_pulse_KillModeMinTime)
             start_pulse_backup.PWMKillCounterPeriod = start_pulse_ReadKillTime();
        #endif /* (start_pulse_KillModeMinTime) */

        #if(start_pulse_UseControl)
            start_pulse_backup.PWMControlRegister = start_pulse_ReadControlRegister();
        #endif /* (start_pulse_UseControl) */
    #endif  /* (!start_pulse_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: start_pulse_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the current user configuration of the component.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  start_pulse_backup:  Variables of this global structure are used to
*  restore the values of non retention registers on wakeup from sleep mode.
*
*******************************************************************************/
void start_pulse_RestoreConfig(void) 
{
        #if(!start_pulse_UsingFixedFunction)
            #if(!start_pulse_PWMModeIsCenterAligned)
                start_pulse_WritePeriod(start_pulse_backup.PWMPeriod);
            #endif /* (!start_pulse_PWMModeIsCenterAligned) */

            start_pulse_WriteCounter(start_pulse_backup.PWMUdb);

            #if (start_pulse_UseStatus)
                start_pulse_STATUS_MASK = start_pulse_backup.InterruptMaskValue;
            #endif /* (start_pulse_UseStatus) */

            #if(start_pulse_DeadBandMode == start_pulse__B_PWM__DBM_256_CLOCKS || \
                start_pulse_DeadBandMode == start_pulse__B_PWM__DBM_2_4_CLOCKS)
                start_pulse_WriteDeadTime(start_pulse_backup.PWMdeadBandValue);
            #endif /* deadband count is either 2-4 clocks or 256 clocks */

            #if(start_pulse_KillModeMinTime)
                start_pulse_WriteKillTime(start_pulse_backup.PWMKillCounterPeriod);
            #endif /* (start_pulse_KillModeMinTime) */

            #if(start_pulse_UseControl)
                start_pulse_WriteControlRegister(start_pulse_backup.PWMControlRegister);
            #endif /* (start_pulse_UseControl) */
        #endif  /* (!start_pulse_UsingFixedFunction) */
    }


/*******************************************************************************
* Function Name: start_pulse_Sleep
********************************************************************************
*
* Summary:
*  Disables block's operation and saves the user configuration. Should be called
*  just prior to entering sleep.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  start_pulse_backup.PWMEnableState:  Is modified depending on the enable
*  state of the block before entering sleep mode.
*
*******************************************************************************/
void start_pulse_Sleep(void) 
{
    #if(start_pulse_UseControl)
        if(start_pulse_CTRL_ENABLE == (start_pulse_CONTROL & start_pulse_CTRL_ENABLE))
        {
            /*Component is enabled */
            start_pulse_backup.PWMEnableState = 1u;
        }
        else
        {
            /* Component is disabled */
            start_pulse_backup.PWMEnableState = 0u;
        }
    #endif /* (start_pulse_UseControl) */

    /* Stop component */
    start_pulse_Stop();

    /* Save registers configuration */
    start_pulse_SaveConfig();
}


/*******************************************************************************
* Function Name: start_pulse_Wakeup
********************************************************************************
*
* Summary:
*  Restores and enables the user configuration. Should be called just after
*  awaking from sleep.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  start_pulse_backup.pwmEnable:  Is used to restore the enable state of
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void start_pulse_Wakeup(void) 
{
     /* Restore registers values */
    start_pulse_RestoreConfig();

    if(start_pulse_backup.PWMEnableState != 0u)
    {
        /* Enable component's operation */
        start_pulse_Enable();
    } /* Do nothing if component's block was disabled before */

}


/* [] END OF FILE */
