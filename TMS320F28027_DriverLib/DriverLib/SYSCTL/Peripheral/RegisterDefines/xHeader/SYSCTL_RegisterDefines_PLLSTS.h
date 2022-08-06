/**
 *
 * @file SYSCTL_RegisterDefines_PLLSTS.h
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
 * @verbatim 4 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 4 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_PLLSTS_H_
#define DRIVERLIB_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_PLLSTS_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

/******************************************************************************************
 ************************************ 2 PLLSTS *********************************************
 ******************************************************************************************/
/*-----------*/
#define SYSCTL_PLLSTS_R_PLLLOCKS_BIT ((uint16_t) 0U)

#define SYSCTL_PLLSTS_PLLLOCKS_MASK ((uint16_t) 0x0001U)
#define SYSCTL_PLLSTS_PLLLOCKS_UNLOCK ((uint16_t) 0x0000U)
#define SYSCTL_PLLSTS_PLLLOCKS_LOCK ((uint16_t) 0x0001U)

#define SYSCTL_PLLSTS_R_PLLLOCKS_MASK (SYSCTL_PLLSTS_PLLLOCKS_MASK<< SYSCTL_PLLSTS_R_PLLLOCKS_BIT)
#define SYSCTL_PLLSTS_R_PLLLOCKS_UNLOCK (SYSCTL_PLLSTS_PLLLOCKS_UNLOCK << SYSCTL_PLLSTS_R_PLLLOCKS_BIT)
#define SYSCTL_PLLSTS_R_PLLLOCKS_LOCK (SYSCTL_PLLSTS_PLLLOCKS_LOCK << SYSCTL_PLLSTS_R_PLLLOCKS_BIT)
/*-----------*/

/*-----------*/
#define SYSCTL_PLLSTS_R_PLLOFF_BIT ((uint16_t) 2U)

#define SYSCTL_PLLSTS_PLLOFF_MASK ((uint16_t) 0x0001U)
#define SYSCTL_PLLSTS_PLLOFF_ON ((uint16_t) 0x0000U)
#define SYSCTL_PLLSTS_PLLOFF_OFF ((uint16_t) 0x0001U)

#define SYSCTL_PLLSTS_R_PLLOFF_MASK (SYSCTL_PLLSTS_PLLOFF_MASK<< SYSCTL_PLLSTS_R_PLLOFF_BIT)
#define SYSCTL_PLLSTS_R_PLLOFF_ON (SYSCTL_PLLSTS_PLLOFF_ON << SYSCTL_PLLSTS_R_PLLOFF_BIT)
#define SYSCTL_PLLSTS_R_PLLOFF_OFF (SYSCTL_PLLSTS_PLLOFF_OFF << SYSCTL_PLLSTS_R_PLLOFF_BIT)
/*-----------*/

/*-----------*/
#define SYSCTL_PLLSTS_R_MCLKSTS_BIT ((uint16_t) 3U)

#define SYSCTL_PLLSTS_MCLKSTS_MASK ((uint16_t) 0x0001U)
#define SYSCTL_PLLSTS_MCLKSTS_NORMAL ((uint16_t) 0x0000U)
#define SYSCTL_PLLSTS_MCLKSTS_ERROR ((uint16_t) 0x0001U)

#define SYSCTL_PLLSTS_R_MCLKSTS_MASK (SYSCTL_PLLSTS_MCLKSTS_MASK<< SYSCTL_PLLSTS_R_MCLKSTS_BIT)
#define SYSCTL_PLLSTS_R_MCLKSTS_NORMAL (SYSCTL_PLLSTS_MCLKSTS_NORMAL << SYSCTL_PLLSTS_R_MCLKSTS_BIT)
#define SYSCTL_PLLSTS_R_MCLKSTS_ERROR (SYSCTL_PLLSTS_MCLKSTS_ERROR << SYSCTL_PLLSTS_R_MCLKSTS_BIT)
/*-----------*/

/*-----------*/
#define SYSCTL_PLLSTS_R_MCLKCLR_BIT ((uint16_t) 4U)

#define SYSCTL_PLLSTS_MCLKCLR_MASK ((uint16_t) 0x0001U)
#define SYSCTL_PLLSTS_MCLKCLR_CLEAR ((uint16_t) 0x0001U)

#define SYSCTL_PLLSTS_R_MCLKCLR_MASK (SYSCTL_PLLSTS_MCLKCLR_MASK<< SYSCTL_PLLSTS_R_MCLKCLR_BIT)
#define SYSCTL_PLLSTS_R_MCLKCLR_CLEAR (SYSCTL_PLLSTS_MCLKCLR_CLEAR << SYSCTL_PLLSTS_R_MCLKCLR_BIT)
/*-----------*/

/*-----------*/
#define SYSCTL_PLLSTS_R_OSCOFF_BIT ((uint16_t) 5U)

#define SYSCTL_PLLSTS_OSCOFF_MASK ((uint16_t) 0x0001U)
#define SYSCTL_PLLSTS_OSCOFF_ON ((uint16_t) 0x0000U)
#define SYSCTL_PLLSTS_OSCOFF_OFF ((uint16_t) 0x0001U)

#define SYSCTL_PLLSTS_R_OSCOFF_MASK (SYSCTL_PLLSTS_OSCOFF_MASK<< SYSCTL_PLLSTS_R_OSCOFF_BIT)
#define SYSCTL_PLLSTS_R_OSCOFF_ON (SYSCTL_PLLSTS_OSCOFF_ON << SYSCTL_PLLSTS_R_OSCOFF_BIT)
#define SYSCTL_PLLSTS_R_OSCOFF_OFF (SYSCTL_PLLSTS_OSCOFF_OFF << SYSCTL_PLLSTS_R_OSCOFF_BIT)
/*-----------*/

/*-----------*/
#define SYSCTL_PLLSTS_R_MCLKOFF_BIT ((uint16_t) 6U)

#define SYSCTL_PLLSTS_MCLKOFF_MASK ((uint16_t) 0x0001U)
#define SYSCTL_PLLSTS_MCLKOFF_ON ((uint16_t) 0x0000U)
#define SYSCTL_PLLSTS_MCLKOFF_OFF ((uint16_t) 0x0001U)

#define SYSCTL_PLLSTS_R_MCLKOFF_MASK (SYSCTL_PLLSTS_MCLKOFF_MASK<< SYSCTL_PLLSTS_R_MCLKOFF_BIT)
#define SYSCTL_PLLSTS_R_MCLKOFF_ON (SYSCTL_PLLSTS_MCLKOFF_ON << SYSCTL_PLLSTS_R_MCLKOFF_BIT)
#define SYSCTL_PLLSTS_R_MCLKOFF_OFF (SYSCTL_PLLSTS_MCLKOFF_OFF << SYSCTL_PLLSTS_R_MCLKOFF_BIT)
/*-----------*/

/*-----------*/
#define SYSCTL_PLLSTS_R_DIVSEL_BIT ((uint16_t) 7U)

#define SYSCTL_PLLSTS_DIVSEL_MASK ((uint16_t) 0x0003U)
#define SYSCTL_PLLSTS_DIVSEL_DIV4_OPT ((uint16_t) 0x0000U)
#define SYSCTL_PLLSTS_DIVSEL_DIV4 ((uint16_t) 0x0001U)
#define SYSCTL_PLLSTS_DIVSEL_DIV2 ((uint16_t) 0x0002U)
#define SYSCTL_PLLSTS_DIVSEL_DIV1 ((uint16_t) 0x0003U)

#define SYSCTL_PLLSTS_R_DIVSEL_MASK (SYSCTL_PLLSTS_DIVSEL_MASK<< SYSCTL_PLLSTS_R_DIVSEL_BIT)
#define SYSCTL_PLLSTS_R_DIVSEL_DIV4_OPT (SYSCTL_PLLSTS_DIVSEL_DIV4_OPT<< SYSCTL_PLLSTS_R_DIVSEL_BIT)
#define SYSCTL_PLLSTS_R_DIVSEL_DIV4 (SYSCTL_PLLSTS_DIVSEL_DIV4 << SYSCTL_PLLSTS_R_DIVSEL_BIT)
#define SYSCTL_PLLSTS_R_DIVSEL_DIV2 (SYSCTL_PLLSTS_DIVSEL_DIV2 << SYSCTL_PLLSTS_R_DIVSEL_BIT)
#define SYSCTL_PLLSTS_R_DIVSEL_DIV1 (SYSCTL_PLLSTS_DIVSEL_DIV1 << SYSCTL_PLLSTS_R_DIVSEL_BIT)
/*-----------*/

/*-----------*/
#define SYSCTL_PLLSTS_R_NORMRDYE_BIT ((uint16_t) 15U)

#define SYSCTL_PLLSTS_NORMRDYE_MASK ((uint16_t) 0x0001U)
#define SYSCTL_PLLSTS_NORMRDYE_DIS ((uint16_t) 0x0000U)
#define SYSCTL_PLLSTS_NORMRDYE_ENA ((uint16_t) 0x0001U)

#define SYSCTL_PLLSTS_R_NORMRDYE_MASK (SYSCTL_PLLSTS_NORMRDYE_MASK<< SYSCTL_PLLSTS_R_NORMRDYE_BIT)
#define SYSCTL_PLLSTS_R_NORMRDYE_DIS (SYSCTL_PLLSTS_NORMRDYE_DIS << SYSCTL_PLLSTS_R_NORMRDYE_BIT)
#define SYSCTL_PLLSTS_R_NORMRDYE_ENA (SYSCTL_PLLSTS_NORMRDYE_ENA << SYSCTL_PLLSTS_R_NORMRDYE_BIT)
/*-----------*/

#endif /* DRIVERLIB_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_PLLSTS_H_ */
