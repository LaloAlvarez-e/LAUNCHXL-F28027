/**
 *
 * @file TIMER_Config.h
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
 * @verbatim 21 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_TIMER_DRIVER_XHEADER_TIMER_CONFIG_H_
#define DRIVERLIB_TIMER_DRIVER_XHEADER_TIMER_CONFIG_H_

#include "DriverLib/TIMER/Peripheral/xHeader/TIMER_Enum.h"

TIMER_nERROR TIMER__enConfig(TIMER_nMODULE enModuleArg,
                               TIMER_Config_t* pstConfigArg);

TIMER_nERROR TIMER__enConfigExt(TIMER_nMODULE enModuleArg,
                               TIMER_ConfigExt_t* pstConfigArg);

#endif /* DRIVERLIB_TIMER_DRIVER_XHEADER_TIMER_CONFIG_H_ */
