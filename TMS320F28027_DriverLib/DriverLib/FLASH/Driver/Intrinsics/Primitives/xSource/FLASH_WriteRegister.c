/**
 *
 * @file FLASH_WriteRegister.c
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
#include "DriverLib/FLASH/Driver/Intrinsics/Primitives/xHeader/FLASH_WriteRegister.h"
#include "DriverLib/FLASH/Peripheral/FLASH_Peripheral.h"
#include "DriverLib/MCU/MCU.h"

void FLASH__vWriteRegister(FLASH_Register_t* pstModuleArg)
{
    uintptr_t uptrModuleBase;
    uptrModuleBase = FLASH__uptrBlockBaseAddress();
    pstModuleArg->uptrAddress += uptrModuleBase;
    MCU__vWriteProtectedRegister_16Bits_RAM(pstModuleArg);
    MCU__vRepeatNoOperation(#8);
}

