/**
 *
 * @file ECAP_RegisterPeripheral_ECAP1.h
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
 * @verbatim 21 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_ECAP_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_ECAP_REGISTERPERIPHERAL_ECAP1_H_
#define DRIVERLIB_ECAP_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_ECAP_REGISTERPERIPHERAL_ECAP1_H_

#include "DriverLib/ECAP/Peripheral/xHeader/ECAP_RegisterAddress.h"
#include "DriverLib/ECAP/Peripheral/xHeader/ECAP_StructPeripheral.h"
#include "DriverLib/MCU/xHeader/MCU_Variables.h"

#define ECAP1 ((ECAP_t*) ECAP1_BASE)

/******************************************************************************************
 ************************************ 1 TSCTR *********************************************
 ******************************************************************************************/
#define ECAP1_TSCTR_R   (*(volatile uint32_t*) (ECAP1_BASE + ECAP_TSCTR_OFFSET))
#define ECAP1_TSCTR     ((ECAP_TSCTR_t*) (ECAP1_BASE + ECAP_TSCTR_OFFSET))

/******************************************************************************************
 ************************************ 2 CTRPHS *********************************************
 ******************************************************************************************/
#define ECAP1_CTRPHS_R   (*(volatile uint32_t*) (ECAP1_BASE + ECAP_CTRPHS_OFFSET))
#define ECAP1_CTRPHS     ((ECAP_CTRPHS_t*) (ECAP1_BASE + ECAP_CTRPHS_OFFSET))

/******************************************************************************************
 ************************************ EVENT *********************************************
 ******************************************************************************************/
#define ECAP1_EVENT     ((ECAP_EVENTn_t*) (ECAP1_BASE + ECAP_EVENTn_OFFSET))

/******************************************************************************************
 ************************************ 3 EVENT1 *********************************************
 ******************************************************************************************/
#define ECAP1_EVENT1_R   (*(volatile uint32_t*) (ECAP1_BASE + ECAP_EVENT1_OFFSET))
#define ECAP1_EVENT1     ((ECAP_EVENT_t*) (ECAP1_BASE + ECAP_EVENT1_OFFSET))
#define ECAP1_PERIOD_R   (*(volatile uint32_t*) (ECAP1_BASE + ECAP_PERIOD_OFFSET))
#define ECAP1_PERIOD     ((ECAP_EVENT_t*) (ECAP1_BASE + ECAP_PERIOD_OFFSET))

/******************************************************************************************
 ************************************ 4 EVENT2 *********************************************
 ******************************************************************************************/
#define ECAP1_EVENT2_R   (*(volatile uint32_t*) (ECAP1_BASE + ECAP_EVENT2_OFFSET))
#define ECAP1_EVENT2     ((ECAP_EVENT_t*) (ECAP1_BASE + ECAP_EVENT2_OFFSET))
#define ECAP1_COMPARE_R   (*(volatile uint32_t*) (ECAP1_BASE + ECAP_COMPARE_OFFSET))
#define ECAP1_COMPARE     ((ECAP_EVENT_t*) (ECAP1_BASE + ECAP_COMPARE_OFFSET))

/******************************************************************************************
 ************************************ 5 EVENT3 *********************************************
 ******************************************************************************************/
#define ECAP1_EVENT3_R   (*(volatile uint32_t*) (ECAP1_BASE + ECAP_EVENT3_OFFSET))
#define ECAP1_EVENT3     ((ECAP_EVENT_t*) (ECAP1_BASE + ECAP_EVENT3_OFFSET))
#define ECAP1_PERIOD_SHADOW_R   (*(volatile uint32_t*) (ECAP1_BASE + ECAP_PERIOD_SHADOW_OFFSET))
#define ECAP1_PERIOD_SHADOW     ((ECAP_EVENT_t*) (ECAP1_BASE + ECAP_PERIOD_SHADOW_OFFSET))


/******************************************************************************************
 ************************************ 6 EVENT4 *********************************************
 ******************************************************************************************/
#define ECAP1_EVENT4_R   (*(volatile uint32_t*) (ECAP1_BASE + ECAP_EVENT4_OFFSET))
#define ECAP1_EVENT4     ((ECAP_EVENT_t*) (ECAP1_BASE + ECAP_EVENT4_OFFSET))
#define ECAP1_COMPARE_SHADOW_R   (*(volatile uint32_t*) (ECAP1_BASE + ECAP_COMPARE_SHADOW_OFFSET))
#define ECAP1_COMPARE_SHADOW     ((ECAP_EVENT_t*) (ECAP1_BASE + ECAP_COMPARE_SHADOW_OFFSET))

/******************************************************************************************
 ************************************ 7 CTL1 *********************************************
 ******************************************************************************************/
#define ECAP1_CTL1_R   (*(volatile uint16_t*) (ECAP1_BASE + ECAP_CTL1_OFFSET))
#define ECAP1_CTL1     ((ECAP_CTL1_t*) (ECAP1_BASE + ECAP_CTL1_OFFSET))

/******************************************************************************************
 ************************************ 8 CTL2 *********************************************
 ******************************************************************************************/
#define ECAP1_CTL2_R   (*(volatile uint16_t*) (ECAP1_BASE + ECAP_CTL2_OFFSET))
#define ECAP1_CTL2     ((ECAP_CTL2_t*) (ECAP1_BASE + ECAP_CTL2_OFFSET))

/******************************************************************************************
 ************************************ 9 EINT *********************************************
 ******************************************************************************************/
#define ECAP1_EINT_R   (*(volatile uint16_t*) (ECAP1_BASE + ECAP_EINT_OFFSET))
#define ECAP1_EINT     ((ECAP_EINT_t*) (ECAP1_BASE + ECAP_EINT_OFFSET))

/******************************************************************************************
 ************************************ 10 FLG *********************************************
 ******************************************************************************************/
#define ECAP1_FLG_R   (*(volatile const uint16_t*) (ECAP1_BASE + ECAP_FLG_OFFSET))
#define ECAP1_FLG     ((ECAP_FLG_t*) (ECAP1_BASE + ECAP_FLG_OFFSET))

/******************************************************************************************
 ************************************ 11 CLR *********************************************
 ******************************************************************************************/
#define ECAP1_CLR_R   (*(volatile uint16_t*) (ECAP1_BASE + ECAP_CLR_OFFSET))
#define ECAP1_CLR     ((ECAP_CLR_t*) (ECAP1_BASE + ECAP_CLR_OFFSET))

/******************************************************************************************
 ************************************ 12 FRC *********************************************
 ******************************************************************************************/
#define ECAP1_FRC_R   (*(volatile uint16_t*) (ECAP1_BASE + ECAP_FRC_OFFSET))
#define ECAP1_FRC     ((ECAP_FRC_t*) (ECAP1_BASE + ECAP_FRC_OFFSET))

#endif /* DRIVERLIB_ECAP_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_ECAP_REGISTERPERIPHERAL_ECAP1_H_ */
