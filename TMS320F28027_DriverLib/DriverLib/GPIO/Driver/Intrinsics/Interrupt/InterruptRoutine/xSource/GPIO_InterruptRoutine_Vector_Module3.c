/**
 *
 * @file GPIO_InterruptRoutine_Vector_Module3.c
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
 * @verbatim 19 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "DriverLib/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Vector_Module3.h"

#include "DriverLib/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Source.h"
#include "DriverLib/GPIO/Peripheral/GPIO_Peripheral.h"
#include "DriverLib/PIE/Peripheral/PIE_Peripheral.h"

interrupt void XINT3__vIRQVectorHandler(void)
{
    volatile uint32_t u32PinValue;
    MCU__pvfIRQSourceHandler_t pvfCallback;
    volatile uint16_t u16Pin;

    u16Pin = GPIOA_INTERRUPT_XINT3SEL_R;
    u32PinValue = GPIOA_DATA_DAT_R;
    u32PinValue >>= u16Pin;
    u32PinValue &= 1U;
    pvfCallback = GPIO__pvfGetIRQSourceHandler(GPIO_enXINT_3);
    pvfCallback(GPIO_enXINT_3, u32PinValue);

    PIE_ACK_R = PIE_ACK_R_ACK_GROUP12;
}





