/**
 *
 * @file DEVICE_WriteRegister.c
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
#include "DriverLib/DEVICE/Driver/Intrinsics/Primitives/xHeader/DEVICE_WriteRegister.h"
#include "DriverLib/DEVICE/Peripheral/DEVICE_Peripheral.h"
#include "DriverLib/MCU/MCU.h"

void DEVICE__vWriteRegister(DEVICE_Register_t* pstModuleArg)
{
    uintptr_t uptrModuleBase;
    uptrModuleBase = DEVICE__uptrBlockBaseAddress();
    pstModuleArg->uptrAddress += uptrModuleBase;
    MCU__vWriteRegister_16Bits(pstModuleArg);
}

void DEVICE_VECTOR__vWriteRegister(DEVICE_VECTOR_Register_t* pstModuleArg)
{
    uintptr_t uptrModuleBase;
    uptrModuleBase = DEVICE_VECTOR__uptrBlockBaseAddress();
    pstModuleArg->uptrAddress += uptrModuleBase;
    MCU__vWriteProtectedRegister_32Bits(pstModuleArg);
}



