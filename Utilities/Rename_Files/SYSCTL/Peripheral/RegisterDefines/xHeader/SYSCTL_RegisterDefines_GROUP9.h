/**
 *
 * @file SYSCTL_RegisterDefines_GROUP9.h
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

#ifndef DRIVERLIB_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_GROUP9_H_
#define DRIVERLIB_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_GROUP9_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

/******************************************************************************************
 ************************************ 1 SYSCTLIER *********************************************
 ******************************************************************************************/
/*-----------*/
#define SYSCTL_GROUP9_IER_R_SCIA_RX_BIT ((uint16_t) 0U)

#define SYSCTL_GROUP9_IER_SCIA_RX_MASK ((uint16_t) 0x01U)
#define SYSCTL_GROUP9_IER_SCIA_RX_DIS ((uint16_t) 0x00U)
#define SYSCTL_GROUP9_IER_SCIA_RX_ENA ((uint16_t) 0x01U)

#define SYSCTL_GROUP9_IER_R_SCIA_RX_MASK (SYSCTL_GROUP9_IER_SCIA_RX_MASK<< SYSCTL_GROUP9_IER_R_SCIA_RX_BIT)
#define SYSCTL_GROUP9_IER_R_SCIA_RX_DIS (SYSCTL_GROUP9_IER_SCIA_RX_DIS << SYSCTL_GROUP9_IER_R_SCIA_RX_BIT)
#define SYSCTL_GROUP9_IER_R_SCIA_RX_ENA (SYSCTL_GROUP9_IER_SCIA_RX_ENA << SYSCTL_GROUP9_IER_R_SCIA_RX_BIT)
/*-----------*/

/*-----------*/
#define SYSCTL_GROUP9_IER_R_SCIA_TX_BIT ((uint16_t) 1U)

#define SYSCTL_GROUP9_IER_SCIA_TX_MASK ((uint16_t) 0x01U)
#define SYSCTL_GROUP9_IER_SCIA_TX_DIS ((uint16_t) 0x00U)
#define SYSCTL_GROUP9_IER_SCIA_TX_ENA ((uint16_t) 0x01U)

#define SYSCTL_GROUP9_IER_R_SCIA_TX_MASK (SYSCTL_GROUP9_IER_SCIA_TX_MASK<< SYSCTL_GROUP9_IER_R_SCIA_TX_BIT)
#define SYSCTL_GROUP9_IER_R_SCIA_TX_DIS (SYSCTL_GROUP9_IER_SCIA_TX_DIS << SYSCTL_GROUP9_IER_R_SCIA_TX_BIT)
#define SYSCTL_GROUP9_IER_R_SCIA_TX_ENA (SYSCTL_GROUP9_IER_SCIA_TX_ENA << SYSCTL_GROUP9_IER_R_SCIA_TX_BIT)
/*-----------*/

/*-----------*/
#define SYSCTL_GROUP9_IER_R_RESERVED43_BIT ((uint16_t) 2U)

#define SYSCTL_GROUP9_IER_RESERVED43_MASK ((uint16_t) 0x01U)
#define SYSCTL_GROUP9_IER_RESERVED43_DIS ((uint16_t) 0x00U)
#define SYSCTL_GROUP9_IER_RESERVED43_ENA ((uint16_t) 0x01U)

#define SYSCTL_GROUP9_IER_R_RESERVED43_MASK (SYSCTL_GROUP9_IER_RESERVED43_MASK<< SYSCTL_GROUP9_IER_R_RESERVED43_BIT)
#define SYSCTL_GROUP9_IER_R_RESERVED43_DIS (SYSCTL_GROUP9_IER_RESERVED43_DIS << SYSCTL_GROUP9_IER_R_RESERVED43_BIT)
#define SYSCTL_GROUP9_IER_R_RESERVED43_ENA (SYSCTL_GROUP9_IER_RESERVED43_ENA << SYSCTL_GROUP9_IER_R_RESERVED43_BIT)
/*-----------*/

/*-----------*/
#define SYSCTL_GROUP9_IER_R_RESERVED44_BIT ((uint16_t) 3U)

#define SYSCTL_GROUP9_IER_RESERVED44_MASK ((uint16_t) 0x01U)
#define SYSCTL_GROUP9_IER_RESERVED44_DIS ((uint16_t) 0x00U)
#define SYSCTL_GROUP9_IER_RESERVED44_ENA ((uint16_t) 0x01U)

#define SYSCTL_GROUP9_IER_R_RESERVED44_MASK (SYSCTL_GROUP9_IER_RESERVED44_MASK<< SYSCTL_GROUP9_IER_R_RESERVED44_BIT)
#define SYSCTL_GROUP9_IER_R_RESERVED44_DIS (SYSCTL_GROUP9_IER_RESERVED44_DIS << SYSCTL_GROUP9_IER_R_RESERVED44_BIT)
#define SYSCTL_GROUP9_IER_R_RESERVED44_ENA (SYSCTL_GROUP9_IER_RESERVED44_ENA << SYSCTL_GROUP9_IER_R_RESERVED44_BIT)
/*-----------*/

/*-----------*/
#define SYSCTL_GROUP9_IER_R_RESERVED45_BIT ((uint16_t) 4U)

#define SYSCTL_GROUP9_IER_RESERVED45_MASK ((uint16_t) 0x01U)
#define SYSCTL_GROUP9_IER_RESERVED45_DIS ((uint16_t) 0x00U)
#define SYSCTL_GROUP9_IER_RESERVED45_ENA ((uint16_t) 0x01U)

#define SYSCTL_GROUP9_IER_R_RESERVED45_MASK (SYSCTL_GROUP9_IER_RESERVED45_MASK<< SYSCTL_GROUP9_IER_R_RESERVED45_BIT)
#define SYSCTL_GROUP9_IER_R_RESERVED45_DIS (SYSCTL_GROUP9_IER_RESERVED45_DIS << SYSCTL_GROUP9_IER_R_RESERVED45_BIT)
#define SYSCTL_GROUP9_IER_R_RESERVED45_ENA (SYSCTL_GROUP9_IER_RESERVED45_ENA << SYSCTL_GROUP9_IER_R_RESERVED45_BIT)
/*-----------*/

/*-----------*/
#define SYSCTL_GROUP9_IER_R_RESERVED46_BIT ((uint16_t) 5U)

#define SYSCTL_GROUP9_IER_RESERVED46_MASK ((uint16_t) 0x01U)
#define SYSCTL_GROUP9_IER_RESERVED46_DIS ((uint16_t) 0x00U)
#define SYSCTL_GROUP9_IER_RESERVED46_ENA ((uint16_t) 0x01U)

#define SYSCTL_GROUP9_IER_R_RESERVED46_MASK (SYSCTL_GROUP9_IER_RESERVED46_MASK<< SYSCTL_GROUP9_IER_R_RESERVED46_BIT)
#define SYSCTL_GROUP9_IER_R_RESERVED46_DIS (SYSCTL_GROUP9_IER_RESERVED46_DIS << SYSCTL_GROUP9_IER_R_RESERVED46_BIT)
#define SYSCTL_GROUP9_IER_R_RESERVED46_ENA (SYSCTL_GROUP9_IER_RESERVED46_ENA << SYSCTL_GROUP9_IER_R_RESERVED46_BIT)
/*-----------*/

/*-----------*/
#define SYSCTL_GROUP9_IER_R_RESERVED47_BIT ((uint16_t) 6U)

#define SYSCTL_GROUP9_IER_RESERVED47_MASK ((uint16_t) 0x01U)
#define SYSCTL_GROUP9_IER_RESERVED47_DIS ((uint16_t) 0x00U)
#define SYSCTL_GROUP9_IER_RESERVED47_ENA ((uint16_t) 0x01U)

#define SYSCTL_GROUP9_IER_R_RESERVED47_MASK (SYSCTL_GROUP9_IER_RESERVED47_MASK<< SYSCTL_GROUP9_IER_R_RESERVED47_BIT)
#define SYSCTL_GROUP9_IER_R_RESERVED47_DIS (SYSCTL_GROUP9_IER_RESERVED47_DIS << SYSCTL_GROUP9_IER_R_RESERVED47_BIT)
#define SYSCTL_GROUP9_IER_R_RESERVED47_ENA (SYSCTL_GROUP9_IER_RESERVED47_ENA << SYSCTL_GROUP9_IER_R_RESERVED47_BIT)
/*-----------*/

/*-----------*/
#define SYSCTL_GROUP9_IER_R_RESERVED48_BIT ((uint16_t) 7U)

#define SYSCTL_GROUP9_IER_RESERVED48_MASK ((uint16_t) 0x01U)
#define SYSCTL_GROUP9_IER_RESERVED48_DIS ((uint16_t) 0x00U)
#define SYSCTL_GROUP9_IER_RESERVED48_ENA ((uint16_t) 0x01U)

#define SYSCTL_GROUP9_IER_R_RESERVED48_MASK (SYSCTL_GROUP9_IER_RESERVED48_MASK<< SYSCTL_GROUP9_IER_R_RESERVED48_BIT)
#define SYSCTL_GROUP9_IER_R_RESERVED48_DIS (SYSCTL_GROUP9_IER_RESERVED48_DIS << SYSCTL_GROUP9_IER_R_RESERVED48_BIT)
#define SYSCTL_GROUP9_IER_R_RESERVED48_ENA (SYSCTL_GROUP9_IER_RESERVED48_ENA << SYSCTL_GROUP9_IER_R_RESERVED48_BIT)
/*-----------*/

/******************************************************************************************
 ************************************ 1 SYSCTLIFR *********************************************
 ******************************************************************************************/
/*-----------*/
#define SYSCTL_GROUP9_IFR_R_SCIA_RX_BIT ((uint16_t) 0U)

#define SYSCTL_GROUP9_IFR_SCIA_RX_MASK ((uint16_t) 0x01U)
#define SYSCTL_GROUP9_IFR_SCIA_RX_DIS ((uint16_t) 0x00U)
#define SYSCTL_GROUP9_IFR_SCIA_RX_ENA ((uint16_t) 0x01U)

#define SYSCTL_GROUP9_IFR_R_SCIA_RX_MASK (SYSCTL_GROUP9_IFR_SCIA_RX_MASK<< SYSCTL_GROUP9_IFR_R_SCIA_RX_BIT)
#define SYSCTL_GROUP9_IFR_R_SCIA_RX_DIS (SYSCTL_GROUP9_IFR_SCIA_RX_DIS << SYSCTL_GROUP9_IFR_R_SCIA_RX_BIT)
#define SYSCTL_GROUP9_IFR_R_SCIA_RX_ENA (SYSCTL_GROUP9_IFR_SCIA_RX_ENA << SYSCTL_GROUP9_IFR_R_SCIA_RX_BIT)
/*-----------*/

/*-----------*/
#define SYSCTL_GROUP9_IFR_R_SCIA_TX_BIT ((uint16_t) 1U)

#define SYSCTL_GROUP9_IFR_SCIA_TX_MASK ((uint16_t) 0x01U)
#define SYSCTL_GROUP9_IFR_SCIA_TX_DIS ((uint16_t) 0x00U)
#define SYSCTL_GROUP9_IFR_SCIA_TX_ENA ((uint16_t) 0x01U)

#define SYSCTL_GROUP9_IFR_R_SCIA_TX_MASK (SYSCTL_GROUP9_IFR_SCIA_TX_MASK<< SYSCTL_GROUP9_IFR_R_SCIA_TX_BIT)
#define SYSCTL_GROUP9_IFR_R_SCIA_TX_DIS (SYSCTL_GROUP9_IFR_SCIA_TX_DIS << SYSCTL_GROUP9_IFR_R_SCIA_TX_BIT)
#define SYSCTL_GROUP9_IFR_R_SCIA_TX_ENA (SYSCTL_GROUP9_IFR_SCIA_TX_ENA << SYSCTL_GROUP9_IFR_R_SCIA_TX_BIT)
/*-----------*/

/*-----------*/
#define SYSCTL_GROUP9_IFR_R_RESERVED43_BIT ((uint16_t) 2U)

#define SYSCTL_GROUP9_IFR_RESERVED43_MASK ((uint16_t) 0x01U)
#define SYSCTL_GROUP9_IFR_RESERVED43_DIS ((uint16_t) 0x00U)
#define SYSCTL_GROUP9_IFR_RESERVED43_ENA ((uint16_t) 0x01U)

#define SYSCTL_GROUP9_IFR_R_RESERVED43_MASK (SYSCTL_GROUP9_IFR_RESERVED43_MASK<< SYSCTL_GROUP9_IFR_R_RESERVED43_BIT)
#define SYSCTL_GROUP9_IFR_R_RESERVED43_DIS (SYSCTL_GROUP9_IFR_RESERVED43_DIS << SYSCTL_GROUP9_IFR_R_RESERVED43_BIT)
#define SYSCTL_GROUP9_IFR_R_RESERVED43_ENA (SYSCTL_GROUP9_IFR_RESERVED43_ENA << SYSCTL_GROUP9_IFR_R_RESERVED43_BIT)
/*-----------*/

/*-----------*/
#define SYSCTL_GROUP9_IFR_R_RESERVED44_BIT ((uint16_t) 3U)

#define SYSCTL_GROUP9_IFR_RESERVED44_MASK ((uint16_t) 0x01U)
#define SYSCTL_GROUP9_IFR_RESERVED44_DIS ((uint16_t) 0x00U)
#define SYSCTL_GROUP9_IFR_RESERVED44_ENA ((uint16_t) 0x01U)

#define SYSCTL_GROUP9_IFR_R_RESERVED44_MASK (SYSCTL_GROUP9_IFR_RESERVED44_MASK<< SYSCTL_GROUP9_IFR_R_RESERVED44_BIT)
#define SYSCTL_GROUP9_IFR_R_RESERVED44_DIS (SYSCTL_GROUP9_IFR_RESERVED44_DIS << SYSCTL_GROUP9_IFR_R_RESERVED44_BIT)
#define SYSCTL_GROUP9_IFR_R_RESERVED44_ENA (SYSCTL_GROUP9_IFR_RESERVED44_ENA << SYSCTL_GROUP9_IFR_R_RESERVED44_BIT)
/*-----------*/

/*-----------*/
#define SYSCTL_GROUP9_IFR_R_RESERVED45_BIT ((uint16_t) 4U)

#define SYSCTL_GROUP9_IFR_RESERVED45_MASK ((uint16_t) 0x01U)
#define SYSCTL_GROUP9_IFR_RESERVED45_DIS ((uint16_t) 0x00U)
#define SYSCTL_GROUP9_IFR_RESERVED45_ENA ((uint16_t) 0x01U)

#define SYSCTL_GROUP9_IFR_R_RESERVED45_MASK (SYSCTL_GROUP9_IFR_RESERVED45_MASK<< SYSCTL_GROUP9_IFR_R_RESERVED45_BIT)
#define SYSCTL_GROUP9_IFR_R_RESERVED45_DIS (SYSCTL_GROUP9_IFR_RESERVED45_DIS << SYSCTL_GROUP9_IFR_R_RESERVED45_BIT)
#define SYSCTL_GROUP9_IFR_R_RESERVED45_ENA (SYSCTL_GROUP9_IFR_RESERVED45_ENA << SYSCTL_GROUP9_IFR_R_RESERVED45_BIT)
/*-----------*/

/*-----------*/
#define SYSCTL_GROUP9_IFR_R_RESERVED46_BIT ((uint16_t) 5U)

#define SYSCTL_GROUP9_IFR_RESERVED46_MASK ((uint16_t) 0x01U)
#define SYSCTL_GROUP9_IFR_RESERVED46_DIS ((uint16_t) 0x00U)
#define SYSCTL_GROUP9_IFR_RESERVED46_ENA ((uint16_t) 0x01U)

#define SYSCTL_GROUP9_IFR_R_RESERVED46_MASK (SYSCTL_GROUP9_IFR_RESERVED46_MASK<< SYSCTL_GROUP9_IFR_R_RESERVED46_BIT)
#define SYSCTL_GROUP9_IFR_R_RESERVED46_DIS (SYSCTL_GROUP9_IFR_RESERVED46_DIS << SYSCTL_GROUP9_IFR_R_RESERVED46_BIT)
#define SYSCTL_GROUP9_IFR_R_RESERVED46_ENA (SYSCTL_GROUP9_IFR_RESERVED46_ENA << SYSCTL_GROUP9_IFR_R_RESERVED46_BIT)
/*-----------*/

/*-----------*/
#define SYSCTL_GROUP9_IFR_R_RESERVED47_BIT ((uint16_t) 6U)

#define SYSCTL_GROUP9_IFR_RESERVED47_MASK ((uint16_t) 0x01U)
#define SYSCTL_GROUP9_IFR_RESERVED47_DIS ((uint16_t) 0x00U)
#define SYSCTL_GROUP9_IFR_RESERVED47_ENA ((uint16_t) 0x01U)

#define SYSCTL_GROUP9_IFR_R_RESERVED47_MASK (SYSCTL_GROUP9_IFR_RESERVED47_MASK<< SYSCTL_GROUP9_IFR_R_RESERVED47_BIT)
#define SYSCTL_GROUP9_IFR_R_RESERVED47_DIS (SYSCTL_GROUP9_IFR_RESERVED47_DIS << SYSCTL_GROUP9_IFR_R_RESERVED47_BIT)
#define SYSCTL_GROUP9_IFR_R_RESERVED47_ENA (SYSCTL_GROUP9_IFR_RESERVED47_ENA << SYSCTL_GROUP9_IFR_R_RESERVED47_BIT)
/*-----------*/

/*-----------*/
#define SYSCTL_GROUP9_IFR_R_RESERVED48_BIT ((uint16_t) 7U)

#define SYSCTL_GROUP9_IFR_RESERVED48_MASK ((uint16_t) 0x01U)
#define SYSCTL_GROUP9_IFR_RESERVED48_DIS ((uint16_t) 0x00U)
#define SYSCTL_GROUP9_IFR_RESERVED48_ENA ((uint16_t) 0x01U)

#define SYSCTL_GROUP9_IFR_R_RESERVED48_MASK (SYSCTL_GROUP9_IFR_RESERVED48_MASK<< SYSCTL_GROUP9_IFR_R_RESERVED48_BIT)
#define SYSCTL_GROUP9_IFR_R_RESERVED48_DIS (SYSCTL_GROUP9_IFR_RESERVED48_DIS << SYSCTL_GROUP9_IFR_R_RESERVED48_BIT)
#define SYSCTL_GROUP9_IFR_R_RESERVED48_ENA (SYSCTL_GROUP9_IFR_RESERVED48_ENA << SYSCTL_GROUP9_IFR_R_RESERVED48_BIT)
/*-----------*/

#endif /* DRIVERLIB_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_GROUP9_H_ */
