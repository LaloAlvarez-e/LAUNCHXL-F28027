/**
 *
 * @file BOR_ReadRegister.c
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
#include "DriverLib/BOR/Driver/Intrinsics/Primitives/xHeader/BOR_ReadRegister.h"
#include "DriverLib/BOR/Peripheral/BOR_Peripheral.h"
#include "DriverLib/MCU/MCU.h"


uint16_t BOR__u16ReadRegister(BOR_Register_t* pstModuleArg)
{
    uintptr_t uptrModuleBase;
    uint16_t u16RegisterValue;
    uptrModuleBase = BOR__uptrBlockBaseAddress();
    pstModuleArg->uptrAddress += uptrModuleBase;
    u16RegisterValue = MCU__u16ReadRegister(pstModuleArg);
    return (u16RegisterValue);
}




