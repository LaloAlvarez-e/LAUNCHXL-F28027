/**
 *
 * @file PIE_ReadRegister.h
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

#ifndef DRIVERLIB_PIE_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_PIE_READREGISTER_H_
#define DRIVERLIB_PIE_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_PIE_READREGISTER_H_

#include "DriverLib/PIE/Peripheral/xHeader/PIE_Enum.h"

uint16_t PIE__u16ReadRegister(PIE_Register16Bits_t* pstModuleArg);
uint32_t PIE_VECTOR__u32ReadRegister(PIE_Register32Bits_t* pstModuleArg);

#endif /* DRIVERLIB_PIE_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_PIE_READREGISTER_H_ */
