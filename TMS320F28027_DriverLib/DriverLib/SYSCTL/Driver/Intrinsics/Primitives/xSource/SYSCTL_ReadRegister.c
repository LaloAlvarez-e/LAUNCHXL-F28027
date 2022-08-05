/**
 *
 * @file SYSCTL_ReadRegister.c
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
 * @verbatim 22 jul. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jul. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/SYSCTL/Driver/Intrinsics/Primitives/xHeader/SYSCTL_ReadRegister.h"
#include "DriverLib/SYSCTL/Peripheral/SYSCTL_Peripheral.h"
#include "DriverLib/MCU/MCU.h"

uint16_t SYSCTL__u16ReadRegister(SYSCTL_Register_t* pstModuleArg)
{
    uintptr_t uptrModuleBase;
    uint16_t u16RegisterValue;
    uptrModuleBase = SYSCTL__uptrBlockBaseAddress();
    pstModuleArg->uptrAddress += uptrModuleBase;
    u16RegisterValue = MCU__u16ReadRegister(pstModuleArg);
    return (u16RegisterValue);
}

