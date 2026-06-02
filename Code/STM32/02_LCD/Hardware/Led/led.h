#ifndef __LED_H
#define __LED_H

#include "stm32f4xx_hal.h"
#include "./SYSTEM/delay/delay.h"
#include "./SYSTEM/sys/sys.h"

#define Led_GPIO_PORT GPIOB
#define Led_GPIO_PIN GPIO_PIN_2

/* LED¶Ë¿Ú¶¨Òå */
#define LED(x)   do{ x ? \
                      HAL_GPIO_WritePin(Led_GPIO_PORT, Led_GPIO_PIN, GPIO_PIN_SET) : \
                      HAL_GPIO_WritePin(Led_GPIO_PORT, Led_GPIO_PIN, GPIO_PIN_RESET); \
                  }while(0)       /* LED0 = RED */
void Led_Init(void);
				  
#endif
