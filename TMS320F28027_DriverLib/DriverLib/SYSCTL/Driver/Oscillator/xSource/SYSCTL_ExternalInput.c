/**
 *
 * @file SYSCTL_ExternalInput.c
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
#include "DriverLib/SYSCTL/Driver/Oscillator/xHeader/SYSCTL_ExternalInput.h"
#include "DriverLib/SYSCTL/Driver/Intrinsics/SYSCTL_Intrinsics.h"
#include "DriverLib/SYSCTL/Peripheral/SYSCTL_Peripheral.h"

#define SYSCTL_INPUT_FREQ (0U)

uint16_t SYSCTL__u32GetExternalInputFrequency(void)
{
    SYSCTL_nSTATE enStateReg;
    uint32_t u32FrequencyReg;

    enStateReg = SYSCTL__enGetExternalInputPowerState();
    if(SYSCTL_enSTATE_OFF == enStateReg)
    {
        u32FrequencyReg = 0U;
    }
    else
    {
        u32FrequencyReg = SYSCTL_INPUT_FREQ;
    }

    return (u32FrequencyReg);
}

void SYSCTL__vSetExternalInputPowerState(SYSCTL_nSTATE enStateArg)
{
    SYSCTL_Register_t stRegister;
    uint16_t u16StateReg;

    if(SYSCTL_enSTATE_OFF == enStateArg)
    {
        u16StateReg = SYSCTL_CLKCTL_XCLKINOFF_OFF;
    }
    else
    {
        u16StateReg = SYSCTL_CLKCTL_XCLKINOFF_ON;
    }

    stRegister.u16Shift = SYSCTL_CLKCTL_R_XCLKINOFF_BIT;
    stRegister.u16Mask = SYSCTL_CLKCTL_XCLKINOFF_MASK;
    stRegister.uptrAddress = SYSCTL_CLKCTL_OFFSET;
    stRegister.u16Value = u16StateReg;
    SYSCTL__vWriteRegister(&stRegister);
}

SYSCTL_nSTATE SYSCTL__enGetExternalInputPowerState(void)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nSTATE enStateReg;
    uint16_t u16StateReg;

    stRegister.u16Shift = SYSCTL_CLKCTL_R_XCLKINOFF_BIT;
    stRegister.u16Mask = SYSCTL_CLKCTL_XCLKINOFF_MASK;
    stRegister.uptrAddress = SYSCTL_CLKCTL_OFFSET;
    u16StateReg = SYSCTL__u16ReadRegister(&stRegister);

    if(SYSCTL_CLKCTL_XCLKINOFF_OFF == u16StateReg)
    {
        enStateReg = SYSCTL_enSTATE_OFF;
    }
    else
    {
        enStateReg = SYSCTL_enSTATE_ON;
    }
    return (enStateReg);
}


void SYSCTL__vSetExternalInputSource(SYSCTL_nINOSC_SRC enInputPinArg)
{
    SYSCTL_Register_t stRegister;

    stRegister.u16Shift = SYSCTL_XCLK_R_XCLKINSEL_BIT;
    stRegister.u16Mask = SYSCTL_XCLK_XCLKINSEL_MASK;
    stRegister.uptrAddress = SYSCTL_XCLK_OFFSET;
    stRegister.u16Value = (uint16_t) enInputPinArg;
    SYSCTL__vWriteRegister(&stRegister);
}

SYSCTL_nINOSC_SRC SYSCTL__enGetExternalInputSource(void)
{
    SYSCTL_Register_t stRegister;

    stRegister.u16Shift = SYSCTL_XCLK_R_XCLKINSEL_BIT;
    stRegister.u16Mask = SYSCTL_XCLK_XCLKINSEL_MASK;
    stRegister.uptrAddress = SYSCTL_XCLK_OFFSET;
    stRegister.u16Value = (uint16_t) SYSCTL_enINOSC_SRC_GPIO38;
    SYSCTL__u16ReadRegister(&stRegister);
    return ((SYSCTL_nINOSC_SRC) stRegister.u16Value);
}



