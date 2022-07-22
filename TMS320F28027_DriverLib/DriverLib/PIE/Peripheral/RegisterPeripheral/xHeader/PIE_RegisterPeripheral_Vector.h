/**
 *
 * @file PIE_RegisterPeripheral_Vector.h
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

#ifndef DRIVERLIB_PIE_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_PIE_REGISTERPERIPHERAL_VECTOR_H_
#define DRIVERLIB_PIE_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_PIE_REGISTERPERIPHERAL_VECTOR_H_

#include "DriverLib/PIE/Peripheral/xHeader/PIE_RegisterAddress.h"
#include "DriverLib/PIE/Peripheral/xHeader/PIE_StructPeripheral.h"

#define PIE_VECTOR ((PIE_VECTOR_t*) PIE_VECTOR_BASE)
#define PIE_VECTOR_IRQ ((PIE_IRQ_t*) PIE_VECTOR_BASE)
#define PIE_VECTOR_IRQ_EXT ((PIE_IRQ_EXT_t*) PIE_VECTOR_BASE)
#define PIE_VECTOR_IRQ_ARRAY ((PIE_IRQ_ARRAY_t*) PIE_VECTOR_BASE)


#endif /* DRIVERLIB_PIE_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_PIE_REGISTERPERIPHERAL_VECTOR_H_ */
