/**
 *
 * @file MCU_ReadRegister.h
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

#ifndef DRIVERLIB_MCU_XHEADER_MCU_READREGISTER_H_
#define DRIVERLIB_MCU_XHEADER_MCU_READREGISTER_H_

#include "DriverLib/MCU/xHeader/MCU_Enum.h"


#pragma  CODE_SECTION(MCU__u16ReadRegister_RAM, ".TI.ramfunc")
#pragma  CODE_SECTION(MCU__u32ReadRegister_RAM, ".TI.ramfunc")

uint16_t MCU__u16ReadRegister_RAM(MCU_Register16Bits_t* pstRegisterDataArg);
uint32_t MCU__u32ReadRegister_RAM(MCU_Register32Bits_t* pstRegisterDataArg);

uint16_t MCU__u16ReadRegister(MCU_Register16Bits_t* pstRegisterDataArg);
uint32_t MCU__u32ReadRegister(MCU_Register32Bits_t* pstRegisterDataArg);

#endif /* DRIVERLIB_MCU_XHEADER_MCU_READREGISTER_H_ */
