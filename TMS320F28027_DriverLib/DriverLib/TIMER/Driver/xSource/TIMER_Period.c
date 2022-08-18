/**
 *
 * @file TIMER_Period.c
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
 * @verbatim 12 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 12 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/TIMER/Driver/xHeader/TIMER_Period.h"

#include "DriverLib/TIMER/Driver/xHeader/TIMER_Prescaler.h"
#include "DriverLib/SYSCTL/Driver/SYSCTL_Driver.h"
#include "DriverLib/TIMER/Driver/Intrinsics/TIMER_Intrinsics.h"
#include "DriverLib/TIMER/Peripheral/TIMER_Peripheral.h"

void TIMER__vSetPeriod(TIMER_nMODULE enModuleArg, uint32_t u32PeriodArg)
{
    TIMER_Register32Bits_t stRegister;

    stRegister.u16Shift = TIMER_PRD_R_PRD_BIT;
    stRegister.u32Mask = TIMER_PRD_PRD_MASK;
    stRegister.uptrAddress = TIMER_PRD_OFFSET;
    stRegister.u32Value = u32PeriodArg;
    TIMER__vWriteRegister32Bits(enModuleArg, &stRegister);
}

uint32_t TIMER__u32GetPeriod(TIMER_nMODULE enModuleArg)
{
    TIMER_Register32Bits_t stRegister;

    stRegister.u16Shift = TIMER_PRD_R_PRD_BIT;
    stRegister.u32Mask = TIMER_PRD_PRD_MASK;
    stRegister.uptrAddress = TIMER_PRD_OFFSET;
    TIMER__u32ReadRegister(enModuleArg, &stRegister);
    return (stRegister.u32Value);
}


uint64_t TIMER__u64GetPeriodUs(TIMER_nMODULE enModuleArg)
{
    uint64_t u64PeriodReg;
    uint32_t u32Frequency;
    uint16_t u16DivisorReg;

    if(TIMER_enMODULE_2 == enModuleArg)
    {
        u32Frequency = SYSCTL__u32GetCPUTimer2ClockFrequency();
    }
    else
    {
        u32Frequency = SYSCTL__u32GetSystemClockFrequency();
    }


    u64PeriodReg = (uint64_t) TIMER__u32GetPeriod(enModuleArg);
    u16DivisorReg = TIMER__u16GetPrescalerValue(enModuleArg);
    u16DivisorReg += 1U;
    u64PeriodReg *= u16DivisorReg;
    u64PeriodReg *= 1000000ULL;
    u64PeriodReg /= u32Frequency;

    return (u64PeriodReg);
}

uint64_t TIMER__u64SetPeriodUs(TIMER_nMODULE enModuleArg, uint32_t u32PeriodUsArg)
{
    uint32_t u32Frequency;
    uint32_t u32Divisor;
    uint32_t u32Mod;
    uint64_t u64Ticks;
    uint64_t u64TicksTemp;
    uint64_t u64ActualPeriod;

    if(TIMER_enMODULE_2 == enModuleArg)
    {
        u32Frequency = SYSCTL__u32GetCPUTimer2ClockFrequency();
    }
    else
    {
        u32Frequency = SYSCTL__u32GetSystemClockFrequency();
    }

    u32Divisor = 0U;
    u64Ticks = (uint64_t) u32PeriodUsArg;
    u64Ticks *= (uint64_t) u32Frequency;
    u64Ticks /= 1000000ULL;

    do
    {
        u32Divisor++;
        u64TicksTemp = u64Ticks / u32Divisor;
        u32Mod = u64Ticks % u32Divisor;
    }while(((0xFFFFFFFFULL < u64TicksTemp) || (0U != u32Mod)) && (256U <= u32Divisor));

    TIMER__vSetPeriod(enModuleArg, u64TicksTemp);
    TIMER__vSetPrescalerValue(enModuleArg, u32Divisor - 1U);

    u64ActualPeriod = TIMER__u64GetPeriodUs(enModuleArg);

    return (u64ActualPeriod);
}





