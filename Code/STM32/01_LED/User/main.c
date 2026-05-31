#include "stm32f4xx_hal.h"
#include "led.h"

int main(void)
{
    HAL_Init();
    sys_stm32_clock_init(336, 8, 2, 7);         /* 设置时钟,168Mhz */
	delay_init(168);                            /* 延时初始化 */
	Led_Init();

    while (1)
    {
		LED(1);
		delay_ms(500);		//PB2灯亮
		LED(0);
		delay_ms(100);		//PB2灯灭
    }
}
