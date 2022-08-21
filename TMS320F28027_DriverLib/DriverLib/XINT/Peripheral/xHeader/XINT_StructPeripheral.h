/**
 *
 * @file XINT_StructPeripheral.h
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

#ifndef DRIVERLIB_XINT_PERIPHERAL_XHEADER_XINT_STRUCTPERIPHERAL_H_
#define DRIVERLIB_XINT_PERIPHERAL_XHEADER_XINT_STRUCTPERIPHERAL_H_

#include "DriverLib/XINT/Peripheral/xHeader/XINT_StructRegister.h"
#include <DriverLib/XINT/Peripheral/xHeader/XINT_Enum.h>

typedef volatile struct
{
    union
    {
        volatile unsigned short SEL[3U];
        XINT_SEL_t SEL_bits[3U];
    };
    const unsigned short reserved1[5U];
    const unsigned short reserved2[136U];
    union
    {
        volatile unsigned short CR[3U];
        XINT_CR_t CR_bits[3U];
    };
    const unsigned short reserved3[5U];
    union
    {
        volatile unsigned short CTR[3U];
        XINT_CTR_t CTR_bits[3U];
    };
    const unsigned short reserved4[5U];
}XINT_t;

typedef volatile struct
{
    union
    {
        volatile unsigned short SEL;
        XINT_SEL_t SEL_bits;
    };
    const unsigned short reserved1[7U];
    const unsigned short reserved2[136U];
    union
    {
        volatile unsigned short CR;
        XINT_CR_t CR_bits;
    };
    const unsigned short reserved3[7U];
    union
    {
        volatile unsigned short CTR;
        XINT_CTR_t CTR_bits;
    };
    const unsigned short reserved4[7U];
}XINT1_t;

typedef volatile struct
{
    const unsigned short reserved1[1U];
    union
    {
        volatile unsigned short SEL;
        XINT_SEL_t SEL_bits;
    };
    const unsigned short reserved2[6U];
    const unsigned short reserved3[136U];
    const unsigned short reserved4[1U];
    union
    {
        volatile unsigned short CR;
        XINT_CR_t CR_bits;
    };
    const unsigned short reserved5[6U];
    const unsigned short reserved6[1U];
    union
    {
        volatile unsigned short CTR;
        XINT_CTR_t CTR_bits;
    };
    const unsigned short reserved7[6U];
}XINT2_t;

typedef volatile struct
{
    const unsigned short reserved1[2U];
    union
    {
        volatile unsigned short SEL;
        XINT_SEL_t SEL_bits;
    };
    const unsigned short reserved2[5U];
    const unsigned short reserved3[136U];
    const unsigned short reserved4[2U];
    union
    {
        volatile unsigned short CR;
        XINT_CR_t CR_bits;
    };
    const unsigned short reserved5[5U];
    const unsigned short reserved6[2U];
    union
    {
        volatile unsigned short CTR;
        XINT_CTR_t CTR_bits;
    };
    const unsigned short reserved7[5U];
}XINT3_t;

typedef volatile struct
{
    union
    {
        XINT1_t MODULE1;
        XINT2_t MODULE2;
        XINT3_t MODULE3;
    };
}XINTS_t;

#endif /* DRIVERLIB_XINT_PERIPHERAL_XHEADER_XINT_STRUCTPERIPHERAL_H_ */
