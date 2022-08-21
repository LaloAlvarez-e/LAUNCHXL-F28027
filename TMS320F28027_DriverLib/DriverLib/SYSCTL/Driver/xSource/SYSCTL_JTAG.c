/**
 *
 * @file SYSCTL_JTAG.c
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
 * @verbatim 21 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/SYSCTL/Driver/xHeader/SYSCTL_JTAG.h"

#include "DriverLib/SYSCTL/Driver/Intrinsics/SYSCTL_Intrinsics.h"
#include "DriverLib/SYSCTL/Peripheral/SYSCTL_Peripheral.h"

void SYSCTL__vSetJTAGState(SYSCTL_nENABLE enStateArg)
{
    SYSCTL_Register_t stRegister;
    uint16_t u16StateReg;

    if(SYSCTL_enENABLE_DIS == enStateArg)
    {
        u16StateReg = SYSCTL_JTAGDEBUG_JTAGDIS_DIS;
    }
    else
    {
        u16StateReg = SYSCTL_JTAGDEBUG_JTAGDIS_ENA;
    }

    stRegister.u16Shift = SYSCTL_JTAGDEBUG_R_JTAGDIS_BIT;
    stRegister.u16Mask = SYSCTL_JTAGDEBUG_JTAGDIS_MASK;
    stRegister.uptrAddress = SYSCTL_JTAGDEBUG_OFFSET;
    stRegister.u16Value = u16StateReg;
    SYSCTL__vWriteRegister(&stRegister);
}

SYSCTL_nENABLE SYSCTL__enGetJTAGState(void)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nENABLE enStateReg;
    uint16_t u16StateReg;

    stRegister.u16Shift = SYSCTL_JTAGDEBUG_R_JTAGDIS_BIT;
    stRegister.u16Mask = SYSCTL_JTAGDEBUG_JTAGDIS_MASK;
    stRegister.uptrAddress = SYSCTL_JTAGDEBUG_OFFSET;
    u16StateReg = SYSCTL__u16ReadRegister(&stRegister);

    if(SYSCTL_JTAGDEBUG_JTAGDIS_DIS == u16StateReg)
    {
        enStateReg = SYSCTL_enENABLE_DIS;
    }
    else
    {
        enStateReg = SYSCTL_enENABLE_ENA;
    }
    return (enStateReg);
}






