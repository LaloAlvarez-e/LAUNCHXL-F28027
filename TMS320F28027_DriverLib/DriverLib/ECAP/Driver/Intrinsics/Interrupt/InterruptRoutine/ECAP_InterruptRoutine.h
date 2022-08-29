/**
 *
 * @file ECAP_InterruptRoutine.h
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

#ifndef XDRIVER_MCU_ECAP_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_ECAP_INTERRUPTROUTINE_H_
#define XDRIVER_MCU_ECAP_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_ECAP_INTERRUPTROUTINE_H_

#include "DriverLib/ECAP/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/ECAP_InterruptRoutine_Vector_Module1.h"
#include "DriverLib/ECAP/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/ECAP_InterruptRoutine_Source.h"

MCU__pvfIRQVectorHandler_t ECAP__pvfGetIRQVectorHandler(ECAP_nMODULE enExternalIntArg);
MCU__pvfIRQVectorHandler_t* ECAP__pvfGetIRQVectorHandlerPointer(ECAP_nMODULE enExternalIntArg);

#endif /* XDRIVER_MCU_ECAP_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_ECAP_INTERRUPTROUTINE_H_ */
