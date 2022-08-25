/**
 *
 * @file GPIO_Function.h
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
 * @verbatim 23 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_GPIO_DRIVER_XHEADER_GPIO_FUNCTION_H_
#define DRIVERLIB_GPIO_DRIVER_XHEADER_GPIO_FUNCTION_H_

#include "DriverLib/GPIO/Peripheral/xHeader/GPIO_Enum.h"

void GPIO__vSetFunction(GPIO_nDIGITAL_FUNCTION enFunctionArg);
GPIO_nFUNCTION GPIO__enGetFunctionByNumber(GPIO_nPORT enModuleArg, GPIO_nPIN_NUMBER enPinNumberArg);
void GPIO__vSetFunctionByNumber(GPIO_nPORT enModuleArg, GPIO_nPIN_NUMBER enPinNumberArg, GPIO_nFUNCTION enFunctionArg);

#endif /* DRIVERLIB_GPIO_DRIVER_XHEADER_GPIO_FUNCTION_H_ */
