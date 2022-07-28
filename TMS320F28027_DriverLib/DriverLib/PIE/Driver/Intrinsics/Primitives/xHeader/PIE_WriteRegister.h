/**
 *
 * @file PIE_WriteRegister.h
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
 * @verbatim 22 jul. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jul. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_PIE_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_PIE_WRITEREGISTER_H_
#define DRIVERLIB_PIE_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_PIE_WRITEREGISTER_H_

#include "DriverLib/PIE/Peripheral/xHeader/PIE_Enum.h"

void PIE__vWriteRegister(PIE_Register_t* pstModuleArg);
void PIE_VECTOR__vWriteRegister(PIE_VECTOR_Register_t* pstModuleArg);

#endif /* DRIVERLIB_PIE_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_PIE_WRITEREGISTER_H_ */
