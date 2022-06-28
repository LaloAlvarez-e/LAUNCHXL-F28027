/**
 *
 * @file MCU_ReadRegister.c
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
#include "DriverLib/MCU/xHeader/MCU_ReadRegister.h"

uint16_t MCU__u16ReadRegister(MCU_Register16Bits_t* pstRegisterDataArg)
{
    volatile uint16_t* pu16RegisterAddress;
    uintptr_t uptrRegisterAddress;
    uint16_t u16RegisterValue;
    uint16_t u16RegisterMask;
    uint16_t u16RegisterShift;

    u16RegisterValue = 0U;
    if(0UL != (uintptr_t) pstRegisterDataArg)
    {
        u16RegisterMask = pstRegisterDataArg->u16Mask;
        u16RegisterShift = pstRegisterDataArg->u16Shift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        pu16RegisterAddress = (volatile uint16_t*) uptrRegisterAddress;
        u16RegisterValue = *pu16RegisterAddress;
        if(MCU_MASK_16 != u16RegisterMask)
        {
            u16RegisterValue >>= u16RegisterShift;
            u16RegisterValue &= u16RegisterMask;
        }
        pstRegisterDataArg->u16Value = u16RegisterValue;
    }

    return (u16RegisterValue);
}

uint32_t MCU__u32ReadRegister(MCU_Register32Bits_t* pstRegisterDataArg)
{
    volatile uint32_t* pu32RegisterAddress;
    uintptr_t uptrRegisterAddress;
    uint32_t u32RegisterValue;
    uint32_t u32RegisterMask;
    uint16_t u16RegisterShift;

    u32RegisterValue = 0U;
    if(0UL != (uintptr_t) pstRegisterDataArg)
    {
        u32RegisterMask = pstRegisterDataArg->u32Mask;
        u16RegisterShift = pstRegisterDataArg->u16Shift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        pu32RegisterAddress = (volatile uint32_t*) uptrRegisterAddress;
        u32RegisterValue = *pu32RegisterAddress;
        if(MCU_MASK_32 != u32RegisterMask)
        {
            u32RegisterValue >>= u16RegisterShift;
            u32RegisterValue &= u32RegisterMask;
        }
        pstRegisterDataArg->u32Value = u32RegisterValue;
    }

    return (u32RegisterValue);
}


uint16_t MCU__u16ReadRegister_RAM(MCU_Register16Bits_t* pstRegisterDataArg)
{
    volatile uint16_t* pu16RegisterAddress;
    uintptr_t uptrRegisterAddress;
    uint16_t u16RegisterValue;
    uint16_t u16RegisterMask;
    uint16_t u16RegisterShift;

    u16RegisterValue = 0U;
    if(0UL != (uintptr_t) pstRegisterDataArg)
    {
        u16RegisterMask = pstRegisterDataArg->u16Mask;
        u16RegisterShift = pstRegisterDataArg->u16Shift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        pu16RegisterAddress = (volatile uint16_t*) uptrRegisterAddress;
        u16RegisterValue = *pu16RegisterAddress;
        if(MCU_MASK_16 != u16RegisterMask)
        {
            u16RegisterValue >>= u16RegisterShift;
            u16RegisterValue &= u16RegisterMask;
        }
        pstRegisterDataArg->u16Value = u16RegisterValue;
    }

    return (u16RegisterValue);
}

uint32_t MCU__u32ReadRegister_RAM(MCU_Register32Bits_t* pstRegisterDataArg)
{
    volatile uint32_t* pu32RegisterAddress;
    uintptr_t uptrRegisterAddress;
    uint32_t u32RegisterValue;
    uint32_t u32RegisterMask;
    uint16_t u16RegisterShift;

    u32RegisterValue = 0U;
    if(0UL != (uintptr_t) pstRegisterDataArg)
    {
        u32RegisterMask = pstRegisterDataArg->u32Mask;
        u16RegisterShift = pstRegisterDataArg->u16Shift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        pu32RegisterAddress = (volatile uint32_t*) uptrRegisterAddress;
        u32RegisterValue = *pu32RegisterAddress;
        if(MCU_MASK_32 != u32RegisterMask)
        {
            u32RegisterValue >>= u16RegisterShift;
            u32RegisterValue &= u32RegisterMask;
        }
        pstRegisterDataArg->u32Value = u32RegisterValue;
    }

    return (u32RegisterValue);
}



