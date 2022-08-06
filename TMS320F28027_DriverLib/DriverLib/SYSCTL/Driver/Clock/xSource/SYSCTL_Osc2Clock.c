/**
 *
 * @file SYSCTL_Osc2Clock.c
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
#include "DriverLib/SYSCTL/Driver/Clock/xHeader/SYSCTL_Osc2Clock.h"
#include "DriverLib/SYSCTL/Driver/Intrinsics/SYSCTL_Intrinsics.h"
#include "DriverLib/SYSCTL/Peripheral/SYSCTL_Peripheral.h"

#include "DriverLib/SYSCTL/Driver/Clock/xHeader/SYSCTL_ExternalClock.h"
#include "DriverLib/SYSCTL/Driver/Oscillator/xHeader/SYSCTL_InternalOsc2.h"

void SYSCTL__vSetOsc2ClockSource(SYSCTL_nOSC2CLK_SRC enClockSourceArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nEXTCLK_SRC enExtSourceReg;

    switch(enClockSourceArg)
    {
    case SYSCTL_enOSC2CLK_SRC_INTOSC2:
        SYSCTL__vSetInternalOsc2PowerState(SYSCTL_enSTATE_ON);

        stRegister.u16Shift = SYSCTL_CLKCTL_R_OSCCLKSRC2SEL_BIT;
        stRegister.u16Mask = SYSCTL_CLKCTL_OSCCLKSRC2SEL_MASK;
        stRegister.uptrAddress = SYSCTL_CLKCTL_OFFSET;
        stRegister.u16Value = SYSCTL_CLKCTL_OSCCLKSRC2SEL_OSC2CLK;
        SYSCTL__vWriteRegister(&stRegister);
        break;
    case SYSCTL_enOSC2CLK_SRC_EXTCLK:
        stRegister.u16Shift = SYSCTL_CLKCTL_R_OSCCLKSRC2SEL_BIT;
        stRegister.u16Mask = SYSCTL_CLKCTL_OSCCLKSRC2SEL_MASK;
        stRegister.uptrAddress = SYSCTL_CLKCTL_OFFSET;
        stRegister.u16Value = SYSCTL_CLKCTL_R_OSCCLKSRC2SEL_EXTCLK;
        SYSCTL__vWriteRegister(&stRegister);
    case SYSCTL_enOSC2CLK_SRC_NONE:
        enExtSourceReg = SYSCTL__enGetExternalClockSource();
        if(SYSCTL_enEXTCLK_SRC_NONE == enExtSourceReg)
        {
            stRegister.u16Shift = SYSCTL_CLKCTL_R_OSCCLKSRC2SEL_BIT;
            stRegister.u16Mask = SYSCTL_CLKCTL_OSCCLKSRC2SEL_MASK;
            stRegister.uptrAddress = SYSCTL_CLKCTL_OFFSET;
            stRegister.u16Value = SYSCTL_CLKCTL_R_OSCCLKSRC2SEL_EXTCLK;
            SYSCTL__vWriteRegister(&stRegister);
        }
        else
        {
            stRegister.u16Shift = SYSCTL_CLKCTL_R_OSCCLKSRC2SEL_BIT;
            stRegister.u16Mask = SYSCTL_CLKCTL_OSCCLKSRC2SEL_MASK;
            stRegister.uptrAddress = SYSCTL_CLKCTL_OFFSET;
            stRegister.u16Value = SYSCTL_CLKCTL_R_OSCCLKSRC2SEL_EXTCLK;
            SYSCTL__vWriteRegister(&stRegister);

            SYSCTL__vSetInternalOsc2PowerState(SYSCTL_enSTATE_OFF);

            stRegister.u16Shift = SYSCTL_CLKCTL_R_OSCCLKSRC2SEL_BIT;
            stRegister.u16Mask = SYSCTL_CLKCTL_OSCCLKSRC2SEL_MASK;
            stRegister.uptrAddress = SYSCTL_CLKCTL_OFFSET;
            stRegister.u16Value = SYSCTL_CLKCTL_OSCCLKSRC2SEL_OSC2CLK;
            SYSCTL__vWriteRegister(&stRegister);
        }
    }
}

SYSCTL_nOSC2CLK_SRC SYSCTL__enGetOsc2ClockSource(void)
{
    SYSCTL_Register_t stRegister;
    uint16_t u16ClockSourceReg;
    SYSCTL_nSTATE enOsc2State;
    SYSCTL_nOSC2CLK_SRC enSourceReg;
    SYSCTL_nEXTCLK_SRC enExtSourceReg;

    stRegister.u16Shift = SYSCTL_CLKCTL_R_OSCCLKSRC2SEL_BIT;
    stRegister.u16Mask = SYSCTL_CLKCTL_OSCCLKSRC2SEL_MASK;
    stRegister.uptrAddress = SYSCTL_CLKCTL_OFFSET;
    u16ClockSourceReg = SYSCTL__u16ReadRegister(&stRegister);
    if(SYSCTL_CLKCTL_OSCCLKSRC2SEL_OSC2CLK == u16ClockSourceReg)
    {
        enOsc2State = SYSCTL__enGetInternalOsc2PowerState();
        if(SYSCTL_enSTATE_OFF == enOsc2State)
        {
            enSourceReg = SYSCTL_enOSC2CLK_SRC_NONE;
        }
        else
        {
            enSourceReg = SYSCTL_enOSC2CLK_SRC_INTOSC2;
        }
    }
    else
    {
        enExtSourceReg = SYSCTL__enGetExternalClockSource();
        if(SYSCTL_enEXTCLK_SRC_NONE == enExtSourceReg)
        {
            enSourceReg = SYSCTL_enOSC2CLK_SRC_NONE;
        }
        else
        {
            enSourceReg = SYSCTL_enOSC2CLK_SRC_EXTCLK;
        }
    }
    return (enSourceReg);
}

uint32_t SYSCTL__u32GetOsc2ClockFrequency(void)
{
    uint32_t u32FrequencyReg;
    SYSCTL_nOSC2CLK_SRC enCurrentSourceReg;

    enCurrentSourceReg = SYSCTL__enGetOsc2ClockSource();

    switch(enCurrentSourceReg)
    {
    case SYSCTL_enOSC2CLK_SRC_NONE:
        u32FrequencyReg = 0U;
        break;
    case SYSCTL_enOSC2CLK_SRC_EXTCLK:
        u32FrequencyReg = SYSCTL__u32GetExternalClockFrequency();
        break;
    case SYSCTL_enOSC2CLK_SRC_INTOSC2:
        u32FrequencyReg = SYSCTL__u32GetInternalOsc2Frequency();
        break;
    default:
        u32FrequencyReg = 0U;
        break;
    }

    return (u32FrequencyReg);
}


