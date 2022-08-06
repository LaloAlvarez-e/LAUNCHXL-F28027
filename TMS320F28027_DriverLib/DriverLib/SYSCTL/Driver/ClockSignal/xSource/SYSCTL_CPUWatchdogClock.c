/**
 *
 * @file SYSCTL_CPUWatchdogClock.c
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
 * @verbatim 6 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/SYSCTL/Driver/ClockSignal/xHeader/SYSCTL_CPUWatchdogClock.h"
#include "DriverLib/SYSCTL/Driver/Intrinsics/SYSCTL_Intrinsics.h"
#include "DriverLib/SYSCTL/Peripheral/SYSCTL_Peripheral.h"

#include "DriverLib/SYSCTL/Driver/Clock/SYSCTL_Clock.h"

void SYSCTL__vSetCPUWatchdogClockSource(SYSCTL_nWDTCLK_SRC enClockSourceArg)
{
    SYSCTL_Register_t stRegister;
    stRegister.u16Shift = SYSCTL_CLKCTL_R_WDCLKSRCSEL_BIT;
    stRegister.u16Mask = SYSCTL_CLKCTL_WDCLKSRCSEL_MASK;
    stRegister.uptrAddress = SYSCTL_CLKCTL_OFFSET;
    stRegister.u16Value = (uint16_t) enClockSourceArg;
    SYSCTL__vWriteRegister(&stRegister);
}

SYSCTL_nWDTCLK_SRC SYSCTL__enGetCPUWatchdogClockSource(void)
{
    SYSCTL_Register_t stRegister;

    stRegister.u16Shift = SYSCTL_CLKCTL_R_WDCLKSRCSEL_BIT;
    stRegister.u16Mask = SYSCTL_CLKCTL_WDCLKSRCSEL_MASK;
    stRegister.uptrAddress = SYSCTL_CLKCTL_OFFSET;
    SYSCTL__u16ReadRegister(&stRegister);
    return ((SYSCTL_nWDTCLK_SRC) stRegister.u16Value);
}

void SYSCTL__vSetCPUWatchdogClockOnHaltAction(SYSCTL_nONHALT enOnHaltArg)
{
    SYSCTL_Register_t stRegister;

    stRegister.u16Shift = SYSCTL_CLKCTL_R_WDHALTI_BIT;
    stRegister.u16Mask = SYSCTL_CLKCTL_WDHALTI_MASK;
    stRegister.uptrAddress = SYSCTL_CLKCTL_OFFSET;
    stRegister.u16Value = (uint16_t) enOnHaltArg;
    SYSCTL__vWriteRegister(&stRegister);
}

SYSCTL_nONHALT SYSCTL__enGetCPUWatchdogClockOnHaltAction(void)
{
    SYSCTL_Register_t stRegister;

    stRegister.u16Shift = SYSCTL_CLKCTL_R_WDHALTI_BIT;
    stRegister.u16Mask = SYSCTL_CLKCTL_WDHALTI_MASK;
    stRegister.uptrAddress = SYSCTL_CLKCTL_OFFSET;
    SYSCTL__u16ReadRegister(&stRegister);

    return ((SYSCTL_nONHALT) stRegister.u16Value);
}

uint32_t SYSCTL__u32GetCPUWatchdogClockFrequency(void)
{
    uint32_t u32FrequencyReg;
    SYSCTL_nWDTCLK_SRC enCurrentSourceReg;

    enCurrentSourceReg = SYSCTL__enGetCPUWatchdogClockSource();

    switch(enCurrentSourceReg)
    {
    case SYSCTL_enWDTCLK_SRC_OSC1CLK:
        u32FrequencyReg = SYSCTL__u32GetOsc1ClockFrequency();
        break;
    case SYSCTL_enWDTCLK_SRC_OSC2CLK:
        u32FrequencyReg = SYSCTL__u32GetOsc2ClockFrequency();
        break;
    default:
        u32FrequencyReg = 0U;
        break;
    }
    return (u32FrequencyReg);
}

