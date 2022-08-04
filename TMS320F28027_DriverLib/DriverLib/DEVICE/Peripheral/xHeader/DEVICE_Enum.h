/**
 *
 * @file DEVICE_Enum.h
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

#ifndef DRIVERLIB_DEVICE_PERIPHERAL_XHEADER_DEVICE_ENUM_H_
#define DRIVERLIB_DEVICE_PERIPHERAL_XHEADER_DEVICE_ENUM_H_

#include "DriverLib/MCU/xHeader/MCU_Enum.h"

typedef enum
{
    DEVICE_enENABLE_DIS = 0U,
    DEVICE_enENABLE_ENA = 1U,
}DEVICE_nENABLE;


typedef enum
{
    DEVICE_enRESET_INPUT_LOW = 0U,
    DEVICE_enRESET_INPUT_HIGH = 1U,
}DEVICE_nRESET_INPUT;

typedef enum
{
    DEVICE_enVECTORMAP_MEMORY = 0U,
    DEVICE_enVECTORMAP_PIE = 1U,
}DEVICE_nVECTORMAP;

typedef enum
{
    DEVICE_enREV_0 = 0U,
    DEVICE_enREV_A = 1U,
    DEVICE_enREV_B = 2U,
}DEVICE_nREV;

typedef enum
{
    DEVICE_enCLASS_F28020 = 0xC7U,
    DEVICE_enCLASS_F28022 = 0xC7U,
    DEVICE_enCLASS_F28026 = 0xC7U,
    DEVICE_enCLASS_F280200 = 0xC7U,
    DEVICE_enCLASS_F280220 = 0xC7U,
    DEVICE_enCLASS_F280230 = 0xC7U,
    DEVICE_enCLASS_F280260 = 0xC7U,
    DEVICE_enCLASS_F280270 = 0xC7U,
    DEVICE_enCLASS_F28021 = 0xCFU,
    DEVICE_enCLASS_F28023 = 0xCFU,
    DEVICE_enCLASS_F28027 = 0xCFU,
}DEVICE_nCLASS;

typedef enum
{
    DEVICE_enPARTNO_F280220DA = 0x4U,
    DEVICE_enPARTNO_F280220PT = 0x5U,
    DEVICE_enPARTNO_F280260DA = 0x6U,
    DEVICE_enPARTNO_F280260PT = 0x7U,
    DEVICE_enPARTNO_F280230DA = 0xCU,
    DEVICE_enPARTNO_F280230PT = 0xDU,
    DEVICE_enPARTNO_F280270DA = 0xEU,
    DEVICE_enPARTNO_F280270PT = 0xFU,
    DEVICE_enPARTNO_F280200DA = 0xC0U,
    DEVICE_enPARTNO_F280200PT = 0xC1U,
    DEVICE_enPARTNO_F28020DA = 0xC2U,
    DEVICE_enPARTNO_F28020PT = 0xC3U,
    DEVICE_enPARTNO_F28022DA = 0xC4U,
    DEVICE_enPARTNO_F28022PT = 0xC5U,
    DEVICE_enPARTNO_F28026DA = 0xC6U,
    DEVICE_enPARTNO_F28026PT = 0xC7U,
    DEVICE_enPARTNO_F28021DA = 0xCAU,
    DEVICE_enPARTNO_F28021PT = 0xCBU,
    DEVICE_enPARTNO_F28023DA = 0xCCU,
    DEVICE_enPARTNO_F28023PT = 0xCDU,
    DEVICE_enPARTNO_F28027DA = 0xCEU,
    DEVICE_enPARTNO_F28027PT = 0xCFU,
}DEVICE_nPARTNO;

typedef enum
{
    DEVICE_enPARTTYPE_FLASH = 0x0U,
}DEVICE_nPARTTYPE;


typedef enum
{
    DEVICE_enDEBUGGER_DISCONNECT = 0U,
    DEVICE_enDEBUGGER_CONNECT = 1U,
}DEVICE_nDEBUGGER;


typedef MCU_Register16Bits_t DEVICE_Register16Bits_t;
typedef MCU_Register32Bits_t DEVICE_Register32Bits_t;

#endif /* DRIVERLIB_DEVICE_PERIPHERAL_XHEADER_DEVICE_ENUM_H_ */
