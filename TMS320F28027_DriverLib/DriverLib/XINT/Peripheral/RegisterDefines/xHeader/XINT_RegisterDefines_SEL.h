/**
 *
 * @file XINT_RegisterDefines_SEL.h
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
 * @verbatim 21 ago. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 ago. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_XINT_PERIPHERAL_REGISTERDEFINES_XHEADER_XINT_REGISTERDEFINES_SEL_H_
#define DRIVERLIB_XINT_PERIPHERAL_REGISTERDEFINES_XHEADER_XINT_REGISTERDEFINES_SEL_H_

#include "DriverLib/MCU/xHeader/MCU_Variables.h"

/******************************************************************************************
 ************************************ 1 XINTnSEL *********************************************
 ******************************************************************************************/
/*----------*/
#define XINT_SEL_R_SEL_BIT    (0UL)

#define XINT_SEL_SEL_MASK    ((uint16_t) 0x001FUL)
#define XINT_SEL_SEL_PIN0    ((uint16_t) 0x0000UL)
#define XINT_SEL_SEL_PIN1    ((uint16_t) 0x0001UL)
#define XINT_SEL_SEL_PIN2    ((uint16_t) 0x0002UL)
#define XINT_SEL_SEL_PIN3    ((uint16_t) 0x0003UL)
#define XINT_SEL_SEL_PIN4    ((uint16_t) 0x0004UL)
#define XINT_SEL_SEL_PIN5    ((uint16_t) 0x0005UL)
#define XINT_SEL_SEL_PIN6    ((uint16_t) 0x0006UL)
#define XINT_SEL_SEL_PIN7    ((uint16_t) 0x0007UL)
#define XINT_SEL_SEL_PIN8    ((uint16_t) 0x0008UL)
#define XINT_SEL_SEL_PIN9    ((uint16_t) 0x0009UL)
#define XINT_SEL_SEL_PIN10    ((uint16_t) 0x000AUL)
#define XINT_SEL_SEL_PIN11    ((uint16_t) 0x000BUL)
#define XINT_SEL_SEL_PIN12    ((uint16_t) 0x000CUL)
#define XINT_SEL_SEL_PIN13    ((uint16_t) 0x000DUL)
#define XINT_SEL_SEL_PIN14    ((uint16_t) 0x000EUL)
#define XINT_SEL_SEL_PIN15    ((uint16_t) 0x000FUL)
#define XINT_SEL_SEL_PIN16    ((uint16_t) 0x0010UL)
#define XINT_SEL_SEL_PIN17    ((uint16_t) 0x0011UL)
#define XINT_SEL_SEL_PIN18    ((uint16_t) 0x0012UL)
#define XINT_SEL_SEL_PIN19    ((uint16_t) 0x0013UL)
#define XINT_SEL_SEL_PIN20    ((uint16_t) 0x0014UL)
#define XINT_SEL_SEL_PIN21    ((uint16_t) 0x0015UL)
#define XINT_SEL_SEL_PIN22    ((uint16_t) 0x0016UL)
#define XINT_SEL_SEL_PIN23    ((uint16_t) 0x0017UL)
#define XINT_SEL_SEL_PIN24    ((uint16_t) 0x0018UL)
#define XINT_SEL_SEL_PIN25    ((uint16_t) 0x0019UL)
#define XINT_SEL_SEL_PIN26    ((uint16_t) 0x001AUL)
#define XINT_SEL_SEL_PIN27    ((uint16_t) 0x001BUL)
#define XINT_SEL_SEL_PIN28    ((uint16_t) 0x001CUL)
#define XINT_SEL_SEL_PIN29    ((uint16_t) 0x001DUL)
#define XINT_SEL_SEL_PIN30    ((uint16_t) 0x001EUL)
#define XINT_SEL_SEL_PIN31    ((uint16_t) 0x001FUL)

#define XINT_SEL_R_SEL_MASK    (XINT_SEL_SEL_MASK << XINT_SEL_R_SEL_BIT)
#define XINT_SEL_R_SEL_PIN0    (XINT_SEL_SEL_PIN0 << XINT_SEL_R_SEL_BIT)
#define XINT_SEL_R_SEL_PIN1    (XINT_SEL_SEL_PIN1 << XINT_SEL_R_SEL_BIT)
#define XINT_SEL_R_SEL_PIN2    (XINT_SEL_SEL_PIN2 << XINT_SEL_R_SEL_BIT)
#define XINT_SEL_R_SEL_PIN3    (XINT_SEL_SEL_PIN3 << XINT_SEL_R_SEL_BIT)
#define XINT_SEL_R_SEL_PIN4    (XINT_SEL_SEL_PIN4 << XINT_SEL_R_SEL_BIT)
#define XINT_SEL_R_SEL_PIN5    (XINT_SEL_SEL_PIN5 << XINT_SEL_R_SEL_BIT)
#define XINT_SEL_R_SEL_PIN6    (XINT_SEL_SEL_PIN6 << XINT_SEL_R_SEL_BIT)
#define XINT_SEL_R_SEL_PIN7    (XINT_SEL_SEL_PIN7 << XINT_SEL_R_SEL_BIT)
#define XINT_SEL_R_SEL_PIN8    (XINT_SEL_SEL_PIN8 << XINT_SEL_R_SEL_BIT)
#define XINT_SEL_R_SEL_PIN9    (XINT_SEL_SEL_PIN9 << XINT_SEL_R_SEL_BIT)
#define XINT_SEL_R_SEL_PIN10    (XINT_SEL_SEL_PIN10 << XINT_SEL_R_SEL_BIT)
#define XINT_SEL_R_SEL_PIN11    (XINT_SEL_SEL_PIN11 << XINT_SEL_R_SEL_BIT)
#define XINT_SEL_R_SEL_PIN12    (XINT_SEL_SEL_PIN12 << XINT_SEL_R_SEL_BIT)
#define XINT_SEL_R_SEL_PIN13    (XINT_SEL_SEL_PIN13 << XINT_SEL_R_SEL_BIT)
#define XINT_SEL_R_SEL_PIN14    (XINT_SEL_SEL_PIN14 << XINT_SEL_R_SEL_BIT)
#define XINT_SEL_R_SEL_PIN15    (XINT_SEL_SEL_PIN15 << XINT_SEL_R_SEL_BIT)
#define XINT_SEL_R_SEL_PIN16    (XINT_SEL_SEL_PIN16 << XINT_SEL_R_SEL_BIT)
#define XINT_SEL_R_SEL_PIN17    (XINT_SEL_SEL_PIN17 << XINT_SEL_R_SEL_BIT)
#define XINT_SEL_R_SEL_PIN18    (XINT_SEL_SEL_PIN18 << XINT_SEL_R_SEL_BIT)
#define XINT_SEL_R_SEL_PIN19    (XINT_SEL_SEL_PIN19 << XINT_SEL_R_SEL_BIT)
#define XINT_SEL_R_SEL_PIN20    (XINT_SEL_SEL_PIN20 << XINT_SEL_R_SEL_BIT)
#define XINT_SEL_R_SEL_PIN21    (XINT_SEL_SEL_PIN21 << XINT_SEL_R_SEL_BIT)
#define XINT_SEL_R_SEL_PIN22    (XINT_SEL_SEL_PIN22 << XINT_SEL_R_SEL_BIT)
#define XINT_SEL_R_SEL_PIN23    (XINT_SEL_SEL_PIN23 << XINT_SEL_R_SEL_BIT)
#define XINT_SEL_R_SEL_PIN24    (XINT_SEL_SEL_PIN24 << XINT_SEL_R_SEL_BIT)
#define XINT_SEL_R_SEL_PIN25    (XINT_SEL_SEL_PIN25 << XINT_SEL_R_SEL_BIT)
#define XINT_SEL_R_SEL_PIN26    (XINT_SEL_SEL_PIN26 << XINT_SEL_R_SEL_BIT)
#define XINT_SEL_R_SEL_PIN27    (XINT_SEL_SEL_PIN27 << XINT_SEL_R_SEL_BIT)
#define XINT_SEL_R_SEL_PIN28    (XINT_SEL_SEL_PIN28 << XINT_SEL_R_SEL_BIT)
#define XINT_SEL_R_SEL_PIN29    (XINT_SEL_SEL_PIN29 << XINT_SEL_R_SEL_BIT)
#define XINT_SEL_R_SEL_PIN30    (XINT_SEL_SEL_PIN30 << XINT_SEL_R_SEL_BIT)
#define XINT_SEL_R_SEL_PIN31    (XINT_SEL_SEL_PIN31 << XINT_SEL_R_SEL_BIT)
/*----------*/

#endif /* DRIVERLIB_XINT_PERIPHERAL_REGISTERDEFINES_XHEADER_XINT_REGISTERDEFINES_SEL_H_ */
