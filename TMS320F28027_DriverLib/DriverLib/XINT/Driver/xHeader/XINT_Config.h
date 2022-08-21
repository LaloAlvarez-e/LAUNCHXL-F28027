/**
 *
 * @file XINT_Config.h
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

#ifndef DRIVERLIB_XINT_DRIVER_XHEADER_XINT_CONFIG_H_
#define DRIVERLIB_XINT_DRIVER_XHEADER_XINT_CONFIG_H_

#include "DriverLib/XINT/Peripheral/xHeader/XINT_Enum.h"

XINT_nERROR XINT__enConfig(XINT_nMODULE enModuleArg,
                               XINT_Config_t* pstConfigArg);

XINT_nERROR XINT__enConfigExt(XINT_nMODULE enModuleArg,
                               XINT_ConfigExt_t* pstConfigArg);


#endif /* DRIVERLIB_XINT_DRIVER_XHEADER_XINT_CONFIG_H_ */
