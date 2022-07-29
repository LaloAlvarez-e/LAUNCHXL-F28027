/*
 * MCU_Interrupt.h
 *
 *  Created on: 17 jun. 2022
 *      Author: InDeviceMex
 */

#ifndef MCU_INTERRUPT_H_
#define MCU_INTERRUPT_H_

#include "DriverLib/MCU/xHeader/MCU_Enum.h"


uint16_t MCU__u16IRQSourceHandler_Dummy(uintptr_t uptrModule, uint32_t u32IntSource);
void MCU__pvIRQVectorHandler_Dummy(void);
void MCU__pvIRQSourceHandler_Clear(uintptr_t uptrModule,
                                       uint32_t u32IntSource);
void MCU__pvIRQVectorHandler_Clear(void);

#define MCU__vSetInterrupt(values)    {__asm volatile(STRINGIZE_NX(\t INTR values));}
#define MCU__vSetInterruptTrap(values)    {__asm volatile(STRINGIZE_NX(\t TRAP values));}
#define MCU__vEnaGlobalInterrupt_Debug() {__asm volatile(" CLRC  INTM,DBGM \n");}
#define MCU__vEnaGlobalInterrupt() {__asm volatile(" CLRC  INTM \n");}
#define MCU__vEnaGlobalDebug() {__asm volatile(" CLRC  DBGM \n");}
#define MCU__vDisGlobalInterrupt_Debug() {__asm volatile(" SETC  INTM,DBGM \n");}
#define MCU__vDisGlobalInterrupt() {__asm volatile(" SETC  INTM \n");}
#define MCU__vDisGlobalDebug() {__asm volatile(" SETC  DBGM \n");}
#define MCU__vEnaAllInterrupt() {__asm volatile(" OR   IER, #0xFF \n");}
#define MCU__vDisAllInterrupt() {__asm volatile(" AND IER, #0 \n");}
#define MCU__vClearAllInterruptStatus() {__asm volatile(" AND  IFR, #0 \n");}


#pragma  CODE_SECTION(MCU__u16EnaGlobalInterrupt_Debug_RAM, ".TI.ramfunc")
#pragma  CODE_SECTION(MCU__u16EnaGlobalInterrupt_RAM, ".TI.ramfunc")
#pragma  CODE_SECTION(MCU__u16EnaGlobalDebug_RAM, ".TI.ramfunc")
#pragma  CODE_SECTION(MCU__u16DisGlobalInterrupt_Debug_RAM, ".TI.ramfunc")
#pragma  CODE_SECTION(MCU__u16DisGlobalInterrupt_RAM, ".TI.ramfunc")
#pragma  CODE_SECTION(MCU__u16DisGlobalDebug_RAM, ".TI.ramfunc")
#pragma  CODE_SECTION(MCU__vSetGlobalStatus_RAM, ".TI.ramfunc")
#pragma  CODE_SECTION(MCU__u16SetGlobalStatus_RAM, ".TI.ramfunc")

uint16_t MCU__u16EnaGlobalInterrupt_Debug_RAM(void);
uint16_t MCU__u16EnaGlobalInterrupt_RAM(void);
uint16_t MCU__u16EnaGlobalDebug_RAM(void);
uint16_t MCU__u16DisGlobalInterrupt_Debug_RAM(void);
uint16_t MCU__u16DisGlobalInterrupt_RAM(void);
uint16_t MCU__u16DisGlobalDebug_RAM(void);
void MCU__vSetGlobalStatus_RAM(uint16_t u16State);
uint16_t MCU__u16SetGlobalStatus_RAM(uint16_t u16State);

#pragma  CODE_SECTION(MCU__u16EnaInterrupt_RAM, ".TI.ramfunc")
#pragma  CODE_SECTION(MCU__u16GetEnaInterrupt_RAM, ".TI.ramfunc")
#pragma  CODE_SECTION(MCU__vEnaInterrupt_RAM, ".TI.ramfunc")
#pragma  CODE_SECTION(MCU__u16EnaAllInterrupt_RAM, ".TI.ramfunc")
#pragma  CODE_SECTION(MCU__u16DisInterrupt_RAM, ".TI.ramfunc")
#pragma  CODE_SECTION(MCU__vDisInterrupt_RAM, ".TI.ramfunc")
#pragma  CODE_SECTION(MCU__u16DisAllInterrupt_RAM, ".TI.ramfunc")

uint16_t MCU__u16EnaInterrupt_RAM(uint16_t u16InterruptArg);
uint16_t MCU__u16GetEnaInterrupt_RAM(uint16_t u16InterruptArg);
void MCU__vEnaInterrupt_RAM(uint16_t u16InterruptArg);
uint16_t MCU__u16EnaAllInterrupt_RAM(void);
uint16_t MCU__u16DisInterrupt_RAM(uint16_t u16InterruptArg);
void MCU__vDisInterrupt_RAM(uint16_t u16InterruptArg);
uint16_t MCU__u16DisAllInterrupt_RAM(void);

#pragma  CODE_SECTION(MCU__u16EnaDebugInterrupt_RAM, ".TI.ramfunc")
#pragma  CODE_SECTION(MCU__vEnaDebugInterrupt_RAM, ".TI.ramfunc")
#pragma  CODE_SECTION(MCU__u16EnaAllDebugInterrupt_RAM, ".TI.ramfunc")
#pragma  CODE_SECTION(MCU__vEnaAllDebugInterrupt_RAM, ".TI.ramfunc")
#pragma  CODE_SECTION(MCU__u16DisDebugInterrupt_RAM, ".TI.ramfunc")
#pragma  CODE_SECTION(MCU__vDisDebugInterrupt_RAM, ".TI.ramfunc")
#pragma  CODE_SECTION(MCU__vDisAllDebugInterrupt_RAM, ".TI.ramfunc")

uint16_t MCU__u16EnaDebugInterrupt_RAM(uint16_t u16InterruptArg);
void MCU__vEnaDebugInterrupt_RAM(uint16_t u16InterruptArg);
uint16_t MCU__u16EnaAllDebugInterrupt_RAM(void);
void MCU__vEnaAllDebugInterrupt_RAM(void);
uint16_t MCU__u16DisDebugInterrupt_RAM(uint16_t u16InterruptArg);
void MCU__vDisDebugInterrupt_RAM(uint16_t u16InterruptArg);
uint16_t MCU__u16DisAllDebugInterrupt_RAM(void);
void MCU__vDisAllDebugInterrupt_RAM(void);

#pragma  CODE_SECTION(MCU__u16ClearInterruptStatus_RAM, ".TI.ramfunc")
#pragma  CODE_SECTION(MCU__vClearInterruptStatus_RAM, ".TI.ramfunc")
#pragma  CODE_SECTION(MCU__u16ClearAllInterruptStatus_RAM, ".TI.ramfunc")
#pragma  CODE_SECTION(MCU__u16GetInterruptStatus_RAM, ".TI.ramfunc")

uint16_t MCU__u16ClearInterruptStatus_RAM(uint16_t u16InterruptArg);
void MCU__vClearInterruptStatus_RAM(uint16_t u16InterruptArg);
uint16_t MCU__u16ClearAllInterruptStatus_RAM(void);
uint16_t MCU__u16GetInterruptStatus_RAM(void);

#pragma  CODE_SECTION(MCU__vForceInterrupt_RAM, ".TI.ramfunc")
#pragma  CODE_SECTION(MCU__vForceInterruptTrap_RAM, ".TI.ramfunc")

void MCU__vForceInterrupt_RAM(MCU_nINT_VECTOR enInterruptArg);
void MCU__vForceInterruptTrap_RAM(MCU_nINT_VECTOR enInterruptArg);


uint16_t MCU__u16EnaGlobalInterrupt_Debug(void);
uint16_t MCU__u16EnaGlobalInterrupt(void);
uint16_t MCU__u16EnaGlobalDebug(void);
uint16_t MCU__u16DisGlobalInterrupt_Debug(void);
uint16_t MCU__u16DisGlobalInterrupt(void);
uint16_t MCU__u16DisGlobalDebug(void);
void MCU__vSetGlobalStatus(uint16_t u16State);
uint16_t MCU__u16SetGlobalStatus(uint16_t u16State);

uint16_t MCU__u16EnaInterrupt(uint16_t u16InterruptArg);
uint16_t MCU__u16GetEnaInterrupt(uint16_t u16InterruptArg);
void MCU__vEnaInterrupt(uint16_t u16InterruptArg);
uint16_t MCU__u16EnaAllInterrupt(void);
uint16_t MCU__u16DisInterrupt(uint16_t u16InterruptArg);
void MCU__vDisInterrupt(uint16_t u16InterruptArg);
uint16_t MCU__u16DisAllInterrupt(void);

uint16_t MCU__u16EnaDebugInterrupt(uint16_t u16InterruptArg);
void MCU__vEnaDebugInterrupt(uint16_t u16InterruptArg);
uint16_t MCU__u16EnaAllDebugInterrupt(void);
void MCU__vEnaAllDebugInterrupt(void);
uint16_t MCU__u16DisDebugInterrupt(uint16_t u16InterruptArg);
void MCU__vDisDebugInterrupt(uint16_t u16InterruptArg);
uint16_t MCU__u16DisAllDebugInterrupt(void);
void MCU__vDisAllDebugInterrupt(void);

uint16_t MCU__u16ClearInterruptStatus(uint16_t u16InterruptArg);
void MCU__vClearInterruptStatus(uint16_t u16InterruptArg);
uint16_t MCU__u16ClearAllInterruptStatus(void);
uint16_t MCU__u16GetInterruptStatus(void);

void MCU__vForceInterrupt(MCU_nINT_VECTOR enInterruptArg);
void MCU__vForceInterruptTrap(MCU_nINT_VECTOR enInterruptArg);

#endif /* MCU_INTERRUPT_H_ */
