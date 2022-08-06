/**
 *
 * @file SYSCTL_OscClock.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 5 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/SYSCTL/Driver/ClockSignal/xHeader/SYSCTL_OscClock.h"
#include "DriverLib/SYSCTL/Driver/Intrinsics/SYSCTL_Intrinsics.h"
#include "DriverLib/SYSCTL/Peripheral/SYSCTL_Peripheral.h"

#include "DriverLib/SYSCTL/Driver/Clock/SYSCTL_Clock.h"

void SYSCTL__vSetOscClockSource(SYSCTL_nOSCCLK_SRC enClockSourceArg)
{
    SYSCTL_Register_t stRegister;
    stRegister.u16Shift = SYSCTL_CLKCTL_R_OSCCLKSRCSEL_BIT;
    stRegister.u16Mask = SYSCTL_CLKCTL_OSCCLKSRCSEL_MASK;
    stRegister.uptrAddress = SYSCTL_CLKCTL_OFFSET;
    stRegister.u16Value = (uint16_t) enClockSourceArg;
    SYSCTL__vWriteRegister(&stRegister);
}

SYSCTL_nOSCCLK_SRC SYSCTL__enGetOscClockSource(void)
{
    SYSCTL_Register_t stRegister;

    stRegister.u16Shift = SYSCTL_CLKCTL_R_OSCCLKSRCSEL_BIT;
    stRegister.u16Mask = SYSCTL_CLKCTL_OSCCLKSRCSEL_MASK;
    stRegister.uptrAddress = SYSCTL_CLKCTL_OFFSET;
    SYSCTL__u16ReadRegister(&stRegister);
    return ((SYSCTL_nOSCCLK_SRC) stRegister.u16Value);
}


void SYSCTL__vSetOscClockPowerState(SYSCTL_nSTATE enStateArg)
{
    SYSCTL_Register_t stRegister;
    uint16_t u16StateReg;

    if(SYSCTL_enSTATE_OFF == enStateArg)
    {
        u16StateReg = SYSCTL_PLLSTS_OSCOFF_OFF;
    }
    else
    {
        u16StateReg = SYSCTL_PLLSTS_OSCOFF_ON;
    }

    stRegister.u16Shift = SYSCTL_PLLSTS_R_OSCOFF_BIT;
    stRegister.u16Mask = SYSCTL_PLLSTS_OSCOFF_MASK;
    stRegister.uptrAddress = SYSCTL_PLLSTS_OFFSET;
    stRegister.u16Value = u16StateReg;
    SYSCTL__vWriteRegister(&stRegister);
}

SYSCTL_nSTATE SYSCTL__enGetOscClockPowerState(void)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nSTATE enStateReg;
    uint16_t u16StateReg;

    stRegister.u16Shift = SYSCTL_PLLSTS_R_OSCOFF_BIT;
    stRegister.u16Mask = SYSCTL_PLLSTS_OSCOFF_MASK;
    stRegister.uptrAddress = SYSCTL_PLLSTS_OFFSET;
    u16StateReg = SYSCTL__u16ReadRegister(&stRegister);

    if(SYSCTL_PLLSTS_OSCOFF_OFF == u16StateReg)
    {
        enStateReg = SYSCTL_enSTATE_OFF;
    }
    else
    {
        enStateReg = SYSCTL_enSTATE_ON;
    }
    return (enStateReg);
}

void SYSCTL__vSetOscClockErrorDetectionState(SYSCTL_nSTATE enStateArg)
{
    SYSCTL_Register_t stRegister;
    uint16_t u16DetectionStateReg;

    if(SYSCTL_enSTATE_OFF == enStateArg)
    {
        u16DetectionStateReg = SYSCTL_PLLSTS_MCLKOFF_OFF;
    }
    else
    {
        u16DetectionStateReg = SYSCTL_PLLSTS_MCLKOFF_ON;
    }

    stRegister.u16Shift = SYSCTL_PLLSTS_R_MCLKOFF_BIT;
    stRegister.u16Mask = SYSCTL_PLLSTS_MCLKOFF_MASK;
    stRegister.uptrAddress = SYSCTL_PLLSTS_OFFSET;
    stRegister.u16Value = u16DetectionStateReg;
    SYSCTL__vWriteRegister(&stRegister);
}

void SYSCTL__vEnableOscClockErrorDetection(void)
{
    SYSCTL__vSetOscClockErrorDetectionState(SYSCTL_enSTATE_ON);
}

void SYSCTL__vDisableOscClockErrorDetection(void)
{
    SYSCTL__vSetOscClockErrorDetectionState(SYSCTL_enSTATE_OFF);
}

SYSCTL_nSTATE SYSCTL__enGetOscClockErrorDetectionState(void)
{
    SYSCTL_Register_t stRegister;
    uint16_t u16DetectionStateReg;
    SYSCTL_nSTATE enDetectionStateReg;

    stRegister.u16Shift = SYSCTL_PLLSTS_R_MCLKOFF_BIT;
    stRegister.u16Mask = SYSCTL_PLLSTS_MCLKOFF_MASK;
    stRegister.uptrAddress = SYSCTL_PLLSTS_OFFSET;
    u16DetectionStateReg = SYSCTL__u16ReadRegister(&stRegister);

    if(SYSCTL_PLLSTS_MCLKOFF_OFF == u16DetectionStateReg)
    {
        enDetectionStateReg = SYSCTL_enSTATE_OFF;
    }
    else
    {
        enDetectionStateReg = SYSCTL_enSTATE_ON;
    }

    return (enDetectionStateReg);
}

void SYSCTL__enClearOscClockErrorDetectionStatus(void)
{
    SYSCTL_Register_t stRegister;
    stRegister.u16Shift = SYSCTL_PLLSTS_R_MCLKCLR_BIT;
    stRegister.u16Mask = SYSCTL_PLLSTS_MCLKCLR_MASK;
    stRegister.uptrAddress = SYSCTL_PLLSTS_OFFSET;
    stRegister.u16Value = SYSCTL_PLLSTS_MCLKCLR_CLEAR;
    SYSCTL__vWriteRegister(&stRegister);
}


SYSCTL_nSTATUS SYSCTL__enGetOscClockErrorDetectionStatus(void)
{
    SYSCTL_Register_t stRegister;
    uint16_t u16DetectionStatusReg;
    SYSCTL_nSTATUS enDetectionStatusReg;

    stRegister.u16Shift = SYSCTL_PLLSTS_R_MCLKSTS_BIT;
    stRegister.u16Mask = SYSCTL_PLLSTS_MCLKSTS_MASK;
    stRegister.uptrAddress = SYSCTL_PLLSTS_OFFSET;
    u16DetectionStatusReg = SYSCTL__u16ReadRegister(&stRegister);

    if(SYSCTL_PLLSTS_MCLKSTS_ERROR == u16DetectionStatusReg)
    {
        enDetectionStatusReg = SYSCTL_enSTATUS_ERROR;
    }
    else
    {
        enDetectionStatusReg = SYSCTL_enSTATUS_OK;
    }

    return (enDetectionStatusReg);
}

uint32_t SYSCTL__u32GetOscClockFrequency(void)
{
    uint32_t u32FrequencyReg;
    SYSCTL_nOSCCLK_SRC enCurrentSourceReg;

    enCurrentSourceReg = SYSCTL__enGetOscClockSource();

    switch(enCurrentSourceReg)
    {
    case SYSCTL_enOSCCLK_SRC_OSC1CLK:
        u32FrequencyReg = SYSCTL__u32GetOsc1ClockFrequency();
        break;
    case SYSCTL_enOSCCLK_SRC_OSC2CLK:
        u32FrequencyReg = SYSCTL__u32GetOsc2ClockFrequency();
        break;
    default:
        u32FrequencyReg = 0U;
        break;
    }
    return (u32FrequencyReg);
}





