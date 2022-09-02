/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  GPTM_Program.c
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
#include <math.h>
#include "GPTM_Config.h"
#include "GPTM_Interface.h"
#include "GPTM_Private.h"


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
* \Syntax          : void GPTM0_Init(void)
* \Description     : This function initializes TIMER0.
*
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : void   
* \Parameters (out): void
* \Return value:   : Std_ReturnType  E_OK
*                                    E_NOT_OK
*******************************************************************************/
void GPTM0_Init(void)
{

	RCGCTIMER_REG |= (1 << 0);

#if GPTM0_MODE == GPTM_ONE_SHOT

#elif GPTM0_MODE == GPTM_PERIODIC

	GPTM0_CTL_REG &= (u32)(~(1 << TAEN));
	GPTM0_TAMR_REG |= 0x02;


	#if	GPTM0_TIMERA_TIME_OUT_INTERRUPT == ENABLED
	GPTM0_IMR_REG |= (1 << TATOIM);
	#elif GPTM0_TIMERA_TIME_OUT_INTERRUPT == DISABLED
	GPTM0_IMR_REG &= (u32)(~(1 << TATOIM));
	#endif




	#if	GPTM0_CONCAT_MODE == ENABLED
	GPTM0_CFG_REG = 0x00000000;
	#elif GPTM0_CONCAT_MODE == DISABLED
	GPTM0_CFG_REG = 0x4;
	#endif




	GPTM0_ICR_REG |= (1 << TATOCINT);
	GPTM0_CTL_REG |= (1 << TAEN);



#elif GPTM0_MODE == GPTM_RTC

#elif GPTM0_MODE == GPTM_INPUT_EDGE_COUNT

#elif GPTM0_MODE == GPTM_INPUT_EDGE_TIME

#elif GPTM0_MODE == GPTM_PWM

#endif



}



/******************************************************************************
* \Syntax          : void GPTM0_TIMERA_TIMEOUT_INTERRUPT_CLR(void)
* \Description     : This function clears the TIMER0A Time Out interrupt Flag.
*
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : parameterName   Parameter Description
* \Parameters (out): None
* \Return value:   : Std_ReturnType  E_OK
*                                    E_NOT_OK
*******************************************************************************/

void GPTM0_TIMERA_TIMEOUT_INTERRUPT_CLR(void)
{
	GPTM0_ICR_REG |= (1 << TATOCINT);
}

/******************************************************************************
* \Syntax          : void GPTM0_TIMERA_PERIOD(u32 period)
* \Description     : This function sets the period of TIMER0A. 
*
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : u32   period -> can only take values from 0 to 1044 ms.
* \Parameters (out): None
* \Return value:   : Std_ReturnType  E_OK
*                                    E_NOT_OK
*******************************************************************************/

void GPTM0_TIMERA_PERIOD(u32 period)
{
	static f64 prescale_value;
	static u32 load_value=65535;
	
	prescale_value=((f64)period/load_value)*16000;
	
	while(fmod(prescale_value,1)!=0)
	{
		load_value--;
		prescale_value=((f64)period/load_value)*16000;
	}
	
	
	GPTM0_TAILR_REG = load_value;
	GPTM0_TAPR_REG = (u32)prescale_value;
	
	
}

/**********************************************************************************************************************
 *  END OF FILE: GPTM_Program.c
 *********************************************************************************************************************/
