/**
 *
 * @file SYSCTL_WriteRegister.h
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

#ifndef DRIVERLIB_SYSCTL_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_SYSCTL_WRITEREGISTER_H_
#define DRIVERLIB_SYSCTL_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_SYSCTL_WRITEREGISTER_H_

#include "DriverLib/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h"

void SYSCTL__vWriteRegister(SYSCTL_Register_t* pstModuleArg);
void SYSCTL_VECTOR__vWriteRegister(SYSCTL_VECTOR_Register_t* pstModuleArg);

#endif /* DRIVERLIB_SYSCTL_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_SYSCTL_WRITEREGISTER_H_ */
