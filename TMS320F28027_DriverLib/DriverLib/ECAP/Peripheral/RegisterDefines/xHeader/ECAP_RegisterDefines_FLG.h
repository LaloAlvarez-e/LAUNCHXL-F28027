/**
 *
 * @file ECAP_RegisterDefines_FLG.h
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

#ifndef DRIVERLIB_ECAP_PERIPHERAL_REGISTERDEFINES_XHEADER_ECAP_REGISTERDEFINES_FLG_H_
#define DRIVERLIB_ECAP_PERIPHERAL_REGISTERDEFINES_XHEADER_ECAP_REGISTERDEFINES_FLG_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

/******************************************************************************************
 ************************************ 10 FLG *********************************************
 ******************************************************************************************/
/*----------*/
#define ECAP_FLG_R_INT_BIT    (0UL)

#define ECAP_FLG_INT_MASK    ((uint16_t) 0x0001UL)
#define ECAP_FLG_INT_NOOCCUR    ((uint16_t) 0x0000UL)
#define ECAP_FLG_INT_OCCUR    ((uint16_t) 0x0001UL)

#define ECAP_FLG_R_INT_MASK    (ECAP_FLG_INT_MASK << ECAP_FLG_R_INT_BIT)
#define ECAP_FLG_R_INT_NOOCCUR    (ECAP_FLG_INT_NOOCCUR << ECAP_FLG_R_INT_BIT)
#define ECAP_FLG_R_INT_OCCUR    (ECAP_FLG_INT_OCCUR << ECAP_FLG_R_INT_BIT)
/*----------*/

/*----------*/
#define ECAP_FLG_R_CEVT1_BIT    (1UL)

#define ECAP_FLG_CEVT1_MASK    ((uint16_t) 0x0001UL)
#define ECAP_FLG_CEVT1_NOOCCUR    ((uint16_t) 0x0000UL)
#define ECAP_FLG_CEVT1_OCCUR    ((uint16_t) 0x0001UL)

#define ECAP_FLG_R_CEVT1_MASK    (ECAP_FLG_CEVT1_MASK << ECAP_FLG_R_CEVT1_BIT)
#define ECAP_FLG_R_CEVT1_NOOCCUR    (ECAP_FLG_CEVT1_NOOCCUR << ECAP_FLG_R_CEVT1_BIT)
#define ECAP_FLG_R_CEVT1_OCCUR    (ECAP_FLG_CEVT1_OCCUR << ECAP_FLG_R_CEVT1_BIT)
/*----------*/

/*----------*/
#define ECAP_FLG_R_CEVT2_BIT    (2UL)

#define ECAP_FLG_CEVT2_MASK    ((uint16_t) 0x0001UL)
#define ECAP_FLG_CEVT2_NOOCCUR    ((uint16_t) 0x0000UL)
#define ECAP_FLG_CEVT2_OCCUR    ((uint16_t) 0x0001UL)

#define ECAP_FLG_R_CEVT2_MASK    (ECAP_FLG_CEVT2_MASK << ECAP_FLG_R_CEVT2_BIT)
#define ECAP_FLG_R_CEVT2_NOOCCUR    (ECAP_FLG_CEVT2_NOOCCUR << ECAP_FLG_R_CEVT2_BIT)
#define ECAP_FLG_R_CEVT2_OCCUR    (ECAP_FLG_CEVT2_OCCUR << ECAP_FLG_R_CEVT2_BIT)
/*----------*/

/*----------*/
#define ECAP_FLG_R_CEVT3_BIT    (3UL)

#define ECAP_FLG_CEVT3_MASK    ((uint16_t) 0x0001UL)
#define ECAP_FLG_CEVT3_NOOCCUR    ((uint16_t) 0x0000UL)
#define ECAP_FLG_CEVT3_OCCUR    ((uint16_t) 0x0001UL)

#define ECAP_FLG_R_CEVT3_MASK    (ECAP_FLG_CEVT3_MASK << ECAP_FLG_R_CEVT3_BIT)
#define ECAP_FLG_R_CEVT3_NOOCCUR    (ECAP_FLG_CEVT3_NOOCCUR << ECAP_FLG_R_CEVT3_BIT)
#define ECAP_FLG_R_CEVT3_OCCUR    (ECAP_FLG_CEVT3_OCCUR << ECAP_FLG_R_CEVT3_BIT)
/*----------*/

/*----------*/
#define ECAP_FLG_R_CEVT4_BIT    (4UL)

#define ECAP_FLG_CEVT4_MASK    ((uint16_t) 0x0001UL)
#define ECAP_FLG_CEVT4_NOOCCUR    ((uint16_t) 0x0000UL)
#define ECAP_FLG_CEVT4_OCCUR    ((uint16_t) 0x0001UL)

#define ECAP_FLG_R_CEVT4_MASK    (ECAP_FLG_CEVT4_MASK << ECAP_FLG_R_CEVT4_BIT)
#define ECAP_FLG_R_CEVT4_NOOCCUR    (ECAP_FLG_CEVT4_NOOCCUR << ECAP_FLG_R_CEVT4_BIT)
#define ECAP_FLG_R_CEVT4_OCCUR    (ECAP_FLG_CEVT4_OCCUR << ECAP_FLG_R_CEVT4_BIT)
/*----------*/

/*----------*/
#define ECAP_FLG_R_CTROVF_BIT    (5UL)

#define ECAP_FLG_CTROVF_MASK    ((uint16_t) 0x0001UL)
#define ECAP_FLG_CTROVF_NOOCCUR    ((uint16_t) 0x0000UL)
#define ECAP_FLG_CTROVF_OCCUR    ((uint16_t) 0x0001UL)

#define ECAP_FLG_R_CTROVF_MASK    (ECAP_FLG_CTROVF_MASK << ECAP_FLG_R_CTROVF_BIT)
#define ECAP_FLG_R_CTROVF_NOOCCUR    (ECAP_FLG_CTROVF_NOOCCUR << ECAP_FLG_R_CTROVF_BIT)
#define ECAP_FLG_R_CTROVF_OCCUR    (ECAP_FLG_CTROVF_OCCUR << ECAP_FLG_R_CTROVF_BIT)
/*----------*/

/*----------*/
#define ECAP_FLG_R_CTR_PRD_BIT    (6UL)

#define ECAP_FLG_CTR_PRD_MASK    ((uint16_t) 0x0001UL)
#define ECAP_FLG_CTR_PRD_NOOCCUR    ((uint16_t) 0x0000UL)
#define ECAP_FLG_CTR_PRD_OCCUR    ((uint16_t) 0x0001UL)

#define ECAP_FLG_R_CTR_PRD_MASK    (ECAP_FLG_CTR_PRD_MASK << ECAP_FLG_R_CTR_PRD_BIT)
#define ECAP_FLG_R_CTR_PRD_NOOCCUR    (ECAP_FLG_CTR_PRD_NOOCCUR << ECAP_FLG_R_CTR_PRD_BIT)
#define ECAP_FLG_R_CTR_PRD_OCCUR    (ECAP_FLG_CTR_PRD_OCCUR << ECAP_FLG_R_CTR_PRD_BIT)
/*----------*/

/*----------*/
#define ECAP_FLG_R_CTR_CMP_BIT    (7UL)

#define ECAP_FLG_CTR_CMP_MASK    ((uint16_t) 0x0001UL)
#define ECAP_FLG_CTR_CMP_NOOCCUR    ((uint16_t) 0x0000UL)
#define ECAP_FLG_CTR_CMP_OCCUR    ((uint16_t) 0x0001UL)

#define ECAP_FLG_R_CTR_CMP_MASK    (ECAP_FLG_CTR_CMP_MASK << ECAP_FLG_R_CTR_CMP_BIT)
#define ECAP_FLG_R_CTR_CMP_NOOCCUR    (ECAP_FLG_CTR_CMP_NOOCCUR << ECAP_FLG_R_CTR_CMP_BIT)
#define ECAP_FLG_R_CTR_CMP_OCCUR    (ECAP_FLG_CTR_CMP_OCCUR << ECAP_FLG_R_CTR_CMP_BIT)
/*----------*/

#endif /* DRIVERLIB_ECAP_PERIPHERAL_REGISTERDEFINES_XHEADER_ECAP_REGISTERDEFINES_FLG_H_ */
