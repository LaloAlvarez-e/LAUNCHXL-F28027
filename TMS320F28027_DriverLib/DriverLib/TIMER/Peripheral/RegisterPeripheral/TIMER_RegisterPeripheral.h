/**
 *
 * @file TIMER_RegisterPeripheral.h
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

#ifndef DRIVERLIB_TIMER_PERIPHERAL_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_H_
#define DRIVERLIB_TIMER_PERIPHERAL_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_H_

#include "DriverLib/TIMER/Peripheral/RegisterPeripheral/xHeader/TIMER_RegisterPeripheral_TIMER0.h"
#include "DriverLib/TIMER/Peripheral/RegisterPeripheral/xHeader/TIMER_RegisterPeripheral_TIMER1.h"
#include "DriverLib/TIMER/Peripheral/RegisterPeripheral/xHeader/TIMER_RegisterPeripheral_TIMER2.h"

#define TIMER    ((TIMERS_t*) (TIMER_BASE))

uintptr_t TIMER__uptrBlockBaseAddress(TIMER_nMODULE enModuleArg);

#endif /* DRIVERLIB_TIMER_PERIPHERAL_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_H_ */
