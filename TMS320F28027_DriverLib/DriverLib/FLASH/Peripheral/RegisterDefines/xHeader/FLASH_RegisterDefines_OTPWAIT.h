/**
 *
 * @file FLASH_RegisterDefines_OTPWAIT.h
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

#ifndef DRIVERLIB_FLASH_PERIPHERAL_REGISTERDEFINES_XHEADER_FLASH_REGISTERDEFINES_OTPWAIT_H_
#define DRIVERLIB_FLASH_PERIPHERAL_REGISTERDEFINES_XHEADER_FLASH_REGISTERDEFINES_OTPWAIT_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

/******************************************************************************************
 ************************************ 7 OTPWAIT *********************************************
 ******************************************************************************************/
/*-----------*/
#define FLASH_OTPWAIT_R_OTPWAIT_BIT ((uint16_t) 0U)

#define FLASH_OTPWAIT_OTPWAIT_MASK ((uint16_t) 0x001FU)
#define FLASH_OTPWAIT_OTPWAIT_0_20MHZ ((uint16_t) 0x0000U)
#define FLASH_OTPWAIT_OTPWAIT_25_30MHZ ((uint16_t) 0x0001U)
#define FLASH_OTPWAIT_OTPWAIT_35_50MHZ ((uint16_t) 0x0002U)
#define FLASH_OTPWAIT_OTPWAIT_55_60MHZ ((uint16_t) 0x0003U)

#define FLASH_OTPWAIT_R_OTPWAIT_MASK (FLASH_OTPWAIT_OTPWAIT_MASK<< FLASH_OTPWAIT_R_OTPWAIT_BIT)
#define FLASH_OTPWAIT_R_OTPWAIT_0_20MHZ (FLASH_OTPWAIT_OTPWAIT_0_20MHZ << FLASH_OTPWAIT_R_OTPWAIT_BIT)
#define FLASH_OTPWAIT_R_OTPWAIT_25_30MHZ (FLASH_OTPWAIT_OTPWAIT_25_30MHZ << FLASH_OTPWAIT_R_OTPWAIT_BIT)
#define FLASH_OTPWAIT_R_OTPWAIT_35_50MHZ (FLASH_OTPWAIT_OTPWAIT_35_50MHZ << FLASH_OTPWAIT_R_OTPWAIT_BIT)
#define FLASH_OTPWAIT_R_OTPWAIT_55_60MHZ (FLASH_OTPWAIT_OTPWAIT_55_60MHZ << FLASH_OTPWAIT_R_OTPWAIT_BIT)
/*-----------*/


#endif /* DRIVERLIB_FLASH_PERIPHERAL_REGISTERDEFINES_XHEADER_FLASH_REGISTERDEFINES_OTPWAIT_H_ */
