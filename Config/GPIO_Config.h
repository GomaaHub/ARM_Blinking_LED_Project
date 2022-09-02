/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  GPIO_Config.h
 *       Module:  -
 *
 *  Description:  GPIO Configuration
 *
 *********************************************************************************************************************/
#ifndef GPIO_CONFIG_H_
#define GPIO_CONFIG_H_

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  GPIO MODES
 *********************************************************************************************************************/

#define GPIO_DIGITAL_INPUT		0
#define GPIO_DIGITAL_OUTPUT		1


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

#define APB	0
#define AHB	1

#define DISABLED		0
#define ENABLED			1

#define FALLING_EDGE	0
#define RISING_EDGE		1

/**********************************************************************************************************************
 *  GPIO PORTA CONFIG
 *********************************************************************************************************************/

#define GPIOA_BUS_SELECT	APB
#define GPIOA_MODE				GPIO_DIGITAL_OUTPUT

/**********************************************************************************************************************
 *  GPIO PORTB CONFIG
 *********************************************************************************************************************/

#define GPIOB_BUS_SELECT	APB
#define GPIOB_MODE				GPIO_DIGITAL_OUTPUT

/**********************************************************************************************************************
 *  GPIO PORTC CONFIG
 *********************************************************************************************************************/

#define GPIOC_BUS_SELECT	APB
#define GPIOC_MODE			GPIO_DIGITAL_OUTPUT

/**********************************************************************************************************************
 *  GPIO PORTD CONFIG
 *********************************************************************************************************************/

#define GPIOD_BUS_SELECT	APB
#define GPIOD_MODE			GPIO_DIGITAL_OUTPUT

/**********************************************************************************************************************
 *  GPIO PORTE CONFIG
 *********************************************************************************************************************/

#define GPIOE_BUS_SELECT	APB
#define GPIOE_MODE			GPIO_DIGITAL_OUTPUT

/**********************************************************************************************************************
 *  GPIO PORTF CONFIG
 *********************************************************************************************************************/

#define GPIOF_BUS_SELECT			APB
#define GPIOF_MODE						GPIO_DIGITAL_INPUT
#define GPIOF_PULLUP					ENABLED
#define GPIOF_INTERRUPT				ENABLED


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


#endif  /* GPIO_CONFIG_H_ */

/**********************************************************************************************************************
 *  END OF FILE: GPIO_Config.h
 *********************************************************************************************************************/