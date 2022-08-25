/**
 *
 * @file GPIO_Resistor.h
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
 * @verbatim 21 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_GPIO_DRIVER_XHEADER_GPIO_RESISTOR_H_
#define DRIVERLIB_GPIO_DRIVER_XHEADER_GPIO_RESISTOR_H_

#include "DriverLib/GPIO/Peripheral/xHeader/GPIO_Enum.h"

GPIO_nERROR GPIO__enSetResistor(GPIO_nPORT enModuleArg, uint32_t u32PinArg, GPIO_nRESISTOR enResistorArg);
uint32_t GPIO__u32GetResistor(GPIO_nPORT enModuleArg, uint32_t u32PinArg);

GPIO_nERROR GPIO__enSetResistorByNumber(GPIO_nPORT enModuleArg, GPIO_nPIN_NUMBER enPinNumberArg, GPIO_nRESISTOR enResistorArg);
GPIO_nRESISTOR GPIO__enGetResistorByNumber(GPIO_nPORT enModuleArg, GPIO_nPIN_NUMBER enPinNumberArg);

GPIO_nERROR GPIO__enSetResistorByFunction(GPIO_nDIGITAL_FUNCTION enFunctionArg, GPIO_nRESISTOR enResistorArg);
GPIO_nRESISTOR GPIO__enGetResistorByFunction(GPIO_nDIGITAL_FUNCTION enFunctionArg);

#endif /* DRIVERLIB_GPIO_DRIVER_XHEADER_GPIO_RESISTOR_H_ */
