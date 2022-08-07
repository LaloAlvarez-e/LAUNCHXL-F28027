/**
 *
 * @file SYSCTL_PLLMultiplier.c
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
#include "DriverLib/SYSCTL/Driver/PLL/xHeader/SYSCTL_PLLMultiplier.h"
#include "DriverLib/SYSCTL/Driver/Intrinsics/SYSCTL_Intrinsics.h"
#include "DriverLib/SYSCTL/Peripheral/SYSCTL_Peripheral.h"

void SYSCTL__vSetPLLMultiplier(SYSCTL_nPLL_MULTIPLIER enPLLMultiplierArg)
{
    SYSCTL_Register_t stRegister;
    stRegister.u16Shift = SYSCTL_PLLCR_R_DIV_BIT;
    stRegister.u16Mask = SYSCTL_PLLCR_DIV_MASK;
    stRegister.uptrAddress = SYSCTL_PLLCR_OFFSET;
    stRegister.u16Value = (uint16_t) enPLLMultiplierArg;
    SYSCTL__vWriteRegister(&stRegister);
}

SYSCTL_nPLL_MULTIPLIER SYSCTL__enGetPLLMultiplier(void)
{
    SYSCTL_Register_t stRegister;

    stRegister.u16Shift = SYSCTL_PLLCR_R_DIV_BIT;
    stRegister.u16Mask = SYSCTL_PLLCR_DIV_MASK;
    stRegister.uptrAddress = SYSCTL_PLLCR_OFFSET;
    SYSCTL__u16ReadRegister(&stRegister);
    return ((SYSCTL_nPLL_MULTIPLIER) stRegister.u16Value);
}

void SYSCTL__vSetPLLMultiplierNum(uint16_t u16MultiplierArg)
{
    SYSCTL_Register_t stRegister;
    stRegister.u16Shift = SYSCTL_PLLCR_R_DIV_BIT;
    stRegister.u16Mask = SYSCTL_PLLCR_DIV_MASK;
    stRegister.uptrAddress = SYSCTL_PLLCR_OFFSET;
    stRegister.u16Value = u16MultiplierArg;
    SYSCTL__vWriteRegister(&stRegister);
}

uint16_t SYSCTL__u16GetPLLMultiplier(void)
{
    SYSCTL_Register_t stRegister;
    uint16_t u16ValueReg;

    stRegister.u16Shift = SYSCTL_PLLCR_R_DIV_BIT;
    stRegister.u16Mask = SYSCTL_PLLCR_DIV_MASK;
    stRegister.uptrAddress = SYSCTL_PLLCR_OFFSET;
    u16ValueReg = SYSCTL__u16ReadRegister(&stRegister);
    if(0U == u16ValueReg)
    {
        u16ValueReg = 1U;
    }

    return (u16ValueReg);
}






