/*
 * MCU_Enum.h
 *
 *  Created on: 18 jun. 2022
 *      Author: InDeviceMex
 */

#ifndef MCU_ENUM_H_
#define MCU_ENUM_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

#define MCU_MASK_16 (0xFFFFU)
#define MCU_MASK_32 (0xFFFFFFFFUL)

#define STRINGIZE_NX(A) #A
#define STRINGIZE(A) STRINGIZE_NX(A)

typedef enum
{
    MCU_enINT_VECTOR_RESET = 0U,
    MCU_enINT_VECTOR_GROUP1 = 1U,
    MCU_enINT_VECTOR_GROUP2 = 2U,
    MCU_enINT_VECTOR_GROUP3 = 3U,
    MCU_enINT_VECTOR_GROUP4 = 4U,
    MCU_enINT_VECTOR_GROUP5 = 5U,
    MCU_enINT_VECTOR_GROUP6 = 6U,
    MCU_enINT_VECTOR_GROUP7 = 7U,
    MCU_enINT_VECTOR_GROUP8 = 8U,
    MCU_enINT_VECTOR_GROUP9 = 9U,
    MCU_enINT_VECTOR_GROUP10 = 10U,
    MCU_enINT_VECTOR_GROUP11 = 11U,
    MCU_enINT_VECTOR_GROUP12 = 12U,
    MCU_enINT_VECTOR_GROUP13 = 13U,
    MCU_enINT_VECTOR_GROUP14 = 14U,
    MCU_enINT_VECTOR_DLOG = 15U,
    MCU_enINT_VECTOR_RTOS = 16U,
    MCU_enINT_VECTOR_EMU  = 17U,
    MCU_enINT_VECTOR_NMI   = 18U,
    MCU_enINT_VECTOR_ILLEGAL = 19U,
    MCU_enINT_VECTOR_USER1 = 20U,
    MCU_enINT_VECTOR_USER2 = 21U,
    MCU_enINT_VECTOR_USER3 = 22U,
    MCU_enINT_VECTOR_USER4 = 23U,
    MCU_enINT_VECTOR_USER5 = 24U,
    MCU_enINT_VECTOR_USER6 = 25U,
    MCU_enINT_VECTOR_USER7 = 26U,
    MCU_enINT_VECTOR_USER8 = 27U,
    MCU_enINT_VECTOR_USER9 = 28U,
    MCU_enINT_VECTOR_USER10 = 29U,
    MCU_enINT_VECTOR_USER11 = 30U,
    MCU_enINT_VECTOR_USER12 = 31U,
}MCU_nINT_VECTOR;

typedef struct
{
    uintptr_t uptrAddress;
    uint16_t u16Value;
    uint16_t u16Mask;
    uint16_t u16Shift;
}MCU_Register16Bits_t;

typedef struct
{
    uintptr_t uptrAddress;
    uint32_t u32Value;
    uint32_t u32Mask;
    uint16_t u16Shift;
}MCU_Register32Bits_t;



#endif /* MCU_ENUM_H_ */
