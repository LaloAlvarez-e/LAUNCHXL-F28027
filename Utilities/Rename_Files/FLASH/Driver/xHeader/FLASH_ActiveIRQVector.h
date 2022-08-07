/**
 *
 * @file FLASH_ActiveIRQVector.h
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

#ifndef DRIVERLIB_FLASH_DRIVER_XHEADER_FLASH_ACTIVEIRQVECTOR_H_
#define DRIVERLIB_FLASH_DRIVER_XHEADER_FLASH_ACTIVEIRQVECTOR_H_

#include "DriverLib/FLASH/Peripheral/xHeader/FLASH_Enum.h"

FLASH_nVECTOR_IRQ FLASH__enGetActiveIRQVector(void);

#endif /* DRIVERLIB_FLASH_DRIVER_XHEADER_FLASH_ACTIVEIRQVECTOR_H_ */
