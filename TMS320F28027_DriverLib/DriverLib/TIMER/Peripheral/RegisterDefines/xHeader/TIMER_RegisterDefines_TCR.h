/**
 *
 * @file TIMER_RegisterDefines_TCR.h
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
 * @verbatim 7 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_TIMER_PERIPHERAL_REGISTERDEFINES_XHEADER_TIMER_REGISTERDEFINES_TCR_H_
#define DRIVERLIB_TIMER_PERIPHERAL_REGISTERDEFINES_XHEADER_TIMER_REGISTERDEFINES_TCR_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

/******************************************************************************************
 ************************************ 3 TCR *********************************************
 ******************************************************************************************/
/*-----------*/
#define TIMER_TCR_R_TSS_BIT ((uint16_t) 4U)

#define TIMER_TCR_TSS_MASK ((uint16_t) 0x0001U)
#define TIMER_TCR_TSS_RUN ((uint16_t) 0x0000U)
#define TIMER_TCR_TSS_RESET ((uint16_t) 0x0000U)
#define TIMER_TCR_TSS_STOP ((uint16_t) 0x0001U)

#define TIMER_TCR_R_TSS_MASK (TIMER_TCR_TSS_MASK << TIMER_TCR_R_TSS_BIT)
#define TIMER_TCR_R_TSS_RUN (TIMER_TCR_TSS_RUN << TIMER_TCR_R_TSS_BIT)
#define TIMER_TCR_R_TSS_RESET (TIMER_TCR_TSS_RESET << TIMER_TCR_R_TSS_BIT)
#define TIMER_TCR_R_TSS_STOP (TIMER_TCR_TSS_STOP << TIMER_TCR_R_TSS_BIT)
/*-----------*/

/*-----------*/
#define TIMER_TCR_R_TRB_BIT ((uint16_t) 5U)

#define TIMER_TCR_TRB_MASK ((uint16_t) 0x0001U)
#define TIMER_TCR_TRB_LOAD ((uint16_t) 0x0001U)

#define TIMER_TCR_R_TRB_MASK (TIMER_TCR_TRB_MASK << TIMER_TCR_R_TRB_BIT)
#define TIMER_TCR_R_TRB_LOAD (TIMER_TCR_TRB_LOAD << TIMER_TCR_R_TRB_BIT)
/*-----------*/

/*-----------*/
#define TIMER_TCR_R_EMUMODE_BIT ((uint16_t) 10U)

#define TIMER_TCR_EMUMODE_MASK ((uint16_t) 0x0003U)
#define TIMER_TCR_EMUMODE_HARDSTOP ((uint16_t) 0x0000U)
#define TIMER_TCR_EMUMODE_SOFTSTOP ((uint16_t) 0x0001U)
#define TIMER_TCR_EMUMODE_FREERUN ((uint16_t) 0x0002U)

#define TIMER_TCR_R_EMUMODE_MASK (TIMER_TCR_EMUMODE_MASK << TIMER_TCR_R_EMUMODE_BIT)
#define TIMER_TCR_R_EMUMODE_HARDSTOP (TIMER_TCR_EMUMODE_HARDSTOP << TIMER_TCR_R_EMUMODE_BIT)
#define TIMER_TCR_R_EMUMODE_SOFTSTOP (TIMER_TCR_EMUMODE_SOFTSTOP << TIMER_TCR_R_EMUMODE_BIT)
#define TIMER_TCR_R_EMUMODE_FREERUN (TIMER_TCR_EMUMODE_FREERUN << TIMER_TCR_R_EMUMODE_BIT)
/*-----------*/

/*-----------*/
#define TIMER_TCR_R_TIE_BIT ((uint16_t) 14U)

#define TIMER_TCR_TIE_MASK ((uint16_t) 0x0001U)
#define TIMER_TCR_TIE_DIS ((uint16_t) 0x0000U)
#define TIMER_TCR_TIE_ENA ((uint16_t) 0x0001U)

#define TIMER_TCR_R_TIE_MASK (TIMER_TCR_TIE_MASK << TIMER_TCR_R_TIE_BIT)
#define TIMER_TCR_R_TIE_DIS (TIMER_TCR_TIE_DIS << TIMER_TCR_R_TIE_BIT)
#define TIMER_TCR_R_TIE_ENA (TIMER_TCR_TIE_ENA << TIMER_TCR_R_TIE_BIT)
/*-----------*/

/*-----------*/
#define TIMER_TCR_R_TIF_BIT ((uint16_t) 15U)

#define TIMER_TCR_TIF_MASK ((uint16_t) 0x0001U)
#define TIMER_TCR_TIF_NOOCCUR ((uint16_t) 0x0000U)
#define TIMER_TCR_TIF_OCCUR ((uint16_t) 0x0001U)

#define TIMER_TCR_R_TIF_MASK (TIMER_TCR_TIF_MASK << TIMER_TCR_R_TIF_BIT)
#define TIMER_TCR_R_TIF_NOOCCUR (TIMER_TCR_TIF_NOOCCUR << TIMER_TCR_R_TIF_BIT)
#define TIMER_TCR_R_TIF_OCCUR (TIMER_TCR_TIF_OCCUR << TIMER_TCR_R_TIF_BIT)
/*-----------*/

#endif /* DRIVERLIB_TIMER_PERIPHERAL_REGISTERDEFINES_XHEADER_TIMER_REGISTERDEFINES_TCR_H_ */
