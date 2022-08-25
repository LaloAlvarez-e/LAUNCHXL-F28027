/**
 *
 * @file GPIO_Data.h
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
 * @verbatim 25 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 25 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_GPIO_DRIVER_XHEADER_GPIO_DATA_H_
#define DRIVERLIB_GPIO_DRIVER_XHEADER_GPIO_DATA_H_

#include "DriverLib/GPIO/Peripheral/xHeader/GPIO_Enum.h"

void GPIO__vData(GPIO_nPORT enModuleArg, uint32_t u32PinArg, uint32_t u32ValueArg);
void GPIO__vSetData(GPIO_nPORT enModuleArg, uint32_t u32PinArg);
void GPIO__vClearData(GPIO_nPORT enModuleArg, uint32_t u32PinArg);
void GPIO__vToggleData(GPIO_nPORT enModuleArg, uint32_t u32PinArg);
uint32_t GPIO__u32GetData(GPIO_nPORT enModuleArg, uint32_t u32PinArg);

void GPIO__vDataByNumber(GPIO_nPORT enModuleArg, GPIO_nPIN_NUMBER enPinNumberArg, GPIO_nVALUE enValueArg);
void GPIO__vSetDataByNumber(GPIO_nPORT enModuleArg, GPIO_nPIN_NUMBER enPinNumberArg);
void GPIO__vClearDataByNumber(GPIO_nPORT enModuleArg, GPIO_nPIN_NUMBER enPinNumberArg);
void GPIO__vToggleDataByNumber(GPIO_nPORT enModuleArg, GPIO_nPIN_NUMBER enPinNumberArg);
GPIO_nVALUE GPIO__enGetDataByNumber(GPIO_nPORT enModuleArg, GPIO_nPIN_NUMBER enPinNumberArg);

void GPIO__vDataByFunction(GPIO_nDIGITAL_FUNCTION enFunctionArg, GPIO_nVALUE enValueArg);
void GPIO__vSetDataByFunction(GPIO_nDIGITAL_FUNCTION enFunctionArg);
void GPIO__vClearDataByFunction(GPIO_nDIGITAL_FUNCTION enFunctionArg);
void GPIO__vToggleDataByFunction(GPIO_nDIGITAL_FUNCTION enFunctionArg);
GPIO_nVALUE GPIO__enGetDataByFunction(GPIO_nDIGITAL_FUNCTION enFunctionArg);

#endif /* DRIVERLIB_GPIO_DRIVER_XHEADER_GPIO_DATA_H_ */
