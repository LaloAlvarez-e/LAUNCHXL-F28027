/**
 *
 * @file FLASH_RegisterPeripheral_Vector.h
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
 * @verbatim 22 jul. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jul. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_FLASH_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_FLASH_REGISTERPERIPHERAL_VECTOR_H_
#define DRIVERLIB_FLASH_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_FLASH_REGISTERPERIPHERAL_VECTOR_H_

#include "DriverLib/FLASH/Peripheral/xHeader/FLASH_RegisterAddress.h"
#include "DriverLib/FLASH/Peripheral/xHeader/FLASH_StructPeripheral.h"

#define FLASH_VECTOR ((FLASH_VECTOR_t*) FLASH_VECTOR_BASE)
#define FLASH_VECTOR_IRQ ((FLASH_IRQ_t*) FLASH_VECTOR_BASE)
#define FLASH_VECTOR_IRQ_EXT ((FLASH_IRQ_EXT_t*) FLASH_VECTOR_BASE)
#define FLASH_VECTOR_IRQ_ARRAY ((FLASH_IRQ_ARRAY_t*) FLASH_VECTOR_BASE)


#endif /* DRIVERLIB_FLASH_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_FLASH_REGISTERPERIPHERAL_VECTOR_H_ */
