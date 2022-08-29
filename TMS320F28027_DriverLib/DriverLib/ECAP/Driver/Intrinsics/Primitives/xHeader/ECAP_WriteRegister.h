/**
 *
 * @file ECAP_WriteRegister.h
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

#ifndef DRIVERLIB_ECAP_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_ECAP_WRITEREGISTER_H_
#define DRIVERLIB_ECAP_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_ECAP_WRITEREGISTER_H_

#include "DriverLib/ECAP/Peripheral/xHeader/ECAP_Enum.h"

void ECAP__vWriteRegister_16Bits(ECAP_nMODULE enModuleArg, ECAP_Register16Bits_t* pstModuleArg);
void ECAP__vWriteRegister_32Bits(ECAP_nMODULE enModuleArg, ECAP_Register32Bits_t* pstModuleArg);

#endif /* DRIVERLIB_ECAP_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_ECAP_WRITEREGISTER_H_ */
