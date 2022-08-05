/**
 *
 * @file SYSCTL_RegisterIRQVector.h
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

#ifndef DRIVERLIB_SYSCTL_DRIVER_XHEADER_SYSCTL_REGISTERIRQVECTOR_H_
#define DRIVERLIB_SYSCTL_DRIVER_XHEADER_SYSCTL_REGISTERIRQVECTOR_H_

#include "DriverLib/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h"

void SYSCTL__vRegisterIRQVectorHandler(MCU__pvfIRQVectorHandler_t pfIrqVectorHandler,
                                       MCU__pvfIRQVectorHandler_t* pfIrqArrayHandler,
                                       SYSCTL_nVECTOR_IRQ enIrqVectorArg);

MCU__pvfIRQVectorHandler_t SYSCTL__pfvGetIRQVectorHandler(SYSCTL_nVECTOR_IRQ enIrqVectorArg);


#endif /* DRIVERLIB_SYSCTL_DRIVER_XHEADER_SYSCTL_REGISTERIRQVECTOR_H_ */
