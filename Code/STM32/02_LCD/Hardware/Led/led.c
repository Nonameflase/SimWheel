#include "led.h"

void Led_Init(void)
{
	GPIO_InitTypeDef gpio_init_struct;
	
	__HAL_RCC_GPIOB_CLK_ENABLE();
	
	gpio_init_struct.Pin		= Led_GPIO_PIN;
	gpio_init_struct.Pull		= GPIO_PULLUP;
	gpio_init_struct.Mode		= GPIO_MODE_OUTPUT_PP;
	gpio_init_struct.Speed		= GPIO_SPEED_FREQ_LOW;
	HAL_GPIO_Init(Led_GPIO_PORT,&gpio_init_struct);
	
	LED(1);
	
}
