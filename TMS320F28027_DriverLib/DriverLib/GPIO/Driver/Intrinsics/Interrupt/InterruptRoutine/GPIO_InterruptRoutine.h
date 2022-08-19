/**
 *
 * @file GPIO_InterruptRoutine.h
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

#ifndef XDRIVER_MCU_GPIO_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_GPIO_INTERRUPTROUTINE_H_
#define XDRIVER_MCU_GPIO_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_GPIO_INTERRUPTROUTINE_H_

#include "DriverLib/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Vector_Module1.h"
#include "DriverLib/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Vector_Module2.h"
#include "DriverLib/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Vector_Module3.h"
#include "DriverLib/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Source.h"

MCU__pvfIRQVectorHandler_t GPIO__pvfGetIRQVectorHandler(GPIO_nXINT enExternalIntArg);
MCU__pvfIRQVectorHandler_t* GPIO__pvfGetIRQVectorHandlerPointer(GPIO_nXINT enExternalIntArg);

#endif /* XDRIVER_MCU_GPIO_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_GPIO_INTERRUPTROUTINE_H_ */
