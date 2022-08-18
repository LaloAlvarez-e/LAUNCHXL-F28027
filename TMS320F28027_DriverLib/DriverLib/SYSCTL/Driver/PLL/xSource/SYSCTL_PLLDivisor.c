/**
 *
 * @file SYSCTL_PLLDivisor.c
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
 * @verbatim 6 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/SYSCTL/Driver/PLL/xHeader/SYSCTL_PLLDivisor.h"
#include "DriverLib/SYSCTL/Driver/Intrinsics/SYSCTL_Intrinsics.h"
#include "DriverLib/SYSCTL/Peripheral/SYSCTL_Peripheral.h"


void SYSCTL__vSetPLLDivisor(SYSCTL_nPLL_DIV enPLLDivisorArg)
{
    SYSCTL_Register_t stRegister;
    stRegister.u16Shift = SYSCTL_PLLSTS_R_DIVSEL_BIT;
    stRegister.u16Mask = SYSCTL_PLLSTS_DIVSEL_MASK;
    stRegister.uptrAddress = SYSCTL_PLLSTS_OFFSET;
    stRegister.u16Value = (uint16_t) enPLLDivisorArg;
    SYSCTL__vWriteRegister(&stRegister);
}

SYSCTL_nPLL_DIV SYSCTL__enGetPLLDivisor(void)
{
    SYSCTL_Register_t stRegister;

    stRegister.u16Shift = SYSCTL_PLLSTS_R_DIVSEL_BIT;
    stRegister.u16Mask = SYSCTL_PLLSTS_DIVSEL_MASK;
    stRegister.uptrAddress = SYSCTL_PLLSTS_OFFSET;
    SYSCTL__u16ReadRegister(&stRegister);
    if(SYSCTL_PLLSTS_DIVSEL_DIV4_OPT == stRegister.u16Value)
    {
        stRegister.u16Value = SYSCTL_PLLSTS_DIVSEL_DIV4;
    }
    return ((SYSCTL_nPLL_DIV) stRegister.u16Value);
}

SYSCTL_nERROR SYSCTL__enSetPLLDivisorNum(uint16_t u16DivArg)
{
    uint16_t u16Value;
    SYSCTL_nERROR enErrorReg;

    if(0U != u16DivArg)
    {
        enErrorReg = SYSCTL_enERROR_OK;
        if(0U != (0x4U &u16DivArg))
        {
            u16Value = SYSCTL_PLLSTS_DIVSEL_DIV4;
        }
        else if(0U != (0x2U & u16DivArg))
        {
            u16Value = SYSCTL_PLLSTS_DIVSEL_DIV2;
        }
        else if(0U != (0x1U & u16DivArg))
        {
            u16Value = SYSCTL_PLLSTS_DIVSEL_DIV1;
        }
        else
        {
            u16Value = SYSCTL_PLLSTS_DIVSEL_DIV4;
        }
        SYSCTL_Register_t stRegister;
        stRegister.u16Shift = SYSCTL_PLLSTS_R_DIVSEL_BIT;
        stRegister.u16Mask = SYSCTL_PLLSTS_DIVSEL_MASK;
        stRegister.uptrAddress = SYSCTL_PLLSTS_OFFSET;
        stRegister.u16Value = u16Value;
        SYSCTL__vWriteRegister(&stRegister);
    }
    else
    {
        enErrorReg = SYSCTL_enERROR_VALUE;
    }
    return (enErrorReg);
}

uint16_t SYSCTL__u16GetPLLDivisor(void)
{
    SYSCTL_Register_t stRegister;
    uint16_t u16ValueReg;
    uint16_t u16DivisorReg;

    stRegister.u16Shift = SYSCTL_PLLSTS_R_DIVSEL_BIT;
    stRegister.u16Mask = SYSCTL_PLLSTS_DIVSEL_MASK;
    stRegister.uptrAddress = SYSCTL_PLLSTS_OFFSET;
    u16ValueReg = SYSCTL__u16ReadRegister(&stRegister);
    switch(u16ValueReg)
    {
    case SYSCTL_PLLSTS_DIVSEL_DIV4_OPT:
        u16DivisorReg = 4U;
        break;
    case SYSCTL_PLLSTS_DIVSEL_DIV4:
        u16DivisorReg = 4U;
        break;
    case SYSCTL_PLLSTS_DIVSEL_DIV2:
        u16DivisorReg = 2U;
        break;
    case SYSCTL_PLLSTS_DIVSEL_DIV1:
        u16DivisorReg = 1U;
        break;
    default:
        u16DivisorReg = 4U;
        break;
    }
    return (u16DivisorReg);
}


