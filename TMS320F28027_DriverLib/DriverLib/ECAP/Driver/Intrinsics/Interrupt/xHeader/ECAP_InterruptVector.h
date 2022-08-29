/**
 *
 * @file ECAP_InterruptVector.h
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

#ifndef XAPPLICATION_MCU_ECAP_INTERRUPT_XHEADER_ECAP_INTERRUPTVECTOR_H_
#define XAPPLICATION_MCU_ECAP_INTERRUPT_XHEADER_ECAP_INTERRUPTVECTOR_H_

#include <DriverLib/ECAP/Peripheral/xHeader/ECAP_Enum.h>

void ECAP__vEnableInterruptVector(ECAP_nMODULE enModuleArg);
void ECAP__vDisableInterruptVector(ECAP_nMODULE enModuleArg);

#endif /* XAPPLICATION_MCU_ECAP_INTERRUPT_XHEADER_ECAP_INTERRUPTVECTOR_H_ */
