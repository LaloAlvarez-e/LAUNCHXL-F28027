/**
 *
 * @file FLASH_RegisterDefines_BANKWAIT.h
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

#ifndef DRIVERLIB_FLASH_PERIPHERAL_REGISTERDEFINES_XHEADER_FLASH_REGISTERDEFINES_BANKWAIT_H_
#define DRIVERLIB_FLASH_PERIPHERAL_REGISTERDEFINES_XHEADER_FLASH_REGISTERDEFINES_BANKWAIT_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

/******************************************************************************************
 ************************************ 6 BANKWAIT *********************************************
 ******************************************************************************************/
/*-----------*/
#define FLASH_BANKWAIT_R_RANDWAIT_BIT ((uint16_t) 0U)

#define FLASH_BANKWAIT_RANDWAIT_MASK ((uint16_t) 0x000FU)
#define FLASH_BANKWAIT_RANDWAIT_0_50MHZ ((uint16_t) 0x0001U)
#define FLASH_BANKWAIT_RANDWAIT_55_60MHZ ((uint16_t) 0x0002U)

#define FLASH_BANKWAIT_R_RANDWAIT_MASK (FLASH_BANKWAIT_RANDWAIT_MASK<< FLASH_BANKWAIT_R_RANDWAIT_BIT)
#define FLASH_BANKWAIT_R_RANDWAIT_0_50MHZ (FLASH_BANKWAIT_RANDWAIT_0_50MHZ << FLASH_BANKWAIT_R_RANDWAIT_BIT)
#define FLASH_BANKWAIT_R_RANDWAIT_55_60MHZ (FLASH_BANKWAIT_RANDWAIT_55_60MHZ << FLASH_BANKWAIT_R_RANDWAIT_BIT)
/*-----------*/

/*-----------*/
#define FLASH_BANKWAIT_R_PAGEWAIT_BIT ((uint16_t) 8U)

#define FLASH_BANKWAIT_PAGEWAIT_MASK ((uint16_t) 0x000FU)
#define FLASH_BANKWAIT_PAGEWAIT_0_25MHZ ((uint16_t) 0x0000U)
#define FLASH_BANKWAIT_PAGEWAIT_30_50MHZ ((uint16_t) 0x0001U)
#define FLASH_BANKWAIT_PAGEWAIT_55_60MHZ ((uint16_t) 0x0002U)

#define FLASH_BANKWAIT_R_PAGEWAIT_MASK (FLASH_BANKWAIT_PAGEWAIT_MASK<< FLASH_BANKWAIT_R_PAGEWAIT_BIT)
#define FLASH_BANKWAIT_R_PAGEWAIT_0_25MHZ (FLASH_BANKWAIT_PAGEWAIT_0_25MHZ << FLASH_BANKWAIT_R_PAGEWAIT_BIT)
#define FLASH_BANKWAIT_R_PAGEWAIT_30_50MHZ (FLASH_BANKWAIT_PAGEWAIT_30_50MHZ << FLASH_BANKWAIT_R_PAGEWAIT_BIT)
#define FLASH_BANKWAIT_R_PAGEWAIT_55_60MHZ (FLASH_BANKWAIT_PAGEWAIT_55_60MHZ << FLASH_BANKWAIT_R_PAGEWAIT_BIT)
/*-----------*/


#endif /* DRIVERLIB_FLASH_PERIPHERAL_REGISTERDEFINES_XHEADER_FLASH_REGISTERDEFINES_BANKWAIT_H_ */
