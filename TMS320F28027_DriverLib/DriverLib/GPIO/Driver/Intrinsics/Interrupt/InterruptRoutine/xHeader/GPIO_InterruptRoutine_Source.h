/**
 *
 * @file GPIO_InterruptRoutine_Source.h
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

#ifndef XDRIVER_MCU_GPIO_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_GPIO_INTERRUPTROUTINE_SOURCE_H_
#define XDRIVER_MCU_GPIO_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_GPIO_INTERRUPTROUTINE_SOURCE_H_

#include <DriverLib/GPIO/Peripheral/xHeader/GPIO_Enum.h>

MCU__pvfIRQSourceHandler_t GPIO__pvfGetIRQSourceHandler(GPIO_nXINT enExternalIntArg);
MCU__pvfIRQSourceHandler_t* GPIO__pvfGetIRQSourceHandlerPointer(GPIO_nXINT enExternalIntArg);

#endif /* XDRIVER_MCU_GPIO_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_GPIO_INTERRUPTROUTINE_SOURCE_H_ */
