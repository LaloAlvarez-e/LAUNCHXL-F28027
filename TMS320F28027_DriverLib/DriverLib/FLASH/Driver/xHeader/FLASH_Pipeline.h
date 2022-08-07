/**
 *
 * @file FLASH_Pipeline.h
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

#ifndef DRIVERLIB_FLASH_DRIVER_XHEADER_FLASH_PIPELINE_H_
#define DRIVERLIB_FLASH_DRIVER_XHEADER_FLASH_PIPELINE_H_

#include "DriverLib/FLASH/Peripheral/xHeader/FLASH_Enum.h"

#pragma  CODE_SECTION(FLASH__vSetEnablePipeline, ".TI.ramfunc")
#pragma  CODE_SECTION(FLASH__vEnablePipeline, ".TI.ramfunc")
#pragma  CODE_SECTION(FLASH__vDisablePipeline, ".TI.ramfunc")
#pragma  CODE_SECTION(FLASH__enGetEnablePipeline, ".TI.ramfunc")

void FLASH__vSetEnablePipeline(FLASH_nENABLE enEnableArg);
void FLASH__vEnablePipeline(void);
void FLASH__vDisablePipeline(void);

FLASH_nENABLE FLASH__enGetEnablePipeline(void);



#endif /* DRIVERLIB_FLASH_DRIVER_XHEADER_FLASH_PIPELINE_H_ */
