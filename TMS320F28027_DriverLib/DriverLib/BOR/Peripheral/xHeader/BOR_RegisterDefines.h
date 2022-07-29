/**
 *
 * @file BOR_RegisterDefines.h
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
 * @verbatim 29 jul. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 29 jul. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_BOR_PERIPHERAL_XHEADER_BOR_REGISTERDEFINES_H_
#define DRIVERLIB_BOR_PERIPHERAL_XHEADER_BOR_REGISTERDEFINES_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

/******************************************************************************************
 ************************************ 1 BORCFG *********************************************
 ******************************************************************************************/
/*-----------*/
#define BOR_CFG_R_ENZ_BIT ((uint16_t) 0U)

#define BOR_CFG_ENZ_MASK ((uint16_t) 0x0001U)
#define BOR_CFG_ENZ_ENA ((uint16_t) 0x0000U)
#define BOR_CFG_ENZ_DIS ((uint16_t) 0x0001U)

#define BOR_CFG_R_ENZ_MASK (BOR_CFG_ENZ_MASK<< BOR_CFG_R_ENZ_BIT)
#define BOR_CFG_R_ENZ_ENA (BOR_CFG_ENZ_ENA << BOR_CFG_R_ENZ_BIT)
#define BOR_CFG_R_ENZ_DIS (BOR_CFG_ENZ_DIS << BOR_CFG_R_ENZ_BIT)
/*-----------*/

#endif /* DRIVERLIB_BOR_PERIPHERAL_XHEADER_BOR_REGISTERDEFINES_H_ */
