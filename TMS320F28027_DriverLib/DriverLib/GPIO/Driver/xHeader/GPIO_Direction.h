/**
 *
 * @file GPIO_Direction.h
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
 * @verbatim 19 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_GPIO_DRIVER_XHEADER_GPIO_DIRECTION_H_
#define DRIVERLIB_GPIO_DRIVER_XHEADER_GPIO_DIRECTION_H_

#include "DriverLib/GPIO/Peripheral/xHeader/GPIO_Enum.h"

void GPIO__vSetDirection(GPIO_nPORT enModuleArg, uint32_t u32PinArg, GPIO_nDIR enDirectionArg);
uint32_t GPIO__u32GetDirection(GPIO_nPORT enModuleArg, uint32_t u32PinArg);

void GPIO__vSetDirectionByNumber(GPIO_nPORT enModuleArg, GPIO_nPIN_NUMBER enPinNumberArg, GPIO_nDIR enDirectionArg);
GPIO_nDIR GPIO__enGetDirectionByNumber(GPIO_nPORT enModuleArg, GPIO_nPIN_NUMBER enPinNumberArg);

#endif /* DRIVERLIB_GPIO_DRIVER_XHEADER_GPIO_DIRECTION_H_ */
