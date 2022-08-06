/**
 *
 * @file SYSCTL_Osc1Clock.c
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
#include "DriverLib/SYSCTL/Driver/Clock/xHeader/SYSCTL_Osc1Clock.h"

#include "DriverLib/SYSCTL/Driver/Oscillator/xHeader/SYSCTL_InternalOsc1.h"

void SYSCTL__vSetOsc1ClockSource(SYSCTL_nOSC1CLK_SRC enClockSourceArg)
{
    if(SYSCTL_enOSC1CLK_SRC_NONE == enClockSourceArg)
    {
        SYSCTL__vSetInternalOsc1PowerState(SYSCTL_enSTATE_OFF);
    }
    else
    {
        SYSCTL__vSetInternalOsc1PowerState(SYSCTL_enSTATE_ON);
    }
}

SYSCTL_nOSC1CLK_SRC SYSCTL__enGetOsc1ClockSource(void)
{
    SYSCTL_nSTATE enOsc1State;
    SYSCTL_nOSC1CLK_SRC enSourceReg;

    enOsc1State = SYSCTL__enGetInternalOsc1PowerState();
    if(SYSCTL_enSTATE_OFF == enOsc1State)
    {
        enSourceReg = SYSCTL_enOSC1CLK_SRC_NONE;
    }
    else
    {
        enSourceReg = SYSCTL_enOSC1CLK_SRC_INTOSC1;
    }
    return (enSourceReg);
}



uint32_t SYSCTL__u32GetOsc1ClockFrequency(void)
{
    uint32_t u32FrequencyReg;
    SYSCTL_nOSC1CLK_SRC enCurrentSourceReg;

    enCurrentSourceReg = SYSCTL__enGetOsc1ClockSource();

    switch(enCurrentSourceReg)
    {
    case SYSCTL_enOSC1CLK_SRC_NONE:
        u32FrequencyReg = 0U;
        break;
    case SYSCTL_enOSC1CLK_SRC_INTOSC1:
        u32FrequencyReg = SYSCTL__u32GetInternalOsc1Frequency();
        break;
    default:
        u32FrequencyReg = 0U;
        break;
    }

    return (u32FrequencyReg);
}




