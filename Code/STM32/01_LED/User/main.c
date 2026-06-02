#include "stm32f4xx_hal.h"
#include "led.h"

int main(void)
{
    HAL_Init();
    sys_stm32_clock_init(336, 8, 2, 7);         /* ����ʱ��,168Mhz */
	delay_init(168);                            /* ��ʱ��ʼ�� */
	Led_Init();

    while (1)
    {
		LED(1);
		delay_ms(500);		//PB2����
		LED(0);
		delay_ms(100);		//PB2����
    }
}
