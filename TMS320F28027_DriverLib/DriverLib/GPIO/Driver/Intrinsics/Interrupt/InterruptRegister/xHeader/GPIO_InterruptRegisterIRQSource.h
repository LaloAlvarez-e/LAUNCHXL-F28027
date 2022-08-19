/**
 *
 * @file GPIO_InterruptRegisterIRQSource.h
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

#ifndef XDRIVER_MCU_GPIO_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_GPIO_INTERRUPTREGISTERIRQSOURCE_H_
#define XDRIVER_MCU_GPIO_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_GPIO_INTERRUPTREGISTERIRQSOURCE_H_

#include <DriverLib/GPIO/Peripheral/xHeader/GPIO_Enum.h>

GPIO_nERROR GPIO__enRegisterIRQSourceHandler(MCU__pvfIRQSourceHandler_t pvfIrqSourceHandler,
                                      GPIO_nXINT enExternalIntArg);

#endif /* XDRIVER_MCU_GPIO_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_GPIO_INTERRUPTREGISTERIRQSOURCE_H_ */
