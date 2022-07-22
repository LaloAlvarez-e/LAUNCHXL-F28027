/**
 *
 * @file PIE_RegisterPeripheral.h
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

#ifndef DRIVERLIB_PIE_PERIPHERAL_REGISTERPERIPHERAL_PIE_REGISTERPERIPHERAL_H_
#define DRIVERLIB_PIE_PERIPHERAL_REGISTERPERIPHERAL_PIE_REGISTERPERIPHERAL_H_

#include "DriverLib/PIE/Peripheral/RegisterPeripheral/xHeader/PIE_RegisterPeripheral_Base.h"
#include "DriverLib/PIE/Peripheral/RegisterPeripheral/xHeader/PIE_RegisterPeripheral_Vector.h"

uintptr_t PIE__uptrBlockBaseAddress(void);
uintptr_t PIE_VECTOR__uptrBlockBaseAddress(void);

#endif /* DRIVERLIB_PIE_PERIPHERAL_REGISTERPERIPHERAL_PIE_REGISTERPERIPHERAL_H_ */
