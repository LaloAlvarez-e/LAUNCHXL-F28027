/**
 *
 * @file MCU_RegisterIRQSource.h
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
 * @verbatim 17 jul. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 jul. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_MCU_XHEADER_MCU_REGISTERIRQSOURCE_H_
#define DRIVERLIB_MCU_XHEADER_MCU_REGISTERIRQSOURCE_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"


#pragma CODE_SECTION (MCU__vRegisterIRQSourceHandler_RAM, ".TI.ramfunc")
void MCU__vRegisterIRQSourceHandler_RAM(MCU_IRQ_SOURCE_t pfIrqSourceHandler,
                                        MCU_IRQ_SOURCE_t* pfIrqArrayHandler,
                                    uint32_t u32InterruptSource,
                                    uint32_t u32InteruptSourceMax);

void MCU__vRegisterIRQSourceHandler(MCU_IRQ_SOURCE_t pfIrqSourceHandler,
                                    MCU_IRQ_SOURCE_t* pfIrqArrayHandler,
                                    uint32_t u32InterruptSource,
                                    uint32_t u32InteruptSourceMax);


#endif /* DRIVERLIB_MCU_XHEADER_MCU_REGISTERIRQSOURCE_H_ */
