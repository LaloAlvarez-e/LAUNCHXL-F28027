/**
 *
 * @file SYSCTL_RegisterPeripheral.h
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

#ifndef DRIVERLIB_SYSCTL_PERIPHERAL_REGISTERPERIPHERAL_SYSCTL_REGISTERPERIPHERAL_H_
#define DRIVERLIB_SYSCTL_PERIPHERAL_REGISTERPERIPHERAL_SYSCTL_REGISTERPERIPHERAL_H_

#include "DriverLib/SYSCTL/Peripheral/RegisterPeripheral/xHeader/SYSCTL_RegisterPeripheral_Base.h"
#include "DriverLib/SYSCTL/Peripheral/RegisterPeripheral/xHeader/SYSCTL_RegisterPeripheral_Vector.h"

uintptr_t SYSCTL__uptrBlockBaseAddress(void);
uintptr_t SYSCTL_VECTOR__uptrBlockBaseAddress(void);

#endif /* DRIVERLIB_SYSCTL_PERIPHERAL_REGISTERPERIPHERAL_SYSCTL_REGISTERPERIPHERAL_H_ */
