/**
 *
 * @file SYSCTL_InternalOsc2.c
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
#include "DriverLib/SYSCTL/Driver/Oscillator/xHeader/SYSCTL_InternalOsc2.h"
#include "DriverLib/SYSCTL/Driver/Intrinsics/SYSCTL_Intrinsics.h"
#include "DriverLib/SYSCTL/Peripheral/SYSCTL_Peripheral.h"

#define SYSCTL_INTOSC2_FREQ (10000000UL)
#define SYSCTL_COARSETRIM_MAX (127)
#define SYSCTL_COARSETRIM_MIN (-127)
#define SYSCTL_FINETRIM_MAX (31)
#define SYSCTL_FINETRIM_MIN (-31)

uint32_t SYSCTL__u32GetInternalOsc2Frequency(void)
{
    SYSCTL_nSTATE enStateReg;
    uint32_t u32FrequencyReg;

    enStateReg = SYSCTL__enGetInternalOsc2PowerState();
    if(SYSCTL_enSTATE_OFF == enStateReg)
    {
        u32FrequencyReg = 0U;
    }
    else
    {
        u32FrequencyReg = SYSCTL_INTOSC2_FREQ;
    }

    return (u32FrequencyReg);
}

void SYSCTL__vSetInternalOsc2PowerState(SYSCTL_nSTATE enStateArg)
{
    SYSCTL_Register_t stRegister;
    uint16_t u16StateReg;

    if(SYSCTL_enSTATE_OFF == enStateArg)
    {
        u16StateReg = SYSCTL_CLKCTL_INTOSC2OFF_OFF;
    }
    else
    {
        u16StateReg = SYSCTL_CLKCTL_INTOSC2OFF_ON;
    }

    stRegister.u16Shift = SYSCTL_CLKCTL_R_INTOSC2OFF_BIT;
    stRegister.u16Mask = SYSCTL_CLKCTL_INTOSC2OFF_MASK;
    stRegister.uptrAddress = SYSCTL_CLKCTL_OFFSET;
    stRegister.u16Value = u16StateReg;
    SYSCTL__vWriteRegister(&stRegister);
}

SYSCTL_nSTATE SYSCTL__enGetInternalOsc2PowerState(void)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nSTATE enStateReg;
    uint16_t u16StateReg;

    stRegister.u16Shift = SYSCTL_CLKCTL_R_INTOSC2OFF_BIT;
    stRegister.u16Mask = SYSCTL_CLKCTL_INTOSC2OFF_MASK;
    stRegister.uptrAddress = SYSCTL_CLKCTL_OFFSET;
    u16StateReg = SYSCTL__u16ReadRegister(&stRegister);

    if(SYSCTL_CLKCTL_INTOSC2OFF_OFF == u16StateReg)
    {
        enStateReg = SYSCTL_enSTATE_OFF;
    }
    else
    {
        enStateReg = SYSCTL_enSTATE_ON;
    }
    return (enStateReg);
}


void SYSCTL__vSetInternalOsc2OnHaltAction(SYSCTL_nONHALT enOnHaltArg)
{
    SYSCTL_Register_t stRegister;

    stRegister.u16Shift = SYSCTL_CLKCTL_R_INTOSC2HALTI_BIT;
    stRegister.u16Mask = SYSCTL_CLKCTL_INTOSC2HALTI_MASK;
    stRegister.uptrAddress = SYSCTL_CLKCTL_OFFSET;
    stRegister.u16Value = (uint16_t) enOnHaltArg;
    SYSCTL__vWriteRegister(&stRegister);
}

SYSCTL_nONHALT SYSCTL__enGetInternalOsc2OnHaltAction(void)
{
    SYSCTL_Register_t stRegister;

    stRegister.u16Shift = SYSCTL_CLKCTL_R_INTOSC2HALTI_BIT;
    stRegister.u16Mask = SYSCTL_CLKCTL_INTOSC2HALTI_MASK;
    stRegister.uptrAddress = SYSCTL_CLKCTL_OFFSET;
    SYSCTL__u16ReadRegister(&stRegister);

    return ((SYSCTL_nONHALT) stRegister.u16Value);
}

void SYSCTL__vSetInternalOsc2CoarseTrimming(int16_t s16TrimArg)
{
    SYSCTL_Register_t stRegister;

    if(SYSCTL_COARSETRIM_MAX < s16TrimArg)
    {
        s16TrimArg = SYSCTL_COARSETRIM_MAX;
    }
    else if(SYSCTL_COARSETRIM_MIN > s16TrimArg)
    {
        s16TrimArg = SYSCTL_COARSETRIM_MIN;
    }
    stRegister.u16Shift = SYSCTL_INTOSC2TRIM_R_COARSETRIM_BIT;
    stRegister.u16Mask = SYSCTL_INTOSC2TRIM_COARSETRIM_MASK;
    stRegister.uptrAddress = SYSCTL_INTOSC2TRIM_OFFSET;
    stRegister.u16Value = (uint16_t) s16TrimArg;
    SYSCTL__vWriteRegister(&stRegister);
}

int16_t SYSCTL__s16GetInternalOsc2CoarseTrimming(void)
{
    SYSCTL_Register_t stRegister;
    int16_t s16TrimReg;
    uint16_t u16TrimReg;

    stRegister.u16Shift = SYSCTL_INTOSC2TRIM_R_COARSETRIM_BIT;
    stRegister.u16Mask = SYSCTL_INTOSC2TRIM_COARSETRIM_MASK;
    stRegister.uptrAddress = SYSCTL_INTOSC2TRIM_OFFSET;
    u16TrimReg = SYSCTL__u16ReadRegister(&stRegister);
    s16TrimReg = (int16_t) u16TrimReg;

    return (s16TrimReg);
}


void SYSCTL__vSetInternalOsc2FineTrimming(int16_t s16TrimArg)
{
    SYSCTL_Register_t stRegister;

    if(SYSCTL_FINETRIM_MAX < s16TrimArg)
    {
        s16TrimArg = SYSCTL_FINETRIM_MAX;
    }
    else if(SYSCTL_FINETRIM_MIN > s16TrimArg)
    {
        s16TrimArg = SYSCTL_FINETRIM_MIN;
    }
    stRegister.u16Shift = SYSCTL_INTOSC2TRIM_R_FINETRIM_BIT;
    stRegister.u16Mask = SYSCTL_INTOSC2TRIM_FINETRIM_MASK;
    stRegister.uptrAddress = SYSCTL_INTOSC2TRIM_OFFSET;
    stRegister.u16Value = (uint16_t) s16TrimArg;
    SYSCTL__vWriteRegister(&stRegister);
}

int16_t SYSCTL__s16GetInternalOsc2FineTrimming(void)
{
    SYSCTL_Register_t stRegister;
    int16_t s16TrimReg;
    uint16_t u16TrimReg;

    stRegister.u16Shift = SYSCTL_INTOSC2TRIM_R_FINETRIM_BIT;
    stRegister.u16Mask = SYSCTL_INTOSC2TRIM_FINETRIM_MASK;
    stRegister.uptrAddress = SYSCTL_INTOSC2TRIM_OFFSET;
    u16TrimReg = SYSCTL__u16ReadRegister(&stRegister);
    s16TrimReg = (int16_t) u16TrimReg;

    return (s16TrimReg);
}

void SYSCTL__vSetInternalOsc2Trimming(int16_t s16CoarseTrimArg, int16_t s16FineTrimArg)
{
    SYSCTL__vSetInternalOsc2CoarseTrimming(s16CoarseTrimArg);
    SYSCTL__vSetInternalOsc2FineTrimming(s16FineTrimArg);
}

SYSCTL_nERROR SYSCTL__enGetInternalOsc2CoarseTrimming(int16_t* ps16CoarseTrimArg, int16_t* ps16FineTrimArg)
{
    int16_t s16CoarseTrimReg;
    int16_t s16FineTrimReg;
    SYSCTL_nERROR enErrorReg;
    if((0U != ps16CoarseTrimArg) && (0U != ps16FineTrimArg))
    {
        enErrorReg = SYSCTL_enERROR_OK;
        s16CoarseTrimReg = SYSCTL__s16GetInternalOsc2CoarseTrimming();
        s16FineTrimReg = SYSCTL__s16GetInternalOsc2FineTrimming();

        *ps16CoarseTrimArg = s16CoarseTrimReg;
        *ps16FineTrimArg = s16FineTrimReg;

    }
    else
    {
        enErrorReg = SYSCTL_enERROR_POINTER;
    }

    return (enErrorReg);
}







