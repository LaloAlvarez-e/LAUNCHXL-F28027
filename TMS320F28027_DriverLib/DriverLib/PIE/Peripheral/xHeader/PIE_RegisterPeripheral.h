/**
 *
 * @file PIE_RegisterPeripheral.h
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
 * @verbatim 27 jun. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 27 jun. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_PIE_PERIPHERAL_XHEADER_PIE_REGISTERPERIPHERAL_H_
#define DRIVERLIB_PIE_PERIPHERAL_XHEADER_PIE_REGISTERPERIPHERAL_H_

#include "DriverLib/PIE/Peripheral/xHeader/PIE_RegisterAddress.h"
#include "DriverLib/PIE/Peripheral/xHeader/PIE_StructPeripheral.h"
#include "DriverLib/MCU/xHeader/MCU_Variables.h"

#define PIE ((PIE_t*) PIE_BASE)

#define PIE_VECTOR ((PIE_VECTOR_t*) PIE_VECTOR_BASE)
#define PIE_VECTOR_IRQ ((PIE_IRQ_t*) PIE_VECTOR_BASE)
#define PIE_VECTOR_IRQ_EXT ((PIE_IRQ_EXT_t*) PIE_VECTOR_BASE)
#define PIE_VECTOR_IRQ_ARRAY ((PIE_IRQ_ARRAY_t*) PIE_VECTOR_BASE)

/******************************************************************************************
 ************************************ 1 CTRL *********************************************
 ******************************************************************************************/
#define PIE_CTRL_R   (*(volatile uint16_t*) (PIE_BASE + PIE_CTRL_OFFSET))
#define PIE_CTRL     ((PIE_CTRL_t*) (PIE_BASE + PIE_CTRL_OFFSET))

/******************************************************************************************
 ************************************ 2 ACK *********************************************
 ******************************************************************************************/
#define PIE_ACK_R   (*(volatile uint16_t*) (PIE_BASE + PIE_ACK_OFFSET))
#define PIE_ACK     ((PIE_ACK_t*) (PIE_BASE + PIE_ACK_OFFSET))


/******************************************************************************************
 ************************************ IER-IFR ALL GROUP***********************************
 ******************************************************************************************/
#define PIE_GROUP     ((PIE_GROUP_EXT_t*) (PIE_GROUP1_BASE + PIE_IER_OFFSET))

/******************************************************************************************
 ************************************ 3 IER-IFR GROUP1 *************************************
 ******************************************************************************************/
#define PIE_GROUP1     ((PIE_GROUP_t*) (PIE_GROUP1_BASE + PIE_IER_OFFSET))

#define PIE_GROUP1_IER_R     (*(volatile uint16_t*) (PIE_GROUP1_BASE + PIE_IER_OFFSET))
#define PIE_GROUP1_IER     ((PIE_IER1_t*) (PIE_GROUP1_BASE + PIE_IER_OFFSET))
#define PIE_GROUP1_IERn     ((PIE_IERn_t*) (PIE_GROUP1_BASE + PIE_IER_OFFSET))

#define PIE_GROUP1_IFR_R     (*(volatile uint16_t*) (PIE_GROUP1_BASE + PIE_IFR_OFFSET))
#define PIE_GROUP1_IFR     ((PIE_IFR1_t*) (PIE_GROUP1_BASE + PIE_IFR_OFFSET))
#define PIE_GROUP1_IFRn     ((PIE_IFRn_t*) (PIE_GROUP1_BASE + PIE_IFR_OFFSET))

/******************************************************************************************
 ************************************ 4 IER-IFR GROUP2 *************************************
 ******************************************************************************************/
#define PIE_GROUP2     ((PIE_GROUP_t*) (PIE_GROUP2_BASE + PIE_IER_OFFSET))

#define PIE_GROUP2_IER_R     (*(volatile uint16_t*) (PIE_GROUP2_BASE + PIE_IER_OFFSET))
#define PIE_GROUP2_IER     ((PIE_IER1_t*) (PIE_GROUP2_BASE + PIE_IER_OFFSET))
#define PIE_GROUP2_IERn     ((PIE_IERn_t*) (PIE_GROUP2_BASE + PIE_IER_OFFSET))

#define PIE_GROUP2_IFR_R     (*(volatile uint16_t*) (PIE_GROUP2_BASE + PIE_IFR_OFFSET))
#define PIE_GROUP2_IFR     ((PIE_IFR1_t*) (PIE_GROUP2_BASE + PIE_IFR_OFFSET))
#define PIE_GROUP2_IFRn     ((PIE_IFRn_t*) (PIE_GROUP2_BASE + PIE_IFR_OFFSET))

/******************************************************************************************
 ************************************ 5 IER-IFR GROUP3 *************************************
 ******************************************************************************************/
#define PIE_GROUP3     ((PIE_GROUP_t*) (PIE_GROUP3_BASE + PIE_IER_OFFSET))

#define PIE_GROUP3_IER_R     (*(volatile uint16_t*) (PIE_GROUP3_BASE + PIE_IER_OFFSET))
#define PIE_GROUP3_IER     ((PIE_IER1_t*) (PIE_GROUP3_BASE + PIE_IER_OFFSET))
#define PIE_GROUP3_IERn     ((PIE_IERn_t*) (PIE_GROUP3_BASE + PIE_IER_OFFSET))

#define PIE_GROUP3_IFR_R     (*(volatile uint16_t*) (PIE_GROUP3_BASE + PIE_IFR_OFFSET))
#define PIE_GROUP3_IFR     ((PIE_IFR1_t*) (PIE_GROUP3_BASE + PIE_IFR_OFFSET))
#define PIE_GROUP3_IFRn     ((PIE_IFRn_t*) (PIE_GROUP3_BASE + PIE_IFR_OFFSET))

/******************************************************************************************
 ************************************ 6 IER-IFR GROUP4 *************************************
 ******************************************************************************************/
#define PIE_GROUP4     ((PIE_GROUP_t*) (PIE_GROUP4_BASE + PIE_IER_OFFSET))

#define PIE_GROUP4_IER_R     (*(volatile uint16_t*) (PIE_GROUP4_BASE + PIE_IER_OFFSET))
#define PIE_GROUP4_IER     ((PIE_IER1_t*) (PIE_GROUP4_BASE + PIE_IER_OFFSET))
#define PIE_GROUP4_IERn     ((PIE_IERn_t*) (PIE_GROUP4_BASE + PIE_IER_OFFSET))

#define PIE_GROUP4_IFR_R     (*(volatile uint16_t*) (PIE_GROUP4_BASE + PIE_IFR_OFFSET))
#define PIE_GROUP4_IFR     ((PIE_IFR1_t*) (PIE_GROUP4_BASE + PIE_IFR_OFFSET))
#define PIE_GROUP4_IFRn     ((PIE_IFRn_t*) (PIE_GROUP4_BASE + PIE_IFR_OFFSET))

/******************************************************************************************
 ************************************ 7 IER-IFR GROUP5 *************************************
 ******************************************************************************************/
#define PIE_GROUP5     ((PIE_GROUP_t*) (PIE_GROUP5_BASE + PIE_IER_OFFSET))

#define PIE_GROUP5_IER_R     (*(volatile uint16_t*) (PIE_GROUP5_BASE + PIE_IER_OFFSET))
#define PIE_GROUP5_IER     ((PIE_IER1_t*) (PIE_GROUP5_BASE + PIE_IER_OFFSET))
#define PIE_GROUP5_IERn     ((PIE_IERn_t*) (PIE_GROUP5_BASE + PIE_IER_OFFSET))

#define PIE_GROUP5_IFR_R     (*(volatile uint16_t*) (PIE_GROUP5_BASE + PIE_IFR_OFFSET))
#define PIE_GROUP5_IFR     ((PIE_IFR1_t*) (PIE_GROUP5_BASE + PIE_IFR_OFFSET))
#define PIE_GROUP5_IFRn     ((PIE_IFRn_t*) (PIE_GROUP5_BASE + PIE_IFR_OFFSET))

/******************************************************************************************
 ************************************ 8 IER-IFR GROUP6 *************************************
 ******************************************************************************************/
#define PIE_GROUP6     ((PIE_GROUP_t*) (PIE_GROUP6_BASE + PIE_IER_OFFSET))

#define PIE_GROUP6_IER_R     (*(volatile uint16_t*) (PIE_GROUP6_BASE + PIE_IER_OFFSET))
#define PIE_GROUP6_IER     ((PIE_IER1_t*) (PIE_GROUP6_BASE + PIE_IER_OFFSET))
#define PIE_GROUP6_IERn     ((PIE_IERn_t*) (PIE_GROUP6_BASE + PIE_IER_OFFSET))

#define PIE_GROUP6_IFR_R     (*(volatile uint16_t*) (PIE_GROUP6_BASE + PIE_IFR_OFFSET))
#define PIE_GROUP6_IFR     ((PIE_IFR1_t*) (PIE_GROUP6_BASE + PIE_IFR_OFFSET))
#define PIE_GROUP6_IFRn     ((PIE_IFRn_t*) (PIE_GROUP6_BASE + PIE_IFR_OFFSET))

/******************************************************************************************
 ************************************ 9 IER-IFR GROUP7 *************************************
 ******************************************************************************************/
#define PIE_GROUP7     ((PIE_GROUP_t*) (PIE_GROUP7_BASE + PIE_IER_OFFSET))

#define PIE_GROUP7_IER_R     (*(volatile uint16_t*) (PIE_GROUP7_BASE + PIE_IER_OFFSET))
#define PIE_GROUP7_IER     ((PIE_IER1_t*) (PIE_GROUP7_BASE + PIE_IER_OFFSET))
#define PIE_GROUP7_IERn     ((PIE_IERn_t*) (PIE_GROUP7_BASE + PIE_IER_OFFSET))

#define PIE_GROUP7_IFR_R     (*(volatile uint16_t*) (PIE_GROUP7_BASE + PIE_IFR_OFFSET))
#define PIE_GROUP7_IFR     ((PIE_IFR1_t*) (PIE_GROUP7_BASE + PIE_IFR_OFFSET))
#define PIE_GROUP7_IFRn     ((PIE_IFRn_t*) (PIE_GROUP7_BASE + PIE_IFR_OFFSET))

/******************************************************************************************
 ************************************ 10 IER-IFR GROUP8 *************************************
 ******************************************************************************************/
#define PIE_GROUP8     ((PIE_GROUP_t*) (PIE_GROUP8_BASE + PIE_IER_OFFSET))

#define PIE_GROUP8_IER_R     (*(volatile uint16_t*) (PIE_GROUP8_BASE + PIE_IER_OFFSET))
#define PIE_GROUP8_IER     ((PIE_IER1_t*) (PIE_GROUP8_BASE + PIE_IER_OFFSET))
#define PIE_GROUP8_IERn     ((PIE_IERn_t*) (PIE_GROUP8_BASE + PIE_IER_OFFSET))

#define PIE_GROUP8_IFR_R     (*(volatile uint16_t*) (PIE_GROUP8_BASE + PIE_IFR_OFFSET))
#define PIE_GROUP8_IFR     ((PIE_IFR1_t*) (PIE_GROUP8_BASE + PIE_IFR_OFFSET))
#define PIE_GROUP8_IFRn     ((PIE_IFRn_t*) (PIE_GROUP8_BASE + PIE_IFR_OFFSET))

/******************************************************************************************
 ************************************ 11 IER-IFR GROUP9 *************************************
 ******************************************************************************************/
#define PIE_GROUP9     ((PIE_GROUP_t*) (PIE_GROUP9_BASE + PIE_IER_OFFSET))

#define PIE_GROUP9_IER_R     (*(volatile uint16_t*) (PIE_GROUP9_BASE + PIE_IER_OFFSET))
#define PIE_GROUP9_IER     ((PIE_IER1_t*) (PIE_GROUP9_BASE + PIE_IER_OFFSET))
#define PIE_GROUP9_IERn     ((PIE_IERn_t*) (PIE_GROUP9_BASE + PIE_IER_OFFSET))

#define PIE_GROUP9_IFR_R     (*(volatile uint16_t*) (PIE_GROUP9_BASE + PIE_IFR_OFFSET))
#define PIE_GROUP9_IFR     ((PIE_IFR1_t*) (PIE_GROUP9_BASE + PIE_IFR_OFFSET))
#define PIE_GROUP9_IFRn     ((PIE_IFRn_t*) (PIE_GROUP9_BASE + PIE_IFR_OFFSET))

/******************************************************************************************
 ************************************ 12 IER-IFR GROUP10 *************************************
 ******************************************************************************************/
#define PIE_GROUP10     ((PIE_GROUP_t*) (PIE_GROUP10_BASE + PIE_IER_OFFSET))

#define PIE_GROUP10_IER_R     (*(volatile uint16_t*) (PIE_GROUP10_BASE + PIE_IER_OFFSET))
#define PIE_GROUP10_IER     ((PIE_IER1_t*) (PIE_GROUP10_BASE + PIE_IER_OFFSET))
#define PIE_GROUP10_IERn     ((PIE_IERn_t*) (PIE_GROUP10_BASE + PIE_IER_OFFSET))

#define PIE_GROUP10_IFR_R     (*(volatile uint16_t*) (PIE_GROUP10_BASE + PIE_IFR_OFFSET))
#define PIE_GROUP10_IFR     ((PIE_IFR1_t*) (PIE_GROUP10_BASE + PIE_IFR_OFFSET))
#define PIE_GROUP10_IFRn     ((PIE_IFRn_t*) (PIE_GROUP10_BASE + PIE_IFR_OFFSET))

/******************************************************************************************
 ************************************ 13 IER-IFR GROUP11 *************************************
 ******************************************************************************************/
#define PIE_GROUP11     ((PIE_GROUP_t*) (PIE_GROUP11_BASE + PIE_IER_OFFSET))
#define PIE_GROUP11_IER_R     (*(volatile uint16_t*) (PIE_GROUP11_BASE + PIE_IER_OFFSET))
#define PIE_GROUP11_IER     ((PIE_IER1_t*) (PIE_GROUP11_BASE + PIE_IER_OFFSET))
#define PIE_GROUP11_IERn     ((PIE_IERn_t*) (PIE_GROUP11_BASE + PIE_IER_OFFSET))

#define PIE_GROUP11_IFR_R     (*(volatile uint16_t*) (PIE_GROUP11_BASE + PIE_IFR_OFFSET))
#define PIE_GROUP11_IFR     ((PIE_IFR1_t*) (PIE_GROUP11_BASE + PIE_IFR_OFFSET))
#define PIE_GROUP11_IFRn     ((PIE_IFRn_t*) (PIE_GROUP11_BASE + PIE_IFR_OFFSET))

/******************************************************************************************
 ************************************ 14 IER-IFR GROUP12 *************************************
 ******************************************************************************************/
#define PIE_GROUP12     ((PIE_GROUP_t*) (PIE_GROUP12_BASE + PIE_IER_OFFSET))

#define PIE_GROUP12_IER_R     (*(volatile uint16_t*) (PIE_GROUP12_BASE + PIE_IER_OFFSET))
#define PIE_GROUP12_IER     ((PIE_IER1_t*) (PIE_GROUP12_BASE + PIE_IER_OFFSET))
#define PIE_GROUP12_IERn     ((PIE_IERn_t*) (PIE_GROUP12_BASE + PIE_IER_OFFSET))

#define PIE_GROUP12_IFR_R     (*(volatile uint16_t*) (PIE_GROUP12_BASE + PIE_IFR_OFFSET))
#define PIE_GROUP12_IFR     ((PIE_IFR1_t*) (PIE_GROUP12_BASE + PIE_IFR_OFFSET))
#define PIE_GROUP12_IFRn     ((PIE_IFRn_t*) (PIE_GROUP12_BASE + PIE_IFR_OFFSET))

#endif /* DRIVERLIB_PIE_PERIPHERAL_XHEADER_PIE_REGISTERPERIPHERAL_H_ */
