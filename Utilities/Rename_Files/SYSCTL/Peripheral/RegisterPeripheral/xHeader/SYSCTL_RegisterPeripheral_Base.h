/**
 *
 * @file SYSCTL_RegisterPeripheral_Base.h
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

#ifndef DRIVERLIB_SYSCTL_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_SYSCTL_REGISTERPERIPHERAL_BASE_H_
#define DRIVERLIB_SYSCTL_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_SYSCTL_REGISTERPERIPHERAL_BASE_H_

#include "DriverLib/SYSCTL/Peripheral/xHeader/SYSCTL_RegisterAddress.h"
#include "DriverLib/SYSCTL/Peripheral/xHeader/SYSCTL_StructPeripheral.h"
#include "DriverLib/MCU/xHeader/MCU_Variables.h"

#define SYSCTL ((SYSCTL_t*) SYSCTL_BASE)


/******************************************************************************************
 ************************************ 1 CTRL *********************************************
 ******************************************************************************************/
#define SYSCTL_CTRL_R   (*(volatile uint16_t*) (SYSCTL_BASE + SYSCTL_CTRL_OFFSET))
#define SYSCTL_CTRL     ((SYSCTL_CTRL_t*) (SYSCTL_BASE + SYSCTL_CTRL_OFFSET))

/******************************************************************************************
 ************************************ 2 ACK *********************************************
 ******************************************************************************************/
#define SYSCTL_ACK_R   (*(volatile uint16_t*) (SYSCTL_BASE + SYSCTL_ACK_OFFSET))
#define SYSCTL_ACK     ((SYSCTL_ACK_t*) (SYSCTL_BASE + SYSCTL_ACK_OFFSET))


/******************************************************************************************
 ************************************ IER-IFR ALL GROUP***********************************
 ******************************************************************************************/
#define SYSCTL_GROUP     ((SYSCTL_GROUP_EXT_t*) (SYSCTL_GROUP1_BASE + SYSCTL_IER_OFFSET))

/******************************************************************************************
 ************************************ 3 IER-IFR GROUP1 *************************************
 ******************************************************************************************/
#define SYSCTL_GROUP1     ((SYSCTL_GROUP_t*) (SYSCTL_GROUP1_BASE + SYSCTL_IER_OFFSET))

#define SYSCTL_GROUP1_IER_R     (*(volatile uint16_t*) (SYSCTL_GROUP1_BASE + SYSCTL_IER_OFFSET))
#define SYSCTL_GROUP1_IER     ((SYSCTL_IER1_t*) (SYSCTL_GROUP1_BASE + SYSCTL_IER_OFFSET))
#define SYSCTL_GROUP1_IERn     ((SYSCTL_IERn_t*) (SYSCTL_GROUP1_BASE + SYSCTL_IER_OFFSET))

#define SYSCTL_GROUP1_IFR_R     (*(volatile uint16_t*) (SYSCTL_GROUP1_BASE + SYSCTL_IFR_OFFSET))
#define SYSCTL_GROUP1_IFR     ((SYSCTL_IFR1_t*) (SYSCTL_GROUP1_BASE + SYSCTL_IFR_OFFSET))
#define SYSCTL_GROUP1_IFRn     ((SYSCTL_IFRn_t*) (SYSCTL_GROUP1_BASE + SYSCTL_IFR_OFFSET))

/******************************************************************************************
 ************************************ 4 IER-IFR GROUP2 *************************************
 ******************************************************************************************/
#define SYSCTL_GROUP2     ((SYSCTL_GROUP_t*) (SYSCTL_GROUP2_BASE + SYSCTL_IER_OFFSET))

#define SYSCTL_GROUP2_IER_R     (*(volatile uint16_t*) (SYSCTL_GROUP2_BASE + SYSCTL_IER_OFFSET))
#define SYSCTL_GROUP2_IER     ((SYSCTL_IER1_t*) (SYSCTL_GROUP2_BASE + SYSCTL_IER_OFFSET))
#define SYSCTL_GROUP2_IERn     ((SYSCTL_IERn_t*) (SYSCTL_GROUP2_BASE + SYSCTL_IER_OFFSET))

#define SYSCTL_GROUP2_IFR_R     (*(volatile uint16_t*) (SYSCTL_GROUP2_BASE + SYSCTL_IFR_OFFSET))
#define SYSCTL_GROUP2_IFR     ((SYSCTL_IFR1_t*) (SYSCTL_GROUP2_BASE + SYSCTL_IFR_OFFSET))
#define SYSCTL_GROUP2_IFRn     ((SYSCTL_IFRn_t*) (SYSCTL_GROUP2_BASE + SYSCTL_IFR_OFFSET))

/******************************************************************************************
 ************************************ 5 IER-IFR GROUP3 *************************************
 ******************************************************************************************/
#define SYSCTL_GROUP3     ((SYSCTL_GROUP_t*) (SYSCTL_GROUP3_BASE + SYSCTL_IER_OFFSET))

#define SYSCTL_GROUP3_IER_R     (*(volatile uint16_t*) (SYSCTL_GROUP3_BASE + SYSCTL_IER_OFFSET))
#define SYSCTL_GROUP3_IER     ((SYSCTL_IER1_t*) (SYSCTL_GROUP3_BASE + SYSCTL_IER_OFFSET))
#define SYSCTL_GROUP3_IERn     ((SYSCTL_IERn_t*) (SYSCTL_GROUP3_BASE + SYSCTL_IER_OFFSET))

#define SYSCTL_GROUP3_IFR_R     (*(volatile uint16_t*) (SYSCTL_GROUP3_BASE + SYSCTL_IFR_OFFSET))
#define SYSCTL_GROUP3_IFR     ((SYSCTL_IFR1_t*) (SYSCTL_GROUP3_BASE + SYSCTL_IFR_OFFSET))
#define SYSCTL_GROUP3_IFRn     ((SYSCTL_IFRn_t*) (SYSCTL_GROUP3_BASE + SYSCTL_IFR_OFFSET))

/******************************************************************************************
 ************************************ 6 IER-IFR GROUP4 *************************************
 ******************************************************************************************/
#define SYSCTL_GROUP4     ((SYSCTL_GROUP_t*) (SYSCTL_GROUP4_BASE + SYSCTL_IER_OFFSET))

#define SYSCTL_GROUP4_IER_R     (*(volatile uint16_t*) (SYSCTL_GROUP4_BASE + SYSCTL_IER_OFFSET))
#define SYSCTL_GROUP4_IER     ((SYSCTL_IER1_t*) (SYSCTL_GROUP4_BASE + SYSCTL_IER_OFFSET))
#define SYSCTL_GROUP4_IERn     ((SYSCTL_IERn_t*) (SYSCTL_GROUP4_BASE + SYSCTL_IER_OFFSET))

#define SYSCTL_GROUP4_IFR_R     (*(volatile uint16_t*) (SYSCTL_GROUP4_BASE + SYSCTL_IFR_OFFSET))
#define SYSCTL_GROUP4_IFR     ((SYSCTL_IFR1_t*) (SYSCTL_GROUP4_BASE + SYSCTL_IFR_OFFSET))
#define SYSCTL_GROUP4_IFRn     ((SYSCTL_IFRn_t*) (SYSCTL_GROUP4_BASE + SYSCTL_IFR_OFFSET))

/******************************************************************************************
 ************************************ 7 IER-IFR GROUP5 *************************************
 ******************************************************************************************/
#define SYSCTL_GROUP5     ((SYSCTL_GROUP_t*) (SYSCTL_GROUP5_BASE + SYSCTL_IER_OFFSET))

#define SYSCTL_GROUP5_IER_R     (*(volatile uint16_t*) (SYSCTL_GROUP5_BASE + SYSCTL_IER_OFFSET))
#define SYSCTL_GROUP5_IER     ((SYSCTL_IER1_t*) (SYSCTL_GROUP5_BASE + SYSCTL_IER_OFFSET))
#define SYSCTL_GROUP5_IERn     ((SYSCTL_IERn_t*) (SYSCTL_GROUP5_BASE + SYSCTL_IER_OFFSET))

#define SYSCTL_GROUP5_IFR_R     (*(volatile uint16_t*) (SYSCTL_GROUP5_BASE + SYSCTL_IFR_OFFSET))
#define SYSCTL_GROUP5_IFR     ((SYSCTL_IFR1_t*) (SYSCTL_GROUP5_BASE + SYSCTL_IFR_OFFSET))
#define SYSCTL_GROUP5_IFRn     ((SYSCTL_IFRn_t*) (SYSCTL_GROUP5_BASE + SYSCTL_IFR_OFFSET))

/******************************************************************************************
 ************************************ 8 IER-IFR GROUP6 *************************************
 ******************************************************************************************/
#define SYSCTL_GROUP6     ((SYSCTL_GROUP_t*) (SYSCTL_GROUP6_BASE + SYSCTL_IER_OFFSET))

#define SYSCTL_GROUP6_IER_R     (*(volatile uint16_t*) (SYSCTL_GROUP6_BASE + SYSCTL_IER_OFFSET))
#define SYSCTL_GROUP6_IER     ((SYSCTL_IER1_t*) (SYSCTL_GROUP6_BASE + SYSCTL_IER_OFFSET))
#define SYSCTL_GROUP6_IERn     ((SYSCTL_IERn_t*) (SYSCTL_GROUP6_BASE + SYSCTL_IER_OFFSET))

#define SYSCTL_GROUP6_IFR_R     (*(volatile uint16_t*) (SYSCTL_GROUP6_BASE + SYSCTL_IFR_OFFSET))
#define SYSCTL_GROUP6_IFR     ((SYSCTL_IFR1_t*) (SYSCTL_GROUP6_BASE + SYSCTL_IFR_OFFSET))
#define SYSCTL_GROUP6_IFRn     ((SYSCTL_IFRn_t*) (SYSCTL_GROUP6_BASE + SYSCTL_IFR_OFFSET))

/******************************************************************************************
 ************************************ 9 IER-IFR GROUP7 *************************************
 ******************************************************************************************/
#define SYSCTL_GROUP7     ((SYSCTL_GROUP_t*) (SYSCTL_GROUP7_BASE + SYSCTL_IER_OFFSET))

#define SYSCTL_GROUP7_IER_R     (*(volatile uint16_t*) (SYSCTL_GROUP7_BASE + SYSCTL_IER_OFFSET))
#define SYSCTL_GROUP7_IER     ((SYSCTL_IER1_t*) (SYSCTL_GROUP7_BASE + SYSCTL_IER_OFFSET))
#define SYSCTL_GROUP7_IERn     ((SYSCTL_IERn_t*) (SYSCTL_GROUP7_BASE + SYSCTL_IER_OFFSET))

#define SYSCTL_GROUP7_IFR_R     (*(volatile uint16_t*) (SYSCTL_GROUP7_BASE + SYSCTL_IFR_OFFSET))
#define SYSCTL_GROUP7_IFR     ((SYSCTL_IFR1_t*) (SYSCTL_GROUP7_BASE + SYSCTL_IFR_OFFSET))
#define SYSCTL_GROUP7_IFRn     ((SYSCTL_IFRn_t*) (SYSCTL_GROUP7_BASE + SYSCTL_IFR_OFFSET))

/******************************************************************************************
 ************************************ 10 IER-IFR GROUP8 *************************************
 ******************************************************************************************/
#define SYSCTL_GROUP8     ((SYSCTL_GROUP_t*) (SYSCTL_GROUP8_BASE + SYSCTL_IER_OFFSET))

#define SYSCTL_GROUP8_IER_R     (*(volatile uint16_t*) (SYSCTL_GROUP8_BASE + SYSCTL_IER_OFFSET))
#define SYSCTL_GROUP8_IER     ((SYSCTL_IER1_t*) (SYSCTL_GROUP8_BASE + SYSCTL_IER_OFFSET))
#define SYSCTL_GROUP8_IERn     ((SYSCTL_IERn_t*) (SYSCTL_GROUP8_BASE + SYSCTL_IER_OFFSET))

#define SYSCTL_GROUP8_IFR_R     (*(volatile uint16_t*) (SYSCTL_GROUP8_BASE + SYSCTL_IFR_OFFSET))
#define SYSCTL_GROUP8_IFR     ((SYSCTL_IFR1_t*) (SYSCTL_GROUP8_BASE + SYSCTL_IFR_OFFSET))
#define SYSCTL_GROUP8_IFRn     ((SYSCTL_IFRn_t*) (SYSCTL_GROUP8_BASE + SYSCTL_IFR_OFFSET))

/******************************************************************************************
 ************************************ 11 IER-IFR GROUP9 *************************************
 ******************************************************************************************/
#define SYSCTL_GROUP9     ((SYSCTL_GROUP_t*) (SYSCTL_GROUP9_BASE + SYSCTL_IER_OFFSET))

#define SYSCTL_GROUP9_IER_R     (*(volatile uint16_t*) (SYSCTL_GROUP9_BASE + SYSCTL_IER_OFFSET))
#define SYSCTL_GROUP9_IER     ((SYSCTL_IER1_t*) (SYSCTL_GROUP9_BASE + SYSCTL_IER_OFFSET))
#define SYSCTL_GROUP9_IERn     ((SYSCTL_IERn_t*) (SYSCTL_GROUP9_BASE + SYSCTL_IER_OFFSET))

#define SYSCTL_GROUP9_IFR_R     (*(volatile uint16_t*) (SYSCTL_GROUP9_BASE + SYSCTL_IFR_OFFSET))
#define SYSCTL_GROUP9_IFR     ((SYSCTL_IFR1_t*) (SYSCTL_GROUP9_BASE + SYSCTL_IFR_OFFSET))
#define SYSCTL_GROUP9_IFRn     ((SYSCTL_IFRn_t*) (SYSCTL_GROUP9_BASE + SYSCTL_IFR_OFFSET))

/******************************************************************************************
 ************************************ 12 IER-IFR GROUP10 *************************************
 ******************************************************************************************/
#define SYSCTL_GROUP10     ((SYSCTL_GROUP_t*) (SYSCTL_GROUP10_BASE + SYSCTL_IER_OFFSET))

#define SYSCTL_GROUP10_IER_R     (*(volatile uint16_t*) (SYSCTL_GROUP10_BASE + SYSCTL_IER_OFFSET))
#define SYSCTL_GROUP10_IER     ((SYSCTL_IER1_t*) (SYSCTL_GROUP10_BASE + SYSCTL_IER_OFFSET))
#define SYSCTL_GROUP10_IERn     ((SYSCTL_IERn_t*) (SYSCTL_GROUP10_BASE + SYSCTL_IER_OFFSET))

#define SYSCTL_GROUP10_IFR_R     (*(volatile uint16_t*) (SYSCTL_GROUP10_BASE + SYSCTL_IFR_OFFSET))
#define SYSCTL_GROUP10_IFR     ((SYSCTL_IFR1_t*) (SYSCTL_GROUP10_BASE + SYSCTL_IFR_OFFSET))
#define SYSCTL_GROUP10_IFRn     ((SYSCTL_IFRn_t*) (SYSCTL_GROUP10_BASE + SYSCTL_IFR_OFFSET))

/******************************************************************************************
 ************************************ 13 IER-IFR GROUP11 *************************************
 ******************************************************************************************/
#define SYSCTL_GROUP11     ((SYSCTL_GROUP_t*) (SYSCTL_GROUP11_BASE + SYSCTL_IER_OFFSET))
#define SYSCTL_GROUP11_IER_R     (*(volatile uint16_t*) (SYSCTL_GROUP11_BASE + SYSCTL_IER_OFFSET))
#define SYSCTL_GROUP11_IER     ((SYSCTL_IER1_t*) (SYSCTL_GROUP11_BASE + SYSCTL_IER_OFFSET))
#define SYSCTL_GROUP11_IERn     ((SYSCTL_IERn_t*) (SYSCTL_GROUP11_BASE + SYSCTL_IER_OFFSET))

#define SYSCTL_GROUP11_IFR_R     (*(volatile uint16_t*) (SYSCTL_GROUP11_BASE + SYSCTL_IFR_OFFSET))
#define SYSCTL_GROUP11_IFR     ((SYSCTL_IFR1_t*) (SYSCTL_GROUP11_BASE + SYSCTL_IFR_OFFSET))
#define SYSCTL_GROUP11_IFRn     ((SYSCTL_IFRn_t*) (SYSCTL_GROUP11_BASE + SYSCTL_IFR_OFFSET))

/******************************************************************************************
 ************************************ 14 IER-IFR GROUP12 *************************************
 ******************************************************************************************/
#define SYSCTL_GROUP12     ((SYSCTL_GROUP_t*) (SYSCTL_GROUP12_BASE + SYSCTL_IER_OFFSET))

#define SYSCTL_GROUP12_IER_R     (*(volatile uint16_t*) (SYSCTL_GROUP12_BASE + SYSCTL_IER_OFFSET))
#define SYSCTL_GROUP12_IER     ((SYSCTL_IER1_t*) (SYSCTL_GROUP12_BASE + SYSCTL_IER_OFFSET))
#define SYSCTL_GROUP12_IERn     ((SYSCTL_IERn_t*) (SYSCTL_GROUP12_BASE + SYSCTL_IER_OFFSET))

#define SYSCTL_GROUP12_IFR_R     (*(volatile uint16_t*) (SYSCTL_GROUP12_BASE + SYSCTL_IFR_OFFSET))
#define SYSCTL_GROUP12_IFR     ((SYSCTL_IFR1_t*) (SYSCTL_GROUP12_BASE + SYSCTL_IFR_OFFSET))
#define SYSCTL_GROUP12_IFRn     ((SYSCTL_IFRn_t*) (SYSCTL_GROUP12_BASE + SYSCTL_IFR_OFFSET))

#endif /* DRIVERLIB_SYSCTL_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_SYSCTL_REGISTERPERIPHERAL_BASE_H_ */
