/**
 *
 * @file DEVICE_RegisterIRQVector.h
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
 * @verbatim 21 jul. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 jul. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_DEVICE_DRIVER_XHEADER_DEVICE_REGISTERIRQVECTOR_H_
#define DRIVERLIB_DEVICE_DRIVER_XHEADER_DEVICE_REGISTERIRQVECTOR_H_

#include "DriverLib/DEVICE/Peripheral/xHeader/DEVICE_Enum.h"

void DEVICE__vRegisterIRQVectorHandler(MCU__pvfIRQVectorHandler_t pfIrqVectorHandler,
                                       MCU__pvfIRQVectorHandler_t* pfIrqArrayHandler,
                                       DEVICE_nVECTOR_IRQ enIrqVectorArg);

MCU__pvfIRQVectorHandler_t DEVICE__pfvGetIRQVectorHandler(DEVICE_nVECTOR_IRQ enIrqVectorArg);


#endif /* DRIVERLIB_DEVICE_DRIVER_XHEADER_DEVICE_REGISTERIRQVECTOR_H_ */
