/**
 *
 * @file XINT_Pin.h
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
 * @verbatim 21 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_XINT_DRIVER_XHEADER_XINT_PIN_H_
#define DRIVERLIB_XINT_DRIVER_XHEADER_XINT_PIN_H_

#include "DriverLib/XINT/Peripheral/xHeader/XINT_Enum.h"

void XINT__vSetPin(XINT_nMODULE enModuleArg, XINT_nPIN enPinArg);
XINT_nPIN XINT__enGetPin(XINT_nMODULE enModuleArg);

#endif /* DRIVERLIB_XINT_DRIVER_XHEADER_XINT_PIN_H_ */
