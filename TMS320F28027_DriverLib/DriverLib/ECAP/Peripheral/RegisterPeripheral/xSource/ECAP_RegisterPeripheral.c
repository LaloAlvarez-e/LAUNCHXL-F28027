/**
 *
 * @file ECAP_RegisterPeripheral.c
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
#include "DriverLib/ECAP/Peripheral/RegisterPeripheral/ECAP_RegisterPeripheral.h"

uintptr_t ECAP__uptrBlockBaseAddress(ECAP_nMODULE enPortArg)
{
    uintptr_t ECAP_BLOCK_BASE[(uint16_t) ECAP_enMODULE_MAX] =
    {
     ECAP1_BASE,
    };
    return (ECAP_BLOCK_BASE[(uint16_t) enPortArg]);
}

