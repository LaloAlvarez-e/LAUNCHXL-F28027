/**
 *
 * @file SYSCTL_AcknowledgeIRQVector.h
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

#ifndef DRIVERLIB_SYSCTL_DRIVER_XHEADER_SYSCTL_ACKNOWLEDGEIRQVECTOR_H_
#define DRIVERLIB_SYSCTL_DRIVER_XHEADER_SYSCTL_ACKNOWLEDGEIRQVECTOR_H_

#include "DriverLib/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h"

void SYSCTL__vClearAllAcknowledgeIRQVector(void);
void SYSCTL__vClearAcknowledgeIRQVector(SYSCTL_nVECTOR_IRQ enIrqVectorArg);
SYSCTL_nACK SYSCTL__enGetAcknowledgeIRQVector(SYSCTL_nVECTOR_IRQ enIrqVectorArg);

#endif /* DRIVERLIB_SYSCTL_DRIVER_XHEADER_SYSCTL_ACKNOWLEDGEIRQVECTOR_H_ */
