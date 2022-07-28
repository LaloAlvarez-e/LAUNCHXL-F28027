/**
 *
 * @file PIE_WriteRegister.c
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
#include "DriverLib/PIE/Driver/Intrinsics/Primitives/xHeader/PIE_WriteRegister.h"
#include "DriverLib/PIE/Peripheral/PIE_Peripheral.h"
#include "DriverLib/MCU/MCU.h"

void PIE__vWriteRegister(PIE_Register_t* pstModuleArg)
{
    uintptr_t uptrModuleBase;
    uptrModuleBase = PIE__uptrBlockBaseAddress();
    pstModuleArg->uptrAddress += uptrModuleBase;
    MCU__vWriteRegister_16Bits(pstModuleArg);
}

void PIE_VECTOR__vWriteRegister(PIE_VECTOR_Register_t* pstModuleArg)
{
    uintptr_t uptrModuleBase;
    uptrModuleBase = PIE_VECTOR__uptrBlockBaseAddress();
    pstModuleArg->uptrAddress += uptrModuleBase;
    MCU__vWriteProtectedRegister_32Bits(pstModuleArg);
}



