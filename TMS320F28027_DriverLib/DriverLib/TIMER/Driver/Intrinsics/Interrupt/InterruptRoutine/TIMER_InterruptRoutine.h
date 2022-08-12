/**
 *
 * @file TIMER_InterruptRoutine.h
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

#ifndef XDRIVER_MCU_TIMER_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_TIMER_INTERRUPTROUTINE_H_
#define XDRIVER_MCU_TIMER_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_TIMER_INTERRUPTROUTINE_H_

#include "DriverLib/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMER_InterruptRoutine_Vector_Module0.h"
#include "DriverLib/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMER_InterruptRoutine_Vector_Module1.h"
#include "DriverLib/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMER_InterruptRoutine_Vector_Module2.h"
#include "DriverLib/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMER_InterruptRoutine_Source.h"

MCU__pvfIRQVectorHandler_t TIMER__pvfGetIRQVectorHandler(TIMER_nMODULE enModuleArg);
MCU__pvfIRQVectorHandler_t* TIMER__pvfGetIRQVectorHandlerPointer(TIMER_nMODULE enModuleArg);

#endif /* XDRIVER_MCU_TIMER_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_TIMER_INTERRUPTROUTINE_H_ */
