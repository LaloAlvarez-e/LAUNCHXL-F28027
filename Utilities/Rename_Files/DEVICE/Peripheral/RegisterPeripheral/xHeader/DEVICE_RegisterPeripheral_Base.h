/**
 *
 * @file DEVICE_RegisterPeripheral_Base.h
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

#ifndef DRIVERLIB_DEVICE_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_DEVICE_REGISTERPERIPHERAL_BASE_H_
#define DRIVERLIB_DEVICE_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_DEVICE_REGISTERPERIPHERAL_BASE_H_

#include "DriverLib/DEVICE/Peripheral/xHeader/DEVICE_RegisterAddress.h"
#include "DriverLib/DEVICE/Peripheral/xHeader/DEVICE_StructPeripheral.h"
#include "DriverLib/MCU/xHeader/MCU_Variables.h"

#define DEVICE ((DEVICE_t*) DEVICE_BASE)


/******************************************************************************************
 ************************************ 1 CTRL *********************************************
 ******************************************************************************************/
#define DEVICE_CTRL_R   (*(volatile uint16_t*) (DEVICE_BASE + DEVICE_CTRL_OFFSET))
#define DEVICE_CTRL     ((DEVICE_CTRL_t*) (DEVICE_BASE + DEVICE_CTRL_OFFSET))

/******************************************************************************************
 ************************************ 2 ACK *********************************************
 ******************************************************************************************/
#define DEVICE_ACK_R   (*(volatile uint16_t*) (DEVICE_BASE + DEVICE_ACK_OFFSET))
#define DEVICE_ACK     ((DEVICE_ACK_t*) (DEVICE_BASE + DEVICE_ACK_OFFSET))


/******************************************************************************************
 ************************************ IER-IFR ALL GROUP***********************************
 ******************************************************************************************/
#define DEVICE_GROUP     ((DEVICE_GROUP_EXT_t*) (DEVICE_GROUP1_BASE + DEVICE_IER_OFFSET))

/******************************************************************************************
 ************************************ 3 IER-IFR GROUP1 *************************************
 ******************************************************************************************/
#define DEVICE_GROUP1     ((DEVICE_GROUP_t*) (DEVICE_GROUP1_BASE + DEVICE_IER_OFFSET))

#define DEVICE_GROUP1_IER_R     (*(volatile uint16_t*) (DEVICE_GROUP1_BASE + DEVICE_IER_OFFSET))
#define DEVICE_GROUP1_IER     ((DEVICE_IER1_t*) (DEVICE_GROUP1_BASE + DEVICE_IER_OFFSET))
#define DEVICE_GROUP1_IERn     ((DEVICE_IERn_t*) (DEVICE_GROUP1_BASE + DEVICE_IER_OFFSET))

#define DEVICE_GROUP1_IFR_R     (*(volatile uint16_t*) (DEVICE_GROUP1_BASE + DEVICE_IFR_OFFSET))
#define DEVICE_GROUP1_IFR     ((DEVICE_IFR1_t*) (DEVICE_GROUP1_BASE + DEVICE_IFR_OFFSET))
#define DEVICE_GROUP1_IFRn     ((DEVICE_IFRn_t*) (DEVICE_GROUP1_BASE + DEVICE_IFR_OFFSET))

/******************************************************************************************
 ************************************ 4 IER-IFR GROUP2 *************************************
 ******************************************************************************************/
#define DEVICE_GROUP2     ((DEVICE_GROUP_t*) (DEVICE_GROUP2_BASE + DEVICE_IER_OFFSET))

#define DEVICE_GROUP2_IER_R     (*(volatile uint16_t*) (DEVICE_GROUP2_BASE + DEVICE_IER_OFFSET))
#define DEVICE_GROUP2_IER     ((DEVICE_IER1_t*) (DEVICE_GROUP2_BASE + DEVICE_IER_OFFSET))
#define DEVICE_GROUP2_IERn     ((DEVICE_IERn_t*) (DEVICE_GROUP2_BASE + DEVICE_IER_OFFSET))

#define DEVICE_GROUP2_IFR_R     (*(volatile uint16_t*) (DEVICE_GROUP2_BASE + DEVICE_IFR_OFFSET))
#define DEVICE_GROUP2_IFR     ((DEVICE_IFR1_t*) (DEVICE_GROUP2_BASE + DEVICE_IFR_OFFSET))
#define DEVICE_GROUP2_IFRn     ((DEVICE_IFRn_t*) (DEVICE_GROUP2_BASE + DEVICE_IFR_OFFSET))

/******************************************************************************************
 ************************************ 5 IER-IFR GROUP3 *************************************
 ******************************************************************************************/
#define DEVICE_GROUP3     ((DEVICE_GROUP_t*) (DEVICE_GROUP3_BASE + DEVICE_IER_OFFSET))

#define DEVICE_GROUP3_IER_R     (*(volatile uint16_t*) (DEVICE_GROUP3_BASE + DEVICE_IER_OFFSET))
#define DEVICE_GROUP3_IER     ((DEVICE_IER1_t*) (DEVICE_GROUP3_BASE + DEVICE_IER_OFFSET))
#define DEVICE_GROUP3_IERn     ((DEVICE_IERn_t*) (DEVICE_GROUP3_BASE + DEVICE_IER_OFFSET))

#define DEVICE_GROUP3_IFR_R     (*(volatile uint16_t*) (DEVICE_GROUP3_BASE + DEVICE_IFR_OFFSET))
#define DEVICE_GROUP3_IFR     ((DEVICE_IFR1_t*) (DEVICE_GROUP3_BASE + DEVICE_IFR_OFFSET))
#define DEVICE_GROUP3_IFRn     ((DEVICE_IFRn_t*) (DEVICE_GROUP3_BASE + DEVICE_IFR_OFFSET))

/******************************************************************************************
 ************************************ 6 IER-IFR GROUP4 *************************************
 ******************************************************************************************/
#define DEVICE_GROUP4     ((DEVICE_GROUP_t*) (DEVICE_GROUP4_BASE + DEVICE_IER_OFFSET))

#define DEVICE_GROUP4_IER_R     (*(volatile uint16_t*) (DEVICE_GROUP4_BASE + DEVICE_IER_OFFSET))
#define DEVICE_GROUP4_IER     ((DEVICE_IER1_t*) (DEVICE_GROUP4_BASE + DEVICE_IER_OFFSET))
#define DEVICE_GROUP4_IERn     ((DEVICE_IERn_t*) (DEVICE_GROUP4_BASE + DEVICE_IER_OFFSET))

#define DEVICE_GROUP4_IFR_R     (*(volatile uint16_t*) (DEVICE_GROUP4_BASE + DEVICE_IFR_OFFSET))
#define DEVICE_GROUP4_IFR     ((DEVICE_IFR1_t*) (DEVICE_GROUP4_BASE + DEVICE_IFR_OFFSET))
#define DEVICE_GROUP4_IFRn     ((DEVICE_IFRn_t*) (DEVICE_GROUP4_BASE + DEVICE_IFR_OFFSET))

/******************************************************************************************
 ************************************ 7 IER-IFR GROUP5 *************************************
 ******************************************************************************************/
#define DEVICE_GROUP5     ((DEVICE_GROUP_t*) (DEVICE_GROUP5_BASE + DEVICE_IER_OFFSET))

#define DEVICE_GROUP5_IER_R     (*(volatile uint16_t*) (DEVICE_GROUP5_BASE + DEVICE_IER_OFFSET))
#define DEVICE_GROUP5_IER     ((DEVICE_IER1_t*) (DEVICE_GROUP5_BASE + DEVICE_IER_OFFSET))
#define DEVICE_GROUP5_IERn     ((DEVICE_IERn_t*) (DEVICE_GROUP5_BASE + DEVICE_IER_OFFSET))

#define DEVICE_GROUP5_IFR_R     (*(volatile uint16_t*) (DEVICE_GROUP5_BASE + DEVICE_IFR_OFFSET))
#define DEVICE_GROUP5_IFR     ((DEVICE_IFR1_t*) (DEVICE_GROUP5_BASE + DEVICE_IFR_OFFSET))
#define DEVICE_GROUP5_IFRn     ((DEVICE_IFRn_t*) (DEVICE_GROUP5_BASE + DEVICE_IFR_OFFSET))

/******************************************************************************************
 ************************************ 8 IER-IFR GROUP6 *************************************
 ******************************************************************************************/
#define DEVICE_GROUP6     ((DEVICE_GROUP_t*) (DEVICE_GROUP6_BASE + DEVICE_IER_OFFSET))

#define DEVICE_GROUP6_IER_R     (*(volatile uint16_t*) (DEVICE_GROUP6_BASE + DEVICE_IER_OFFSET))
#define DEVICE_GROUP6_IER     ((DEVICE_IER1_t*) (DEVICE_GROUP6_BASE + DEVICE_IER_OFFSET))
#define DEVICE_GROUP6_IERn     ((DEVICE_IERn_t*) (DEVICE_GROUP6_BASE + DEVICE_IER_OFFSET))

#define DEVICE_GROUP6_IFR_R     (*(volatile uint16_t*) (DEVICE_GROUP6_BASE + DEVICE_IFR_OFFSET))
#define DEVICE_GROUP6_IFR     ((DEVICE_IFR1_t*) (DEVICE_GROUP6_BASE + DEVICE_IFR_OFFSET))
#define DEVICE_GROUP6_IFRn     ((DEVICE_IFRn_t*) (DEVICE_GROUP6_BASE + DEVICE_IFR_OFFSET))

/******************************************************************************************
 ************************************ 9 IER-IFR GROUP7 *************************************
 ******************************************************************************************/
#define DEVICE_GROUP7     ((DEVICE_GROUP_t*) (DEVICE_GROUP7_BASE + DEVICE_IER_OFFSET))

#define DEVICE_GROUP7_IER_R     (*(volatile uint16_t*) (DEVICE_GROUP7_BASE + DEVICE_IER_OFFSET))
#define DEVICE_GROUP7_IER     ((DEVICE_IER1_t*) (DEVICE_GROUP7_BASE + DEVICE_IER_OFFSET))
#define DEVICE_GROUP7_IERn     ((DEVICE_IERn_t*) (DEVICE_GROUP7_BASE + DEVICE_IER_OFFSET))

#define DEVICE_GROUP7_IFR_R     (*(volatile uint16_t*) (DEVICE_GROUP7_BASE + DEVICE_IFR_OFFSET))
#define DEVICE_GROUP7_IFR     ((DEVICE_IFR1_t*) (DEVICE_GROUP7_BASE + DEVICE_IFR_OFFSET))
#define DEVICE_GROUP7_IFRn     ((DEVICE_IFRn_t*) (DEVICE_GROUP7_BASE + DEVICE_IFR_OFFSET))

/******************************************************************************************
 ************************************ 10 IER-IFR GROUP8 *************************************
 ******************************************************************************************/
#define DEVICE_GROUP8     ((DEVICE_GROUP_t*) (DEVICE_GROUP8_BASE + DEVICE_IER_OFFSET))

#define DEVICE_GROUP8_IER_R     (*(volatile uint16_t*) (DEVICE_GROUP8_BASE + DEVICE_IER_OFFSET))
#define DEVICE_GROUP8_IER     ((DEVICE_IER1_t*) (DEVICE_GROUP8_BASE + DEVICE_IER_OFFSET))
#define DEVICE_GROUP8_IERn     ((DEVICE_IERn_t*) (DEVICE_GROUP8_BASE + DEVICE_IER_OFFSET))

#define DEVICE_GROUP8_IFR_R     (*(volatile uint16_t*) (DEVICE_GROUP8_BASE + DEVICE_IFR_OFFSET))
#define DEVICE_GROUP8_IFR     ((DEVICE_IFR1_t*) (DEVICE_GROUP8_BASE + DEVICE_IFR_OFFSET))
#define DEVICE_GROUP8_IFRn     ((DEVICE_IFRn_t*) (DEVICE_GROUP8_BASE + DEVICE_IFR_OFFSET))

/******************************************************************************************
 ************************************ 11 IER-IFR GROUP9 *************************************
 ******************************************************************************************/
#define DEVICE_GROUP9     ((DEVICE_GROUP_t*) (DEVICE_GROUP9_BASE + DEVICE_IER_OFFSET))

#define DEVICE_GROUP9_IER_R     (*(volatile uint16_t*) (DEVICE_GROUP9_BASE + DEVICE_IER_OFFSET))
#define DEVICE_GROUP9_IER     ((DEVICE_IER1_t*) (DEVICE_GROUP9_BASE + DEVICE_IER_OFFSET))
#define DEVICE_GROUP9_IERn     ((DEVICE_IERn_t*) (DEVICE_GROUP9_BASE + DEVICE_IER_OFFSET))

#define DEVICE_GROUP9_IFR_R     (*(volatile uint16_t*) (DEVICE_GROUP9_BASE + DEVICE_IFR_OFFSET))
#define DEVICE_GROUP9_IFR     ((DEVICE_IFR1_t*) (DEVICE_GROUP9_BASE + DEVICE_IFR_OFFSET))
#define DEVICE_GROUP9_IFRn     ((DEVICE_IFRn_t*) (DEVICE_GROUP9_BASE + DEVICE_IFR_OFFSET))

/******************************************************************************************
 ************************************ 12 IER-IFR GROUP10 *************************************
 ******************************************************************************************/
#define DEVICE_GROUP10     ((DEVICE_GROUP_t*) (DEVICE_GROUP10_BASE + DEVICE_IER_OFFSET))

#define DEVICE_GROUP10_IER_R     (*(volatile uint16_t*) (DEVICE_GROUP10_BASE + DEVICE_IER_OFFSET))
#define DEVICE_GROUP10_IER     ((DEVICE_IER1_t*) (DEVICE_GROUP10_BASE + DEVICE_IER_OFFSET))
#define DEVICE_GROUP10_IERn     ((DEVICE_IERn_t*) (DEVICE_GROUP10_BASE + DEVICE_IER_OFFSET))

#define DEVICE_GROUP10_IFR_R     (*(volatile uint16_t*) (DEVICE_GROUP10_BASE + DEVICE_IFR_OFFSET))
#define DEVICE_GROUP10_IFR     ((DEVICE_IFR1_t*) (DEVICE_GROUP10_BASE + DEVICE_IFR_OFFSET))
#define DEVICE_GROUP10_IFRn     ((DEVICE_IFRn_t*) (DEVICE_GROUP10_BASE + DEVICE_IFR_OFFSET))

/******************************************************************************************
 ************************************ 13 IER-IFR GROUP11 *************************************
 ******************************************************************************************/
#define DEVICE_GROUP11     ((DEVICE_GROUP_t*) (DEVICE_GROUP11_BASE + DEVICE_IER_OFFSET))
#define DEVICE_GROUP11_IER_R     (*(volatile uint16_t*) (DEVICE_GROUP11_BASE + DEVICE_IER_OFFSET))
#define DEVICE_GROUP11_IER     ((DEVICE_IER1_t*) (DEVICE_GROUP11_BASE + DEVICE_IER_OFFSET))
#define DEVICE_GROUP11_IERn     ((DEVICE_IERn_t*) (DEVICE_GROUP11_BASE + DEVICE_IER_OFFSET))

#define DEVICE_GROUP11_IFR_R     (*(volatile uint16_t*) (DEVICE_GROUP11_BASE + DEVICE_IFR_OFFSET))
#define DEVICE_GROUP11_IFR     ((DEVICE_IFR1_t*) (DEVICE_GROUP11_BASE + DEVICE_IFR_OFFSET))
#define DEVICE_GROUP11_IFRn     ((DEVICE_IFRn_t*) (DEVICE_GROUP11_BASE + DEVICE_IFR_OFFSET))

/******************************************************************************************
 ************************************ 14 IER-IFR GROUP12 *************************************
 ******************************************************************************************/
#define DEVICE_GROUP12     ((DEVICE_GROUP_t*) (DEVICE_GROUP12_BASE + DEVICE_IER_OFFSET))

#define DEVICE_GROUP12_IER_R     (*(volatile uint16_t*) (DEVICE_GROUP12_BASE + DEVICE_IER_OFFSET))
#define DEVICE_GROUP12_IER     ((DEVICE_IER1_t*) (DEVICE_GROUP12_BASE + DEVICE_IER_OFFSET))
#define DEVICE_GROUP12_IERn     ((DEVICE_IERn_t*) (DEVICE_GROUP12_BASE + DEVICE_IER_OFFSET))

#define DEVICE_GROUP12_IFR_R     (*(volatile uint16_t*) (DEVICE_GROUP12_BASE + DEVICE_IFR_OFFSET))
#define DEVICE_GROUP12_IFR     ((DEVICE_IFR1_t*) (DEVICE_GROUP12_BASE + DEVICE_IFR_OFFSET))
#define DEVICE_GROUP12_IFRn     ((DEVICE_IFRn_t*) (DEVICE_GROUP12_BASE + DEVICE_IFR_OFFSET))

#endif /* DRIVERLIB_DEVICE_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_DEVICE_REGISTERPERIPHERAL_BASE_H_ */
