/**
 *
 * @file ECAP_WriteRegister.c
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
#include "DriverLib/ECAP/Driver/Intrinsics/Primitives/xHeader/ECAP_WriteRegister.h"
#include "DriverLib/ECAP/Peripheral/ECAP_Peripheral.h"
#include "DriverLib/MCU/MCU.h"

void ECAP__vWriteRegister_16Bits(ECAP_nMODULE enModuleArg, ECAP_Register16Bits_t* pstModuleArg)
{
    uintptr_t uptrModuleBase;
    uptrModuleBase = ECAP__uptrBlockBaseAddress(enModuleArg);
    pstModuleArg->uptrAddress += uptrModuleBase;
    MCU__vWriteRegister_16Bits(pstModuleArg);
}

void ECAP__vWriteRegister_32Bits(ECAP_nMODULE enModuleArg, ECAP_Register32Bits_t* pstModuleArg)
{
    uintptr_t uptrModuleBase;
    uptrModuleBase = ECAP__uptrBlockBaseAddress(enModuleArg);
    pstModuleArg->uptrAddress += uptrModuleBase;
    MCU__vWriteRegister_32Bits(pstModuleArg);
}

