/**
 *
 * @file FLASH_RegisterIRQVector.h
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

#ifndef DRIVERLIB_FLASH_DRIVER_XHEADER_FLASH_REGISTERIRQVECTOR_H_
#define DRIVERLIB_FLASH_DRIVER_XHEADER_FLASH_REGISTERIRQVECTOR_H_

#include "DriverLib/FLASH/Peripheral/xHeader/FLASH_Enum.h"

void FLASH__vRegisterIRQVectorHandler(MCU__pvfIRQVectorHandler_t pfIrqVectorHandler,
                                       MCU__pvfIRQVectorHandler_t* pfIrqArrayHandler,
                                       FLASH_nVECTOR_IRQ enIrqVectorArg);

MCU__pvfIRQVectorHandler_t FLASH__pfvGetIRQVectorHandler(FLASH_nVECTOR_IRQ enIrqVectorArg);


#endif /* DRIVERLIB_FLASH_DRIVER_XHEADER_FLASH_REGISTERIRQVECTOR_H_ */
