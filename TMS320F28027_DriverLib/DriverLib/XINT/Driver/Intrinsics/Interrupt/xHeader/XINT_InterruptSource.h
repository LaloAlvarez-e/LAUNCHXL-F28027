/**
 *
 * @file XINT_InterruptSource.h
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

#ifndef XDRIVER_MCU_XINT_DRIVER_INTRINSICS_INTERRUPT_XHEADER_XINT_INTERRUPTSOURCE_H_
#define XDRIVER_MCU_XINT_DRIVER_INTRINSICS_INTERRUPT_XHEADER_XINT_INTERRUPTSOURCE_H_

#include <DriverLib/XINT/Peripheral/xHeader/XINT_Enum.h>

void XINT__vEnableInterruptSource(XINT_nMODULE enModuleArg);
void XINT__vDisableInterruptSource(XINT_nMODULE enModuleArg);

#endif /* XDRIVER_MCU_XINT_DRIVER_INTRINSICS_INTERRUPT_XHEADER_XINT_INTERRUPTSOURCE_H_ */
