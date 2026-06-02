#include "stm32f4xx_hal.h"
#include "./SYSTEM/delay/delay.h"

#include "lcd.h"
#include "gui.h"
#include "test.h"

int main(void)
{
    HAL_Init();
    sys_stm32_clock_init(336, 8, 2, 7);         /* ����ʱ��,168Mhz */
	delay_init(168);                            /* ��ʱ��ʼ�� */
	
	LCD_Init();									//液晶屏初始化
	
	

    while (1)
    {
		//main_test();           // 测试主界面
        //Test_Color();          // 简单刷屏填充测试
        //Test_FillRec();        // GUI矩形绘图测试
        //Test_Circle();         // GUI画圆测试
        //Test_Triangle();       // GUI三角形绘图测试
        //English_Font_test();   // 英文字体示例测试
        //Chinese_Font_test();   // 中文字体示例测试
        //Pic_test();            // 图片显示示例测试
        Rotate_Test();         // 旋转显示测试
    }
}
