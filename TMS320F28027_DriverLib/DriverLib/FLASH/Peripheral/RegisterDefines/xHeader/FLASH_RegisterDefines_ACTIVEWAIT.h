/**
 *
 * @file FLASH_RegisterDefines_ACTIVEWAIT.h
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

#ifndef DRIVERLIB_FLASH_PERIPHERAL_REGISTERDEFINES_XHEADER_FLASH_REGISTERDEFINES_ACTIVEWAIT_H_
#define DRIVERLIB_FLASH_PERIPHERAL_REGISTERDEFINES_XHEADER_FLASH_REGISTERDEFINES_ACTIVEWAIT_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

/******************************************************************************************
 ************************************ 5 ACTIVEWAIT *********************************************
 ******************************************************************************************/
/*-----------*/
#define FLASH_ACTIVEWAIT_R_ACTIVEWAIT_BIT ((uint16_t) 0U)

#define FLASH_ACTIVEWAIT_ACTIVEWAIT_MASK ((uint16_t) 0x001FFU)

#define FLASH_ACTIVEWAIT_R_ACTIVEWAIT_MASK (FLASH_ACTIVEWAIT_ACTIVEWAIT_MASK<< FLASH_ACTIVEWAIT_R_ACTIVEWAIT_BIT)
/*-----------*/





#endif /* DRIVERLIB_FLASH_PERIPHERAL_REGISTERDEFINES_XHEADER_FLASH_REGISTERDEFINES_ACTIVEWAIT_H_ */
