/**
 *
 * @file FLASH_AcknowledgeIRQVector.h
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
 * @verbatim 28 jul. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 jul. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_FLASH_DRIVER_XHEADER_FLASH_ACKNOWLEDGEIRQVECTOR_H_
#define DRIVERLIB_FLASH_DRIVER_XHEADER_FLASH_ACKNOWLEDGEIRQVECTOR_H_

#include "DriverLib/FLASH/Peripheral/xHeader/FLASH_Enum.h"

void FLASH__vClearAllAcknowledgeIRQVector(void);
void FLASH__vClearAcknowledgeIRQVector(FLASH_nVECTOR_IRQ enIrqVectorArg);
FLASH_nACK FLASH__enGetAcknowledgeIRQVector(FLASH_nVECTOR_IRQ enIrqVectorArg);

#endif /* DRIVERLIB_FLASH_DRIVER_XHEADER_FLASH_ACKNOWLEDGEIRQVECTOR_H_ */
