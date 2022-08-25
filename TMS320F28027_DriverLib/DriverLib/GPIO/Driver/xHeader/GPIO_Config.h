/**
 *
 * @file GPIO_Config.h
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
 * @verbatim 24 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_GPIO_DRIVER_XHEADER_GPIO_CONFIG_H_
#define DRIVERLIB_GPIO_DRIVER_XHEADER_GPIO_CONFIG_H_

#include "DriverLib/GPIO/Peripheral/xHeader/GPIO_Enum.h"

void GPIO__vSetConfigByFunction(GPIO_nDIGITAL_FUNCTION enFunctionArg, GPIO_nCONFIG enConfigArg);
void GPIO__vSetConfigByNumber(GPIO_nPORT enModuleArg, GPIO_nPIN_NUMBER enPinNumberArg, GPIO_nCONFIG enConfigArg);

#endif /* DRIVERLIB_GPIO_DRIVER_XHEADER_GPIO_CONFIG_H_ */
