/**
 *
 * @file GPIO_RegisterPeripheral.c
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
#include "DriverLib/GPIO/Peripheral/RegisterPeripheral/GPIO_RegisterPeripheral.h"

uintptr_t GPIO__uptrBlockBaseAddress(GPIO_nPORT enPortArg)
{
    uintptr_t GPIO_BLOCK_BASE[(uint16_t) GPIO_enPORT_MAX] =
    {
     GPIOA_BASE, GPIOB_BASE, GPIOA_BASE, AIO_BASE
    };
    return (GPIO_BLOCK_BASE[(uint16_t) enPortArg]);
}


