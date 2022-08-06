/**
 *
 * @file SYSCTL_LowPowerClock.c
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
 * @verbatim 4 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 4 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/SYSCTL/Driver/xHeader/SYSCTL_LowPowerClock.h"
#include "DriverLib/SYSCTL/Driver/Intrinsics/SYSCTL_Intrinsics.h"
#include "DriverLib/SYSCTL/Peripheral/SYSCTL_Peripheral.h"

void SYSCTL__vSetLowPowerClockConfig(SYSCTL_nLPCLK_SRC enSourceArg, SYSCTL_nLPCLK_DIV enDivisorArg)
{
    SYSCTL__vSetLowPowerClockSource(enSourceArg);
    SYSCTL__vSetLowPowerClockDivisor(enDivisorArg);
}

void SYSCTL__vSetLowPowerClockSource(SYSCTL_nLPCLK_SRC enSourceArg)
{
    (void) enSourceArg;
}

void SYSCTL__vSetLowPowerClockDivisor(SYSCTL_nLPCLK_DIV enDivisorArg)
{
    SYSCTL_Register_t stRegister;

    stRegister.u16Shift = SYSCTL_LOSPCP_R_LSPCLK_BIT;
    stRegister.u16Mask = SYSCTL_LOSPCP_LSPCLK_MASK;
    stRegister.uptrAddress = SYSCTL_LOSPCP_OFFSET;
    stRegister.u16Value = (uint16_t) enDivisorArg;
    SYSCTL__vWriteRegister(&stRegister);
}

SYSCTL_nLPCLK_DIV SYSCTL__enGetLowPowerClockDivisor(void)
{
    SYSCTL_Register_t stRegister;

    stRegister.u16Shift = SYSCTL_LOSPCP_R_LSPCLK_BIT;
    stRegister.u16Mask = SYSCTL_LOSPCP_LSPCLK_MASK;
    stRegister.uptrAddress = SYSCTL_LOSPCP_OFFSET;
    SYSCTL__u16ReadRegister(&stRegister);
    return ((SYSCTL_nLPCLK_DIV) stRegister.u16Value);
}

SYSCTL_nLPCLK_SRC SYSCTL__enGetLowPowerClockSource(void)
{
    return (SYSCTL_enLPCLK_SRC_SYSCLK);
}




