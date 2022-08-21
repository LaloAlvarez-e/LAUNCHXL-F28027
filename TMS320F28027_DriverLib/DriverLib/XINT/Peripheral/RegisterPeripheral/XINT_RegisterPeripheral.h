/**
 *
 * @file XINT_RegisterPeripheral.h
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

#ifndef DRIVERLIB_XINT_PERIPHERAL_REGISTERPERIPHERAL_XINT_REGISTERPERIPHERAL_H_
#define DRIVERLIB_XINT_PERIPHERAL_REGISTERPERIPHERAL_XINT_REGISTERPERIPHERAL_H_

#include "DriverLib/XINT/Peripheral/RegisterPeripheral/xHeader/XINT_RegisterPeripheral_XINT1.h"
#include "DriverLib/XINT/Peripheral/RegisterPeripheral/xHeader/XINT_RegisterPeripheral_XINT2.h"
#include "DriverLib/XINT/Peripheral/RegisterPeripheral/xHeader/XINT_RegisterPeripheral_XINT3.h"

#define XINT    ((XINT_t*) (XINT_BASE))
#define XINT_AUX    ((XINTS_t*) (XINT_BASE))

uintptr_t XINT__uptrBlockBaseAddress(XINT_nMODULE enPortArg);

#endif /* DRIVERLIB_XINT_PERIPHERAL_REGISTERPERIPHERAL_XINT_REGISTERPERIPHERAL_H_ */
