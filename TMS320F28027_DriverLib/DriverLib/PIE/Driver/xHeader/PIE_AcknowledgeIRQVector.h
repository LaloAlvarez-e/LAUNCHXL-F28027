/**
 *
 * @file PIE_AcknowledgeIRQVector.h
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

#ifndef DRIVERLIB_PIE_DRIVER_XHEADER_PIE_ACKNOWLEDGEIRQVECTOR_H_
#define DRIVERLIB_PIE_DRIVER_XHEADER_PIE_ACKNOWLEDGEIRQVECTOR_H_

#include "DriverLib/PIE/Peripheral/xHeader/PIE_Enum.h"

void PIE__vClearAllAcknowledgeIRQVector(void);
void PIE__vClearAcknowledgeIRQVector(PIE_nVECTOR_IRQ enIrqVectorArg);
PIE_nACK PIE__enGetAcknowledgeIRQVector(PIE_nVECTOR_IRQ enIrqVectorArg);

#endif /* DRIVERLIB_PIE_DRIVER_XHEADER_PIE_ACKNOWLEDGEIRQVECTOR_H_ */
