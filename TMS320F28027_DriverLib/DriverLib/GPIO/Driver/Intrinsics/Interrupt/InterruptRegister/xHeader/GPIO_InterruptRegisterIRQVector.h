/**
 *
 * @file GPIO_InterruptRegisterIRQVector.h
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 24 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_GPIO_INTERRUPT_INTERRUPTREGISTER_XHEADER_GPIO_INTERRUPTREGISTERIRQVECTOR_H_
#define XAPPLICATION_MCU_GPIO_INTERRUPT_INTERRUPTREGISTER_XHEADER_GPIO_INTERRUPTREGISTERIRQVECTOR_H_

#include <DriverLib/GPIO/Peripheral/xHeader/GPIO_Enum.h>

GPIO_nERROR GPIO__enRegisterIRQVectorHandler(MCU__pvfIRQVectorHandler_t pvfIrqVectorHandler,
                                             GPIO_nXINT enExternalIntArg);

#endif /* XAPPLICATION_MCU_GPIO_INTERRUPT_INTERRUPTREGISTER_XHEADER_GPIO_INTERRUPTREGISTERIRQVECTOR_H_ */
