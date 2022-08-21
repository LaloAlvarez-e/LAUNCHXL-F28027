/**
 *
 * @file XINT_InterruptRoutine_Source.h
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

#ifndef XDRIVER_MCU_XINT_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_XINT_INTERRUPTROUTINE_SOURCE_H_
#define XDRIVER_MCU_XINT_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_XINT_INTERRUPTROUTINE_SOURCE_H_

#include <DriverLib/XINT/Peripheral/xHeader/XINT_Enum.h>

MCU__pvfIRQSourceHandler_t XINT__pvfGetIRQSourceHandler(XINT_nMODULE enExternalIntArg);
MCU__pvfIRQSourceHandler_t* XINT__pvfGetIRQSourceHandlerPointer(XINT_nMODULE enExternalIntArg);

#endif /* XDRIVER_MCU_XINT_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_XINT_INTERRUPTROUTINE_SOURCE_H_ */
