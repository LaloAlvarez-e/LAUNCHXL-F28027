/**
 *
 * @file PIE_RegisterDefines_ACK.h
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
 * @verbatim 13 jul. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 13 jul. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_PIE_PERIPHERAL_REGISTERDEFINES_XHEADER_PIE_REGISTERDEFINES_ACK_H_
#define DRIVERLIB_PIE_PERIPHERAL_REGISTERDEFINES_XHEADER_PIE_REGISTERDEFINES_ACK_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

/******************************************************************************************
 ************************************ 1 PIEACK *********************************************
 ******************************************************************************************/
/*-----------*/
#define PIE_ACK_R_ACK_BIT ((uint16_t) 0U)

#define PIE_ACK_ACK_MASK ((uint16_t) 0xFFFU)
#define PIE_ACK_ACK_GROUP1 ((uint16_t) 0x0001U)
#define PIE_ACK_ACK_GROUP2 ((uint16_t) 0x0002U)
#define PIE_ACK_ACK_GROUP3 ((uint16_t) 0x0004U)
#define PIE_ACK_ACK_GROUP4 ((uint16_t) 0x0008U)
#define PIE_ACK_ACK_GROUP5 ((uint16_t) 0x0010U)
#define PIE_ACK_ACK_GROUP6 ((uint16_t) 0x0020U)
#define PIE_ACK_ACK_GROUP7 ((uint16_t) 0x0040U)
#define PIE_ACK_ACK_GROUP8 ((uint16_t) 0x0080U)
#define PIE_ACK_ACK_GROUP9 ((uint16_t) 0x0100U)
#define PIE_ACK_ACK_GROUP10 ((uint16_t) 0x0200U)
#define PIE_ACK_ACK_GROUP11 ((uint16_t) 0x0400U)
#define PIE_ACK_ACK_GROUP12 ((uint16_t) 0x0800U)

#define PIE_ACK_R_ACK_MASK (PIE_ACK_ACK_MASK<< PIE_ACK_R_ACK_BIT)
#define PIE_ACK_R_ACK_GROUP1 (PIE_ACK_ACK_GROUP1 << PIE_ACK_R_ACK_BIT)
#define PIE_ACK_R_ACK_GROUP2 (PIE_ACK_ACK_GROUP2 << PIE_ACK_R_ACK_BIT)
#define PIE_ACK_R_ACK_GROUP3 (PIE_ACK_ACK_GROUP3 << PIE_ACK_R_ACK_BIT)
#define PIE_ACK_R_ACK_GROUP4 (PIE_ACK_ACK_GROUP4 << PIE_ACK_R_ACK_BIT)
#define PIE_ACK_R_ACK_GROUP5 (PIE_ACK_ACK_GROUP5 << PIE_ACK_R_ACK_BIT)
#define PIE_ACK_R_ACK_GROUP6 (PIE_ACK_ACK_GROUP6 << PIE_ACK_R_ACK_BIT)
#define PIE_ACK_R_ACK_GROUP7 (PIE_ACK_ACK_GROUP7 << PIE_ACK_R_ACK_BIT)
#define PIE_ACK_R_ACK_GROUP8 (PIE_ACK_ACK_GROUP8 << PIE_ACK_R_ACK_BIT)
#define PIE_ACK_R_ACK_GROUP9 (PIE_ACK_ACK_GROUP9 << PIE_ACK_R_ACK_BIT)
#define PIE_ACK_R_ACK_GROUP10 (PIE_ACK_ACK_GROUP10 << PIE_ACK_R_ACK_BIT)
#define PIE_ACK_R_ACK_GROUP11 (PIE_ACK_ACK_GROUP11 << PIE_ACK_R_ACK_BIT)
#define PIE_ACK_R_ACK_GROUP12 (PIE_ACK_ACK_GROUP12 << PIE_ACK_R_ACK_BIT)
/*-----------*/




#endif /* DRIVERLIB_PIE_PERIPHERAL_REGISTERDEFINES_XHEADER_PIE_REGISTERDEFINES_ACK_H_ */
