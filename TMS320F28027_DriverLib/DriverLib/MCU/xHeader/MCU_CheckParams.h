/**
 *
 * @file MCU_CheckParams.h
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
 * @verbatim 17 jul. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 jul. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_MCU_XHEADER_MCU_CHECKPARAMS_H_
#define DRIVERLIB_MCU_XHEADER_MCU_CHECKPARAMS_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

#pragma CODE_SECTION (MCU__u32CheckParams_RAM, ".TI.ramfunc")
uint32_t MCU__u32CheckParams_RAM(uint32_t u32ParameterToCheck, uint32_t u32ParameterMax);


inline uint32_t MCU__u32CheckParams(uint32_t u32ParameterToCheck, uint32_t u32ParameterMax);

inline uint32_t MCU__u32CheckParams(uint32_t u32ParameterToCheck, uint32_t u32ParameterMax)
{
    uint32_t u32Param = u32ParameterToCheck;
    if((u32ParameterMax <= u32ParameterToCheck) && (0U != u32ParameterMax))
    {
        u32Param = u32ParameterMax;
        u32Param -= 1U;
    }
    return (u32Param);
}



#endif /* DRIVERLIB_MCU_XHEADER_MCU_CHECKPARAMS_H_ */
