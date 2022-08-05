/**
 *
 * @file SYSCTL_InputClock.c
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
 * @verbatim 5 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/SYSCTL/Driver/xHeader/SYSCTL_InputClock.h"
#include "DriverLib/SYSCTL/Driver/Intrinsics/SYSCTL_Intrinsics.h"
#include "DriverLib/SYSCTL/Peripheral/SYSCTL_Peripheral.h"

void SYSCTL__vSetInputClockSource(SYSCTL_nINCLK_SRC enInputPinArg)
{
    SYSCTL_Register_t stRegister;

    stRegister.u16Shift = SYSCTL_XCLK_R_XCLKINSEL_BIT;
    stRegister.u16Mask = SYSCTL_XCLK_XCLKINSEL_MASK;
    stRegister.uptrAddress = SYSCTL_XCLK_OFFSET;
    stRegister.u16Value = (uint16_t) enInputPinArg;
    SYSCTL__vWriteRegister(&stRegister);
}

SYSCTL_nINCLK_SRC SYSCTL__enGetInputClockSource(void)
{
    SYSCTL_Register_t stRegister;

    stRegister.u16Shift = SYSCTL_XCLK_R_XCLKINSEL_BIT;
    stRegister.u16Mask = SYSCTL_XCLK_XCLKINSEL_MASK;
    stRegister.uptrAddress = SYSCTL_XCLK_OFFSET;
    stRegister.u16Value = (uint16_t) SYSCTL_enINCLK_SRC_GPIO38;
    SYSCTL__u16ReadRegister(&stRegister);
    return ((SYSCTL_nINCLK_SRC) stRegister.u16Value);
}




