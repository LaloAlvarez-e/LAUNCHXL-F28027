/**
 *
 * @file GPIO_InputSyncronization.h
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

#ifndef DRIVERLIB_GPIO_DRIVER_XHEADER_GPIO_INPUTSYNCRONIZATION_H_
#define DRIVERLIB_GPIO_DRIVER_XHEADER_GPIO_INPUTSYNCRONIZATION_H_

#include "DriverLib/GPIO/Peripheral/xHeader/GPIO_Enum.h"

GPIO_nERROR GPIO__enSetInputSyncronization(GPIO_nPORT enModuleArg, uint32_t u32PinArg, GPIO_nSYNC enSyncArg);

GPIO_nERROR GPIO__enSetInputSyncronizationByNumber(GPIO_nPORT enModuleArg, GPIO_nPIN_NUMBER enPinNumberArg, GPIO_nSYNC enSyncArg);
GPIO_nSYNC GPIO__enGetInputSyncronizationByNumber(GPIO_nPORT enModuleArg, GPIO_nPIN_NUMBER enPinNumberArg);

GPIO_nERROR GPIO__enSetInputSyncronizationByFunction(GPIO_nDIGITAL_FUNCTION enFunctionArg, GPIO_nSYNC enSyncArg);
GPIO_nSYNC GPIO__enGetInputSyncronizationByFunction(GPIO_nDIGITAL_FUNCTION enFunctionArg);

#endif /* DRIVERLIB_GPIO_DRIVER_XHEADER_GPIO_INPUTSYNCRONIZATION_H_ */
