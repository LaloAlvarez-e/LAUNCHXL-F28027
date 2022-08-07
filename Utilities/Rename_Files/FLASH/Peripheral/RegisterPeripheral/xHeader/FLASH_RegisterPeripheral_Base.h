/**
 *
 * @file FLASH_RegisterPeripheral_Base.h
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
 * @verbatim 22 jul. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jul. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_FLASH_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_FLASH_REGISTERPERIPHERAL_BASE_H_
#define DRIVERLIB_FLASH_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_FLASH_REGISTERPERIPHERAL_BASE_H_

#include "DriverLib/FLASH/Peripheral/xHeader/FLASH_RegisterAddress.h"
#include "DriverLib/FLASH/Peripheral/xHeader/FLASH_StructPeripheral.h"
#include "DriverLib/MCU/xHeader/MCU_Variables.h"

#define FLASH ((FLASH_t*) FLASH_BASE)


/******************************************************************************************
 ************************************ 1 CTRL *********************************************
 ******************************************************************************************/
#define FLASH_CTRL_R   (*(volatile uint16_t*) (FLASH_BASE + FLASH_CTRL_OFFSET))
#define FLASH_CTRL     ((FLASH_CTRL_t*) (FLASH_BASE + FLASH_CTRL_OFFSET))

/******************************************************************************************
 ************************************ 2 ACK *********************************************
 ******************************************************************************************/
#define FLASH_ACK_R   (*(volatile uint16_t*) (FLASH_BASE + FLASH_ACK_OFFSET))
#define FLASH_ACK     ((FLASH_ACK_t*) (FLASH_BASE + FLASH_ACK_OFFSET))


/******************************************************************************************
 ************************************ IER-IFR ALL GROUP***********************************
 ******************************************************************************************/
#define FLASH_GROUP     ((FLASH_GROUP_EXT_t*) (FLASH_GROUP1_BASE + FLASH_IER_OFFSET))

/******************************************************************************************
 ************************************ 3 IER-IFR GROUP1 *************************************
 ******************************************************************************************/
#define FLASH_GROUP1     ((FLASH_GROUP_t*) (FLASH_GROUP1_BASE + FLASH_IER_OFFSET))

#define FLASH_GROUP1_IER_R     (*(volatile uint16_t*) (FLASH_GROUP1_BASE + FLASH_IER_OFFSET))
#define FLASH_GROUP1_IER     ((FLASH_IER1_t*) (FLASH_GROUP1_BASE + FLASH_IER_OFFSET))
#define FLASH_GROUP1_IERn     ((FLASH_IERn_t*) (FLASH_GROUP1_BASE + FLASH_IER_OFFSET))

#define FLASH_GROUP1_IFR_R     (*(volatile uint16_t*) (FLASH_GROUP1_BASE + FLASH_IFR_OFFSET))
#define FLASH_GROUP1_IFR     ((FLASH_IFR1_t*) (FLASH_GROUP1_BASE + FLASH_IFR_OFFSET))
#define FLASH_GROUP1_IFRn     ((FLASH_IFRn_t*) (FLASH_GROUP1_BASE + FLASH_IFR_OFFSET))

/******************************************************************************************
 ************************************ 4 IER-IFR GROUP2 *************************************
 ******************************************************************************************/
#define FLASH_GROUP2     ((FLASH_GROUP_t*) (FLASH_GROUP2_BASE + FLASH_IER_OFFSET))

#define FLASH_GROUP2_IER_R     (*(volatile uint16_t*) (FLASH_GROUP2_BASE + FLASH_IER_OFFSET))
#define FLASH_GROUP2_IER     ((FLASH_IER1_t*) (FLASH_GROUP2_BASE + FLASH_IER_OFFSET))
#define FLASH_GROUP2_IERn     ((FLASH_IERn_t*) (FLASH_GROUP2_BASE + FLASH_IER_OFFSET))

#define FLASH_GROUP2_IFR_R     (*(volatile uint16_t*) (FLASH_GROUP2_BASE + FLASH_IFR_OFFSET))
#define FLASH_GROUP2_IFR     ((FLASH_IFR1_t*) (FLASH_GROUP2_BASE + FLASH_IFR_OFFSET))
#define FLASH_GROUP2_IFRn     ((FLASH_IFRn_t*) (FLASH_GROUP2_BASE + FLASH_IFR_OFFSET))

/******************************************************************************************
 ************************************ 5 IER-IFR GROUP3 *************************************
 ******************************************************************************************/
#define FLASH_GROUP3     ((FLASH_GROUP_t*) (FLASH_GROUP3_BASE + FLASH_IER_OFFSET))

#define FLASH_GROUP3_IER_R     (*(volatile uint16_t*) (FLASH_GROUP3_BASE + FLASH_IER_OFFSET))
#define FLASH_GROUP3_IER     ((FLASH_IER1_t*) (FLASH_GROUP3_BASE + FLASH_IER_OFFSET))
#define FLASH_GROUP3_IERn     ((FLASH_IERn_t*) (FLASH_GROUP3_BASE + FLASH_IER_OFFSET))

#define FLASH_GROUP3_IFR_R     (*(volatile uint16_t*) (FLASH_GROUP3_BASE + FLASH_IFR_OFFSET))
#define FLASH_GROUP3_IFR     ((FLASH_IFR1_t*) (FLASH_GROUP3_BASE + FLASH_IFR_OFFSET))
#define FLASH_GROUP3_IFRn     ((FLASH_IFRn_t*) (FLASH_GROUP3_BASE + FLASH_IFR_OFFSET))

/******************************************************************************************
 ************************************ 6 IER-IFR GROUP4 *************************************
 ******************************************************************************************/
#define FLASH_GROUP4     ((FLASH_GROUP_t*) (FLASH_GROUP4_BASE + FLASH_IER_OFFSET))

#define FLASH_GROUP4_IER_R     (*(volatile uint16_t*) (FLASH_GROUP4_BASE + FLASH_IER_OFFSET))
#define FLASH_GROUP4_IER     ((FLASH_IER1_t*) (FLASH_GROUP4_BASE + FLASH_IER_OFFSET))
#define FLASH_GROUP4_IERn     ((FLASH_IERn_t*) (FLASH_GROUP4_BASE + FLASH_IER_OFFSET))

#define FLASH_GROUP4_IFR_R     (*(volatile uint16_t*) (FLASH_GROUP4_BASE + FLASH_IFR_OFFSET))
#define FLASH_GROUP4_IFR     ((FLASH_IFR1_t*) (FLASH_GROUP4_BASE + FLASH_IFR_OFFSET))
#define FLASH_GROUP4_IFRn     ((FLASH_IFRn_t*) (FLASH_GROUP4_BASE + FLASH_IFR_OFFSET))

/******************************************************************************************
 ************************************ 7 IER-IFR GROUP5 *************************************
 ******************************************************************************************/
#define FLASH_GROUP5     ((FLASH_GROUP_t*) (FLASH_GROUP5_BASE + FLASH_IER_OFFSET))

#define FLASH_GROUP5_IER_R     (*(volatile uint16_t*) (FLASH_GROUP5_BASE + FLASH_IER_OFFSET))
#define FLASH_GROUP5_IER     ((FLASH_IER1_t*) (FLASH_GROUP5_BASE + FLASH_IER_OFFSET))
#define FLASH_GROUP5_IERn     ((FLASH_IERn_t*) (FLASH_GROUP5_BASE + FLASH_IER_OFFSET))

#define FLASH_GROUP5_IFR_R     (*(volatile uint16_t*) (FLASH_GROUP5_BASE + FLASH_IFR_OFFSET))
#define FLASH_GROUP5_IFR     ((FLASH_IFR1_t*) (FLASH_GROUP5_BASE + FLASH_IFR_OFFSET))
#define FLASH_GROUP5_IFRn     ((FLASH_IFRn_t*) (FLASH_GROUP5_BASE + FLASH_IFR_OFFSET))

/******************************************************************************************
 ************************************ 8 IER-IFR GROUP6 *************************************
 ******************************************************************************************/
#define FLASH_GROUP6     ((FLASH_GROUP_t*) (FLASH_GROUP6_BASE + FLASH_IER_OFFSET))

#define FLASH_GROUP6_IER_R     (*(volatile uint16_t*) (FLASH_GROUP6_BASE + FLASH_IER_OFFSET))
#define FLASH_GROUP6_IER     ((FLASH_IER1_t*) (FLASH_GROUP6_BASE + FLASH_IER_OFFSET))
#define FLASH_GROUP6_IERn     ((FLASH_IERn_t*) (FLASH_GROUP6_BASE + FLASH_IER_OFFSET))

#define FLASH_GROUP6_IFR_R     (*(volatile uint16_t*) (FLASH_GROUP6_BASE + FLASH_IFR_OFFSET))
#define FLASH_GROUP6_IFR     ((FLASH_IFR1_t*) (FLASH_GROUP6_BASE + FLASH_IFR_OFFSET))
#define FLASH_GROUP6_IFRn     ((FLASH_IFRn_t*) (FLASH_GROUP6_BASE + FLASH_IFR_OFFSET))

/******************************************************************************************
 ************************************ 9 IER-IFR GROUP7 *************************************
 ******************************************************************************************/
#define FLASH_GROUP7     ((FLASH_GROUP_t*) (FLASH_GROUP7_BASE + FLASH_IER_OFFSET))

#define FLASH_GROUP7_IER_R     (*(volatile uint16_t*) (FLASH_GROUP7_BASE + FLASH_IER_OFFSET))
#define FLASH_GROUP7_IER     ((FLASH_IER1_t*) (FLASH_GROUP7_BASE + FLASH_IER_OFFSET))
#define FLASH_GROUP7_IERn     ((FLASH_IERn_t*) (FLASH_GROUP7_BASE + FLASH_IER_OFFSET))

#define FLASH_GROUP7_IFR_R     (*(volatile uint16_t*) (FLASH_GROUP7_BASE + FLASH_IFR_OFFSET))
#define FLASH_GROUP7_IFR     ((FLASH_IFR1_t*) (FLASH_GROUP7_BASE + FLASH_IFR_OFFSET))
#define FLASH_GROUP7_IFRn     ((FLASH_IFRn_t*) (FLASH_GROUP7_BASE + FLASH_IFR_OFFSET))

/******************************************************************************************
 ************************************ 10 IER-IFR GROUP8 *************************************
 ******************************************************************************************/
#define FLASH_GROUP8     ((FLASH_GROUP_t*) (FLASH_GROUP8_BASE + FLASH_IER_OFFSET))

#define FLASH_GROUP8_IER_R     (*(volatile uint16_t*) (FLASH_GROUP8_BASE + FLASH_IER_OFFSET))
#define FLASH_GROUP8_IER     ((FLASH_IER1_t*) (FLASH_GROUP8_BASE + FLASH_IER_OFFSET))
#define FLASH_GROUP8_IERn     ((FLASH_IERn_t*) (FLASH_GROUP8_BASE + FLASH_IER_OFFSET))

#define FLASH_GROUP8_IFR_R     (*(volatile uint16_t*) (FLASH_GROUP8_BASE + FLASH_IFR_OFFSET))
#define FLASH_GROUP8_IFR     ((FLASH_IFR1_t*) (FLASH_GROUP8_BASE + FLASH_IFR_OFFSET))
#define FLASH_GROUP8_IFRn     ((FLASH_IFRn_t*) (FLASH_GROUP8_BASE + FLASH_IFR_OFFSET))

/******************************************************************************************
 ************************************ 11 IER-IFR GROUP9 *************************************
 ******************************************************************************************/
#define FLASH_GROUP9     ((FLASH_GROUP_t*) (FLASH_GROUP9_BASE + FLASH_IER_OFFSET))

#define FLASH_GROUP9_IER_R     (*(volatile uint16_t*) (FLASH_GROUP9_BASE + FLASH_IER_OFFSET))
#define FLASH_GROUP9_IER     ((FLASH_IER1_t*) (FLASH_GROUP9_BASE + FLASH_IER_OFFSET))
#define FLASH_GROUP9_IERn     ((FLASH_IERn_t*) (FLASH_GROUP9_BASE + FLASH_IER_OFFSET))

#define FLASH_GROUP9_IFR_R     (*(volatile uint16_t*) (FLASH_GROUP9_BASE + FLASH_IFR_OFFSET))
#define FLASH_GROUP9_IFR     ((FLASH_IFR1_t*) (FLASH_GROUP9_BASE + FLASH_IFR_OFFSET))
#define FLASH_GROUP9_IFRn     ((FLASH_IFRn_t*) (FLASH_GROUP9_BASE + FLASH_IFR_OFFSET))

/******************************************************************************************
 ************************************ 12 IER-IFR GROUP10 *************************************
 ******************************************************************************************/
#define FLASH_GROUP10     ((FLASH_GROUP_t*) (FLASH_GROUP10_BASE + FLASH_IER_OFFSET))

#define FLASH_GROUP10_IER_R     (*(volatile uint16_t*) (FLASH_GROUP10_BASE + FLASH_IER_OFFSET))
#define FLASH_GROUP10_IER     ((FLASH_IER1_t*) (FLASH_GROUP10_BASE + FLASH_IER_OFFSET))
#define FLASH_GROUP10_IERn     ((FLASH_IERn_t*) (FLASH_GROUP10_BASE + FLASH_IER_OFFSET))

#define FLASH_GROUP10_IFR_R     (*(volatile uint16_t*) (FLASH_GROUP10_BASE + FLASH_IFR_OFFSET))
#define FLASH_GROUP10_IFR     ((FLASH_IFR1_t*) (FLASH_GROUP10_BASE + FLASH_IFR_OFFSET))
#define FLASH_GROUP10_IFRn     ((FLASH_IFRn_t*) (FLASH_GROUP10_BASE + FLASH_IFR_OFFSET))

/******************************************************************************************
 ************************************ 13 IER-IFR GROUP11 *************************************
 ******************************************************************************************/
#define FLASH_GROUP11     ((FLASH_GROUP_t*) (FLASH_GROUP11_BASE + FLASH_IER_OFFSET))
#define FLASH_GROUP11_IER_R     (*(volatile uint16_t*) (FLASH_GROUP11_BASE + FLASH_IER_OFFSET))
#define FLASH_GROUP11_IER     ((FLASH_IER1_t*) (FLASH_GROUP11_BASE + FLASH_IER_OFFSET))
#define FLASH_GROUP11_IERn     ((FLASH_IERn_t*) (FLASH_GROUP11_BASE + FLASH_IER_OFFSET))

#define FLASH_GROUP11_IFR_R     (*(volatile uint16_t*) (FLASH_GROUP11_BASE + FLASH_IFR_OFFSET))
#define FLASH_GROUP11_IFR     ((FLASH_IFR1_t*) (FLASH_GROUP11_BASE + FLASH_IFR_OFFSET))
#define FLASH_GROUP11_IFRn     ((FLASH_IFRn_t*) (FLASH_GROUP11_BASE + FLASH_IFR_OFFSET))

/******************************************************************************************
 ************************************ 14 IER-IFR GROUP12 *************************************
 ******************************************************************************************/
#define FLASH_GROUP12     ((FLASH_GROUP_t*) (FLASH_GROUP12_BASE + FLASH_IER_OFFSET))

#define FLASH_GROUP12_IER_R     (*(volatile uint16_t*) (FLASH_GROUP12_BASE + FLASH_IER_OFFSET))
#define FLASH_GROUP12_IER     ((FLASH_IER1_t*) (FLASH_GROUP12_BASE + FLASH_IER_OFFSET))
#define FLASH_GROUP12_IERn     ((FLASH_IERn_t*) (FLASH_GROUP12_BASE + FLASH_IER_OFFSET))

#define FLASH_GROUP12_IFR_R     (*(volatile uint16_t*) (FLASH_GROUP12_BASE + FLASH_IFR_OFFSET))
#define FLASH_GROUP12_IFR     ((FLASH_IFR1_t*) (FLASH_GROUP12_BASE + FLASH_IFR_OFFSET))
#define FLASH_GROUP12_IFRn     ((FLASH_IFRn_t*) (FLASH_GROUP12_BASE + FLASH_IFR_OFFSET))

#endif /* DRIVERLIB_FLASH_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_FLASH_REGISTERPERIPHERAL_BASE_H_ */
