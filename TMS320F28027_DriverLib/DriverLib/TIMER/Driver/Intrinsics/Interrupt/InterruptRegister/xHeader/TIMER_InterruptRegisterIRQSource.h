/**
 *
 * @file TIMER_InterruptRegisterIRQSource.h
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

#ifndef XDRIVER_MCU_TIMER_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_TIMER_INTERRUPTREGISTERIRQSOURCE_H_
#define XDRIVER_MCU_TIMER_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_TIMER_INTERRUPTREGISTERIRQSOURCE_H_

#include <DriverLib/TIMER/Peripheral/xHeader/TIMER_Enum.h>

void TIMER__vRegisterIRQSourceHandler(MCU__pvfIRQSourceHandler_t pvfIrqSourceHandler,
                                      TIMER_nMODULE enModuleArg);

#endif /* XDRIVER_MCU_TIMER_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_TIMER_INTERRUPTREGISTERIRQSOURCE_H_ */
