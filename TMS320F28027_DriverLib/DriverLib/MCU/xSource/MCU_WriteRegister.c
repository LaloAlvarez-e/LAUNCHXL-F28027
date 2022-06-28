/**
 *
 * @file MCU_WriteRegister.c
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
#include "DriverLib/MCU/xHeader/MCU_WriteRegister.h"
#include "DriverLib/MCU/xHeader/MCU_Interrupt.h"

void MCU__vWriteRegister_16Bits(MCU_Register16Bits_t* pstRegisterDataArg)
{
    volatile uint16_t* pu16RegisterAddress;
    uintptr_t uptrRegisterAddress;
    uint16_t u16RegisterValue;
    uint16_t u16RegisterMask;
    uint16_t u16RegisterShift;
    uint16_t u16Reg;
    uint16_t u16StatusRegister;

    if(0U != (uintptr_t) pstRegisterDataArg)
    {
        u16RegisterValue = pstRegisterDataArg->u16Value;
        u16RegisterMask = pstRegisterDataArg->u16Mask;
        u16RegisterShift = pstRegisterDataArg->u16Shift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        u16StatusRegister = MCU__u16DisGlobalInterrupt_Debug();
        u16Reg = u16RegisterValue;
        pu16RegisterAddress = (volatile uint16_t*) uptrRegisterAddress;
        if(MCU_MASK_16 != u16RegisterMask)
        {
            u16Reg = *pu16RegisterAddress;
            u16RegisterValue &= u16RegisterMask;
            if(0U != u16RegisterShift)
            {
                u16RegisterValue <<= u16RegisterShift;
                u16RegisterMask <<= u16RegisterShift;
            }
            u16Reg &= ~u16RegisterMask;
            u16Reg |= u16RegisterValue;
        }
        *pu16RegisterAddress = u16Reg;
        MCU__vSetGlobalStatus(u16StatusRegister);
    }
}


void MCU__vWriteRegister_32Bits(MCU_Register32Bits_t* pstRegisterDataArg)
{
    volatile uint32_t* pu32RegisterAddress;
    uintptr_t uptrRegisterAddress;
    uint32_t u32RegisterValue;
    uint32_t u32RegisterMask;
    uint32_t u32Reg;
    uint16_t u16StatusRegister;
    uint16_t u16RegisterShift;

    if(0U != (uintptr_t) pstRegisterDataArg)
    {
        u32RegisterValue = pstRegisterDataArg->u32Value;
        u32RegisterMask = pstRegisterDataArg->u32Mask;
        u16RegisterShift = pstRegisterDataArg->u16Shift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        u16StatusRegister = MCU__u16DisGlobalInterrupt_Debug();
        u32Reg = u32RegisterValue;
        pu32RegisterAddress = (volatile uint32_t*) uptrRegisterAddress;
        if(MCU_MASK_32 != u32RegisterMask)
        {
            u32Reg = *pu32RegisterAddress;
            u32RegisterValue &= u32RegisterMask;
            if(0U != u16RegisterShift)
            {
                u32RegisterValue <<= u16RegisterShift;
                u32RegisterMask <<= u16RegisterShift;
            }
            u32Reg &= ~u32RegisterMask;
            u32Reg |= u32RegisterValue;
        }
        *pu32RegisterAddress = u32Reg;
        MCU__vSetGlobalStatus(u16StatusRegister);
    }
}


void MCU__vWriteRegister_16Bits_RAM(MCU_Register16Bits_t* pstRegisterDataArg)
{
    volatile uint16_t* pu16RegisterAddress;
    uintptr_t uptrRegisterAddress;
    uint16_t u16RegisterValue;
    uint16_t u16RegisterMask;
    uint16_t u16RegisterShift;
    uint16_t u16Reg;
    uint16_t u16StatusRegister;

    if(0U != (uintptr_t) pstRegisterDataArg)
    {
        u16RegisterValue = pstRegisterDataArg->u16Value;
        u16RegisterMask = pstRegisterDataArg->u16Mask;
        u16RegisterShift = pstRegisterDataArg->u16Shift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        u16StatusRegister = MCU__u16DisGlobalInterrupt_Debug_RAM();
        u16Reg = u16RegisterValue;
        pu16RegisterAddress = (volatile uint16_t*) uptrRegisterAddress;
        if(MCU_MASK_16 != u16RegisterMask)
        {
            u16Reg = *pu16RegisterAddress;
            u16RegisterValue &= u16RegisterMask;
            if(0U != u16RegisterShift)
            {
                u16RegisterValue <<= u16RegisterShift;
                u16RegisterMask <<= u16RegisterShift;
            }
            u16Reg &= ~u16RegisterMask;
            u16Reg |= u16RegisterValue;
        }
        *pu16RegisterAddress = u16Reg;
        MCU__vSetGlobalStatus_RAM(u16StatusRegister);
    }
}


void MCU__vWriteRegister_32Bits_RAM(MCU_Register32Bits_t* pstRegisterDataArg)
{
    volatile uint32_t* pu32RegisterAddress;
    uintptr_t uptrRegisterAddress;
    uint32_t u32RegisterValue;
    uint32_t u32RegisterMask;
    uint32_t u32Reg;
    uint16_t u16StatusRegister;
    uint16_t u16RegisterShift;

    if(0U != (uintptr_t) pstRegisterDataArg)
    {
        u32RegisterValue = pstRegisterDataArg->u32Value;
        u32RegisterMask = pstRegisterDataArg->u32Mask;
        u16RegisterShift = pstRegisterDataArg->u16Shift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        u16StatusRegister = MCU__u16DisGlobalInterrupt_Debug_RAM();
        u32Reg = u32RegisterValue;
        pu32RegisterAddress = (volatile uint32_t*) uptrRegisterAddress;
        if(MCU_MASK_32 != u32RegisterMask)
        {
            u32Reg = *pu32RegisterAddress;
            u32RegisterValue &= u32RegisterMask;
            if(0U != u16RegisterShift)
            {
                u32RegisterValue <<= u16RegisterShift;
                u32RegisterMask <<= u16RegisterShift;
            }
            u32Reg &= ~u32RegisterMask;
            u32Reg |= u32RegisterValue;
        }
        *pu32RegisterAddress = u32Reg;
        MCU__vSetGlobalStatus_RAM(u16StatusRegister);
    }
}
