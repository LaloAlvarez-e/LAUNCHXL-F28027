/**
 *
 * @file FLASH_WriteRegister.h
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

#ifndef DRIVERLIB_FLASH_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_FLASH_WRITEREGISTER_H_
#define DRIVERLIB_FLASH_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_FLASH_WRITEREGISTER_H_

#include "DriverLib/FLASH/Peripheral/xHeader/FLASH_Enum.h"

#pragma  CODE_SECTION(FLASH__vWriteRegister, ".TI.ramfunc")
void FLASH__vWriteRegister(FLASH_Register_t* pstModuleArg);

#endif /* DRIVERLIB_FLASH_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_FLASH_WRITEREGISTER_H_ */
