/**
 *
 * @file ECAP_StructRegister.h
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
 * @verbatim 26 jun. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 26 jun. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_ECAP_PERIPHERAL_XHEADER_ECAP_STRUCTREGISTER_H_
#define DRIVERLIB_ECAP_PERIPHERAL_XHEADER_ECAP_STRUCTREGISTER_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

typedef volatile struct
{
    volatile unsigned long COUNTER: 32;
}ECAP_TSCTR_t;

typedef volatile struct
{
    volatile unsigned long PHASE: 32;
}ECAP_CTRPHS_t;

typedef volatile struct
{
    volatile unsigned long VALUE: 32;
}ECAP_EVENT_t;

typedef volatile struct
{
    volatile unsigned short EVENT1_POL: 1;
    volatile unsigned short EVENT1_CTRRST: 1;
    volatile unsigned short EVENT2_POL: 1;
    volatile unsigned short EVENT2_CTRRST: 1;
    volatile unsigned short EVENT3_POL: 1;
    volatile unsigned short EVENT3_CTRRST: 1;
    volatile unsigned short EVENT4_POL: 1;
    volatile unsigned short EVENT4_CTRRST: 1;
    volatile unsigned short EVENT_LDEN: 1;
    volatile unsigned short PRESCALE: 5;
    volatile unsigned short EMUMODE: 2;
}ECAP_CTL1_t;

typedef volatile struct
{
    volatile unsigned short CONT_ONESHT: 1;
    volatile unsigned short STOP_WRAP: 2;
    volatile unsigned short REARM: 1;
    volatile unsigned short TSCTR_STOP: 1;
    volatile unsigned short SYNCI_EN: 1;
    volatile unsigned short SYNCO_SEL: 2;
    volatile unsigned short SW_SYNC: 1;
    volatile unsigned short CAPTURE_APWM: 1;
    volatile unsigned short APWMPOL: 1;
    const unsigned short reserved1: 5;
}ECAP_CTL2_t;

typedef volatile struct
{
    const unsigned short reserved1: 1;
    volatile unsigned short CEVT1: 1;
    volatile unsigned short CEVT2: 1;
    volatile unsigned short CEVT3: 1;
    volatile unsigned short CEVT4: 1;
    volatile unsigned short CTROVF: 1;
    volatile unsigned short CTR_EQ_PRD: 1;
    volatile unsigned short CTR_EQ_CMP: 1;
    const unsigned short reserved2: 8;
}ECAP_EINT_t;

typedef volatile struct
{
    volatile const unsigned short INT: 1;
    volatile const unsigned short CEVT1: 1;
    volatile const unsigned short CEVT2: 1;
    volatile const unsigned short CEVT3: 1;
    volatile const unsigned short CEVT4: 1;
    volatile const unsigned short CTROVF: 1;
    volatile const unsigned short CTR_PRD: 1;
    volatile const unsigned short CTR_CMP: 1;
    const unsigned short reserved2: 8;
}ECAP_FLG_t;

typedef volatile struct
{
    volatile unsigned short INT: 1;
    volatile unsigned short CEVT1: 1;
    volatile unsigned short CEVT2: 1;
    volatile unsigned short CEVT3: 1;
    volatile unsigned short CEVT4: 1;
    volatile unsigned short CTROVF: 1;
    volatile unsigned short CTR_PRD: 1;
    volatile unsigned short CTR_CMP: 1;
    const unsigned short reserved2: 8;
}ECAP_CLR_t;

typedef volatile struct
{
    const unsigned short reserved1: 1;
    volatile unsigned short CEVT1: 1;
    volatile unsigned short CEVT2: 1;
    volatile unsigned short CEVT3: 1;
    volatile unsigned short CEVT4: 1;
    volatile unsigned short CTROVF: 1;
    volatile unsigned short CTR_PRD: 1;
    volatile unsigned short CTR_CMP: 1;
    const unsigned short reserved2: 8;
}ECAP_FRC_t;

#endif /* DRIVERLIB_ECAP_PERIPHERAL_XHEADER_ECAP_STRUCTREGISTER_H_ */
