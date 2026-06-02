//////////////////////////////////////////////////////////////////////////////////	 
// 本程序只供学习使用，未经作者许可，不得用于其它任何用途
// 测试硬件：单片机STM32F407ZGT6,正点原子Explorer STM32F4开发板,主频168MHZ，晶振12MHZ
// QDtech-TFT液晶驱动 for STM32 IO模拟 -> 已移植到HAL库
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
// 1. 将标准库头文件 "stm32f4xx.h" 替换为 "stm32f4xx_hal.h"
// 2. 移除未使用的 "board.h"
// 3. 保留所有函数接口不变，底层依赖已移植的 lcd_hal、gui 等模块
**************************************************************************************************/	
#ifndef __TEST_H__
#define __TEST_H__

#include "stm32f4xx_hal.h"   // 使用HAL库

#ifndef u8
#define u8 uint8_t
#endif

#ifndef u16
#define u16 uint16_t
#endif

#ifndef s32
#define s32 uint32_t
#endif

// 函数声明（与原始代码完全一致）
void DrawTestPage(u8 *str);
void Test_Color(void);
void Test_FillRec(void);
void Test_Circle(void);
void Test_Triangle(void);
void English_Font_test(void);
void Chinese_Font_test(void);
void Pic_test(void);
void Load_Drow_Dialog(void);
void main_test(void);
void Rotate_Test(void);

#endif

