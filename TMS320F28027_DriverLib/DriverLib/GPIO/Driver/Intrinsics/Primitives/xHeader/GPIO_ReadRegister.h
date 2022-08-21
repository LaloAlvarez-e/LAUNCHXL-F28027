/**
 *
 * @file GPIO_ReadRegister.h
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

#ifndef DRIVERLIB_GPIO_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_GPIO_READREGISTER_H_
#define DRIVERLIB_GPIO_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_GPIO_READREGISTER_H_

#include "DriverLib/GPIO/Peripheral/xHeader/GPIO_Enum.h"

uint32_t GPIO__u32ReadRegister(GPIO_nPORT enPortArg, GPIO_Register_t* pstModuleArg);
uint32_t GPIO_CONTROL__u32ReadRegister(GPIO_nPORT enPortArg, GPIO_Register_t* pstModuleArg);
uint32_t GPIO_DATA__u32ReadRegister(GPIO_nPORT enPortArg, GPIO_Register_t* pstModuleArg);

#endif /* DRIVERLIB_GPIO_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_GPIO_READREGISTER_H_ */
