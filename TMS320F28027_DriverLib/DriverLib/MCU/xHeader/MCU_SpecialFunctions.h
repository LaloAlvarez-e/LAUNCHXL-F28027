/*
 * MCU_SpecialFunctions.h
 *
 *  Created on: 18 jun. 2022
 *      Author: InDeviceMex
 */

#ifndef MCU_SPECIALFUNCTIONS_H_
#define MCU_SPECIALFUNCTIONS_H_

#include "DriverLib/MCU/xHeader/MCU_Enum.h"

#define MCU__vDeviceCalibration ((void   (*)(void))0x3D7C80)

#define MCU__vEnaWriteProtectedRegisters()     {__asm volatile(" EALLOW \n");}
#define MCU__vDisWriteProtectedRegisters()     {__asm volatile(" EDIS \n");}
#define MCU__vEnterIdleMode()     {__asm volatile(" IDLE \n");}
#define MCU__vSetBreakpoint0()    {__asm volatile(" ESTOP0 \n");}
#define MCU__vSetBreakpoint1()    {__asm volatile(" ESTOP1 \n");}
#define MCU__vSetC28xMode()    {__asm volatile(" SETC OBJMODE \n");__asm volatile(" CLRC AMODE \n");}

#endif /* MCU_SPECIALFUNCTIONS_H_ */
