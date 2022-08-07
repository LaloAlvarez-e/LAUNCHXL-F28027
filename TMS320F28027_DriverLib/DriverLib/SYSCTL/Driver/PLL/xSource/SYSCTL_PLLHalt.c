/**
 *
 * @file SYSCTL_PLLHalt.c
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
#include "DriverLib/SYSCTL/Driver/PLL/xHeader/SYSCTL_PLLHalt.h"
#include "DriverLib/SYSCTL/Driver/Intrinsics/SYSCTL_Intrinsics.h"
#include "DriverLib/SYSCTL/Peripheral/SYSCTL_Peripheral.h"


void SYSCTL__vSetCPLLOnHaltAction(SYSCTL_nONHALT enOnHaltArg)
{
    SYSCTL_Register_t stRegister;
    uint32_t u16OnHaltReg;

    if(SYSCTL_enONHALT_OFF == enOnHaltArg)
    {
        u16OnHaltReg = SYSCTL_PLLSTS_NORMRDYE_ENA;
    }
    else
    {
        u16OnHaltReg = SYSCTL_PLLSTS_NORMRDYE_DIS;
    }

    stRegister.u16Shift = SYSCTL_PLLSTS_R_NORMRDYE_BIT;
    stRegister.u16Mask = SYSCTL_PLLSTS_NORMRDYE_MASK;
    stRegister.uptrAddress = SYSCTL_PLLSTS_OFFSET;
    stRegister.u16Value = u16OnHaltReg;
    SYSCTL__vWriteRegister(&stRegister);
}

SYSCTL_nONHALT SYSCTL__enGetCPLLOnHaltAction(void)
{
    SYSCTL_Register_t stRegister;
    uint32_t u16OnHaltReg;
    SYSCTL_nONHALT enOnHaltReg;

    stRegister.u16Shift = SYSCTL_PLLSTS_R_NORMRDYE_BIT;
    stRegister.u16Mask = SYSCTL_PLLSTS_NORMRDYE_MASK;
    stRegister.uptrAddress = SYSCTL_PLLSTS_OFFSET;
    u16OnHaltReg = SYSCTL__u16ReadRegister(&stRegister);

    if(SYSCTL_PLLSTS_NORMRDYE_DIS == u16OnHaltReg)
    {
        enOnHaltReg = SYSCTL_enONHALT_CONTINUE;
    }
    else
    {
        enOnHaltReg = SYSCTL_enONHALT_OFF;
    }

    return (enOnHaltReg);
}

