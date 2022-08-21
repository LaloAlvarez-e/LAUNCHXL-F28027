/**
 *
 * @file XINT_WriteRegister.c
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
#include "DriverLib/XINT/Driver/Intrinsics/Primitives/xHeader/XINT_WriteRegister.h"
#include "DriverLib/XINT/Peripheral/XINT_Peripheral.h"
#include "DriverLib/MCU/MCU.h"

void XINT__vWriteRegister(XINT_nMODULE enModuleArg, XINT_Register_t* pstModuleArg)
{
    uintptr_t uptrModuleBase;
    uptrModuleBase = XINT__uptrBlockBaseAddress(enModuleArg);
    pstModuleArg->uptrAddress += uptrModuleBase;
    MCU__vWriteRegister_16Bits(pstModuleArg);
}

void XINT__vWriteProtectedRegister(XINT_nMODULE enModuleArg, XINT_Register_t* pstModuleArg)
{
    uintptr_t uptrModuleBase;
    uptrModuleBase = XINT__uptrBlockBaseAddress(enModuleArg);
    pstModuleArg->uptrAddress += uptrModuleBase;
    MCU__vWriteProtectedRegister_16Bits(pstModuleArg);
}

