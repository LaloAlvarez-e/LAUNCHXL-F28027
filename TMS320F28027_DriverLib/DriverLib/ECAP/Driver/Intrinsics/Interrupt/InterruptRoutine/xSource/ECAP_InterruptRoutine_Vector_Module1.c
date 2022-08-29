/**
 *
 * @file ECAP_InterruptRoutine_Vector_Module1.c
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
 * @verbatim 8 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/ECAP/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/ECAP_InterruptRoutine_Vector_Module1.h"

#include "DriverLib/ECAP/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/ECAP_InterruptRoutine_Source.h"
#include "DriverLib/ECAP/Peripheral/ECAP_Peripheral.h"
#include "DriverLib/PIE/Peripheral/PIE_Peripheral.h"
#include "DriverLib/GPIO/Peripheral/GPIO_Peripheral.h"
#include "DriverLib/SYSCTL/Peripheral/SYSCTL_Peripheral.h"

interrupt void ECAP1__vIRQVectorHandler(void)
{
    volatile uint32_t u32Value;
    MCU__pvfIRQSourceHandler_t pvfCallback;
    volatile uint16_t u16Flag;
    volatile uint16_t u16Enable;
    volatile uint16_t u16PeripheralEnable;

    u16PeripheralEnable = SYSCTL_PCLKCR1_R;

    if(0U != (SYSCTL_PCLKCR1_R_ECAP1ENCLK_MASK & u16PeripheralEnable))
    {
        u16Flag = ECAP1_FLG_R;
        u16Enable = ECAP1_EINT_R;
        if(0U != (ECAP_FLG_R_INT_MASK & u16Flag))
        {
            ECAP1_CLR_R = ECAP_CLR_R_INT_MASK;
            u16Flag &= u16Enable;
            if(0U != ((uint16_t) ECAP_enINT_SOURCE_CAP_EVENT1 & u16Flag))
            {
                ECAP1_CLR_R = (uint16_t) ECAP_enINT_SOURCE_CAP_EVENT1;
                u32Value = ECAP1_EVENT1_R;
                pvfCallback = ECAP__pvfGetIRQSourceHandler(ECAP_enMODULE_1, ECAP_enINTERRUPT_CAP_EVENT1);
                pvfCallback(ECAP_enMODULE_1, u32Value);

            }
            if(0U != ((uint16_t) ECAP_enINT_SOURCE_CAP_EVENT2 & u16Flag))
            {
                ECAP1_CLR_R = (uint16_t) ECAP_enINT_SOURCE_CAP_EVENT2;
                u32Value = ECAP1_EVENT2_R;
                pvfCallback = ECAP__pvfGetIRQSourceHandler(ECAP_enMODULE_1, ECAP_enINTERRUPT_CAP_EVENT2);
                pvfCallback(ECAP_enMODULE_1, u32Value);
            }
            if(0U != ((uint16_t) ECAP_enINT_SOURCE_CAP_EVENT3 & u16Flag))
            {
                ECAP1_CLR_R = (uint16_t) ECAP_enINT_SOURCE_CAP_EVENT3;
                u32Value = ECAP1_EVENT3_R;
                pvfCallback = ECAP__pvfGetIRQSourceHandler(ECAP_enMODULE_1, ECAP_enINTERRUPT_CAP_EVENT3);
                pvfCallback(ECAP_enMODULE_1, u32Value);
            }
            if(0U != ((uint16_t) ECAP_enINT_SOURCE_CAP_EVENT4 & u16Flag))
            {
                ECAP1_CLR_R = (uint16_t) ECAP_enINT_SOURCE_CAP_EVENT4;
                u32Value = ECAP1_EVENT4_R;
                pvfCallback = ECAP__pvfGetIRQSourceHandler(ECAP_enMODULE_1, ECAP_enINTERRUPT_CAP_EVENT4);
                pvfCallback(ECAP_enMODULE_1, u32Value);
            }
            if(0U != ((uint16_t) ECAP_enINT_SOURCE_COUNTER_OVF & u16Flag))
            {
                u32Value = ECAP1_TSCTR_R;
                ECAP1_CLR_R = (uint16_t) ECAP_enINT_SOURCE_COUNTER_OVF;
                pvfCallback = ECAP__pvfGetIRQSourceHandler(ECAP_enMODULE_1, ECAP_enINTERRUPT_COUNTER_OVF);
                pvfCallback(ECAP_enMODULE_1, u32Value);
            }
            if(0U != ((uint16_t) ECAP_enINT_SOURCE_COUNTER_PERIOD & u16Flag))
            {
                ECAP1_CLR_R = (uint16_t) ECAP_enINT_SOURCE_COUNTER_PERIOD;
                u32Value = ECAP1_PERIOD_SHADOW_R;
                pvfCallback = ECAP__pvfGetIRQSourceHandler(ECAP_enMODULE_1, ECAP_enINTERRUPT_COUNTER_PERIOD);
                pvfCallback(ECAP_enMODULE_1, u32Value);
            }
            if(0U != ((uint16_t) ECAP_enINT_SOURCE_COUNTER_COMPARE & u16Flag))
            {
                ECAP1_CLR_R = (uint16_t) ECAP_enINT_SOURCE_COUNTER_COMPARE;
                u32Value = ECAP1_COMPARE_SHADOW_R;
                pvfCallback = ECAP__pvfGetIRQSourceHandler(ECAP_enMODULE_1, ECAP_enINTERRUPT_COUNTER_COMPARE);
                pvfCallback(ECAP_enMODULE_1, u32Value);
            }
        }
        else /*Software Request*/
        {
            pvfCallback = ECAP__pvfGetIRQSourceHandler(ECAP_enMODULE_1, ECAP_enINTERRUPT_SW);
            pvfCallback(ECAP_enMODULE_1, 0U);
        }
    }
    else /*Software Request*/
    {
        pvfCallback = ECAP__pvfGetIRQSourceHandler(ECAP_enMODULE_1, ECAP_enINTERRUPT_SW);
        pvfCallback(ECAP_enMODULE_1, 0U);
    }

    PIE_ACK_R = PIE_ACK_R_ACK_GROUP4;
}




