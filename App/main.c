#include "types.h"
#include "GPIO_Interface.h"
#include "GPTM_Interface.h"
#include "NVIC_Interface.h"
#include "GPIO_Config.h"
#include "GPTM_Config.h"


static u32 delay_time = 100;

int main (void)
{
	
	GPIO_PORTA_Init();
	GPIO_PORTF_Init();
	
	GPIO_WritePinDirection(GPIO_PORTF,GPIO_PIN2,1);
	GPIO_WritePinDirection(GPIO_PORTF,GPIO_PIN3,1);
	
	GPTM0_Init();
	
	GPTM0_TIMERA_PERIOD(delay_time);
	Global_Interrupt_Enable();
	NVIC_Init(TIMER0A_IRQ);
	NVIC_Init(GPIOF_IRQ);
	
	while(1)
	{
	
	}

}

void TIMER0A_Handler (void)
{
	static x;
	
	GPTM0_TIMERA_TIMEOUT_INTERRUPT_CLR();
	
	switch(x)
	{
		case 0: GPIO_WritePinValue(GPIO_PORTA,GPIO_PIN2,GPIO_HIGH); x=1; break;
	  case 1: GPIO_WritePinValue(GPIO_PORTA,GPIO_PIN2,GPIO_LOW); x=0; break;
	}

	
}


void GPIOF_Handler (void)
{
	static u8 x;
	static u8 y;
	
	
	
	
	x=GPIO_GET_INTERRUPT_STATUS(GPIO_PORTF,GPIO_PIN0);
	y=GPIO_GET_INTERRUPT_STATUS(GPIO_PORTF,GPIO_PIN4);
	
		if(x==1) 
		{
			
			delay_time+=100;
			
			if(delay_time>1000) delay_time=1000;
			
			GPTM0_TIMERA_PERIOD(delay_time);
			
			x=0;
			
		GPIO_INTERRUPT_CLR(GPIO_PORTF, GPIO_PIN0);
			
		}
		else if(y==1)
		{
		
	
	
			delay_time-=100;	
			
			if(delay_time<100) delay_time=100;
			
			GPTM0_TIMERA_PERIOD(delay_time);
			y=0;
	
	
			GPIO_INTERRUPT_CLR(GPIO_PORTF, GPIO_PIN4);
			
		}
	
}

