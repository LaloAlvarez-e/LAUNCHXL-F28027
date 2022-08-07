/**
 *
 * @file FLASH_RegisterDefines_PWR.h
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

#ifndef DRIVERLIB_FLASH_PERIPHERAL_REGISTERDEFINES_XHEADER_FLASH_REGISTERDEFINES_PWR_H_
#define DRIVERLIB_FLASH_PERIPHERAL_REGISTERDEFINES_XHEADER_FLASH_REGISTERDEFINES_PWR_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

/******************************************************************************************
 ************************************ 2 PWR *********************************************
 ******************************************************************************************/
/*-----------*/
#define FLASH_PWR_R_PWR_BIT ((uint16_t) 0U)

#define FLASH_PWR_PWR_MASK ((uint16_t) 0x0003U)
#define FLASH_PWR_PWR_SLEEP ((uint16_t) 0x0000U)
#define FLASH_PWR_PWR_STANDBY ((uint16_t) 0x0001U)
#define FLASH_PWR_PWR_ACTIVE ((uint16_t) 0x0003U)

#define FLASH_PWR_R_PWR_MASK (FLASH_PWR_PWR_MASK<< FLASH_PWR_R_PWR_BIT)
#define FLASH_PWR_R_PWR_SLEEP (FLASH_PWR_PWR_SLEEP << FLASH_PWR_R_PWR_BIT)
#define FLASH_PWR_R_PWR_STANDBY (FLASH_PWR_PWR_STANDBY << FLASH_PWR_R_PWR_BIT)
#define FLASH_PWR_R_PWR_ACTIVE (FLASH_PWR_PWR_ACTIVE << FLASH_PWR_R_PWR_BIT)
/*-----------*/

#endif /* DRIVERLIB_FLASH_PERIPHERAL_REGISTERDEFINES_XHEADER_FLASH_REGISTERDEFINES_PWR_H_ */
