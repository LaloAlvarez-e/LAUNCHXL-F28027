/**
 *
 * @file XINT_RegisterPeripheral.c
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
#include "DriverLib/XINT/Peripheral/RegisterPeripheral/XINT_RegisterPeripheral.h"

uintptr_t XINT__uptrBlockBaseAddress(XINT_nMODULE enPortArg)
{
    uintptr_t XINT_BLOCK_BASE[(uint16_t) XINT_enMODULE_MAX] =
    {
     XINT1_BASE, XINT2_BASE, XINT3_BASE
    };
    return (XINT_BLOCK_BASE[(uint16_t) enPortArg]);
}

