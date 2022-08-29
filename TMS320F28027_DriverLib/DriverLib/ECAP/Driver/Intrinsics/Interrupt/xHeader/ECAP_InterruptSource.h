/**
 *
 * @file ECAP_InterruptSource.h
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

#ifndef XDRIVER_MCU_ECAP_DRIVER_INTRINSICS_INTERRUPT_XHEADER_ECAP_INTERRUPTSOURCE_H_
#define XDRIVER_MCU_ECAP_DRIVER_INTRINSICS_INTERRUPT_XHEADER_ECAP_INTERRUPTSOURCE_H_

#include <DriverLib/ECAP/Peripheral/xHeader/ECAP_Enum.h>

void ECAP__vEnableInterruptSource(ECAP_nMODULE enModuleArg, ECAP_nINT_SOURCE enIntSourceArg);
void ECAP__vDisableInterruptSource(ECAP_nMODULE enModuleArg, ECAP_nINT_SOURCE enIntSourceArg);
void ECAP__vClearInterruptSource(ECAP_nMODULE enModuleArg, ECAP_nINT_SOURCE enIntSourceArg);
void ECAP__vForceInterruptSource(ECAP_nMODULE enModuleArg, ECAP_nINT_SOURCE enIntSourceArg);
ECAP_nINT_SOURCE ECAP__enStatusInterruptSource(ECAP_nMODULE enModuleArg, ECAP_nINT_SOURCE enIntSourceArg);

#endif /* XDRIVER_MCU_ECAP_DRIVER_INTRINSICS_INTERRUPT_XHEADER_ECAP_INTERRUPTSOURCE_H_ */
