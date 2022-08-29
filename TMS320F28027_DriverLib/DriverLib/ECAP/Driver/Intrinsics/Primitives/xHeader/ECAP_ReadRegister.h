/**
 *
 * @file ECAP_ReadRegister.h
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

#ifndef DRIVERLIB_ECAP_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_ECAP_READREGISTER_H_
#define DRIVERLIB_ECAP_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_ECAP_READREGISTER_H_

#include "DriverLib/ECAP/Peripheral/xHeader/ECAP_Enum.h"

uint16_t ECAP__u16ReadRegister(ECAP_nMODULE enPortArg, ECAP_Register16Bits_t* pstModuleArg);
uint32_t ECAP__u32ReadRegister(ECAP_nMODULE enPortArg, ECAP_Register32Bits_t* pstModuleArg);

#endif /* DRIVERLIB_ECAP_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_ECAP_READREGISTER_H_ */
