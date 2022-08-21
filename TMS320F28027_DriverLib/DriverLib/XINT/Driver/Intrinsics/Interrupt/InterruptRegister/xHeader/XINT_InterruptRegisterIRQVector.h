/**
 *
 * @file XINT_InterruptRegisterIRQVector.h
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

#ifndef XAPPLICATION_MCU_XINT_INTERRUPT_INTERRUPTREGISTER_XHEADER_XINT_INTERRUPTREGISTERIRQVECTOR_H_
#define XAPPLICATION_MCU_XINT_INTERRUPT_INTERRUPTREGISTER_XHEADER_XINT_INTERRUPTREGISTERIRQVECTOR_H_

#include <DriverLib/XINT/Peripheral/xHeader/XINT_Enum.h>

XINT_nERROR XINT__enRegisterIRQVectorHandler(MCU__pvfIRQVectorHandler_t pvfIrqVectorHandler,
                                             XINT_nMODULE enModuleArg);

#endif /* XAPPLICATION_MCU_XINT_INTERRUPT_INTERRUPTREGISTER_XHEADER_XINT_INTERRUPTREGISTERIRQVECTOR_H_ */
