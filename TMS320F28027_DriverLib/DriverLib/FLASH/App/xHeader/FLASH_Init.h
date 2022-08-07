/**
 *
 * @file FLASH_Init.h
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

#ifndef DRIVERLIB_FLASH_APP_XHEADER_FLASH_INIT_H_
#define DRIVERLIB_FLASH_APP_XHEADER_FLASH_INIT_H_

#include "DriverLib/FLASH/Peripheral/xHeader/FLASH_Enum.h"

#pragma  CODE_SECTION(FLASH__vInit, ".TI.ramfunc")

void FLASH__vInit(void);



#endif /* DRIVERLIB_FLASH_APP_XHEADER_FLASH_INIT_H_ */
