/**
 *
 * @file PIE_Enable.h
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
 * @verbatim 28 jul. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 jul. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_PIE_DRIVER_XHEADER_PIE_ENABLE_H_
#define DRIVERLIB_PIE_DRIVER_XHEADER_PIE_ENABLE_H_

#include "DriverLib/PIE/Peripheral/xHeader/PIE_Enum.h"

void PIE__vSetState(PIE_nSTATE enEnableArg);
void PIE__vEnable(void);
void PIE__vDisable(void);
PIE_nSTATE PIE__enGetState(void);

#endif /* DRIVERLIB_PIE_DRIVER_XHEADER_PIE_ENABLE_H_ */
