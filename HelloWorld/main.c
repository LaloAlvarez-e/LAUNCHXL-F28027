
#include "F2802x_Device.h"
#include "F2802x_Gpio.h"
#include "f2802x_examples.h"
#include "IQmathLib.h"

/**
 * main.c
 */

#define WDT_CTRL_BASE (0x6F80U)

#define GPIO_CTRL_OFFSET (0x0U)

#define WDT_CTRL_R (*(uint32_t*) (WDT_CTRL_BASE + GPIO_CTRL_OFFSET))

#define GPIOA_CTRL_BASE (0x6F80U)
#define GPIOB_CTRL_BASE (0x6F90U)
#define AIO_CTRL_BASE (0x6FB0U)

#define GPIO_CTRL_OFFSET (0x0U)
#define GPIO_QSEL1_OFFSET (0x2U)
#define GPIO_QSEL2_OFFSET (0x4U)
#define GPIO_MUX1_OFFSET (0x6U)
#define GPIO_MUX2_OFFSET (0x8U)
#define GPIO_DIR_OFFSET (0xAU)
#define GPIO_PUD_OFFSET (0xCU)

#define GPIOA_CTRL_R (*(uint32_t*) (GPIOA_CTRL_BASE + GPIO_CTRL_OFFSET))
#define GPIOA_QSEL1_R (*(uint32_t*) (GPIOA_CTRL_BASE + GPIO_QSEL1_OFFSET))
#define GPIOA_QSEL2_R (*(uint32_t*) (GPIOA_CTRL_BASE + GPIO_QSEL2_OFFSET))
#define GPIOA_MUX1_R (*(uint32_t*) (GPIOA_CTRL_BASE + GPIO_MUX1_OFFSET))
#define GPIOA_MUX2_R (*(uint32_t*) (GPIOA_CTRL_BASE + GPIO_MUX2_OFFSET))
#define GPIOA_DIR_R (*(uint32_t*) (GPIOA_CTRL_BASE + GPIO_DIR_OFFSET))
#define GPIOA_PUD_R (*(uint32_t*) (GPIOA_CTRL_BASE + GPIO_PUD_OFFSET))

#define GPIOB_CTRL_R (*(uint32_t*) (GPIOB_CTRL_BASE + GPIO_CTRL_OFFSET))
#define GPIOB_QSEL1_R (*(uint32_t*) (GPIOB_CTRL_BASE + GPIO_QSEL1_OFFSET))
#define GPIOB_QSEL2_R (*(uint32_t*) (GPIOB_CTRL_BASE + GPIO_QSEL2_OFFSET))
#define GPIOB_MUX1_R (*(uint32_t*) (GPIOB_CTRL_BASE + GPIO_MUX1_OFFSET))
#define GPIOB_MUX2_R (*(uint32_t*) (GPIOB_CTRL_BASE + GPIO_MUX2_OFFSET))
#define GPIOB_DIR_R (*(uint32_t*) (GPIOB_CTRL_BASE + GPIO_DIR_OFFSET))
#define GPIOB_PUD_R (*(uint32_t*) (GPIOB_CTRL_BASE + GPIO_PUD_OFFSET))

#define AIO_MUX1_R (*(uint32_t*) (AIO_CTRL_BASE + GPIO_MUX1_OFFSET))
#define AIO_DIR_R (*(uint32_t*) (AIO_CTRL_BASE + GPIO_DIR_OFFSET))


#define GPIOA_XINT_BASE (0x6FE0U)

#define GPIO_XINT1SEL_OFFSET (0x0U)
#define GPIO_XINT2SEL_OFFSET (0x1U)
#define GPIO_XINT3SEL_OFFSET (0x2U)
#define GPIO_LPMSEL_OFFSET (0x8U)

#define GPIOA_XINT1SEL_R (*(uint32_t*) (GPIOA_XINT_BASE + GPIO_XINT1SEL_OFFSET))
#define GPIOA_XINT2SEL_R (*(uint32_t*) (GPIOA_XINT_BASE + GPIO_XINT2SEL_OFFSET))
#define GPIOA_XINT3SEL_R (*(uint32_t*) (GPIOA_XINT_BASE + GPIO_XINT3SEL_OFFSET))
#define GPIOA_LPMSEL_R (*(uint32_t*) (GPIOA_XINT_BASE + GPIO_LPMSEL_OFFSET))


#define GPIOA_DAT_BASE (0x6FC0U)
#define GPIOB_DAT_BASE (0x6FC8U)
#define AIO_DAT_BASE (0x6FD8U)

#define GPIO_DAT_OFFSET (0x0U)
#define GPIO_SET_OFFSET (0x2U)
#define GPIO_CLEAR_OFFSET (0x4U)
#define GPIO_TOOGLE_OFFSET (0x6U)

#define GPIOA_DAT_R (*(uint32_t*) (GPIOA_DAT_BASE + GPIO_DAT_OFFSET))
#define GPIOA_SET_R (*(uint32_t*) (GPIOA_DAT_BASE + GPIO_SET_OFFSET))
#define GPIOA_CLEAR_R (*(uint32_t*) (GPIOA_DAT_BASE + GPIO_CLEAR_OFFSET))
#define GPIOA_TOOGLE_R (*(uint32_t*) (GPIOA_DAT_BASE + GPIO_TOOGLE_OFFSET))

#define GPIOB_DAT_R (*(uint32_t*) (GPIOB_DAT_BASE + GPIO_DAT_OFFSET))
#define GPIOB_SET_R (*(uint32_t*) (GPIOB_DAT_BASE + GPIO_SET_OFFSET))
#define GPIOB_CLEAR_R (*(uint32_t*) (GPIOB_DAT_BASE + GPIO_CLEAR_OFFSET))
#define GPIOB_TOOGLE_R (*(uint32_t*) (GPIOB_DAT_BASE + GPIO_TOOGLE_OFFSET))

#define AIO_DAT_R (*(uint32_t*) (AIO_DAT_BASE + GPIO_DAT_OFFSET))
#define AIO_SET_R (*(uint32_t*) (AIO_DAT_BASE + GPIO_SET_OFFSET))
#define AIO_CLEAR_R (*(uint32_t*) (AIO_DAT_BASE + GPIO_CLEAR_OFFSET))
#define AIO_TOOGLE_R (*(uint32_t*) (AIO_DAT_BASE + GPIO_TOOGLE_OFFSET))

void main(void)
{
    __asm (" SETC OBJMODE");
    EALLOW;

    __asm (" MOVZ DP, #7029h>>6 \n\r"
           " MOV @7029h, #0068h  \n\r");
    GPIOA_CTRL_R = 0xFFU << 8U;
    GPIOA_QSEL1_R = (uint32_t) 0x2U << (12U*2U);
    GPIOA_PUD_R |= 1U << 12U;
    GPIOA_MUX1_R = 0U;
    GPIOA_SET_R = 0xFU;
    GPIOA_DIR_R = 0xFU;
    EDIS;
    _IQ24sin(10);
	while(1U)
	{
	    if(GPIOA_DAT_R & (1U << 12U))
	    {
	        GPIOA_CLEAR_R = 0xCU;
	        GPIOA_SET_R = 0x3U;
	    }
	    else
	    {
            GPIOA_CLEAR_R = 0x3U;
            GPIOA_SET_R = 0xCU;
	    }

	}
}

void entry_point(void)
{
    main();
}
