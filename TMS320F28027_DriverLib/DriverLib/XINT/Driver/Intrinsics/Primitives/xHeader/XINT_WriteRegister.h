/**
 *
 * @file XINT_WriteRegister.h
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

#ifndef DRIVERLIB_XINT_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_XINT_WRITEREGISTER_H_
#define DRIVERLIB_XINT_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_XINT_WRITEREGISTER_H_

#include "DriverLib/XINT/Peripheral/xHeader/XINT_Enum.h"

void XINT__vWriteRegister(XINT_nMODULE enModuleArg, XINT_Register_t* pstModuleArg);
void XINT__vWriteProtectedRegister(XINT_nMODULE enModuleArg, XINT_Register_t* pstModuleArg);
#endif /* DRIVERLIB_XINT_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_XINT_WRITEREGISTER_H_ */
