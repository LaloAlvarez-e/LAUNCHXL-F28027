/**
 *
 * @file ECAP_ReadRegister.c
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
#include "DriverLib/ECAP/Driver/Intrinsics/Primitives/xHeader/ECAP_ReadRegister.h"
#include "DriverLib/ECAP/Peripheral/ECAP_Peripheral.h"
#include "DriverLib/MCU/MCU.h"

uint16_t ECAP__u16ReadRegister(ECAP_nMODULE enPortArg, ECAP_Register16Bits_t* pstModuleArg)
{
    uintptr_t uptrModuleBase;
    uint16_t u16RegisterValue;
    uptrModuleBase = ECAP__uptrBlockBaseAddress(enPortArg);
    pstModuleArg->uptrAddress += uptrModuleBase;
    u16RegisterValue = MCU__u16ReadRegister(pstModuleArg);
    return (u16RegisterValue);
}

uint32_t ECAP__u32ReadRegister(ECAP_nMODULE enPortArg, ECAP_Register32Bits_t* pstModuleArg)
{
    uintptr_t uptrModuleBase;
    uint32_t u32RegisterValue;
    uptrModuleBase = ECAP__uptrBlockBaseAddress(enPortArg);
    pstModuleArg->uptrAddress += uptrModuleBase;
    u32RegisterValue = MCU__u32ReadRegister(pstModuleArg);
    return (u32RegisterValue);
}
