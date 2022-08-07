/**
 *
 * @file SYSCTL_CPUTimer2Clock.c
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
#include "DriverLib/SYSCTL/Driver/ClockSignal/xHeader/SYSCTL_CPUTimer2Clock.h"
#include "DriverLib/SYSCTL/Driver/Intrinsics/SYSCTL_Intrinsics.h"
#include "DriverLib/SYSCTL/Peripheral/SYSCTL_Peripheral.h"

#include "DriverLib/SYSCTL/Driver/Clock/SYSCTL_Clock.h"
#include "DriverLib/SYSCTL/Driver/Oscillator/SYSCTL_Oscillator.h"
#include "DriverLib/SYSCTL/Driver/xHeader/SYSCTL_SystemClock.h"

void SYSCTL__vSetCPUTimer2ClockSource(SYSCTL_nTIMER2CLK_SRC enClockSourceArg)
{
    SYSCTL_Register_t stRegister;
    stRegister.u16Shift = SYSCTL_CLKCTL_R_TMR2CLKSRCSEL_BIT;
    stRegister.u16Mask = SYSCTL_CLKCTL_TMR2CLKSRCSEL_MASK;
    stRegister.uptrAddress = SYSCTL_CLKCTL_OFFSET;
    stRegister.u16Value = (uint16_t) enClockSourceArg;
    SYSCTL__vWriteRegister(&stRegister);
}

SYSCTL_nTIMER2CLK_SRC SYSCTL__enGetCPUTimer2ClockSource(void)
{
    SYSCTL_Register_t stRegister;

    stRegister.u16Shift = SYSCTL_CLKCTL_R_TMR2CLKSRCSEL_BIT;
    stRegister.u16Mask = SYSCTL_CLKCTL_TMR2CLKSRCSEL_MASK;
    stRegister.uptrAddress = SYSCTL_CLKCTL_OFFSET;
    SYSCTL__u16ReadRegister(&stRegister);
    return ((SYSCTL_nTIMER2CLK_SRC) stRegister.u16Value);
}

void SYSCTL__vSetCPUTimer2ClockDivisor(SYSCTL_nTIMER2CLK_DIV enClockDivisorArg)
{
    SYSCTL_Register_t stRegister;
    stRegister.u16Shift = SYSCTL_CLKCTL_R_TMR2CLKPRESCALE_BIT;
    stRegister.u16Mask = SYSCTL_CLKCTL_TMR2CLKPRESCALE_MASK;
    stRegister.uptrAddress = SYSCTL_CLKCTL_OFFSET;
    stRegister.u16Value = (uint16_t) enClockDivisorArg;
    SYSCTL__vWriteRegister(&stRegister);
}

SYSCTL_nTIMER2CLK_DIV SYSCTL__enGetCPUTimer2ClockDivisor(void)
{
    SYSCTL_Register_t stRegister;

    stRegister.u16Shift = SYSCTL_CLKCTL_R_TMR2CLKPRESCALE_BIT;
    stRegister.u16Mask = SYSCTL_CLKCTL_TMR2CLKPRESCALE_MASK;
    stRegister.uptrAddress = SYSCTL_CLKCTL_OFFSET;
    SYSCTL__u16ReadRegister(&stRegister);
    return ((SYSCTL_nTIMER2CLK_DIV) stRegister.u16Value);
}

void SYSCTL__vSetCPUTimer2ClockDivisorNum(uint16_t u16DivArg)
{
    uint16_t u16Count;

    if(0U != u16DivArg)
    {
        u16Count = 0U;
        u16DivArg >>= 1U;
        u16DivArg &= 0xFU;
        while(0UL != u16DivArg)
        {
            u16Count++;
            u16DivArg>>= 1U;
        }

        SYSCTL_Register_t stRegister;
        stRegister.u16Shift = SYSCTL_CLKCTL_R_TMR2CLKPRESCALE_BIT;
        stRegister.u16Mask = SYSCTL_CLKCTL_TMR2CLKPRESCALE_MASK;
        stRegister.uptrAddress = SYSCTL_CLKCTL_OFFSET;
        stRegister.u16Value = u16Count;
        SYSCTL__vWriteRegister(&stRegister);
    }
}

uint16_t SYSCTL__u16GetCPUTimer2ClockDivisor(void)
{
    SYSCTL_Register_t stRegister;
    uint16_t u16ValueReg;
    uint16_t u16DivisorReg;

    stRegister.u16Shift = SYSCTL_CLKCTL_R_TMR2CLKPRESCALE_BIT;
    stRegister.u16Mask = SYSCTL_CLKCTL_TMR2CLKPRESCALE_MASK;
    stRegister.uptrAddress = SYSCTL_CLKCTL_OFFSET;
    u16ValueReg = SYSCTL__u16ReadRegister(&stRegister);
    u16DivisorReg = 1U;
    u16DivisorReg <<= u16ValueReg;

    return (u16DivisorReg);
}

uint32_t SYSCTL__u32GetCPUTimer2ClockFrequency(void)
{
    uint32_t u32FrequencyReg;
    SYSCTL_nTIMER2CLK_SRC enCurrentSourceReg;
    uint16_t u16Divisor;

    enCurrentSourceReg = SYSCTL__enGetCPUTimer2ClockSource();
    u16Divisor = SYSCTL__u16GetCPUTimer2ClockDivisor();
    switch(enCurrentSourceReg)
    {
    case SYSCTL_enTIMER2CLK_SRC_SYSCLK:
        u32FrequencyReg = SYSCTL__u32GetSystemClockFrequency();
        break;
    case SYSCTL_enTIMER2CLK_SRC_EXTCLK:
        u32FrequencyReg = SYSCTL__u32GetExternalClockFrequency();
        u32FrequencyReg /= u16Divisor;
        break;
    case SYSCTL_enTIMER2CLK_SRC_OSC1CLK:
        u32FrequencyReg = SYSCTL__u32GetOsc1ClockFrequency();
        u32FrequencyReg /= u16Divisor;
        break;
    case SYSCTL_enTIMER2CLK_SRC_INTOSC2:
        u32FrequencyReg = SYSCTL__u32GetInternalOsc2Frequency();
        u32FrequencyReg /= u16Divisor;
        break;
    default:
        u32FrequencyReg = 0U;
        break;
    }
    return (u32FrequencyReg);
}

