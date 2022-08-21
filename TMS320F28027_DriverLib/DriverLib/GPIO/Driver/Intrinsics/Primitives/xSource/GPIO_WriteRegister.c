/**
 *
 * @file GPIO_WriteRegister.c
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
#include "DriverLib/GPIO/Driver/Intrinsics/Primitives/xHeader/GPIO_WriteRegister.h"
#include "DriverLib/GPIO/Peripheral/GPIO_Peripheral.h"
#include "DriverLib/MCU/MCU.h"

void GPIO__vWriteRegister(GPIO_nPORT enModuleArg, GPIO_Register_t* pstModuleArg)
{
    uintptr_t uptrModuleBase;
    uptrModuleBase = GPIO__uptrBlockBaseAddress(enModuleArg);
    pstModuleArg->uptrAddress += uptrModuleBase;
    MCU__vWriteRegister_32Bits(pstModuleArg);
}

void GPIO__vWriteProtectedRegister(GPIO_nPORT enModuleArg, GPIO_Register_t* pstModuleArg)
{
    uintptr_t uptrModuleBase;
    uptrModuleBase = GPIO__uptrBlockBaseAddress(enModuleArg);
    pstModuleArg->uptrAddress += uptrModuleBase;
    MCU__vWriteProtectedRegister_32Bits(pstModuleArg);
}

void GPIO_DATA__vWriteRegister(GPIO_nPORT enModuleArg, GPIO_Register_t* pstModuleArg)
{
    uintptr_t uptrModuleBase;
    uptrModuleBase = GPIO_DATA__uptrBlockBaseAddress(enModuleArg);
    pstModuleArg->uptrAddress += uptrModuleBase;
    MCU__vWriteRegister_32Bits(pstModuleArg);
}

void GPIO_CONTROL__vWriteRegister(GPIO_nPORT enModuleArg, GPIO_Register_t* pstModuleArg)
{
    uintptr_t uptrModuleBase;
    uptrModuleBase = GPIO_CONTROL__uptrBlockBaseAddress(enModuleArg);
    pstModuleArg->uptrAddress += uptrModuleBase;
    MCU__vWriteProtectedRegister_32Bits(pstModuleArg);
}


