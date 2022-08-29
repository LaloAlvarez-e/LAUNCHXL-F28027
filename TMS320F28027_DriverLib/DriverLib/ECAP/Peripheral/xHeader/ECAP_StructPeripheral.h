/**
 *
 * @file ECAP_StructPeripheral.h
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

#ifndef DRIVERLIB_ECAP_PERIPHERAL_XHEADER_ECAP_STRUCTPERIPHERAL_H_
#define DRIVERLIB_ECAP_PERIPHERAL_XHEADER_ECAP_STRUCTPERIPHERAL_H_

#include "DriverLib/ECAP/Peripheral/xHeader/ECAP_StructRegister.h"
#include <DriverLib/ECAP/Peripheral/xHeader/ECAP_Enum.h>

typedef volatile struct
{
    union
    {
        volatile unsigned long EVENT1;
        ECAP_EVENT_t EVENT1_bits;
    };
    union
    {
        volatile unsigned long EVENT2;
        ECAP_EVENT_t EVENT2_bits;
    };
    union
    {
        volatile unsigned long EVENT3;
        ECAP_EVENT_t EVENT3_bits;
    };
    union
    {
        volatile unsigned long EVENT4;
        ECAP_EVENT_t EVENT4_bits;
    };
}ECAP_EVENTn_t;


typedef volatile struct
{
    union
    {
        volatile unsigned long PERIOD;
        ECAP_EVENT_t PERIOD_bits;
    };
    union
    {
        volatile unsigned long COMPARE;
        ECAP_EVENT_t COMPARE_bits;
    };
    union
    {
        volatile unsigned long PERIOD_SHADOW;
        ECAP_EVENT_t PERIOD_SHADOW_bits;
    };
    union
    {
        volatile unsigned long COMPARE_SHADOW;
        ECAP_EVENT_t COMPARE_SHADOW_bits;
    };
}ECAP_PRD_CMPn_t;

typedef volatile struct
{
    union
    {
        volatile unsigned long TSCTR;
        ECAP_TSCTR_t TSCTR_bits;
    };
    union
    {
        volatile unsigned long CTRPHS;
        ECAP_CTRPHS_t CTRPHS_bits;
    };
    union
    {
        volatile unsigned long EVENT[4U];
        ECAP_EVENT_t EVENT_bits[4U];
        ECAP_EVENTn_t EVENTn;
        ECAP_PRD_CMPn_t PRD_CMP;
    };
    const unsigned short reserved1[8U];
    union
    {
        volatile unsigned short CTL1;
        ECAP_CTL1_t CTL1_bits;
    };
    union
    {
        volatile unsigned short CTL2;
        ECAP_CTL2_t CTL2_bits;
    };
    union
    {
        volatile unsigned short EINT;
        ECAP_EINT_t EINT_bits;
    };
    union
    {
        volatile const unsigned short FLG;
        ECAP_FLG_t FLG_bits;
    };
    union
    {
        volatile unsigned short CLR;
        ECAP_CLR_t CLR_bits;
    };
    union
    {
        volatile unsigned short FRC;
        ECAP_FRC_t FRC_bits;
    };
}ECAP_t;

typedef volatile struct
{
    ECAP_t MODULE[ECAP_enMODULE_MAX];
}ECAPS_t;

#endif /* DRIVERLIB_ECAP_PERIPHERAL_XHEADER_ECAP_STRUCTPERIPHERAL_H_ */
