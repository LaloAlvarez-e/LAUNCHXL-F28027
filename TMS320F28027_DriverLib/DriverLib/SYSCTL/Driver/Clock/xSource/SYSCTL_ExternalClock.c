/**
 *
 * @file SYSCTL_ExternalClock.c
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
#include "DriverLib/SYSCTL/Driver/Clock/xHeader/SYSCTL_ExternalClock.h"

#include "DriverLib/SYSCTL/Driver/Oscillator/xHeader/SYSCTL_ExternalInput.h"
#include "DriverLib/SYSCTL/Driver/Oscillator/xHeader/SYSCTL_ExternalOsc.h"

void SYSCTL__vSetExternalClockSource(SYSCTL_nEXTCLK_SRC enClockSourceArg)
{
    switch (enClockSourceArg)
    {
    case SYSCTL_enEXTCLK_SRC_INOSC:
        SYSCTL__vSetExternalInputPowerState(SYSCTL_enSTATE_ON);
        SYSCTL__vSetExternalOscPowerState(SYSCTL_enSTATE_OFF);
        break;
    case SYSCTL_enEXTCLK_SRC_EXTOSC:
        SYSCTL__vSetExternalOscPowerState(SYSCTL_enSTATE_ON);
        SYSCTL__vSetExternalInputPowerState(SYSCTL_enSTATE_OFF);
        break;
    default:
        SYSCTL__vSetExternalInputPowerState(SYSCTL_enSTATE_OFF);
        SYSCTL__vSetExternalOscPowerState(SYSCTL_enSTATE_OFF);
        break;
    }
}

SYSCTL_nEXTCLK_SRC SYSCTL__enGetExternalClockSource(void)
{
    SYSCTL_nSTATE enInputStateReg;
    SYSCTL_nSTATE enOscStateReg;
    SYSCTL_nEXTCLK_SRC enClockReg;

    enInputStateReg = SYSCTL__enGetExternalInputPowerState();
    enOscStateReg = SYSCTL__enGetExternalOscPowerState();


    if((SYSCTL_enSTATE_OFF == enInputStateReg) && (SYSCTL_enSTATE_OFF == enOscStateReg))
    {
        enClockReg = SYSCTL_enEXTCLK_SRC_NONE;
    }
    else if((SYSCTL_enSTATE_ON == enInputStateReg) && (SYSCTL_enSTATE_ON == enOscStateReg))
    {
        enClockReg = SYSCTL_enEXTCLK_SRC_NONE;
    }
    else if(SYSCTL_enSTATE_ON == enInputStateReg)
    {
        enClockReg = SYSCTL_enEXTCLK_SRC_INOSC;
    }
    else if(SYSCTL_enSTATE_ON == enOscStateReg)
    {
        enClockReg = SYSCTL_enEXTCLK_SRC_EXTOSC;
    }
    return (enClockReg);
}

uint32_t SYSCTL__u32GetExternalClockFrequency(void)
{
    uint32_t u32FrequencyReg;
    SYSCTL_nEXTCLK_SRC enCurrentSourceReg;

    enCurrentSourceReg = SYSCTL__enGetExternalClockSource();

    switch(enCurrentSourceReg)
    {
    case SYSCTL_enEXTCLK_SRC_NONE:
        u32FrequencyReg = 0U;
        break;
    case SYSCTL_enEXTCLK_SRC_INOSC:
        u32FrequencyReg = SYSCTL__u32GetExternalInputFrequency();
        break;
    case SYSCTL_enEXTCLK_SRC_EXTOSC:
        u32FrequencyReg = SYSCTL__u32GetExternalOscFrequency();
        break;
    default:
        u32FrequencyReg = 0U;
        break;
    }

    return (u32FrequencyReg);
}



