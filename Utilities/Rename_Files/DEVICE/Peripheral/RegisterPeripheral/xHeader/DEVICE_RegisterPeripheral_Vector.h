/**
 *
 * @file DEVICE_RegisterPeripheral_Vector.h
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

#ifndef DRIVERLIB_DEVICE_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_DEVICE_REGISTERPERIPHERAL_VECTOR_H_
#define DRIVERLIB_DEVICE_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_DEVICE_REGISTERPERIPHERAL_VECTOR_H_

#include "DriverLib/DEVICE/Peripheral/xHeader/DEVICE_RegisterAddress.h"
#include "DriverLib/DEVICE/Peripheral/xHeader/DEVICE_StructPeripheral.h"

#define DEVICE_VECTOR ((DEVICE_VECTOR_t*) DEVICE_VECTOR_BASE)
#define DEVICE_VECTOR_IRQ ((DEVICE_IRQ_t*) DEVICE_VECTOR_BASE)
#define DEVICE_VECTOR_IRQ_EXT ((DEVICE_IRQ_EXT_t*) DEVICE_VECTOR_BASE)
#define DEVICE_VECTOR_IRQ_ARRAY ((DEVICE_IRQ_ARRAY_t*) DEVICE_VECTOR_BASE)


#endif /* DRIVERLIB_DEVICE_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_DEVICE_REGISTERPERIPHERAL_VECTOR_H_ */
