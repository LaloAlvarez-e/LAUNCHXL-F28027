/**
 *
 * @file FLASH_RegisterDefines_STATUS.h
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

#ifndef DRIVERLIB_FLASH_PERIPHERAL_REGISTERDEFINES_XHEADER_FLASH_REGISTERDEFINES_STATUS_H_
#define DRIVERLIB_FLASH_PERIPHERAL_REGISTERDEFINES_XHEADER_FLASH_REGISTERDEFINES_STATUS_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

/******************************************************************************************
 ************************************ 3 STATUS *********************************************
 ******************************************************************************************/
/*-----------*/
#define FLASH_STATUS_R_PWRS_BIT ((uint16_t) 0U)

#define FLASH_STATUS_PWRS_MASK ((uint16_t) 0x0003U)
#define FLASH_STATUS_PWRS_SLEEP ((uint16_t) 0x0000U)
#define FLASH_STATUS_PWRS_STANDBY ((uint16_t) 0x0001U)
#define FLASH_STATUS_PWRS_ACTIVE ((uint16_t) 0x0003U)

#define FLASH_STATUS_R_PWRS_MASK (FLASH_STATUS_PWRS_MASK<< FLASH_STATUS_R_PWRS_BIT)
#define FLASH_STATUS_R_PWRS_SLEEP (FLASH_STATUS_PWRS_SLEEP << FLASH_STATUS_R_PWRS_BIT)
#define FLASH_STATUS_R_PWRS_STANDBY (FLASH_STATUS_PWRS_STANDBY << FLASH_STATUS_R_PWRS_BIT)
#define FLASH_STATUS_R_PWRS_ACTIVE (FLASH_STATUS_PWRS_ACTIVE << FLASH_STATUS_R_PWRS_BIT)
/*-----------*/

/*-----------*/
#define FLASH_STATUS_R_STDBYWAITS_BIT ((uint16_t) 2U)

#define FLASH_STATUS_STDBYWAITS_MASK ((uint16_t) 0x0001U)
#define FLASH_STATUS_STDBYWAITS_READY ((uint16_t) 0x0000U)
#define FLASH_STATUS_STDBYWAITS_BUSY ((uint16_t) 0x0001U)

#define FLASH_STATUS_R_STDBYWAITS_MASK (FLASH_STATUS_STDBYWAITS_MASK<< FLASH_STATUS_R_STDBYWAITS_BIT)
#define FLASH_STATUS_R_STDBYWAITS_READY (FLASH_STATUS_STDBYWAITS_READY << FLASH_STATUS_R_STDBYWAITS_BIT)
#define FLASH_STATUS_R_STDBYWAITS_BUSY (FLASH_STATUS_STDBYWAITS_BUSY << FLASH_STATUS_R_STDBYWAITS_BIT)
/*-----------*/

/*-----------*/
#define FLASH_STATUS_R_ACTIVEWAITS_BIT ((uint16_t) 3U)

#define FLASH_STATUS_ACTIVEWAITS_MASK ((uint16_t) 0x0001U)
#define FLASH_STATUS_ACTIVEWAITS_READY ((uint16_t) 0x0000U)
#define FLASH_STATUS_ACTIVEWAITS_BUSY ((uint16_t) 0x0001U)

#define FLASH_STATUS_R_ACTIVEWAITS_MASK (FLASH_STATUS_ACTIVEWAITS_MASK<< FLASH_STATUS_R_ACTIVEWAITS_BIT)
#define FLASH_STATUS_R_ACTIVEWAITS_READY (FLASH_STATUS_ACTIVEWAITS_READY << FLASH_STATUS_R_ACTIVEWAITS_BIT)
#define FLASH_STATUS_R_ACTIVEWAITS_BUSY (FLASH_STATUS_ACTIVEWAITS_BUSY << FLASH_STATUS_R_ACTIVEWAITS_BIT)
/*-----------*/

/*-----------*/
#define FLASH_STATUS_R_STAT3V_BIT ((uint16_t) 8U)

#define FLASH_STATUS_STAT3V_MASK ((uint16_t) 0x0001U)
#define FLASH_STATUS_STAT3V_ERROR ((uint16_t) 0x0001U)

#define FLASH_STATUS_R_STAT3V_MASK (FLASH_STATUS_STAT3V_MASK<< FLASH_STATUS_R_STAT3V_BIT)
#define FLASH_STATUS_R_STAT3V_ERROR (FLASH_STATUS_STAT3V_ERROR << FLASH_STATUS_R_STAT3V_BIT)
/*-----------*/


#endif /* DRIVERLIB_FLASH_PERIPHERAL_REGISTERDEFINES_XHEADER_FLASH_REGISTERDEFINES_STATUS_H_ */
