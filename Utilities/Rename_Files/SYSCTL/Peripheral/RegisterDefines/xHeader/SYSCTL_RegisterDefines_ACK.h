/**
 *
 * @file SYSCTL_RegisterDefines_ACK.h
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

#ifndef DRIVERLIB_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_ACK_H_
#define DRIVERLIB_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_ACK_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

/******************************************************************************************
 ************************************ 1 SYSCTLACK *********************************************
 ******************************************************************************************/
/*-----------*/
#define SYSCTL_ACK_R_ACK_BIT ((uint16_t) 0U)

#define SYSCTL_ACK_ACK_MASK ((uint16_t) 0xFFFU)
#define SYSCTL_ACK_ACK_GROUP1 ((uint16_t) 0x0001U)
#define SYSCTL_ACK_ACK_GROUP2 ((uint16_t) 0x0002U)
#define SYSCTL_ACK_ACK_GROUP3 ((uint16_t) 0x0004U)
#define SYSCTL_ACK_ACK_GROUP4 ((uint16_t) 0x0008U)
#define SYSCTL_ACK_ACK_GROUP5 ((uint16_t) 0x0010U)
#define SYSCTL_ACK_ACK_GROUP6 ((uint16_t) 0x0020U)
#define SYSCTL_ACK_ACK_GROUP7 ((uint16_t) 0x0040U)
#define SYSCTL_ACK_ACK_GROUP8 ((uint16_t) 0x0080U)
#define SYSCTL_ACK_ACK_GROUP9 ((uint16_t) 0x0100U)
#define SYSCTL_ACK_ACK_GROUP10 ((uint16_t) 0x0200U)
#define SYSCTL_ACK_ACK_GROUP11 ((uint16_t) 0x0400U)
#define SYSCTL_ACK_ACK_GROUP12 ((uint16_t) 0x0800U)

#define SYSCTL_ACK_R_ACK_MASK (SYSCTL_ACK_ACK_MASK<< SYSCTL_ACK_R_ACK_BIT)
#define SYSCTL_ACK_R_ACK_GROUP1 (SYSCTL_ACK_ACK_GROUP1 << SYSCTL_ACK_R_ACK_BIT)
#define SYSCTL_ACK_R_ACK_GROUP2 (SYSCTL_ACK_ACK_GROUP2 << SYSCTL_ACK_R_ACK_BIT)
#define SYSCTL_ACK_R_ACK_GROUP3 (SYSCTL_ACK_ACK_GROUP3 << SYSCTL_ACK_R_ACK_BIT)
#define SYSCTL_ACK_R_ACK_GROUP4 (SYSCTL_ACK_ACK_GROUP4 << SYSCTL_ACK_R_ACK_BIT)
#define SYSCTL_ACK_R_ACK_GROUP5 (SYSCTL_ACK_ACK_GROUP5 << SYSCTL_ACK_R_ACK_BIT)
#define SYSCTL_ACK_R_ACK_GROUP6 (SYSCTL_ACK_ACK_GROUP6 << SYSCTL_ACK_R_ACK_BIT)
#define SYSCTL_ACK_R_ACK_GROUP7 (SYSCTL_ACK_ACK_GROUP7 << SYSCTL_ACK_R_ACK_BIT)
#define SYSCTL_ACK_R_ACK_GROUP8 (SYSCTL_ACK_ACK_GROUP8 << SYSCTL_ACK_R_ACK_BIT)
#define SYSCTL_ACK_R_ACK_GROUP9 (SYSCTL_ACK_ACK_GROUP9 << SYSCTL_ACK_R_ACK_BIT)
#define SYSCTL_ACK_R_ACK_GROUP10 (SYSCTL_ACK_ACK_GROUP10 << SYSCTL_ACK_R_ACK_BIT)
#define SYSCTL_ACK_R_ACK_GROUP11 (SYSCTL_ACK_ACK_GROUP11 << SYSCTL_ACK_R_ACK_BIT)
#define SYSCTL_ACK_R_ACK_GROUP12 (SYSCTL_ACK_ACK_GROUP12 << SYSCTL_ACK_R_ACK_BIT)
/*-----------*/




#endif /* DRIVERLIB_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_ACK_H_ */
