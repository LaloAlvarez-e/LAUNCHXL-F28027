/**
 *
 * @file ECAP_RegisterDefines_EINT.h
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

#ifndef DRIVERLIB_ECAP_PERIPHERAL_REGISTERDEFINES_XHEADER_ECAP_REGISTERDEFINES_EINT_H_
#define DRIVERLIB_ECAP_PERIPHERAL_REGISTERDEFINES_XHEADER_ECAP_REGISTERDEFINES_EINT_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

/******************************************************************************************
 ************************************ 9 EINT *********************************************
 ******************************************************************************************/
/*----------*/
#define ECAP_EINT_R_INT_BIT    (0UL)

#define ECAP_EINT_INT_MASK    ((uint16_t) 0x0001UL)
#define ECAP_EINT_INT_DIS    ((uint16_t) 0x0000UL)
#define ECAP_EINT_INT_ENA    ((uint16_t) 0x0001UL)

#define ECAP_EINT_R_INT_MASK    (ECAP_EINT_INT_MASK << ECAP_EINT_R_INT_BIT)
#define ECAP_EINT_R_INT_DIS    (ECAP_EINT_INT_DIS << ECAP_EINT_R_INT_BIT)
#define ECAP_EINT_R_INT_ENA    (ECAP_EINT_INT_ENA << ECAP_EINT_R_INT_BIT)
/*----------*/

/*----------*/
#define ECAP_EINT_R_CEVT1_BIT    (1UL)

#define ECAP_EINT_CEVT1_MASK    ((uint16_t) 0x0001UL)
#define ECAP_EINT_CEVT1_DIS    ((uint16_t) 0x0000UL)
#define ECAP_EINT_CEVT1_ENA    ((uint16_t) 0x0001UL)

#define ECAP_EINT_R_CEVT1_MASK    (ECAP_EINT_CEVT1_MASK << ECAP_EINT_R_CEVT1_BIT)
#define ECAP_EINT_R_CEVT1_DIS    (ECAP_EINT_CEVT1_DIS << ECAP_EINT_R_CEVT1_BIT)
#define ECAP_EINT_R_CEVT1_ENA    (ECAP_EINT_CEVT1_ENA << ECAP_EINT_R_CEVT1_BIT)
/*----------*/

/*----------*/
#define ECAP_EINT_R_CEVT2_BIT    (2UL)

#define ECAP_EINT_CEVT2_MASK    ((uint16_t) 0x0001UL)
#define ECAP_EINT_CEVT2_DIS    ((uint16_t) 0x0000UL)
#define ECAP_EINT_CEVT2_ENA    ((uint16_t) 0x0001UL)

#define ECAP_EINT_R_CEVT2_MASK    (ECAP_EINT_CEVT2_MASK << ECAP_EINT_R_CEVT2_BIT)
#define ECAP_EINT_R_CEVT2_DIS    (ECAP_EINT_CEVT2_DIS << ECAP_EINT_R_CEVT2_BIT)
#define ECAP_EINT_R_CEVT2_ENA    (ECAP_EINT_CEVT2_ENA << ECAP_EINT_R_CEVT2_BIT)
/*----------*/

/*----------*/
#define ECAP_EINT_R_CEVT3_BIT    (3UL)

#define ECAP_EINT_CEVT3_MASK    ((uint16_t) 0x0001UL)
#define ECAP_EINT_CEVT3_DIS    ((uint16_t) 0x0000UL)
#define ECAP_EINT_CEVT3_ENA    ((uint16_t) 0x0001UL)

#define ECAP_EINT_R_CEVT3_MASK    (ECAP_EINT_CEVT3_MASK << ECAP_EINT_R_CEVT3_BIT)
#define ECAP_EINT_R_CEVT3_DIS    (ECAP_EINT_CEVT3_DIS << ECAP_EINT_R_CEVT3_BIT)
#define ECAP_EINT_R_CEVT3_ENA    (ECAP_EINT_CEVT3_ENA << ECAP_EINT_R_CEVT3_BIT)
/*----------*/

/*----------*/
#define ECAP_EINT_R_CEVT4_BIT    (4UL)

#define ECAP_EINT_CEVT4_MASK    ((uint16_t) 0x0001UL)
#define ECAP_EINT_CEVT4_DIS    ((uint16_t) 0x0000UL)
#define ECAP_EINT_CEVT4_ENA    ((uint16_t) 0x0001UL)

#define ECAP_EINT_R_CEVT4_MASK    (ECAP_EINT_CEVT4_MASK << ECAP_EINT_R_CEVT4_BIT)
#define ECAP_EINT_R_CEVT4_DIS    (ECAP_EINT_CEVT4_DIS << ECAP_EINT_R_CEVT4_BIT)
#define ECAP_EINT_R_CEVT4_ENA    (ECAP_EINT_CEVT4_ENA << ECAP_EINT_R_CEVT4_BIT)
/*----------*/

/*----------*/
#define ECAP_EINT_R_CTROVF_BIT    (5UL)

#define ECAP_EINT_CTROVF_MASK    ((uint16_t) 0x0001UL)
#define ECAP_EINT_CTROVF_DIS    ((uint16_t) 0x0000UL)
#define ECAP_EINT_CTROVF_ENA    ((uint16_t) 0x0001UL)

#define ECAP_EINT_R_CTROVF_MASK    (ECAP_EINT_CTROVF_MASK << ECAP_EINT_R_CTROVF_BIT)
#define ECAP_EINT_R_CTROVF_DIS    (ECAP_EINT_CTROVF_DIS << ECAP_EINT_R_CTROVF_BIT)
#define ECAP_EINT_R_CTROVF_ENA    (ECAP_EINT_CTROVF_ENA << ECAP_EINT_R_CTROVF_BIT)
/*----------*/

/*----------*/
#define ECAP_EINT_R_CTR_PRD_BIT    (6UL)

#define ECAP_EINT_CTR_PRD_MASK    ((uint16_t) 0x0001UL)
#define ECAP_EINT_CTR_PRD_DIS    ((uint16_t) 0x0000UL)
#define ECAP_EINT_CTR_PRD_ENA    ((uint16_t) 0x0001UL)

#define ECAP_EINT_R_CTR_PRD_MASK    (ECAP_EINT_CTR_PRD_MASK << ECAP_EINT_R_CTR_PRD_BIT)
#define ECAP_EINT_R_CTR_PRD_DIS    (ECAP_EINT_CTR_PRD_DIS << ECAP_EINT_R_CTR_PRD_BIT)
#define ECAP_EINT_R_CTR_PRD_ENA    (ECAP_EINT_CTR_PRD_ENA << ECAP_EINT_R_CTR_PRD_BIT)
/*----------*/

/*----------*/
#define ECAP_EINT_R_CTR_CMP_BIT    (7UL)

#define ECAP_EINT_CTR_CMP_MASK    ((uint16_t) 0x0001UL)
#define ECAP_EINT_CTR_CMP_DIS    ((uint16_t) 0x0000UL)
#define ECAP_EINT_CTR_CMP_ENA    ((uint16_t) 0x0001UL)

#define ECAP_EINT_R_CTR_CMP_MASK    (ECAP_EINT_CTR_CMP_MASK << ECAP_EINT_R_CTR_CMP_BIT)
#define ECAP_EINT_R_CTR_CMP_DIS    (ECAP_EINT_CTR_CMP_DIS << ECAP_EINT_R_CTR_CMP_BIT)
#define ECAP_EINT_R_CTR_CMP_ENA    (ECAP_EINT_CTR_CMP_ENA << ECAP_EINT_R_CTR_CMP_BIT)
/*----------*/

#endif /* DRIVERLIB_ECAP_PERIPHERAL_REGISTERDEFINES_XHEADER_ECAP_REGISTERDEFINES_EINT_H_ */
