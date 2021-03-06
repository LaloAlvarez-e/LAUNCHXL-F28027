/*
 * MCU_Variables.h
 *
 *  Created on: 17 jun. 2022
 *      Author: InDeviceMex
 */

#ifndef MCU_VARIABLES_H_
#define MCU_VARIABLES_H_

#include <float.h>
#include <stdint.h>
#include <stddef.h>
/*Float standard typedef defines*/
typedef float float32_t;
typedef double float64_t;
typedef long double float128_t;

/*boolean variables*/
typedef enum
{
    FALSE = 0U,
    TRUE = 1U,
}boolean_t;

typedef unsigned int UBase_t;
typedef unsigned int pointer_t;
typedef int Base_t;

typedef void (*MCU_IRQ_VECTOR_t)(void);
typedef void (*MCU_IRQ_SOURCE_t)(uintptr_t uptrModule, uint32_t u32IntSource);

#endif /* MCU_VARIABLES_H_ */
