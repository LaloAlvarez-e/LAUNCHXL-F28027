/*
 * MCU_GROUPerrupt.c
 *
 *  Created on: 17 jun. 2022
 *      Author: InDeviceMex
 */
#include "DriverLib/MCU/xHeader/MCU_Interrupt.h"


void MCU__pvIRQSourceHandler_Dummy(uintptr_t uptrModule,
                                       uint32_t u32IntSource)
{
    while(1U)
    {
    }
}

interrupt void MCU__pvIRQVectorHandler_Dummy(void)
{
    while(1U)
    {
    }
}

void MCU__pvIRQSourceHandler_Clear(uintptr_t uptrModule,
                                       uint32_t u32IntSource)
{

}

interrupt void MCU__pvIRQVectorHandler_Clear(void)
{

}

uint16_t MCU__u16EnaGlobalInterrupt_Debug_RAM(void)
{
    __asm volatile(
           " PUSH  ST1 \n"
           " CLRC  INTM,DBGM \n"
           " POP   AL \n"
           " LRETR \n");
    return (0U);
}

uint16_t MCU__u16DisGlobalInterrupt_Debug_RAM(void)
{
    __asm volatile(
           " PUSH  ST1 \n"
           " SETC  INTM,DBGM \n"
           " POP   AL \n"
           " LRETR \n");
    return (0U);
}

uint16_t MCU__u16EnaGlobalInterrupt_RAM(void)
{
    __asm volatile(
           " PUSH  ST1 \n"
           " CLRC  INTM \n"
           " POP   AL \n"
           " LRETR \n");
    return (0U);
}

uint16_t MCU__u16DisGlobalInterrupt_RAM(void)
{
    __asm volatile(
           " PUSH  ST1 \n"
           " SETC  INTM \n"
           " POP   AL \n"
           " LRETR \n");
    return (0U);
}


uint16_t MCU__u16EnaGlobalDebug_RAM(void)
{
    __asm volatile(
           " PUSH  ST1 \n"
           " CLRC  DBGM \n"
           " POP   AL \n"
           " LRETR \n");
    return (0U);
}

uint16_t MCU__u16DisGlobalDebug_RAM(void)
{
    __asm volatile(
           " PUSH  ST1 \n"
           " SETC  DBGM \n"
           " POP   AL \n"
           " LRETR \n");
    return (0U);
}

void MCU__vSetGlobalStatus_RAM(uint16_t u16State)
{
    __asm volatile(
            " PUSH  AL \n"
            " POP   ST1 \n");
}

uint16_t MCU__u16SetGlobalStatus_RAM(uint16_t u16State)
{
    __asm volatile(
            " PUSH  ST1 \n"
            " PUSH  AL \n"
            " POP   ST1 \n"
            " POP   AL \n");
    return (u16State);
}

void MCU__vEnaInterrupt_RAM(uint16_t u16InterruptArg)
{
    __asm volatile(
           " MOV  AL, IER \n"
           " OR   AL, *-SP[1] \n"
           " MOV  IER, AL \n");
}

uint16_t MCU__u16EnaInterrupt_RAM(uint16_t u16InterruptArg)
{
    __asm volatile(
           " MOV  AL, IER \n"
           " MOV  AH, IER \n"
           " OR   AH, *-SP[1] \n"
           " MOV  IER, AH \n");
    return (u16InterruptArg);
}

uint16_t MCU__u16GetEnaInterrupt_RAM(uint16_t u16InterruptArg)
{
    __asm volatile(
           " MOV  AH, IER \n"
           " AND  AL, AH \n");
    return (u16InterruptArg);
}

uint16_t MCU__u16EnaAllInterrupt_RAM(void)
{
    __asm volatile(
           " MOV  AL, IER \n"
           " OR   IER, #0xFF \n"
           " LRETR \n");
     return (0U);
}

void MCU__vDisInterrupt_RAM(uint16_t u16InterruptArg)
{
    __asm volatile(
           " MOV  AH, IER \n"
           " NOT  AL \n"
           " AND  AL, AH \n"
           " MOV  IER, AL \n");
}

uint16_t MCU__u16DisInterrupt_RAM(uint16_t u16InterruptArg)
{
    __asm volatile(
           " MOV  AH, IER \n"
           " NOT  AL \n"
           " AND  AL, AH \n"
           " MOV  IER, AL \n"
           " MOV  AL, AH \n");
    return (u16InterruptArg);
}

uint16_t MCU__u16DisAllInterrupt_RAM(void)
{
    __asm volatile(
           " MOV  AL, IER \n"
           " AND  IER, #0 \n"
           " LRETR \n");
     return (0U);
}

void MCU__vEnaDebugInterrupt_RAM(uint16_t u16InterruptArg)
{
    __asm volatile(
           " PUSH DBGIER \n"
           " POP  AL \n"
           " OR   AL, *-SP[1] \n"
           " PUSH AL \n"
           " POP  DBGIER \n");
}

uint16_t MCU__u16EnaDebugInterrupt_RAM(uint16_t u16InterruptArg)
{
    __asm volatile(
           " PUSH DBGIER \n"
           " POP  AL \n"
           " MOV  AH, AL \n"
           " OR   AH, *-SP[1] \n"
           " PUSH AH \n"
           " POP  DBGIER \n");
    return (u16InterruptArg);
}

void MCU__vEnaAllDebugInterrupt_RAM(void)
{
    __asm volatile(
           " PUSH DBGIER \n"
           " POP  AL \n"
           " OR   AL, #0xFF \n"
           " PUSH AL \n"
           " POP  DBGIER \n");
}

uint16_t MCU__u16EnaAllDebugInterrupt_RAM(void)
{
    __asm volatile(
           " PUSH DBGIER \n"
           " POP  AL \n"
           " MOV  AH, AL \n"
           " OR   AH, #0xFF \n"
           " PUSH AH \n"
           " POP  DBGIER \n"
           " LRETR \n");
      return (0U);
}

void MCU__vDisDebugInterrupt_RAM(uint16_t u16InterruptArg)
{
    __asm volatile(
           " PUSH DBGIER \n"
           " POP  AH \n"
           " NOT  AL \n"
           " AND  AH, AL \n"
           " PUSH AH \n"
           " POP  DBGIER \n");
}


uint16_t MCU__u16DisDebugInterrupt_RAM(uint16_t u16InterruptArg)
{
    __asm volatile(
           " PUSH DBGIER \n"
           " POP  AH \n"
           " MOV  *-SP[1], AH \n"
           " NOT  AL \n"
           " AND  AH, AL \n"
           " PUSH AH \n"
           " POP  DBGIER \n"
           " MOV  AL, *-SP[1] \n");
    return (u16InterruptArg);
}

void MCU__vDisAllDebugInterrupt_RAM(void)
{
    __asm volatile(
           " PUSH DBGIER \n"
           " POP  AL \n"
           " AND  AL, #0 \n"
           " PUSH AL \n"
           " POP  DBGIER \n");
}

uint16_t MCU__u16DisAllDebugInterrupt_RAM(void)
{
    __asm volatile(
           " PUSH DBGIER \n"
           " POP  AL \n"
           " MOV  AH, AL \n"
           " AND  AH, #0 \n"
           " PUSH AH \n"
           " POP  DBGIER \n"
           " LRETR \n");
      return (0U);
}

uint16_t MCU__u16GetInterruptStatus_RAM(void)
{
    __asm volatile(
           " PUSH IFR \n"
           " POP  AL \n"
           " LRETR \n");
    return (0U);
}

void MCU__vClearInterruptStatus_RAM(uint16_t u16InterruptArg)
{
    __asm volatile(
           " PUSH IFR \n"
           " POP  AH \n"
           " NOT  AL \n"
           " AND  AL, AH \n"
           " PUSH AL \n"
           " POP  IFR \n");
}

uint16_t MCU__u16ClearInterruptStatus_RAM(uint16_t u16InterruptArg)
{
    __asm volatile(
           " PUSH IFR \n"
           " POP  AH \n"
           " NOT  AL \n"
           " AND  AL, AH \n"
           " PUSH AL \n"
           " POP  IFR \n"
           " MOV  AL, AH \n");
    return (u16InterruptArg);
}

uint16_t MCU__u16ClearAllInterruptStatus_RAM(void)
{
    __asm volatile(
           " PUSH IFR \n"
           " POP  AL \n"
           " AND  IFR, #0 \n"
           " LRETR \n");
     return (0U);
}

void MCU__vForceInterrupt_RAM(MCU_nINT_VECTOR enInterruptArg)
{
    MCU_nINT_VECTOR enInterruptReg = enInterruptArg;

    switch(enInterruptReg)
    {
    case MCU_enINT_VECTOR_GROUP1:
        MCU__vSetInterrupt(INT1);
    case MCU_enINT_VECTOR_GROUP2:
        MCU__vSetInterrupt(INT2);
    case MCU_enINT_VECTOR_GROUP3:
        MCU__vSetInterrupt(INT3);
    case MCU_enINT_VECTOR_GROUP4:
        MCU__vSetInterrupt(INT4);
    case MCU_enINT_VECTOR_GROUP5:
        MCU__vSetInterrupt(INT5);
    case MCU_enINT_VECTOR_GROUP6:
        MCU__vSetInterrupt(INT6);
    case MCU_enINT_VECTOR_GROUP7:
        MCU__vSetInterrupt(INT7);
    case MCU_enINT_VECTOR_GROUP8:
        MCU__vSetInterrupt(INT8);
    case MCU_enINT_VECTOR_GROUP9:
        MCU__vSetInterrupt(INT9);
    case MCU_enINT_VECTOR_GROUP10:
        MCU__vSetInterrupt(INT10);
    case MCU_enINT_VECTOR_GROUP11:
        MCU__vSetInterrupt(INT11);
    case MCU_enINT_VECTOR_GROUP12:
        MCU__vSetInterrupt(INT12);
    case MCU_enINT_VECTOR_GROUP13:
        MCU__vSetInterrupt(INT13);
    case MCU_enINT_VECTOR_GROUP14:
        MCU__vSetInterrupt(INT14);
    case MCU_enINT_VECTOR_DLOG:
        MCU__vSetInterrupt(DLOGINT);
    case MCU_enINT_VECTOR_RTOS:
        MCU__vSetInterrupt(RTOSINT);
    case MCU_enINT_VECTOR_NMI:
        MCU__vSetInterrupt(NMI);
    default:
        break;
    }

}


void MCU__vForceInterruptTrap_RAM(MCU_nINT_VECTOR enInterruptArg)
{
    MCU_nINT_VECTOR enInterruptReg = enInterruptArg;

    switch(enInterruptReg)
    {
    case MCU_enINT_VECTOR_RESET:
        MCU__vSetInterruptTrap(#0);
    case MCU_enINT_VECTOR_GROUP1:
        MCU__vSetInterruptTrap(#1);
    case MCU_enINT_VECTOR_GROUP2:
        MCU__vSetInterruptTrap(#2);
    case MCU_enINT_VECTOR_GROUP3:
        MCU__vSetInterruptTrap(#3);
    case MCU_enINT_VECTOR_GROUP4:
        MCU__vSetInterruptTrap(#4);
    case MCU_enINT_VECTOR_GROUP5:
        MCU__vSetInterruptTrap(#5);
    case MCU_enINT_VECTOR_GROUP6:
        MCU__vSetInterruptTrap(#6);
    case MCU_enINT_VECTOR_GROUP7:
        MCU__vSetInterruptTrap(#7);
    case MCU_enINT_VECTOR_GROUP8:
        MCU__vSetInterruptTrap(#8);
    case MCU_enINT_VECTOR_GROUP9:
        MCU__vSetInterruptTrap(#9);
    case MCU_enINT_VECTOR_GROUP10:
        MCU__vSetInterruptTrap(#10);
    case MCU_enINT_VECTOR_GROUP11:
        MCU__vSetInterruptTrap(#11);
    case MCU_enINT_VECTOR_GROUP12:
        MCU__vSetInterruptTrap(#12);
    case MCU_enINT_VECTOR_GROUP13:
        MCU__vSetInterruptTrap(#13);
    case MCU_enINT_VECTOR_GROUP14:
        MCU__vSetInterruptTrap(#14);
    case MCU_enINT_VECTOR_DLOG:
        MCU__vSetInterruptTrap(#15);
    case MCU_enINT_VECTOR_RTOS:
        MCU__vSetInterruptTrap(#16);
    case MCU_enINT_VECTOR_EMU:
        MCU__vSetInterruptTrap(#17);
    case MCU_enINT_VECTOR_NMI:
        MCU__vSetInterruptTrap(#18);
    case MCU_enINT_VECTOR_ILLEGAL:
        MCU__vSetInterruptTrap(#19);
    case MCU_enINT_VECTOR_USER1:
        MCU__vSetInterruptTrap(#20);
    case MCU_enINT_VECTOR_USER2:
        MCU__vSetInterruptTrap(#21);
    case MCU_enINT_VECTOR_USER3:
        MCU__vSetInterruptTrap(#22);
    case MCU_enINT_VECTOR_USER4:
        MCU__vSetInterruptTrap(#23);
    case MCU_enINT_VECTOR_USER5:
        MCU__vSetInterruptTrap(#24);
    case MCU_enINT_VECTOR_USER6:
        MCU__vSetInterruptTrap(#25);
    case MCU_enINT_VECTOR_USER7:
        MCU__vSetInterruptTrap(#26);
    case MCU_enINT_VECTOR_USER8:
        MCU__vSetInterruptTrap(#27);
    case MCU_enINT_VECTOR_USER9:
        MCU__vSetInterruptTrap(#28);
    case MCU_enINT_VECTOR_USER10:
        MCU__vSetInterruptTrap(#29);
    case MCU_enINT_VECTOR_USER11:
        MCU__vSetInterruptTrap(#30);
    case MCU_enINT_VECTOR_USER12:
        MCU__vSetInterruptTrap(#31);
    default:
        break;
    }
}


uint16_t MCU__u16EnaGlobalInterrupt_Debug(void)
{
    __asm volatile(
           " PUSH  ST1 \n"
           " CLRC  INTM,DBGM \n"
           " POP   AL \n"
           " LRETR \n");
    return (0U);
}

uint16_t MCU__u16DisGlobalInterrupt_Debug(void)
{
    __asm volatile(
           " PUSH  ST1 \n"
           " SETC  INTM,DBGM \n"
           " POP   AL \n"
           " LRETR \n");
    return (0U);
}

uint16_t MCU__u16EnaGlobalInterrupt(void)
{
    __asm volatile(
           " PUSH  ST1 \n"
           " CLRC  INTM \n"
           " POP   AL \n"
           " LRETR \n");
    return (0U);
}

uint16_t MCU__u16DisGlobalInterrupt(void)
{
    __asm volatile(
           " PUSH  ST1 \n"
           " SETC  INTM \n"
           " POP   AL \n"
           " LRETR \n");
    return (0U);
}


uint16_t MCU__u16EnaGlobalDebug(void)
{
    __asm volatile(
           " PUSH  ST1 \n"
           " CLRC  DBGM \n"
           " POP   AL \n"
           " LRETR \n");
    return (0U);
}

uint16_t MCU__u16DisGlobalDebug(void)
{
    __asm volatile(
           " PUSH  ST1 \n"
           " SETC  DBGM \n"
           " POP   AL \n"
           " LRETR \n");
    return (0U);
}

void MCU__vSetGlobalStatus(uint16_t u16State)
{
    __asm volatile(
            " PUSH  AL \n"
            " POP   ST1 \n");
}

uint16_t MCU__u16SetGlobalStatus(uint16_t u16State)
{
    __asm volatile(
            " PUSH  ST1 \n"
            " PUSH  AL \n"
            " POP   ST1 \n"
            " POP   AL \n");
    return (u16State);
}

void MCU__vEnaInterrupt(uint16_t u16InterruptArg)
{
    __asm volatile(
           " MOV  AL, IER \n"
           " OR   AL, *-SP[1] \n"
           " MOV  IER, AL \n");
}

uint16_t MCU__u16EnaInterrupt(uint16_t u16InterruptArg)
{
    __asm volatile(
           " MOV  AL, IER \n"
           " MOV  AH, IER \n"
           " OR   AH, *-SP[1] \n"
           " MOV  IER, AH \n");
    return (u16InterruptArg);
}

uint16_t MCU__u16GetEnaInterrupt(uint16_t u16InterruptArg)
{
    __asm volatile(
           " MOV  AH, IER \n"
           " AND  AL, AH \n");
    return (u16InterruptArg);
}


uint16_t MCU__u16EnaAllInterrupt(void)
{
    __asm volatile(
           " MOV  AL, IER \n"
           " OR   IER, #0xFF \n"
           " LRETR \n");
     return (0U);
}

void MCU__vDisInterrupt(uint16_t u16InterruptArg)
{
    __asm volatile(
           " MOV  AH, IER \n"
           " NOT  AL \n"
           " AND  AL, AH \n"
           " MOV  IER, AL \n");
}

uint16_t MCU__u16DisInterrupt(uint16_t u16InterruptArg)
{
    __asm volatile(
           " MOV  AH, IER \n"
           " NOT  AL \n"
           " AND  AL, AH \n"
           " MOV  IER, AL \n"
           " MOV  AL, AH \n");
    return (u16InterruptArg);
}

uint16_t MCU__u16DisAllInterrupt(void)
{
    __asm volatile(
           " MOV  AL, IER \n"
           " AND   IER, #0 \n"
           " LRETR \n");
     return (0U);
}

void MCU__vEnaDebugInterrupt(uint16_t u16InterruptArg)
{
    __asm volatile(
           " PUSH DBGIER \n"
           " POP  AL \n"
           " OR   AL, *-SP[1] \n"
           " PUSH AL \n"
           " POP  DBGIER \n");
}

uint16_t MCU__u16EnaDebugInterrupt(uint16_t u16InterruptArg)
{
    __asm volatile(
           " PUSH DBGIER \n"
           " POP  AL \n"
           " MOV  AH, AL \n"
           " OR   AH, *-SP[1] \n"
           " PUSH AH \n"
           " POP  DBGIER \n");
    return (u16InterruptArg);
}

void MCU__vEnaAllDebugInterrupt(void)
{
    __asm volatile(
           " PUSH DBGIER \n"
           " POP  AL \n"
           " OR   AL, #0xFF \n"
           " PUSH AL \n"
           " POP  DBGIER \n");
}

uint16_t MCU__u16EnaAllDebugInterrupt(void)
{
    __asm volatile(
           " PUSH DBGIER \n"
           " POP  AL \n"
           " MOV  AH, AL \n"
           " OR   AH, #0xFF \n"
           " PUSH AH \n"
           " POP  DBGIER \n"
           " LRETR \n");
      return (0U);
}

void MCU__vDisDebugInterrupt(uint16_t u16InterruptArg)
{
    __asm volatile(
           " PUSH DBGIER \n"
           " POP  AH \n"
           " NOT  AL \n"
           " AND  AH, AL \n"
           " PUSH AH \n"
           " POP  DBGIER \n");
}


uint16_t MCU__u16DisDebugInterrupt(uint16_t u16InterruptArg)
{
    __asm volatile(
           " PUSH DBGIER \n"
           " POP  AH \n"
           " MOV  *-SP[1], AH \n"
           " NOT  AL \n"
           " AND  AH, AL \n"
           " PUSH AH \n"
           " POP  DBGIER \n"
           " MOV  AL, *-SP[1] \n");
    return (u16InterruptArg);
}

void MCU__vDisAllDebugInterrupt(void)
{
    __asm volatile(
           " PUSH DBGIER \n"
           " POP  AL \n"
           " AND  AL, #0 \n"
           " PUSH AL \n"
           " POP  DBGIER \n");
}

uint16_t MCU__u16DisAllDebugInterrupt(void)
{
    __asm volatile(
           " PUSH DBGIER \n"
           " POP  AL \n"
           " MOV  AH, AL \n"
           " AND  AH, #0 \n"
           " PUSH AH \n"
           " POP  DBGIER \n"
           " LRETR \n");
      return (0U);
}

uint16_t MCU__u16GetInterruptStatus(void)
{
    __asm volatile(
           " PUSH IFR \n"
           " POP  AL \n"
           " LRETR \n");
    return (0U);
}

void MCU__vClearInterruptStatus(uint16_t u16InterruptArg)
{
    __asm volatile(
           " PUSH IFR \n"
           " POP  AH \n"
           " NOT  AL \n"
           " AND  AL, AH \n"
           " PUSH AL \n"
           " POP  IFR \n");
}

uint16_t MCU__u16ClearInterruptStatus(uint16_t u16InterruptArg)
{
    __asm volatile(
           " PUSH IFR \n"
           " POP  AH \n"
           " NOT  AL \n"
           " AND  AL, AH \n"
           " PUSH AL \n"
           " POP  IFR \n"
           " MOV  AL, AH \n");
    return (u16InterruptArg);
}

uint16_t MCU__u16ClearAllInterruptStatus(void)
{
    __asm volatile(

           " PUSH IFR \n"
           " POP  AL \n"
           " AND  IFR, #0 \n"
           " LRETR \n");
     return (0U);
}

void MCU__vForceInterrupt(MCU_nINT_VECTOR enInterruptArg)
{
    MCU_nINT_VECTOR enInterruptReg = enInterruptArg;

    switch(enInterruptReg)
    {
    case MCU_enINT_VECTOR_GROUP1:
        MCU__vSetInterrupt(INT1);
        break;
    case MCU_enINT_VECTOR_GROUP2:
        MCU__vSetInterrupt(INT2);
        break;
    case MCU_enINT_VECTOR_GROUP3:
        MCU__vSetInterrupt(INT3);
        break;
    case MCU_enINT_VECTOR_GROUP4:
        MCU__vSetInterrupt(INT4);
        break;
    case MCU_enINT_VECTOR_GROUP5:
        MCU__vSetInterrupt(INT5);
        break;
    case MCU_enINT_VECTOR_GROUP6:
        MCU__vSetInterrupt(INT6);
        break;
    case MCU_enINT_VECTOR_GROUP7:
        MCU__vSetInterrupt(INT7);
        break;
    case MCU_enINT_VECTOR_GROUP8:
        MCU__vSetInterrupt(INT8);
        break;
    case MCU_enINT_VECTOR_GROUP9:
        MCU__vSetInterrupt(INT9);
        break;
    case MCU_enINT_VECTOR_GROUP10:
        MCU__vSetInterrupt(INT10);
        break;
    case MCU_enINT_VECTOR_GROUP11:
        MCU__vSetInterrupt(INT11);
        break;
    case MCU_enINT_VECTOR_GROUP12:
        MCU__vSetInterrupt(INT12);
        break;
    case MCU_enINT_VECTOR_GROUP13:
        MCU__vSetInterrupt(INT13);
        break;
    case MCU_enINT_VECTOR_GROUP14:
        MCU__vSetInterrupt(INT14);
        break;
    case MCU_enINT_VECTOR_DLOG:
        MCU__vSetInterrupt(DLOGINT);
        break;
    case MCU_enINT_VECTOR_RTOS:
        MCU__vSetInterrupt(RTOSINT);
        break;
    case MCU_enINT_VECTOR_NMI:
        MCU__vSetInterrupt(NMI);
        break;
    default:
        break;
    }

}


void MCU__vForceInterruptTrap(MCU_nINT_VECTOR enInterruptArg)
{
    MCU_nINT_VECTOR enInterruptReg = enInterruptArg;

    switch(enInterruptReg)
    {
    case MCU_enINT_VECTOR_RESET:
        MCU__vSetInterruptTrap(#0);
        break;
    case MCU_enINT_VECTOR_GROUP1:
        MCU__vSetInterruptTrap(#1);
        break;
    case MCU_enINT_VECTOR_GROUP2:
        MCU__vSetInterruptTrap(#2);
        break;
    case MCU_enINT_VECTOR_GROUP3:
        MCU__vSetInterruptTrap(#3);
        break;
    case MCU_enINT_VECTOR_GROUP4:
        MCU__vSetInterruptTrap(#4);
        break;
    case MCU_enINT_VECTOR_GROUP5:
        MCU__vSetInterruptTrap(#5);
        break;
    case MCU_enINT_VECTOR_GROUP6:
        MCU__vSetInterruptTrap(#6);
        break;
    case MCU_enINT_VECTOR_GROUP7:
        MCU__vSetInterruptTrap(#7);
        break;
    case MCU_enINT_VECTOR_GROUP8:
        MCU__vSetInterruptTrap(#8);
        break;
    case MCU_enINT_VECTOR_GROUP9:
        MCU__vSetInterruptTrap(#9);
        break;
    case MCU_enINT_VECTOR_GROUP10:
        MCU__vSetInterruptTrap(#10);
        break;
    case MCU_enINT_VECTOR_GROUP11:
        MCU__vSetInterruptTrap(#11);
        break;
    case MCU_enINT_VECTOR_GROUP12:
        MCU__vSetInterruptTrap(#12);
        break;
    case MCU_enINT_VECTOR_GROUP13:
        MCU__vSetInterruptTrap(#13);
        break;
    case MCU_enINT_VECTOR_GROUP14:
        MCU__vSetInterruptTrap(#14);
        break;
    case MCU_enINT_VECTOR_DLOG:
        MCU__vSetInterruptTrap(#15);
        break;
    case MCU_enINT_VECTOR_RTOS:
        MCU__vSetInterruptTrap(#16);
        break;
    case MCU_enINT_VECTOR_EMU:
        MCU__vSetInterruptTrap(#17);
        break;
    case MCU_enINT_VECTOR_NMI:
        MCU__vSetInterruptTrap(#18);
        break;
    case MCU_enINT_VECTOR_ILLEGAL:
        MCU__vSetInterruptTrap(#19);
        break;
    case MCU_enINT_VECTOR_USER1:
        MCU__vSetInterruptTrap(#20);
        break;
    case MCU_enINT_VECTOR_USER2:
        MCU__vSetInterruptTrap(#21);
        break;
    case MCU_enINT_VECTOR_USER3:
        MCU__vSetInterruptTrap(#22);
        break;
    case MCU_enINT_VECTOR_USER4:
        MCU__vSetInterruptTrap(#23);
        break;
    case MCU_enINT_VECTOR_USER5:
        MCU__vSetInterruptTrap(#24);
        break;
    case MCU_enINT_VECTOR_USER6:
        MCU__vSetInterruptTrap(#25);
        break;
    case MCU_enINT_VECTOR_USER7:
        MCU__vSetInterruptTrap(#26);
        break;
    case MCU_enINT_VECTOR_USER8:
        MCU__vSetInterruptTrap(#27);
        break;
    case MCU_enINT_VECTOR_USER9:
        MCU__vSetInterruptTrap(#28);
        break;
    case MCU_enINT_VECTOR_USER10:
        MCU__vSetInterruptTrap(#29);
        break;
    case MCU_enINT_VECTOR_USER11:
        MCU__vSetInterruptTrap(#30);
        break;
    case MCU_enINT_VECTOR_USER12:
        MCU__vSetInterruptTrap(#31);
        break;
    default:
        break;
    }
}
