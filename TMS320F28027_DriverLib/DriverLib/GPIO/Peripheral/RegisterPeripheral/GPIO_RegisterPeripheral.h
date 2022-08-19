/**
 *
 * @file GPIO_RegisterPeripheral.h
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

#ifndef DRIVERLIB_GPIO_PERIPHERAL_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_H_
#define DRIVERLIB_GPIO_PERIPHERAL_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_H_

#include "DriverLib/GPIO/Peripheral/RegisterPeripheral/xHeader/GPIO_RegisterPeripheral_GPIOA.h"
#include "DriverLib/GPIO/Peripheral/RegisterPeripheral/xHeader/GPIO_RegisterPeripheral_GPIOB.h"
#include "DriverLib/GPIO/Peripheral/RegisterPeripheral/xHeader/GPIO_RegisterPeripheral_AIO.h"

#define GPIO    ((GPIO_t*) (GPIO_BASE))
#define GPIO_ARRAY    ((GPIOS_t*) (GPIO_BASE))

uintptr_t GPIO__uptrBlockBaseAddress(GPIO_nPORT enPortArg);
uintptr_t GPIO_CONTROL__uptrBlockBaseAddress(GPIO_nPORT enPortArg);
uintptr_t GPIO_DATA__uptrBlockBaseAddress(GPIO_nPORT enPortArg);
uintptr_t GPIO_INTERRUPT__uptrBlockBaseAddress(GPIO_nPORT enPortArg);

#endif /* DRIVERLIB_GPIO_PERIPHERAL_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_H_ */
