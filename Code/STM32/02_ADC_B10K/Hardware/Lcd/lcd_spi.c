//////////////////////////////////////////////////////////////////////////////////	 
// 本程序只供学习使用，未经作者许可，不得用于其它任何用途
// 测试硬件：单片机STM32F407ZGT6,正点原子Explorer STM32F4开发板,主频168MHZ，晶振12MHZ
// QDtech-TFT液晶驱动 for STM32 IO模拟 -> 软件SPI模块，已移植到HAL库
// xiao冯@ShenZhen QDtech co.,LTD
// 公司网站:www.qdtft.com
// 淘宝网站：http://qdtech.taobao.com
// wiki技术网站：http://www.lcdwiki.com
// 我司提供技术支持，任何技术问题欢迎随时交流学习
// 固话(传真) :+86 0755-23594567 
// 手机:15989313508（冯工） 
// 邮箱:lcdwiki01@gmail.com    support@lcdwiki.com    goodtft@163.com 
// 技术支持QQ:3002773612  3002778157
// 技术交流QQ群:324828016
// 创建日期:2018/08/09
// 版本：V1.0 (HAL库移植版)
// 版权所有，盗版必究。
// Copyright(C) 深圳市全动电子技术有限公司 2018-2028
// All rights reserved
/****************************************************************************************************
// 移植说明：
// 1. 将原标准库头文件 "spi.h" 替换为 "lcd_spi.h"
// 2. 软件SPI底层依赖 lcd.h 中定义的 LCD_SDA_SET/CLR 和 LCD_SCL_SET/CLR 宏
// 3. 这些宏已在 lcd.h 中基于 HAL_GPIO_WritePin 实现，无需修改时序逻辑
// 4. 保留原有函数 SPIv_WriteData 完全不变
**************************************************************************************************/	
#include "lcd_spi.h"

/*****************************************************************************
 * @name       :void SPIv_WriteData(u8 Data)
 * @date       :2018-08-09 
 * @function   :Write a byte of data using STM32's Software SPI
 * @parameters :Data:Data to be written
 * @retvalue   :None
******************************************************************************/
void SPIv_WriteData(u8 Data)
{
    unsigned char i = 0;
    for(i = 8; i > 0; i--)
    {
        if(Data & 0x80)        
            LCD_SDA_SET;   // 输出高电平（HAL库宏）
        else 
            LCD_SDA_CLR;   // 输出低电平

        LCD_SCL_CLR;       // 时钟低电平，准备数据
        LCD_SCL_SET;       // 时钟上升沿，从机采样数据
        Data <<= 1;        // 左移，准备下一位
    }
}

