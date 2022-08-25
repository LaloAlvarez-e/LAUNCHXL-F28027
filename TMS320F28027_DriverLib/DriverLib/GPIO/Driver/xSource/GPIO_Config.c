/**
 *
 * @file GPIO_Config.c
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
#include "DriverLib/GPIO/Driver/xHeader/GPIO_Config.h"

#include "DriverLib/GPIO/Driver/xHeader/GPIO_Resistor.h"
#include "DriverLib/GPIO/Driver/xHeader/GPIO_Direction.h"
#include "DriverLib/GPIO/Driver/xHeader/GPIO_Function.h"
#include "DriverLib/GPIO/Driver/xHeader/GPIO_InputSampleCycles.h"
#include "DriverLib/GPIO/Driver/xHeader/GPIO_InputSyncronization.h"

#include "DriverLib/GPIO/Driver/Intrinsics/GPIO_Intrinsics.h"
#include "DriverLib/GPIO/Peripheral/GPIO_Peripheral.h"

void GPIO__vSetConfigByFunction(GPIO_nDIGITAL_FUNCTION enFunctionArg, GPIO_nCONFIG enConfigArg)
{
    uint32_t u32FunctionReg;

    uint32_t u32PeriphReg;
    uint32_t u32BitNumberReg;
    uint32_t u32ModuleReg;

    u32FunctionReg = (uint32_t) enFunctionArg;
    u32PeriphReg = u32FunctionReg;
    u32PeriphReg &= 0xFFU;

    u32FunctionReg >>= 8U;
    u32BitNumberReg = u32FunctionReg;
    u32BitNumberReg &= 0xFFU;

    u32FunctionReg >>= 8U;
    u32ModuleReg = u32FunctionReg;
    u32ModuleReg &= 0xFFU;

    GPIO__vSetConfigByNumber((GPIO_nPORT) u32ModuleReg, (GPIO_nPIN_NUMBER) u32BitNumberReg, enConfigArg);
    GPIO__vSetFunctionByNumber((GPIO_nPORT) u32ModuleReg, (GPIO_nPIN_NUMBER) u32BitNumberReg, (GPIO_nFUNCTION) u32PeriphReg);
}


void GPIO__vSetConfigByNumber(GPIO_nPORT enModuleArg, GPIO_nPIN_NUMBER enPinNumberArg, GPIO_nCONFIG enConfigArg)
{
    uint32_t u32ConfigReg;

    uint32_t u32ResistorReg;
    uint32_t u32DirectionReg;
    uint32_t u32SyncReg;

    u32ConfigReg = (uint32_t) enConfigArg;
    u32ResistorReg = u32ConfigReg;
    u32ResistorReg &= 0xFFU;

    u32ConfigReg >>= 8U;
    u32DirectionReg = u32ConfigReg;
    u32DirectionReg &= 0xFFU;

    u32ConfigReg >>= 8U;
    u32SyncReg = u32ConfigReg;
    u32SyncReg &= 0xFFU;

    GPIO__enSetInputSyncronizationByNumber(enModuleArg, enPinNumberArg, (GPIO_nSYNC) u32SyncReg);
    GPIO__enSetResistorByNumber(enModuleArg, enPinNumberArg, (GPIO_nRESISTOR) u32ResistorReg);
    GPIO__vSetDirectionByNumber(enModuleArg, enPinNumberArg, (GPIO_nDIR) u32DirectionReg);
}



