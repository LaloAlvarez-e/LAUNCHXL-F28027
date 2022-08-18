/**
 *
 * @file FLASH_Pipeline.c
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
 * @verbatim 7 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/FLASH/Driver/xHeader/FLASH_Pipeline.h"

#include "DriverLib/FLASH/Driver/Intrinsics/FLASH_Intrinsics.h"
#include "DriverLib/FLASH/Peripheral/FLASH_Peripheral.h"

void FLASH__vSetPipelineState(FLASH_nSTATE enEnableArg)
{
    FLASH_Register_t stRegister;

    stRegister.u16Shift = FLASH_OPT_R_ENPIPE_BIT;
    stRegister.u16Mask = FLASH_OPT_ENPIPE_MASK;
    stRegister.uptrAddress = FLASH_OPT_OFFSET;
    stRegister.u16Value = (uint16_t) enEnableArg;
    FLASH__vWriteRegister(&stRegister);
}

void FLASH__vEnablePipeline(void)
{
    FLASH__vSetPipelineState(FLASH_enSTATE_ENA);
}

void FLASH__vDisablePipeline(void)
{
    FLASH__vSetPipelineState(FLASH_enSTATE_DIS);
}

FLASH_nSTATE FLASH__enGetPipelineState(void)
{
    FLASH_Register_t stRegister;

    stRegister.u16Shift = FLASH_OPT_R_ENPIPE_BIT;
    stRegister.u16Mask = FLASH_OPT_ENPIPE_MASK;
    stRegister.uptrAddress = FLASH_OPT_OFFSET;
    FLASH__u16ReadRegister(&stRegister);
    return ((FLASH_nSTATE) stRegister.u16Value);
}




