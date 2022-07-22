/**
 *
 * @file PIE_RegisterPeripheral.c
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
#include "DriverLib/PIE/Peripheral/RegisterPeripheral/PIE_RegisterPeripheral.h"

uintptr_t PIE__uptrBlockBaseAddress(void)
{
    return (PIE_BASE);
}

uintptr_t PIE_VECTOR__uptrBlockBaseAddress(void)
{
    return (PIE_VECTOR_BASE);
}


