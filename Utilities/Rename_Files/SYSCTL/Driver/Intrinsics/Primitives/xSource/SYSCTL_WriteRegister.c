/**
 *
 * @file SYSCTL_WriteRegister.c
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
#include "DriverLib/SYSCTL/Driver/Intrinsics/Primitives/xHeader/SYSCTL_WriteRegister.h"
#include "DriverLib/SYSCTL/Peripheral/SYSCTL_Peripheral.h"
#include "DriverLib/MCU/MCU.h"

void SYSCTL__vWriteRegister(SYSCTL_Register_t* pstModuleArg)
{
    uintptr_t uptrModuleBase;
    uptrModuleBase = SYSCTL__uptrBlockBaseAddress();
    pstModuleArg->uptrAddress += uptrModuleBase;
    MCU__vWriteRegister_16Bits(pstModuleArg);
}

void SYSCTL_VECTOR__vWriteRegister(SYSCTL_VECTOR_Register_t* pstModuleArg)
{
    uintptr_t uptrModuleBase;
    uptrModuleBase = SYSCTL_VECTOR__uptrBlockBaseAddress();
    pstModuleArg->uptrAddress += uptrModuleBase;
    MCU__vWriteProtectedRegister_32Bits(pstModuleArg);
}



