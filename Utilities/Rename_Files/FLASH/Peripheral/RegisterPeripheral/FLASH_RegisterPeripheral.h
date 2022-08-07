/**
 *
 * @file FLASH_RegisterPeripheral.h
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
 * @verbatim 22 jul. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jul. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_FLASH_PERIPHERAL_REGISTERPERIPHERAL_FLASH_REGISTERPERIPHERAL_H_
#define DRIVERLIB_FLASH_PERIPHERAL_REGISTERPERIPHERAL_FLASH_REGISTERPERIPHERAL_H_

#include "DriverLib/FLASH/Peripheral/RegisterPeripheral/xHeader/FLASH_RegisterPeripheral_Base.h"
#include "DriverLib/FLASH/Peripheral/RegisterPeripheral/xHeader/FLASH_RegisterPeripheral_Vector.h"

uintptr_t FLASH__uptrBlockBaseAddress(void);
uintptr_t FLASH_VECTOR__uptrBlockBaseAddress(void);

#endif /* DRIVERLIB_FLASH_PERIPHERAL_REGISTERPERIPHERAL_FLASH_REGISTERPERIPHERAL_H_ */
