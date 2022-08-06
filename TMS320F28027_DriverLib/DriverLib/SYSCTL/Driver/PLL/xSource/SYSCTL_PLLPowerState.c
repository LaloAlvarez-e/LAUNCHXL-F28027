/**
 *
 * @file SYSCTL_PLLPowerState.c
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
#include "DriverLib/SYSCTL/Driver/PLL/xHeader/SYSCTL_PLLPowerState.h"
#include "DriverLib/SYSCTL/Driver/Intrinsics/SYSCTL_Intrinsics.h"
#include "DriverLib/SYSCTL/Peripheral/SYSCTL_Peripheral.h"

void SYSCTL__vSetPLLPowerState(SYSCTL_nSTATE enStateArg)
{
    SYSCTL_Register_t stRegister;
    uint16_t u16StateReg;

    if(SYSCTL_enSTATE_OFF == enStateArg)
    {
        u16StateReg = SYSCTL_PLLSTS_PLLOFF_OFF;
    }
    else
    {
        u16StateReg = SYSCTL_PLLSTS_PLLOFF_ON;
    }

    stRegister.u16Shift = SYSCTL_PLLSTS_R_PLLOFF_BIT;
    stRegister.u16Mask = SYSCTL_PLLSTS_PLLOFF_MASK;
    stRegister.uptrAddress = SYSCTL_PLLSTS_OFFSET;
    stRegister.u16Value = u16StateReg;
    SYSCTL__vWriteRegister(&stRegister);
}

SYSCTL_nSTATE SYSCTL__enGetPLLPowerState(void)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nSTATE enStateReg;
    uint16_t u16StateReg;

    stRegister.u16Shift = SYSCTL_PLLSTS_R_PLLOFF_BIT;
    stRegister.u16Mask = SYSCTL_PLLSTS_PLLOFF_MASK;
    stRegister.uptrAddress = SYSCTL_PLLSTS_OFFSET;
    u16StateReg = SYSCTL__u16ReadRegister(&stRegister);

    if(SYSCTL_PLLSTS_PLLOFF_OFF == u16StateReg)
    {
        enStateReg = SYSCTL_enSTATE_OFF;
    }
    else
    {
        enStateReg = SYSCTL_enSTATE_ON;
    }
    return (enStateReg);
}

