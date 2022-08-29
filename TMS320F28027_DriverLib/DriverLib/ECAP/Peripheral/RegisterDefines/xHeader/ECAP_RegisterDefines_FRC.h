/**
 *
 * @file ECAP_RegisterDefines_FRC.h
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
 * @verbatim 27 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 27 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_ECAP_PERIPHERAL_REGISTERDEFINES_XHEADER_ECAP_REGISTERDEFINES_FRC_H_
#define DRIVERLIB_ECAP_PERIPHERAL_REGISTERDEFINES_XHEADER_ECAP_REGISTERDEFINES_FRC_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

/******************************************************************************************
 ************************************ 11 FRC *********************************************
 ******************************************************************************************/
/*----------*/
#define ECAP_FRC_R_INT_BIT    (0UL)

#define ECAP_FRC_INT_MASK    ((uint16_t) 0x0001UL)
#define ECAP_FRC_INT_NA    ((uint16_t) 0x0000UL)
#define ECAP_FRC_INT_FORCE    ((uint16_t) 0x0001UL)

#define ECAP_FRC_R_INT_MASK    (ECAP_FRC_INT_MASK << ECAP_FRC_R_INT_BIT)
#define ECAP_FRC_R_INT_NA    (ECAP_FRC_INT_NA << ECAP_FRC_R_INT_BIT)
#define ECAP_FRC_R_INT_FORCE    (ECAP_FRC_INT_FORCE << ECAP_FRC_R_INT_BIT)
/*----------*/

/*----------*/
#define ECAP_FRC_R_CEVT1_BIT    (1UL)

#define ECAP_FRC_CEVT1_MASK    ((uint16_t) 0x0001UL)
#define ECAP_FRC_CEVT1_NA    ((uint16_t) 0x0000UL)
#define ECAP_FRC_CEVT1_FORCE    ((uint16_t) 0x0001UL)

#define ECAP_FRC_R_CEVT1_MASK    (ECAP_FRC_CEVT1_MASK << ECAP_FRC_R_CEVT1_BIT)
#define ECAP_FRC_R_CEVT1_NA    (ECAP_FRC_CEVT1_NA << ECAP_FRC_R_CEVT1_BIT)
#define ECAP_FRC_R_CEVT1_FORCE    (ECAP_FRC_CEVT1_FORCE << ECAP_FRC_R_CEVT1_BIT)
/*----------*/

/*----------*/
#define ECAP_FRC_R_CEVT2_BIT    (2UL)

#define ECAP_FRC_CEVT2_MASK    ((uint16_t) 0x0001UL)
#define ECAP_FRC_CEVT2_NA    ((uint16_t) 0x0000UL)
#define ECAP_FRC_CEVT2_FORCE    ((uint16_t) 0x0001UL)

#define ECAP_FRC_R_CEVT2_MASK    (ECAP_FRC_CEVT2_MASK << ECAP_FRC_R_CEVT2_BIT)
#define ECAP_FRC_R_CEVT2_NA    (ECAP_FRC_CEVT2_NA << ECAP_FRC_R_CEVT2_BIT)
#define ECAP_FRC_R_CEVT2_FORCE    (ECAP_FRC_CEVT2_FORCE << ECAP_FRC_R_CEVT2_BIT)
/*----------*/

/*----------*/
#define ECAP_FRC_R_CEVT3_BIT    (3UL)

#define ECAP_FRC_CEVT3_MASK    ((uint16_t) 0x0001UL)
#define ECAP_FRC_CEVT3_NA    ((uint16_t) 0x0000UL)
#define ECAP_FRC_CEVT3_FORCE    ((uint16_t) 0x0001UL)

#define ECAP_FRC_R_CEVT3_MASK    (ECAP_FRC_CEVT3_MASK << ECAP_FRC_R_CEVT3_BIT)
#define ECAP_FRC_R_CEVT3_NA    (ECAP_FRC_CEVT3_NA << ECAP_FRC_R_CEVT3_BIT)
#define ECAP_FRC_R_CEVT3_FORCE    (ECAP_FRC_CEVT3_FORCE << ECAP_FRC_R_CEVT3_BIT)
/*----------*/

/*----------*/
#define ECAP_FRC_R_CEVT4_BIT    (4UL)

#define ECAP_FRC_CEVT4_MASK    ((uint16_t) 0x0001UL)
#define ECAP_FRC_CEVT4_NA    ((uint16_t) 0x0000UL)
#define ECAP_FRC_CEVT4_FORCE    ((uint16_t) 0x0001UL)

#define ECAP_FRC_R_CEVT4_MASK    (ECAP_FRC_CEVT4_MASK << ECAP_FRC_R_CEVT4_BIT)
#define ECAP_FRC_R_CEVT4_NA    (ECAP_FRC_CEVT4_NA << ECAP_FRC_R_CEVT4_BIT)
#define ECAP_FRC_R_CEVT4_FORCE    (ECAP_FRC_CEVT4_FORCE << ECAP_FRC_R_CEVT4_BIT)
/*----------*/

/*----------*/
#define ECAP_FRC_R_CTROVF_BIT    (5UL)

#define ECAP_FRC_CTROVF_MASK    ((uint16_t) 0x0001UL)
#define ECAP_FRC_CTROVF_NA    ((uint16_t) 0x0000UL)
#define ECAP_FRC_CTROVF_FORCE    ((uint16_t) 0x0001UL)

#define ECAP_FRC_R_CTROVF_MASK    (ECAP_FRC_CTROVF_MASK << ECAP_FRC_R_CTROVF_BIT)
#define ECAP_FRC_R_CTROVF_NA    (ECAP_FRC_CTROVF_NA << ECAP_FRC_R_CTROVF_BIT)
#define ECAP_FRC_R_CTROVF_FORCE    (ECAP_FRC_CTROVF_FORCE << ECAP_FRC_R_CTROVF_BIT)
/*----------*/

/*----------*/
#define ECAP_FRC_R_CTR_PRD_BIT    (6UL)

#define ECAP_FRC_CTR_PRD_MASK    ((uint16_t) 0x0001UL)
#define ECAP_FRC_CTR_PRD_NA    ((uint16_t) 0x0000UL)
#define ECAP_FRC_CTR_PRD_FORCE    ((uint16_t) 0x0001UL)

#define ECAP_FRC_R_CTR_PRD_MASK    (ECAP_FRC_CTR_PRD_MASK << ECAP_FRC_R_CTR_PRD_BIT)
#define ECAP_FRC_R_CTR_PRD_NA    (ECAP_FRC_CTR_PRD_NA << ECAP_FRC_R_CTR_PRD_BIT)
#define ECAP_FRC_R_CTR_PRD_FORCE    (ECAP_FRC_CTR_PRD_FORCE << ECAP_FRC_R_CTR_PRD_BIT)
/*----------*/

/*----------*/
#define ECAP_FRC_R_CTR_CMP_BIT    (7UL)

#define ECAP_FRC_CTR_CMP_MASK    ((uint16_t) 0x0001UL)
#define ECAP_FRC_CTR_CMP_NA    ((uint16_t) 0x0000UL)
#define ECAP_FRC_CTR_CMP_FORCE    ((uint16_t) 0x0001UL)

#define ECAP_FRC_R_CTR_CMP_MASK    (ECAP_FRC_CTR_CMP_MASK << ECAP_FRC_R_CTR_CMP_BIT)
#define ECAP_FRC_R_CTR_CMP_NA    (ECAP_FRC_CTR_CMP_NA << ECAP_FRC_R_CTR_CMP_BIT)
#define ECAP_FRC_R_CTR_CMP_FORCE    (ECAP_FRC_CTR_CMP_FORCE << ECAP_FRC_R_CTR_CMP_BIT)
/*----------*/

#endif /* DRIVERLIB_ECAP_PERIPHERAL_REGISTERDEFINES_XHEADER_ECAP_REGISTERDEFINES_FRC_H_ */
