/**
 *
 * @file GPIO_InputSampleCycles.h
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

#ifndef DRIVERLIB_GPIO_DRIVER_XHEADER_GPIO_INPUTSAMPLECYCLES_H_
#define DRIVERLIB_GPIO_DRIVER_XHEADER_GPIO_INPUTSAMPLECYCLES_H_

#include "DriverLib/GPIO/Peripheral/xHeader/GPIO_Enum.h"

GPIO_nERROR GPIO__enSetInputSampleCycles(GPIO_nPORT enModuleArg, uint32_t u32PinArg, uint16_t u16CyclesArg);

GPIO_nERROR GPIO__enSetInputSampleCyclesByNumber(GPIO_nPORT enModuleArg, GPIO_nPIN_NUMBER enPinNumberArg, uint16_t u16CyclesArg);
uint16_t GPIO__u16GetInputSampleCyclesByNumber(GPIO_nPORT enModuleArg, GPIO_nPIN_NUMBER enPinNumberArg);

GPIO_nERROR GPIO__enSetInputSampleCyclesByFunction(GPIO_nDIGITAL_FUNCTION enFunctionArg, uint16_t u16CyclesArg);
uint16_t GPIO__u16GetInputSampleCyclesByFunction(GPIO_nDIGITAL_FUNCTION enFunctionArg);

#endif /* DRIVERLIB_GPIO_DRIVER_XHEADER_GPIO_INPUTSAMPLECYCLES_H_ */
