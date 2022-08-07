/**
 *
 * @file SYSCTL_PLLLock.c
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
#include "DriverLib/SYSCTL/Driver/PLL/xHeader/SYSCTL_PLLLock.h"
#include "DriverLib/SYSCTL/Driver/Intrinsics/SYSCTL_Intrinsics.h"
#include "DriverLib/SYSCTL/Peripheral/SYSCTL_Peripheral.h"

SYSCTL_nLOCK SYSCTL__enGetPLLLockState(void)
{
    SYSCTL_Register_t stRegister;

    stRegister.u16Shift = SYSCTL_PLLSTS_R_PLLLOCKS_BIT;
    stRegister.u16Mask = SYSCTL_PLLSTS_PLLLOCKS_MASK;
    stRegister.uptrAddress = SYSCTL_PLLSTS_OFFSET;
    SYSCTL__u16ReadRegister(&stRegister);

    return ((SYSCTL_nLOCK) stRegister.u16Value);
}

void SYSCTL__vSetPLLLockPeriod(uint16_t u16PeriodArg)
{
    SYSCTL_Register_t stRegister;

    stRegister.u16Shift = SYSCTL_PLLLOCKPRD_R_PLLLOCKPRD_BIT;
    stRegister.u16Mask = SYSCTL_PLLLOCKPRD_PLLLOCKPRD_MASK;
    stRegister.uptrAddress = SYSCTL_PLLLOCKPRD_OFFSET;
    stRegister.u16Value = u16PeriodArg;
    SYSCTL__vWriteRegister(&stRegister);
}

uint16_t SYSCTL__u16GetPLLLockPeriod(void)
{
    SYSCTL_Register_t stRegister;

    stRegister.u16Shift = SYSCTL_PLLLOCKPRD_R_PLLLOCKPRD_BIT;
    stRegister.u16Mask = SYSCTL_PLLLOCKPRD_PLLLOCKPRD_MASK;
    stRegister.uptrAddress = SYSCTL_PLLLOCKPRD_OFFSET;
    SYSCTL__u16ReadRegister(&stRegister);

    return (stRegister.u16Value);
}


