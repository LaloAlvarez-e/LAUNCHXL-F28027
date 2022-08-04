/**
 *
 * @file DEVICE_ActiveIRQVector.h
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

#ifndef DRIVERLIB_DEVICE_DRIVER_XHEADER_DEVICE_ACTIVEIRQVECTOR_H_
#define DRIVERLIB_DEVICE_DRIVER_XHEADER_DEVICE_ACTIVEIRQVECTOR_H_

#include "DriverLib/DEVICE/Peripheral/xHeader/DEVICE_Enum.h"

DEVICE_nVECTOR_IRQ DEVICE__enGetActiveIRQVector(void);

#endif /* DRIVERLIB_DEVICE_DRIVER_XHEADER_DEVICE_ACTIVEIRQVECTOR_H_ */
