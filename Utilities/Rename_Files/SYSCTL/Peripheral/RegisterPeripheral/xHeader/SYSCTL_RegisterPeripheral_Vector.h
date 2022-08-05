/**
 *
 * @file SYSCTL_RegisterPeripheral_Vector.h
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

#ifndef DRIVERLIB_SYSCTL_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_SYSCTL_REGISTERPERIPHERAL_VECTOR_H_
#define DRIVERLIB_SYSCTL_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_SYSCTL_REGISTERPERIPHERAL_VECTOR_H_

#include "DriverLib/SYSCTL/Peripheral/xHeader/SYSCTL_RegisterAddress.h"
#include "DriverLib/SYSCTL/Peripheral/xHeader/SYSCTL_StructPeripheral.h"

#define SYSCTL_VECTOR ((SYSCTL_VECTOR_t*) SYSCTL_VECTOR_BASE)
#define SYSCTL_VECTOR_IRQ ((SYSCTL_IRQ_t*) SYSCTL_VECTOR_BASE)
#define SYSCTL_VECTOR_IRQ_EXT ((SYSCTL_IRQ_EXT_t*) SYSCTL_VECTOR_BASE)
#define SYSCTL_VECTOR_IRQ_ARRAY ((SYSCTL_IRQ_ARRAY_t*) SYSCTL_VECTOR_BASE)


#endif /* DRIVERLIB_SYSCTL_PERIPHERAL_REGISTERPERIPHERAL_XHEADER_SYSCTL_REGISTERPERIPHERAL_VECTOR_H_ */
