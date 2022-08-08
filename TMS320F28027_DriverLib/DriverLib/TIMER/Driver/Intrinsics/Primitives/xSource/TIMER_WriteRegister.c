/**
 *
 * @file TIMER_WriteRegister.c
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
#include "DriverLib/TIMER/Driver/Intrinsics/Primitives/xHeader/TIMER_WriteRegister.h"
#include "DriverLib/TIMER/Peripheral/TIMER_Peripheral.h"
#include "DriverLib/MCU/MCU.h"

void TIMER__vWriteRegister16Bits(TIMER_nMODULE enModuleArg, TIMER_Register16Bits_t* pstModuleArg)
{
    uintptr_t uptrModuleBase;
    uptrModuleBase = TIMER__uptrBlockBaseAddress(enModuleArg);
    pstModuleArg->uptrAddress += uptrModuleBase;
    MCU__vWriteRegister_16Bits(pstModuleArg);
}

void TIMER__vWriteRegister32Bits(TIMER_nMODULE enModuleArg, TIMER_Register32Bits_t* pstModuleArg)
{
    uintptr_t uptrModuleBase;
    uptrModuleBase = TIMER__uptrBlockBaseAddress(enModuleArg);
    pstModuleArg->uptrAddress += uptrModuleBase;
    MCU__vWriteRegister_32Bits(pstModuleArg);
}



