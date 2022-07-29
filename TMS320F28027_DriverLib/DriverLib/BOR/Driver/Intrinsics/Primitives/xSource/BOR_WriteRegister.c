/**
 *
 * @file BOR_WriteRegister.c
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
 * @verbatim 29 jul. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 29 jul. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/BOR/Driver/Intrinsics/Primitives/xHeader/BOR_WriteRegister.h"
#include "DriverLib/BOR/Peripheral/BOR_Peripheral.h"
#include "DriverLib/MCU/MCU.h"

void BOR__vWriteRegister(BOR_Register_t* pstModuleArg)
{
    uintptr_t uptrModuleBase;
    uptrModuleBase = BOR__uptrBlockBaseAddress();
    pstModuleArg->uptrAddress += uptrModuleBase;
    MCU__vWriteProtectedRegister_16Bits(pstModuleArg);
}



