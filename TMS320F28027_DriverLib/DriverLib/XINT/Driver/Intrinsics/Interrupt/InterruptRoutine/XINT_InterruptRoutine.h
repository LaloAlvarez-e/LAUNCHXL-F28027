/**
 *
 * @file XINT_InterruptRoutine.h
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

#ifndef XDRIVER_MCU_XINT_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XINT_INTERRUPTROUTINE_H_
#define XDRIVER_MCU_XINT_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XINT_INTERRUPTROUTINE_H_

#include "DriverLib/XINT/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/XINT_InterruptRoutine_Vector_Module1.h"
#include "DriverLib/XINT/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/XINT_InterruptRoutine_Vector_Module2.h"
#include "DriverLib/XINT/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/XINT_InterruptRoutine_Vector_Module3.h"
#include "DriverLib/XINT/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/XINT_InterruptRoutine_Source.h"

MCU__pvfIRQVectorHandler_t XINT__pvfGetIRQVectorHandler(XINT_nMODULE enExternalIntArg);
MCU__pvfIRQVectorHandler_t* XINT__pvfGetIRQVectorHandlerPointer(XINT_nMODULE enExternalIntArg);

#endif /* XDRIVER_MCU_XINT_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XINT_INTERRUPTROUTINE_H_ */
