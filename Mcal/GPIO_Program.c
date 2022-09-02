/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  GPIO_Program.c
 *        \brief
 *
 *      \details
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

#include "types.h"
#include "GPIO_Interface.h"
#include "GPIO_Private.h"
#include "GPIO_Config.h"


/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/


/******************************************************************************
* \Syntax          : void GPIO_PORTA_Init(void)
* \Description     : This function initializes PORT A according to the Configurations in the GPIO_Config.h file
*
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : Void
* \Parameters (out): Void
* \Return value:   : Void
*
*******************************************************************************/
void GPIO_PORTA_Init(void)
{
	RCGCGPIO_REG |= (1 << GPIO_PORTA);

#if GPIOA_MODE == GPIO_DIGITAL_OUTPUT
	GPIOA_DEN_REG |= 0xFF;
	GPIOA_DIR_REG |= 0xFF;
	
#elif GPIOA_MODE == GPIO_DIGITAL_INTPUT
	GPIOA_DIR_REG &= ~(0xFF);
	GPIOA_DEN_REG |= 0xFF;
#endif
}

/******************************************************************************
* \Syntax          : void GPIO_PORTB_Init(void)
* \Description     : This function initializes PORT B according to the Configurations in the GPIO_Config.h file
*
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : Void
* \Parameters (out): Void
* \Return value:   : Void
*
*******************************************************************************/
void GPIO_PORTB_Init(void)
{
	RCGCGPIO_REG |= (1 << GPIO_PORTB);

#if GPIOB_MODE == GPIO_DIGITAL_OUTPUT
	GPIOB_DIR_REG |= 0xFF;
	GPIOB_DEN_REG |= 0xFF;
#elif GPIOB_MODE == GPIO_DIGITAL_INTPUT
	GPIOB_DIR_REG &= ~(0xFF);
	GPIOB_DEN_REG |= 0xFF;
#endif
}

/******************************************************************************
* \Syntax          : void GPIO_PORTC_Init(void)
* \Description     : This function initializes PORT C according to the Configurations in the GPIO_Config.h file
*
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : Void
* \Parameters (out): Void
* \Return value:   : Void
*
*******************************************************************************/
void GPIO_PORTC_Init(void)
{
	RCGCGPIO_REG |= (1 << GPIO_PORTC);

#if GPIOC_MODE == GPIO_DIGITAL_OUTPUT
	GPIOC_DIR_REG |= 0xFF;
	GPIOC_DEN_REG |= 0xFF;
#elif GPIOC_MODE == GPIO_DIGITAL_INTPUT
	GPIOC_DIR_REG &= ~(0xFF);
	GPIOC_DEN_REG |= 0xFF;
#endif
}

/******************************************************************************
* \Syntax          : void GPIO_PORTD_Init(void)
* \Description     : This function initializes PORT D according to the Configurations in the GPIO_Config.h file
*
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : Void
* \Parameters (out): Void
* \Return value:   : Void
*
*******************************************************************************/
void GPIO_PORTD_Init(void)
{
	RCGCGPIO_REG |= (1 << GPIO_PORTD);

#if GPIOD_MODE == GPIO_DIGITAL_OUTPUT
	GPIOD_DIR_REG |= 0xFF;
	GPIOD_DEN_REG |= 0xFF;
#elif GPIOD_MODE == GPIO_DIGITAL_INTPUT
	GPIOD_DIR_REG &= ~(0xFF);
	GPIOD_DEN_REG |= 0xFF;
#endif
}

/******************************************************************************
* \Syntax          : void GPIO_PORTE_Init(void)
* \Description     : This function initializes PORT E according to the Configurations in the GPIO_Config.h file
*
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : Void
* \Parameters (out): Void
* \Return value:   : Void
*
*******************************************************************************/
void GPIO_PORTE_Init(void)
{
	RCGCGPIO_REG |= (1 << GPIO_PORTE);

#if GPIOE_MODE == GPIO_DIGITAL_OUTPUT
	GPIOE_DIR_REG |= 0xFF;
	GPIOE_DEN_REG |= 0xFF;
#elif GPIOE_MODE == GPIO_DIGITAL_INTPUT
	GPIOE_DIR_REG &= ~(0xFF);
	GPIOE_DEN_REG |= 0xFF;
#endif
}

/******************************************************************************
* \Syntax          : void GPIO_PORTF_Init(void)
* \Description     : This function initializes PORT F according to the Configurations in the GPIO_Config.h file
*
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : Void
* \Parameters (out): Void
* \Return value:   : Void
*
*******************************************************************************/
void GPIO_PORTF_Init(void)
{
	RCGCGPIO_REG |= (1 << GPIO_PORTF);

	GPIOF_LOCK_REG = 0x4C4F434B;
	GPIOF_CR_REG = 0x01;
	GPIOF_LOCK_REG = 0x00;
	
	GPIOF_IEV_REG = 0x00;
	
#if GPIOF_MODE == GPIO_DIGITAL_OUTPUT
	GPIOF_DIR_REG |= 0xFF;
	GPIOF_DEN_REG |= 0xFF;
#elif GPIOF_MODE == GPIO_DIGITAL_INPUT
	GPIOF_DIR_REG &= (u32)(~(0xFF));
	GPIOF_DEN_REG |= 0xFF;
#endif
	
	#if GPIOF_PULLUP == ENABLED
	GPIOF_PUR_REG |= (1 << 0) | (1 << 4); 
	#endif
	
	GPIOF_IM_REG = 0xFF;
	
	
}

/******************************************************************************
* \Syntax          : void GPIO_WritePinValue(GPIO_PORTS PORT,GPIO_PINS PIN)
* \Description     : This function writes logic high or low to a specified PIN.
*
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : PORT		PORTA -> PORTF
* 					 PIN		PIN0 -> PIN7
* 					 LOGIC		LOW/HIGH
*
* \Parameters (out): Void
* \Return value:   : Void
*
*******************************************************************************/
void GPIO_WritePinValue(GPIO_PORTS PORT,GPIO_PINS PIN,GPIO_LOGIC LOGIC)
{
	switch(LOGIC)
	{
		case GPIO_HIGH:
		{
			switch(PORT)
			{
				case GPIO_PORTA: GPIOA_DATA_REG |= (1 << PIN); break;
				case GPIO_PORTB: GPIOB_DATA_REG |= (1 << PIN); break;
				case GPIO_PORTC: GPIOC_DATA_REG |= (1 << PIN); break;
				case GPIO_PORTD: GPIOD_DATA_REG |= (1 << PIN); break;
				case GPIO_PORTE: GPIOE_DATA_REG |= (1 << PIN); break;
				case GPIO_PORTF: GPIOF_DATA_REG |= (1 << PIN); break;
			}

			break;
		}
		
		
		case GPIO_LOW:
		{
			switch(PORT)
			{
				case GPIO_PORTA: GPIOA_DATA_REG &= ~(1 << PIN); break;
				case GPIO_PORTB: GPIOB_DATA_REG &= ~(1 << PIN); break;
				case GPIO_PORTC: GPIOC_DATA_REG &= ~(1 << PIN); break;
				case GPIO_PORTD: GPIOD_DATA_REG &= ~(1 << PIN); break;
				case GPIO_PORTE: GPIOE_DATA_REG &= ~(1 << PIN); break;
				case GPIO_PORTF: GPIOF_DATA_REG &= ~(1 << PIN); break;
				
			}

			break;
		}
		
		
		
	}
}


/******************************************************************************
* \Syntax          : u8 GPIO_GetPinValue(GPIO_PORTS PORT,GPIO_PINS PIN)
* \Description     : This function gets the logic written from a specified PIN.
*
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : PORT	PORTA -> PORTF
* 					 PIN	PIN0 -> PIN7
*
* \Parameters (out): none
* \Return value:   : u8 value
*
*******************************************************************************/
u8 GPIO_GetPinValue(GPIO_PORTS PORT,GPIO_PINS PIN)
{
	u8 value;

	switch(PORT)
	{
		case GPIO_PORTA: value = ((GPIOA_DATA_REG >> PIN) & 1);  break;
		case GPIO_PORTB: value = ((GPIOB_DATA_REG >> PIN) & 1);  break;
		case GPIO_PORTC: value = ((GPIOC_DATA_REG >> PIN) & 1);  break;
		case GPIO_PORTD: value = ((GPIOD_DATA_REG >> PIN) & 1);  break;
		case GPIO_PORTE: value = ((GPIOE_DATA_REG >> PIN) & 1);  break;
		case GPIO_PORTF: value = ((GPIOF_DATA_REG >> PIN) & 1);  break;
		
	}

	return value;
}

/******************************************************************************
* \Syntax          : void GPIO_WritePortValue(GPIO_PORTS PORT,u8 DATA)
* \Description     : This function writes a byte to a specified PORT.
*
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : PORT	PORTA -> PORTF
* 					 DATA	byte (u8)
*
* \Parameters (out): Void
* \Return value:   : Void
*
*******************************************************************************/
void GPIO_WritePortValue(GPIO_PORTS PORT,u8 DATA)
{


	switch(PORT)
	{
		case GPIO_PORTA: GPIOA_DATA_REG = DATA;  break;
		case GPIO_PORTB: GPIOB_DATA_REG = DATA;  break;
		case GPIO_PORTC: GPIOC_DATA_REG = DATA;  break;
		case GPIO_PORTD: GPIOD_DATA_REG = DATA;  break;
		case GPIO_PORTE: GPIOE_DATA_REG = DATA;  break;
		case GPIO_PORTF: GPIOF_DATA_REG = DATA;  break;
		
	}

}

/******************************************************************************
* \Syntax          : void GPIO_WritePinDirection(GPIO_PORTS PORT,GPIO_PINS PIN, GPIO_DIRECTION DIRECTION)
* \Description     : This function configures a specified PIN as INPUT or OUTPUT
*
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : PORT			PORTA -> PORTF
* 					 PIN			PIN0 -> PIN7
* 					 DIRECTION		INPUT/OUTPUT
*
* \Parameters (out): Void
* \Return value:   : Void
*
*******************************************************************************/
void GPIO_WritePinDirection(GPIO_PORTS PORT,GPIO_PINS PIN, GPIO_DIRECTION DIRECTION)
{
	switch(DIRECTION)
		{
			case GPIO_OUTPUT:
			{
				switch(PORT)
				{
					case GPIO_PORTA: GPIOA_DIR_REG |= (1 << PIN); break;
					case GPIO_PORTB: GPIOB_DIR_REG |= (1 << PIN); break;
					case GPIO_PORTC: GPIOC_DIR_REG |= (1 << PIN); break;
					case GPIO_PORTD: GPIOD_DIR_REG |= (1 << PIN); break;
					case GPIO_PORTE: GPIOE_DIR_REG |= (1 << PIN); break;
					case GPIO_PORTF: GPIOF_DIR_REG |= (1 << PIN); break;
					
				}

				break;
			}
			case GPIO_INPUT:
			{
				switch(PORT)
				{
					case GPIO_PORTA: GPIOA_DIR_REG &= ~(1 << PIN); break;
					case GPIO_PORTB: GPIOB_DIR_REG &= ~(1 << PIN); break;
					case GPIO_PORTC: GPIOC_DIR_REG &= ~(1 << PIN); break;
					case GPIO_PORTD: GPIOD_DIR_REG &= ~(1 << PIN); break;
					case GPIO_PORTE: GPIOE_DIR_REG &= ~(1 << PIN); break;
					case GPIO_PORTF: GPIOF_DIR_REG &= ~(1 << PIN); break;
					
				}

				break;
			}
			
		}

}


/******************************************************************************
* \Syntax          : void GPIO_INTERRUPT_CLR (GPIO_PORTS PORT, GPIO_PINS PIN)
* \Description     : This function clears the GPIO interrupt
*
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : PORT			PORTA -> PORTF
* 					 PIN			PIN0 -> PIN7
* 					 DIRECTION		INPUT/OUTPUT
*
* \Parameters (out): Void
* \Return value:   : Void
*
*******************************************************************************/

void GPIO_INTERRUPT_CLR (GPIO_PORTS PORT, GPIO_PINS PIN)
{
	switch(PORT)
				{
					case GPIO_PORTA: GPIOA_ICR_REG |= (1 << PIN); break;
					case GPIO_PORTB: GPIOB_ICR_REG |= (1 << PIN); break;
					case GPIO_PORTC: GPIOC_ICR_REG |= (1 << PIN); break;
					case GPIO_PORTD: GPIOD_ICR_REG |= (1 << PIN); break;
					case GPIO_PORTE: GPIOE_ICR_REG |= (1 << PIN); break;
					case GPIO_PORTF: GPIOF_ICR_REG |= (1 << PIN); break;
					
				}
	
}

/******************************************************************************
* \Syntax          : u8 GPIO_GET_INTERRUPT_STATUS (GPIO_PORTS PORT, GPIO_PINS PIN)
* \Description     : This function gets the interrupt status for a pin.
*
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : PORT			PORTA -> PORTF
* 					 PIN			PIN0 -> PIN7
* 					
*
* \Parameters (out): Void
* \Return value:   : Void
*
*******************************************************************************/

u8 GPIO_GET_INTERRUPT_STATUS (GPIO_PORTS PORT, GPIO_PINS PIN)
{
	u8 value;
	
	switch(PORT)
				{
					case GPIO_PORTA: value = ((GPIOA_MIS_REG >> PIN )& 1); break;
					case GPIO_PORTB: value = ((GPIOB_MIS_REG >> PIN )& 1); break;
					case GPIO_PORTC: value = ((GPIOC_MIS_REG >> PIN )& 1); break;
					case GPIO_PORTD: value = ((GPIOD_MIS_REG >> PIN )& 1); break;
					case GPIO_PORTE: value = ((GPIOE_MIS_REG >> PIN )& 1); break;
					case GPIO_PORTF: value = ((GPIOF_MIS_REG >> PIN )& 1); break;
					
				}
	return value;
}

/**********************************************************************************************************************
 *  END OF FILE: GPIO_Program.c
 *********************************************************************************************************************/
