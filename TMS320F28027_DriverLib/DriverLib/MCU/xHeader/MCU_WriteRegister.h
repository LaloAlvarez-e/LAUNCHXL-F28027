/**
 *
 * @file MCU_WriteRegister.h
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
 * @verbatim 19 jun. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_MCU_XHEADER_MCU_WRITEREGISTER_H_
#define DRIVERLIB_MCU_XHEADER_MCU_WRITEREGISTER_H_

#include "DriverLib/MCU/xHeader/MCU_Enum.h"

#pragma  CODE_SECTION(MCU__vWriteRegister_16Bits_RAM, ".TI.ramfunc")
#pragma  CODE_SECTION(MCU__vWriteRegister_32Bits_RAM, ".TI.ramfunc")
#pragma  CODE_SECTION(MCU__vWriteProtectedRegister_16Bits_RAM, ".TI.ramfunc")
#pragma  CODE_SECTION(MCU__vWriteProtectedRegister_32Bits_RAM, ".TI.ramfunc")

void MCU__vWriteRegister_16Bits_RAM(MCU_Register16Bits_t* pstRegisterDataArg);
void MCU__vWriteProtectedRegister_16Bits_RAM(MCU_Register16Bits_t* pstRegisterDataArg);
void MCU__vWriteRegister_32Bits_RAM(MCU_Register32Bits_t* pstRegisterDataArg);
void MCU__vWriteProtectedRegister_32Bits_RAM(MCU_Register32Bits_t* pstRegisterDataArg);

void MCU__vWriteRegister_16Bits(MCU_Register16Bits_t* pstRegisterDataArg);
void MCU__vWriteProtectedRegister_16Bits(MCU_Register16Bits_t* pstRegisterDataArg);
void MCU__vWriteRegister_32Bits(MCU_Register32Bits_t* pstRegisterDataArg);
void MCU__vWriteProtectedRegister_32Bits(MCU_Register32Bits_t* pstRegisterDataArg);

#endif /* DRIVERLIB_MCU_XHEADER_MCU_WRITEREGISTER_H_ */
