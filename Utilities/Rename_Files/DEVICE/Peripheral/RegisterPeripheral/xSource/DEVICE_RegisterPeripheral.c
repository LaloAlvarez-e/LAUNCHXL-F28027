/**
 *
 * @file DEVICE_RegisterPeripheral.c
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
#include "DriverLib/DEVICE/Peripheral/RegisterPeripheral/DEVICE_RegisterPeripheral.h"

uintptr_t DEVICE__uptrBlockBaseAddress(void)
{
    return (DEVICE_BASE);
}

uintptr_t DEVICE_VECTOR__uptrBlockBaseAddress(void)
{
    return (DEVICE_VECTOR_BASE);
}


