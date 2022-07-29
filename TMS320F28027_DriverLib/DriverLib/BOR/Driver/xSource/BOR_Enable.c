/**
 *
 * @file BOR_Enable.c
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
 * @verbatim 29 jul. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 29 jul. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/BOR/Driver/xHeader/BOR_Enable.h"
#include "DriverLib/BOR/Driver/Intrinsics/BOR_Intrinsics.h"
#include "DriverLib/BOR/Peripheral/BOR_Peripheral.h"

void BOR__vSetEnable(BOR_nENABLE enEnableArg)
{
    BOR_Register_t stRegister;
    uint16_t u16EnableReg;

    if(BOR_enENABLE_DIS == enEnableArg)
    {
        u16EnableReg = 1U;
    }
    else
    {
        u16EnableReg = 0U;
    }

    stRegister.u16Shift = BOR_CFG_R_ENZ_BIT;
    stRegister.u16Mask = BOR_CFG_ENZ_MASK;
    stRegister.uptrAddress = BOR_CFG_OFFSET;
    stRegister.u16Value = u16EnableReg;
    BOR__vWriteRegister(&stRegister);
}

void BOR__vEnable(void)
{
    BOR__vSetEnable(BOR_enENABLE_ENA);
}

void BOR__vDisable(void)
{
    BOR__vSetEnable(BOR_enENABLE_DIS);
}

BOR_nENABLE BOR__enGetEnable(void)
{
    BOR_Register_t stRegister;
    uint16_t u16EnableReg;
    BOR_nENABLE enEnableReg;

    stRegister.u16Shift = BOR_CFG_R_ENZ_BIT;
    stRegister.u16Mask = BOR_CFG_ENZ_MASK;
    stRegister.uptrAddress = BOR_CFG_OFFSET;
    u16EnableReg = BOR__u16ReadRegister(&stRegister);

    if(0U == u16EnableReg)
    {
        enEnableReg = BOR_enENABLE_ENA;
    }
    else
    {
        enEnableReg = BOR_enENABLE_DIS;
    }
    return (enEnableReg);
}
