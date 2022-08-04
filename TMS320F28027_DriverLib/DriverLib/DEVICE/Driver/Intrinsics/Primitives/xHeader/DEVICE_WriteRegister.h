/**
 *
 * @file DEVICE_WriteRegister.h
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

#ifndef DRIVERLIB_DEVICE_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_DEVICE_WRITEREGISTER_H_
#define DRIVERLIB_DEVICE_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_DEVICE_WRITEREGISTER_H_

#include "DriverLib/DEVICE/Peripheral/xHeader/DEVICE_Enum.h"

void DEVICE__vWriteRegister_16Bits(DEVICE_Register16Bits_t* pstModuleArg);
void DEVICE__vWriteRegister_32Bits(DEVICE_Register32Bits_t* pstModuleArg);

#endif /* DRIVERLIB_DEVICE_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_DEVICE_WRITEREGISTER_H_ */
