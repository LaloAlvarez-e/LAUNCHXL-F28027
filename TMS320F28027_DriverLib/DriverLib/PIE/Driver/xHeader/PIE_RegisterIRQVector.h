/**
 *
 * @file PIE_RegisterIRQVector.h
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

#ifndef DRIVERLIB_PIE_DRIVER_XHEADER_PIE_REGISTERIRQVECTOR_H_
#define DRIVERLIB_PIE_DRIVER_XHEADER_PIE_REGISTERIRQVECTOR_H_

#include "DriverLib/PIE/Peripheral/xHeader/PIE_Enum.h"

PIE_nERROR PIE__enRegisterIRQVectorHandler(MCU__pvfIRQVectorHandler_t pfIrqVectorHandler,
                                       MCU__pvfIRQVectorHandler_t* pfIrqArrayHandler,
                                       PIE_nVECTOR_IRQ enIrqVectorArg);

MCU__pvfIRQVectorHandler_t PIE__pfvGetIRQVectorHandler(PIE_nVECTOR_IRQ enIrqVectorArg);


#endif /* DRIVERLIB_PIE_DRIVER_XHEADER_PIE_REGISTERIRQVECTOR_H_ */
