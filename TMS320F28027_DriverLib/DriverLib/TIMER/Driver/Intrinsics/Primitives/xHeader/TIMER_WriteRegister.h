/**
 *
 * @file TIMER_WriteRegister.h
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

#ifndef DRIVERLIB_TIMER_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_TIMER_WRITEREGISTER_H_
#define DRIVERLIB_TIMER_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_TIMER_WRITEREGISTER_H_

#include "DriverLib/TIMER/Peripheral/xHeader/TIMER_Enum.h"

void TIMER__vWriteRegister16Bits(TIMER_nMODULE enModuleArg, TIMER_Register16Bits_t* pstModuleArg);
void TIMER__vWriteRegister32Bits(TIMER_nMODULE enModuleArg, TIMER_Register32Bits_t* pstModuleArg);

#endif /* DRIVERLIB_TIMER_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_TIMER_WRITEREGISTER_H_ */
