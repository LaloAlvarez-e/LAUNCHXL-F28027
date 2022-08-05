/**
 *
 * @file SYSCTL_OutputClock.c
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
#include "DriverLib/SYSCTL/Driver/xHeader/SYSCTL_OutputClock.h"
#include "DriverLib/SYSCTL/Driver/Intrinsics/SYSCTL_Intrinsics.h"
#include "DriverLib/SYSCTL/Peripheral/SYSCTL_Peripheral.h"

void SYSCTL__vSetOutputClockConfig(SYSCTL_nOUTCLK_SRC enSourceArg, SYSCTL_nOUTCLK_DIV enDivisorArg)
{
    SYSCTL__vSetOutputClockSource(enSourceArg);
    SYSCTL__vSetOutputClockDivisor(enDivisorArg);
}

void SYSCTL__vSetOutputClockSource(SYSCTL_nOUTCLK_SRC enSourceArg)
{
    (void) enSourceArg;
}

void SYSCTL__vSetOutputClockDivisor(SYSCTL_nOUTCLK_DIV enDivisorArg)
{
    SYSCTL_Register_t stRegister;

    stRegister.u16Shift = SYSCTL_XCLK_R_XCLKOUTDIV_BIT;
    stRegister.u16Mask = SYSCTL_XCLK_XCLKOUTDIV_MASK;
    stRegister.uptrAddress = SYSCTL_XCLK_OFFSET;
    stRegister.u16Value = (uint16_t) enDivisorArg;
    SYSCTL__vWriteRegister(&stRegister);
}

SYSCTL_nOUTCLK_DIV SYSCTL__enGetOutputClockDivisor(void)
{
    SYSCTL_Register_t stRegister;

    stRegister.u16Shift = SYSCTL_XCLK_R_XCLKOUTDIV_BIT;
    stRegister.u16Mask = SYSCTL_XCLK_XCLKOUTDIV_MASK;
    stRegister.uptrAddress = SYSCTL_XCLK_OFFSET;
    stRegister.u16Value = (uint16_t) SYSCTL_enOUTCLK_DIV_DIV4;
    SYSCTL__u16ReadRegister(&stRegister);
    return ((SYSCTL_nOUTCLK_DIV) stRegister.u16Value);
}

SYSCTL_nOUTCLK_SRC SYSCTL__enGetOutputClockSource(void)
{
    return (SYSCTL_enOUTCLK_SRC_SYSCLK);
}

