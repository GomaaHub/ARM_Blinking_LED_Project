/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  GPIO_PRIVATE.h
 *       Module:  -
 *
 *  Description:  GPIO Register Macros
 *
 *********************************************************************************************************************/
#ifndef GPIO_PRIVATE_H_
#define GPIO_PRIVATE_H_

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "GPIO_Config.h"



/**********************************************************************************************************************
 *  General GPIO Registers Macros
 *********************************************************************************************************************/

#define GPIOHBCTL_REG		*((volatile u32*)(0x400FE000+0x06C))
#define RCGCGPIO_REG		*((volatile u32*)(0x400FE000+0x608))


/**********************************************************************************************************************
 *  Macros Of GPIOA Register Map
 *********************************************************************************************************************/
#if GPIOA_BUS_SELECT == APB

#define GPIOA_BASE_ADDRESS		0x40004000

#elif GPIOA_BUS_SELECT == AHB

#define GPIOA_BASE_ADDRESS		0x40058000

#endif


#define GPIOA_DATA_REG		*((volatile u32*)(GPIOA_BASE_ADDRESS+0x3FC))	//0x3FC Offset means that all pins will be affected
#define GPIOA_DIR_REG		*((volatile u32*)(GPIOA_BASE_ADDRESS+0x400))
#define GPIOA_IS_REG		*((volatile u32*)(GPIOA_BASE_ADDRESS+0x404))
#define GPIOA_IBE_REG		*((volatile u32*)(GPIOA_BASE_ADDRESS+0x408))
#define GPIOA_IEV_REG		*((volatile u32*)(GPIOA_BASE_ADDRESS+0x40C))
#define GPIOA_IM_REG		*((volatile u32*)(GPIOA_BASE_ADDRESS+0x410))
#define GPIOA_RIS_REG		*((volatile u32*)(GPIOA_BASE_ADDRESS+0x414))
#define GPIOA_MIS_REG		*((volatile u32*)(GPIOA_BASE_ADDRESS+0x418))
#define GPIOA_ICR_REG		*((volatile u32*)(GPIOA_BASE_ADDRESS+0x41C))
#define GPIOA_AFSEL_REG		*((volatile u32*)(GPIOA_BASE_ADDRESS+0x420))
#define GPIOA_DR2R_REG		*((volatile u32*)(GPIOA_BASE_ADDRESS+0x500))
#define GPIOA_DR4R_REG		*((volatile u32*)(GPIOA_BASE_ADDRESS+0x504))
#define GPIOA_DR8R_REG		*((volatile u32*)(GPIOA_BASE_ADDRESS+0x508))
#define GPIOA_ODR_REG		*((volatile u32*)(GPIOA_BASE_ADDRESS+0x50C))
#define GPIOA_PUR_REG		*((volatile u32*)(GPIOA_BASE_ADDRESS+0x510))
#define GPIOA_PDR_REG		*((volatile u32*)(GPIOA_BASE_ADDRESS+0x514))
#define GPIOA_SLR_REG		*((volatile u32*)(GPIOA_BASE_ADDRESS+0x518))
#define GPIOA_DEN_REG		*((volatile u32*)(GPIOA_BASE_ADDRESS+0x51C))
#define GPIOA_LOCK_REG		*((volatile u32*)(GPIOA_BASE_ADDRESS+0x520))
#define GPIOA_CR_REG		*((volatile u32*)(GPIOA_BASE_ADDRESS+0x524))
#define GPIOA_AMSEL_REG		*((volatile u32*)(GPIOA_BASE_ADDRESS+0x528))
#define GPIOA_PTCL_REG		*((volatile u32*)(GPIOA_BASE_ADDRESS+0x52C))
#define GPIOA_ADCCTL_REG	*((volatile u32*)(GPIOA_BASE_ADDRESS+0x530))
#define GPIOA_DMACTL_REG	*((volatile u32*)(GPIOA_BASE_ADDRESS+0x534))

/**********************************************************************************************************************
 *  Macros Of GPIOB Register Map
 *********************************************************************************************************************/
#if GPIOB_BUS_SELECT == APB

#define GPIOB_BASE_ADDRESS		0x40005000

#elif GPIOB_BUS_SELECT == AHB

#define GPIOB_BASE_ADDRESS		0x40059000

#endif


#define GPIOB_DATA_REG		*((volatile u32*)(GPIOB_BASE_ADDRESS+0x3FC))	//0x3FC Offset means that all pins will be affected
#define GPIOB_DIR_REG		*((volatile u32*)(GPIOB_BASE_ADDRESS+0x400))
#define GPIOB_IS_REG		*((volatile u32*)(GPIOB_BASE_ADDRESS+0x404))
#define GPIOB_IBE_REG		*((volatile u32*)(GPIOB_BASE_ADDRESS+0x408))
#define GPIOB_IEV_REG		*((volatile u32*)(GPIOB_BASE_ADDRESS+0x40C))
#define GPIOB_IM_REG		*((volatile u32*)(GPIOB_BASE_ADDRESS+0x410))
#define GPIOB_RIS_REG		*((volatile u32*)(GPIOB_BASE_ADDRESS+0x414))
#define GPIOB_MIS_REG		*((volatile u32*)(GPIOB_BASE_ADDRESS+0x418))
#define GPIOB_ICR_REG		*((volatile u32*)(GPIOB_BASE_ADDRESS+0x41C))
#define GPIOB_AFSEL_REG		*((volatile u32*)(GPIOB_BASE_ADDRESS+0x420))
#define GPIOB_DR2R_REG		*((volatile u32*)(GPIOB_BASE_ADDRESS+0x500))
#define GPIOB_DR4R_REG		*((volatile u32*)(GPIOB_BASE_ADDRESS+0x504))
#define GPIOB_DR8R_REG		*((volatile u32*)(GPIOB_BASE_ADDRESS+0x508))
#define GPIOB_ODR_REG		*((volatile u32*)(GPIOB_BASE_ADDRESS+0x50C))
#define GPIOB_PUR_REG		*((volatile u32*)(GPIOB_BASE_ADDRESS+0x510))
#define GPIOB_PDR_REG		*((volatile u32*)(GPIOB_BASE_ADDRESS+0x514))
#define GPIOB_SLR_REG		*((volatile u32*)(GPIOB_BASE_ADDRESS+0x518))
#define GPIOB_DEN_REG		*((volatile u32*)(GPIOB_BASE_ADDRESS+0x51C))
#define GPIOB_LOCK_REG		*((volatile u32*)(GPIOB_BASE_ADDRESS+0x520))
#define GPIOB_CR_REG		*((volatile u32*)(GPIOB_BASE_ADDRESS+0x524))
#define GPIOB_AMSEL_REG		*((volatile u32*)(GPIOB_BASE_ADDRESS+0x528))
#define GPIOB_PTCL_REG		*((volatile u32*)(GPIOB_BASE_ADDRESS+0x52C))
#define GPIOB_ADCCTL_REG	*((volatile u32*)(GPIOB_BASE_ADDRESS+0x530))
#define GPIOB_DMACTL_REG	*((volatile u32*)(GPIOB_BASE_ADDRESS+0x534))

/**********************************************************************************************************************
 *  Macros Of GPIOC Register Map
 *********************************************************************************************************************/
#if GPIOC_BUS_SELECT == APB

#define GPIOC_BASE_ADDRESS		0x40006000

#elif GPIOC_BUS_SELECT == AHB

#define GPIOC_BASE_ADDRESS		0x4005A000

#endif


#define GPIOC_DATA_REG		*((volatile u32*)(GPIOC_BASE_ADDRESS+0x3FC))	//0x3FC Offset mens that all pins will be affected
#define GPIOC_DIR_REG		*((volatile u32*)(GPIOC_BASE_ADDRESS+0x400))
#define GPIOC_IS_REG		*((volatile u32*)(GPIOC_BASE_ADDRESS+0x404))
#define GPIOC_IBE_REG		*((volatile u32*)(GPIOC_BASE_ADDRESS+0x408))
#define GPIOC_IEV_REG		*((volatile u32*)(GPIOC_BASE_ADDRESS+0x40C))
#define GPIOC_IM_REG		*((volatile u32*)(GPIOC_BASE_ADDRESS+0x410))
#define GPIOC_RIS_REG		*((volatile u32*)(GPIOC_BASE_ADDRESS+0x414))
#define GPIOC_MIS_REG		*((volatile u32*)(GPIOC_BASE_ADDRESS+0x418))
#define GPIOC_ICR_REG		*((volatile u32*)(GPIOC_BASE_ADDRESS+0x41C))
#define GPIOC_AFSEL_REG		*((volatile u32*)(GPIOC_BASE_ADDRESS+0x420))
#define GPIOC_DR2R_REG		*((volatile u32*)(GPIOC_BASE_ADDRESS+0x500))
#define GPIOC_DR4R_REG		*((volatile u32*)(GPIOC_BASE_ADDRESS+0x504))
#define GPIOC_DR8R_REG		*((volatile u32*)(GPIOC_BASE_ADDRESS+0x508))
#define GPIOC_ODR_REG		*((volatile u32*)(GPIOC_BASE_ADDRESS+0x50C))
#define GPIOC_PUR_REG		*((volatile u32*)(GPIOC_BASE_ADDRESS+0x510))
#define GPIOC_PDR_REG		*((volatile u32*)(GPIOC_BASE_ADDRESS+0x514))
#define GPIOC_SLR_REG		*((volatile u32*)(GPIOC_BASE_ADDRESS+0x518))
#define GPIOC_DEN_REG		*((volatile u32*)(GPIOC_BASE_ADDRESS+0x51C))
#define GPIOC_LOCK_REG		*((volatile u32*)(GPIOC_BASE_ADDRESS+0x520))
#define GPIOC_CR_REG		*((volatile u32*)(GPIOC_BASE_ADDRESS+0x524))
#define GPIOC_AMSEL_REG		*((volatile u32*)(GPIOC_BASE_ADDRESS+0x528))
#define GPIOC_PTCL_REG		*((volatile u32*)(GPIOC_BASE_ADDRESS+0x52C))
#define GPIOC_ADCCTL_REG	*((volatile u32*)(GPIOC_BASE_ADDRESS+0x530))
#define GPIOC_DMACTL_REG	*((volatile u32*)(GPIOC_BASE_ADDRESS+0x534))


/**********************************************************************************************************************
 *  Macros Of GPIOD Register Map
 *********************************************************************************************************************/
#if GPIOD_BUS_SELECT == APB

#define GPIOD_BASE_ADDRESS		0x40007000

#elif GPIOD_BUS_SELECT == AHB

#define GPIOD_BASE_ADDRESS		0x4005B000

#endif


#define GPIOD_DATA_REG		*((volatile u32*)(GPIOD_BASE_ADDRESS+0x3FC))	//0x3FC Offset mens that all pins will be affected
#define GPIOD_DIR_REG		*((volatile u32*)(GPIOD_BASE_ADDRESS+0x400))
#define GPIOD_IS_REG		*((volatile u32*)(GPIOD_BASE_ADDRESS+0x404))
#define GPIOD_IBE_REG		*((volatile u32*)(GPIOD_BASE_ADDRESS+0x408))
#define GPIOD_IEV_REG		*((volatile u32*)(GPIOD_BASE_ADDRESS+0x40C))
#define GPIOD_IM_REG		*((volatile u32*)(GPIOD_BASE_ADDRESS+0x410))
#define GPIOD_RIS_REG		*((volatile u32*)(GPIOD_BASE_ADDRESS+0x414))
#define GPIOD_MIS_REG		*((volatile u32*)(GPIOD_BASE_ADDRESS+0x418))
#define GPIOD_ICR_REG		*((volatile u32*)(GPIOD_BASE_ADDRESS+0x41C))
#define GPIOD_AFSEL_REG		*((volatile u32*)(GPIOD_BASE_ADDRESS+0x420))
#define GPIOD_DR2R_REG		*((volatile u32*)(GPIOD_BASE_ADDRESS+0x500))
#define GPIOD_DR4R_REG		*((volatile u32*)(GPIOD_BASE_ADDRESS+0x504))
#define GPIOD_DR8R_REG		*((volatile u32*)(GPIOD_BASE_ADDRESS+0x508))
#define GPIOD_ODR_REG		*((volatile u32*)(GPIOD_BASE_ADDRESS+0x50C))
#define GPIOD_PUR_REG		*((volatile u32*)(GPIOD_BASE_ADDRESS+0x510))
#define GPIOD_PDR_REG		*((volatile u32*)(GPIOD_BASE_ADDRESS+0x514))
#define GPIOD_SLR_REG		*((volatile u32*)(GPIOD_BASE_ADDRESS+0x518))
#define GPIOD_DEN_REG		*((volatile u32*)(GPIOD_BASE_ADDRESS+0x51C))
#define GPIOD_LOCK_REG		*((volatile u32*)(GPIOD_BASE_ADDRESS+0x520))
#define GPIOD_CR_REG		*((volatile u32*)(GPIOD_BASE_ADDRESS+0x524))
#define GPIOD_AMSEL_REG		*((volatile u32*)(GPIOD_BASE_ADDRESS+0x528))
#define GPIOD_PTCL_REG		*((volatile u32*)(GPIOD_BASE_ADDRESS+0x52C))
#define GPIOD_ADCCTL_REG	*((volatile u32*)(GPIOD_BASE_ADDRESS+0x530))
#define GPIOD_DMACTL_REG	*((volatile u32*)(GPIOD_BASE_ADDRESS+0x534))


/**********************************************************************************************************************
 *  Macros Of GPIOE Register Map
 *********************************************************************************************************************/
#if GPIOE_BUS_SELECT == APB

#define GPIOE_BASE_ADDRESS		0x40024000

#elif GPIOE_BUS_SELECT == AHB

#define GPIOE_BASE_ADDRESS		0x4005C000

#endif


#define GPIOE_DATA_REG		*((volatile u32*)(GPIOE_BASE_ADDRESS+0x3FC))	//0x3FC Offset mens that all pins will be affected
#define GPIOE_DIR_REG		*((volatile u32*)(GPIOE_BASE_ADDRESS+0x400))
#define GPIOE_IS_REG		*((volatile u32*)(GPIOE_BASE_ADDRESS+0x404))
#define GPIOE_IBE_REG		*((volatile u32*)(GPIOE_BASE_ADDRESS+0x408))
#define GPIOE_IEV_REG		*((volatile u32*)(GPIOE_BASE_ADDRESS+0x40C))
#define GPIOE_IM_REG		*((volatile u32*)(GPIOE_BASE_ADDRESS+0x410))
#define GPIOE_RIS_REG		*((volatile u32*)(GPIOE_BASE_ADDRESS+0x414))
#define GPIOE_MIS_REG		*((volatile u32*)(GPIOE_BASE_ADDRESS+0x418))
#define GPIOE_ICR_REG		*((volatile u32*)(GPIOE_BASE_ADDRESS+0x41C))
#define GPIOE_AFSEL_REG		*((volatile u32*)(GPIOE_BASE_ADDRESS+0x420))
#define GPIOE_DR2R_REG		*((volatile u32*)(GPIOE_BASE_ADDRESS+0x500))
#define GPIOE_DR4R_REG		*((volatile u32*)(GPIOE_BASE_ADDRESS+0x504))
#define GPIOE_DR8R_REG		*((volatile u32*)(GPIOE_BASE_ADDRESS+0x508))
#define GPIOE_ODR_REG		*((volatile u32*)(GPIOE_BASE_ADDRESS+0x50C))
#define GPIOE_PUR_REG		*((volatile u32*)(GPIOE_BASE_ADDRESS+0x510))
#define GPIOE_PDR_REG		*((volatile u32*)(GPIOE_BASE_ADDRESS+0x514))
#define GPIOE_SLR_REG		*((volatile u32*)(GPIOE_BASE_ADDRESS+0x518))
#define GPIOE_DEN_REG		*((volatile u32*)(GPIOE_BASE_ADDRESS+0x51C))
#define GPIOE_LOCK_REG		*((volatile u32*)(GPIOE_BASE_ADDRESS+0x520))
#define GPIOE_CR_REG		*((volatile u32*)(GPIOE_BASE_ADDRESS+0x524))
#define GPIOE_AMSEL_REG		*((volatile u32*)(GPIOE_BASE_ADDRESS+0x528))
#define GPIOE_PTCL_REG		*((volatile u32*)(GPIOE_BASE_ADDRESS+0x52C))
#define GPIOE_ADCCTL_REG	*((volatile u32*)(GPIOE_BASE_ADDRESS+0x530))
#define GPIOE_DMACTL_REG	*((volatile u32*)(GPIOE_BASE_ADDRESS+0x534))


/**********************************************************************************************************************
 *  Macros Of GPIOF Register Map
 *********************************************************************************************************************/
#if GPIOF_BUS_SELECT == APB

#define GPIOF_BASE_ADDRESS		0x40025000

#elif GPIOF_BUS_SELECT == AHB

#define GPIOF_BASE_ADDRESS		0x4005D000

#endif


#define GPIOF_DATA_REG		*((volatile u32*)(GPIOF_BASE_ADDRESS+0x3FC))	//0x3FC Offset mens that all pins will be affected
#define GPIOF_DIR_REG		*((volatile u32*)(GPIOF_BASE_ADDRESS+0x400))
#define GPIOF_IS_REG		*((volatile u32*)(GPIOF_BASE_ADDRESS+0x404))
#define GPIOF_IBE_REG		*((volatile u32*)(GPIOF_BASE_ADDRESS+0x408))
#define GPIOF_IEV_REG		*((volatile u32*)(GPIOF_BASE_ADDRESS+0x40C))
#define GPIOF_IM_REG		*((volatile u32*)(GPIOF_BASE_ADDRESS+0x410))
#define GPIOF_RIS_REG		*((volatile u32*)(GPIOF_BASE_ADDRESS+0x414))
#define GPIOF_MIS_REG		*((volatile u32*)(GPIOF_BASE_ADDRESS+0x418))
#define GPIOF_ICR_REG		*((volatile u32*)(GPIOF_BASE_ADDRESS+0x41C))
#define GPIOF_AFSEL_REG		*((volatile u32*)(GPIOF_BASE_ADDRESS+0x420))
#define GPIOF_DR2R_REG		*((volatile u32*)(GPIOF_BASE_ADDRESS+0x500))
#define GPIOF_DR4R_REG		*((volatile u32*)(GPIOF_BASE_ADDRESS+0x504))
#define GPIOF_DR8R_REG		*((volatile u32*)(GPIOF_BASE_ADDRESS+0x508))
#define GPIOF_ODR_REG		*((volatile u32*)(GPIOF_BASE_ADDRESS+0x50C))
#define GPIOF_PUR_REG		*((volatile u32*)(GPIOF_BASE_ADDRESS+0x510))
#define GPIOF_PDR_REG		*((volatile u32*)(GPIOF_BASE_ADDRESS+0x514))
#define GPIOF_SLR_REG		*((volatile u32*)(GPIOF_BASE_ADDRESS+0x518))
#define GPIOF_DEN_REG		*((volatile u32*)(GPIOF_BASE_ADDRESS+0x51C))
#define GPIOF_LOCK_REG		*((volatile u32*)(GPIOF_BASE_ADDRESS+0x520))
#define GPIOF_CR_REG		*((volatile u32*)(GPIOF_BASE_ADDRESS+0x524))
#define GPIOF_AMSEL_REG		*((volatile u32*)(GPIOF_BASE_ADDRESS+0x528))
#define GPIOF_PTCL_REG		*((volatile u32*)(GPIOF_BASE_ADDRESS+0x52C))
#define GPIOF_ADCCTL_REG	*((volatile u32*)(GPIOF_BASE_ADDRESS+0x530))
#define GPIOF_DMACTL_REG	*((volatile u32*)(GPIOF_BASE_ADDRESS+0x534))


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


#endif  /* GPIO_PRIVATE_H_ */

/**********************************************************************************************************************
 *  END OF FILE: GPIO_PRIVATE.h
 *********************************************************************************************************************/
