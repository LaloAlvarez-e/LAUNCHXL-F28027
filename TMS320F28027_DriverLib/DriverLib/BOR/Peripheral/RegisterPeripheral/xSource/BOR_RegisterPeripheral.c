/**
 *
 * @file BOR_RegisterPeripheral.c
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
#include "DriverLib/BOR/Peripheral/RegisterPeripheral/BOR_RegisterPeripheral.h"

uintptr_t BOR__uptrBlockBaseAddress(void)
{
    return (BOR_BASE);
}

