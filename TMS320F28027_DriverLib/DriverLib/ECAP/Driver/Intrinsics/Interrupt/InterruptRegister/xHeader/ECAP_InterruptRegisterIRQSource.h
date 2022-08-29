/**
 *
 * @file ECAP_InterruptRegisterIRQSource.h
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

#ifndef XDRIVER_MCU_ECAP_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_ECAP_INTERRUPTREGISTERIRQSOURCE_H_
#define XDRIVER_MCU_ECAP_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_ECAP_INTERRUPTREGISTERIRQSOURCE_H_

#include <DriverLib/ECAP/Peripheral/xHeader/ECAP_Enum.h>

ECAP_nERROR ECAP__enRegisterIRQSourceHandler(MCU__pvfIRQSourceHandler_t pvfIrqSourceHandler,
                                      ECAP_nMODULE enModuleArg, ECAP_nINTERRUPT enInterruptArg);

#endif /* XDRIVER_MCU_ECAP_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_ECAP_INTERRUPTREGISTERIRQSOURCE_H_ */
