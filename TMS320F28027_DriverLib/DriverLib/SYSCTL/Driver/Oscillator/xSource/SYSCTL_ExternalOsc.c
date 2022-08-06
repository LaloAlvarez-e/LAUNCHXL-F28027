/**
 *
 * @file SYSCTL_ExternalOsc.c
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
#include "DriverLib/SYSCTL/Driver/Oscillator/xHeader/SYSCTL_ExternalOsc.h"
#include "DriverLib/SYSCTL/Driver/Intrinsics/SYSCTL_Intrinsics.h"
#include "DriverLib/SYSCTL/Peripheral/SYSCTL_Peripheral.h"

#define SYSCTL_EXTOSC_FREQ (0U)

uint16_t SYSCTL__u32GetExternalOscFrequency(void)
{
    SYSCTL_nSTATE enStateReg;
    uint32_t u32FrequencyReg;

    enStateReg = SYSCTL__enGetExternalOscPowerState();
    if(SYSCTL_enSTATE_OFF == enStateReg)
    {
        u32FrequencyReg = 0U;
    }
    else
    {
        u32FrequencyReg = SYSCTL_EXTOSC_FREQ;
    }

    return (u32FrequencyReg);
}

void SYSCTL__vSetExternalOscPowerState(SYSCTL_nSTATE enStateArg)
{
    SYSCTL_Register_t stRegister;
    uint16_t u16StateReg;

    if(SYSCTL_enSTATE_OFF == enStateArg)
    {
        u16StateReg = SYSCTL_CLKCTL_XTALOSCOFF_OFF;
    }
    else
    {
        u16StateReg = SYSCTL_CLKCTL_XTALOSCOFF_ON;
    }

    stRegister.u16Shift = SYSCTL_CLKCTL_R_XTALOSCOFF_BIT;
    stRegister.u16Mask = SYSCTL_CLKCTL_XTALOSCOFF_MASK;
    stRegister.uptrAddress = SYSCTL_CLKCTL_OFFSET;
    stRegister.u16Value = u16StateReg;
    SYSCTL__vWriteRegister(&stRegister);
}

SYSCTL_nSTATE SYSCTL__enGetExternalOscPowerState(void)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nSTATE enStateReg;
    uint16_t u16StateReg;

    stRegister.u16Shift = SYSCTL_CLKCTL_R_XTALOSCOFF_BIT;
    stRegister.u16Mask = SYSCTL_CLKCTL_XTALOSCOFF_MASK;
    stRegister.uptrAddress = SYSCTL_CLKCTL_OFFSET;
    u16StateReg = SYSCTL__u16ReadRegister(&stRegister);

    if(SYSCTL_CLKCTL_XTALOSCOFF_OFF == u16StateReg)
    {
        enStateReg = SYSCTL_enSTATE_OFF;
    }
    else
    {
        enStateReg = SYSCTL_enSTATE_ON;
    }
    return (enStateReg);
}




