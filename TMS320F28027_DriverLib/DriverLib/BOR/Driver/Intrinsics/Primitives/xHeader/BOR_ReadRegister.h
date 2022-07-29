/**
 *
 * @file BOR_ReadRegister.h
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
 * @verbatim 29 jul. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 29 jul. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_BOR_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_BOR_READREGISTER_H_
#define DRIVERLIB_BOR_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_BOR_READREGISTER_H_

#include "DriverLib/BOR/Peripheral/xHeader/BOR_Enum.h"

uint16_t BOR__u16ReadRegister(BOR_Register_t* pstModuleArg);

#endif /* DRIVERLIB_BOR_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_BOR_READREGISTER_H_ */
