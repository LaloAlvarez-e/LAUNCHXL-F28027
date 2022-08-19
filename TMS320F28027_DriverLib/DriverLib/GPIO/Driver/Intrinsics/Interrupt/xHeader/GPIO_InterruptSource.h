/**
 *
 * @file GPIO_InterruptSource.h
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

#ifndef XDRIVER_MCU_GPIO_DRIVER_INTRINSICS_INTERRUPT_XHEADER_GPIO_INTERRUPTSOURCE_H_
#define XDRIVER_MCU_GPIO_DRIVER_INTRINSICS_INTERRUPT_XHEADER_GPIO_INTERRUPTSOURCE_H_

#include <DriverLib/GPIO/Peripheral/xHeader/GPIO_Enum.h>

void GPIO__vEnableInterruptSource(GPIO_nXINT enExternalIntArg);
void GPIO__vDisableInterruptSource(GPIO_nXINT enExternalIntArg);

#endif /* XDRIVER_MCU_GPIO_DRIVER_INTRINSICS_INTERRUPT_XHEADER_GPIO_INTERRUPTSOURCE_H_ */
