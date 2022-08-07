/**
 *
 * @file FLASH_RegisterDefines_OPT.h
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

#ifndef DRIVERLIB_FLASH_PERIPHERAL_REGISTERDEFINES_XHEADER_FLASH_REGISTERDEFINES_OPT_H_
#define DRIVERLIB_FLASH_PERIPHERAL_REGISTERDEFINES_XHEADER_FLASH_REGISTERDEFINES_OPT_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

/******************************************************************************************
 ************************************ 1 OPT *********************************************
 ******************************************************************************************/
/*-----------*/
#define FLASH_OPT_R_ENPIPE_BIT ((uint16_t) 0U)

#define FLASH_OPT_ENPIPE_MASK ((uint16_t) 0x0001U)
#define FLASH_OPT_ENPIPE_DIS ((uint16_t) 0x0000U)
#define FLASH_OPT_ENPIPE_ENA ((uint16_t) 0x0001U)

#define FLASH_OPT_R_ENPIPE_MASK (FLASH_OPT_ENPIPE_MASK<< FLASH_OPT_R_ENPIPE_BIT)
#define FLASH_OPT_R_ENPIPE_DIS (FLASH_OPT_ENPIPE_DIS << FLASH_OPT_R_ENPIPE_BIT)
#define FLASH_OPT_R_ENPIPE_ENA (FLASH_OPT_ENPIPE_ENA << FLASH_OPT_R_ENPIPE_BIT)
/*-----------*/

#endif /* DRIVERLIB_FLASH_PERIPHERAL_REGISTERDEFINES_XHEADER_FLASH_REGISTERDEFINES_OPT_H_ */
