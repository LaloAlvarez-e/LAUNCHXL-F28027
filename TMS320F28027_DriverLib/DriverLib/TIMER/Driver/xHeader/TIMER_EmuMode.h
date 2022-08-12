/**
 *
 * @file TIMER_EmuMode.h
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
 * @verbatim 12 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 12 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_TIMER_DRIVER_XHEADER_TIMER_EMUMODE_H_
#define DRIVERLIB_TIMER_DRIVER_XHEADER_TIMER_EMUMODE_H_

#include "DriverLib/TIMER/Peripheral/xHeader/TIMER_Enum.h"

void TIMER__vSetEmulationMode(TIMER_nMODULE enModuleArg, TIMER_nEMUMODE enEmulationModeArg);
TIMER_nEMUMODE TIMER__enGetEmulationMode(TIMER_nMODULE enModuleArg);

#endif /* DRIVERLIB_TIMER_DRIVER_XHEADER_TIMER_EMUMODE_H_ */
