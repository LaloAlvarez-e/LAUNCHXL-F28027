/**
 *
 * @file TIMER_InterruptSource.h
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim Apr 8, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 8, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_TIMER_DRIVER_INTRINSICS_INTERRUPT_XHEADER_TIMER_INTERRUPTSOURCE_H_
#define XDRIVER_MCU_TIMER_DRIVER_INTRINSICS_INTERRUPT_XHEADER_TIMER_INTERRUPTSOURCE_H_

#include <DriverLib/TIMER/Peripheral/xHeader/TIMER_Enum.h>

void TIMER__vEnableInterruptSource(TIMER_nMODULE enModuleArg);
void TIMER__vDisInterruptSource(TIMER_nMODULE enModuleArg);
void TIMER__vClearInterruptSource(TIMER_nMODULE enModuleArg);
TIMER_nINT_STATUS TIMER__enStatusInterruptSource(TIMER_nMODULE enModuleArg);

#endif /* XDRIVER_MCU_TIMER_DRIVER_INTRINSICS_INTERRUPT_XHEADER_TIMER_INTERRUPTSOURCE_H_ */
