/**
 *
 * @file GPIO_InputSampleCycles.c
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
 * @verbatim 24 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/GPIO/Driver/xHeader/GPIO_InputSampleCycles.h"

#include "DriverLib/GPIO/Driver/Intrinsics/GPIO_Intrinsics.h"
#include "DriverLib/GPIO/Peripheral/GPIO_Peripheral.h"

#define GPIO_SAMPLECYCLES_MAX (510U)

GPIO_nERROR GPIO__enSetInputSampleCycles(GPIO_nPORT enModuleArg, uint32_t u32PinArg, uint16_t u16CyclesArg)
{
    uint16_t u16BitNumber;
    GPIO_nERROR enErrorReg;

    if((GPIO_enPORT_A == enModuleArg) || (GPIO_enPORT_B == enModuleArg))
    {
        enErrorReg = GPIO_enERROR_VALUE;
        if(0U != u16CyclesArg)
        {
            u16BitNumber = 0U;
            while(0U != u32PinArg)
            {
                if(1U & u32PinArg)
                {
                    enErrorReg = GPIO__enSetInputSampleCyclesByNumber(enModuleArg, (GPIO_nPIN_NUMBER) u16BitNumber, u16CyclesArg);
                }
                u32PinArg >>= 1U;
                u16BitNumber++;
            }
        }
    }
    else
    {
        enErrorReg = GPIO_enERROR_ARG;
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO__enSetInputSampleCyclesByNumber(GPIO_nPORT enModuleArg, GPIO_nPIN_NUMBER enPinNumberArg, uint16_t u16CyclesArg)
{
    GPIO_Register_t stRegister;
    uint16_t u16ShiftReg;
    uint16_t u16CurrentValue;
    GPIO_nERROR enErrorReg;

    if((GPIO_enPORT_A == enModuleArg) || (GPIO_enPORT_B == enModuleArg))
    {
        if(GPIO_SAMPLECYCLES_MAX >= u16CyclesArg)
        {
            enErrorReg = GPIO_enERROR_OK;
            u16CurrentValue = GPIO__u16GetInputSampleCyclesByNumber(enModuleArg, enPinNumberArg);

            if(u16CyclesArg > u16CurrentValue)
            {
                u16CyclesArg >>= 1U;

                u16ShiftReg = (uint16_t) enPinNumberArg;
                u16ShiftReg >>= 3U;
                u16ShiftReg &= 0x3U;
                u16ShiftReg *= GPIO_CONTROL_CTRL_R_QUALPRD1_BIT;

                stRegister.u16Shift = u16ShiftReg;
                stRegister.u32Mask = GPIO_CONTROL_CTRL_QUALPRD0_MASK;
                stRegister.uptrAddress = GPIO_CONTROL_CTRL_OFFSET;
                stRegister.u32Value = u16CyclesArg;
                GPIO_CONTROL__vWriteRegister(enModuleArg, &stRegister);
            }
        }
        else
        {
            enErrorReg = GPIO_enERROR_VALUE;
        }
    }
    else
    {
        enErrorReg = GPIO_enERROR_ARG;
    }

    return (enErrorReg);
}


uint16_t GPIO__u16GetInputSampleCyclesByNumber(GPIO_nPORT enModuleArg, GPIO_nPIN_NUMBER enPinNumberArg)
{
    GPIO_Register_t stRegister;
    uint16_t u16InputSampleCyclesReg;
    uint16_t u16ShiftReg;

    if((GPIO_enPORT_A == enModuleArg) || (GPIO_enPORT_B == enModuleArg))
    {
        u16ShiftReg = (uint16_t) enPinNumberArg;
        u16ShiftReg >>= 3U;
        u16ShiftReg &= 0x3U;
        u16ShiftReg *= GPIO_CONTROL_CTRL_R_QUALPRD1_BIT;

        stRegister.u16Shift = u16ShiftReg;
        stRegister.u32Mask = GPIO_CONTROL_CTRL_QUALPRD0_MASK;
        stRegister.uptrAddress = GPIO_CONTROL_CTRL_OFFSET;
        u16InputSampleCyclesReg = GPIO__u32ReadRegister(enModuleArg, &stRegister);
        u16InputSampleCyclesReg++;
        u16InputSampleCyclesReg <<= 1U;
    }
    else
    {
        u16InputSampleCyclesReg = 1U;
    }
    return (u16InputSampleCyclesReg);
}




GPIO_nERROR GPIO__enSetInputSampleCyclesByFunction(GPIO_nDIGITAL_FUNCTION enFunctionArg, uint16_t u16CyclesArg)
{
    uint32_t u32FunctionReg;
    uint32_t u32BitNumberReg;
    uint32_t u32ModuleReg;
    GPIO_nERROR enErrorReg;

    u32FunctionReg = (uint32_t) enFunctionArg;

    u32FunctionReg >>= 8U;
    u32BitNumberReg = u32FunctionReg;
    u32BitNumberReg &= 0xFFU;

    u32FunctionReg >>= 8U;
    u32ModuleReg = u32FunctionReg;
    u32ModuleReg &= 0xFFU;

    enErrorReg = GPIO__enSetInputSampleCyclesByNumber((GPIO_nPORT) u32ModuleReg, (GPIO_nPIN_NUMBER) u32BitNumberReg, u16CyclesArg);

    return (enErrorReg);
}


uint16_t GPIO__u16GetInputSampleCyclesByFunction(GPIO_nDIGITAL_FUNCTION enFunctionArg)
{
    uint32_t u32FunctionReg;
    uint32_t u32BitNumberReg;
    uint32_t u32ModuleReg;
    uint16_t u16InputSampleCyclesReg;

    u32FunctionReg = (uint32_t) enFunctionArg;

    u32FunctionReg >>= 8U;
    u32BitNumberReg = u32FunctionReg;
    u32BitNumberReg &= 0xFFU;

    u32FunctionReg >>= 8U;
    u32ModuleReg = u32FunctionReg;
    u32ModuleReg &= 0xFFU;

    u16InputSampleCyclesReg = GPIO__u16GetInputSampleCyclesByNumber((GPIO_nPORT) u32ModuleReg, (GPIO_nPIN_NUMBER) u32BitNumberReg);
    return (u16InputSampleCyclesReg);
}



