/**
 *
 * @file XINT_InterruptVector.h
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

#ifndef XAPPLICATION_MCU_XINT_INTERRUPT_XHEADER_XINT_INTERRUPTVECTOR_H_
#define XAPPLICATION_MCU_XINT_INTERRUPT_XHEADER_XINT_INTERRUPTVECTOR_H_

#include <DriverLib/XINT/Peripheral/xHeader/XINT_Enum.h>

void XINT__vEnableInterruptVector(XINT_nMODULE enModuleArg);
void XINT__vDisableInterruptVector(XINT_nMODULE enModuleArg);

#endif /* XAPPLICATION_MCU_XINT_INTERRUPT_XHEADER_XINT_INTERRUPTVECTOR_H_ */
