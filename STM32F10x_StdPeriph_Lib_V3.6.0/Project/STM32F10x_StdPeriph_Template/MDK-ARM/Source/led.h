#ifndef __LED_H_
#define __LED_H_

#include "stm32f10x.h"

#define LED_GPIO             		GPIOC
#define LED_GPIO_CLK         		RCC_APB2Periph_GPIOC
#define LED_Pin           		    GPIO_Pin_13

/* Macro ---------------------------------------------------------------------*/
#define LedOn()       				GPIO_ResetBits(LED_GPIO, LED_Pin)
#define LedOff()      				GPIO_SetBits(LED_GPIO, LED_Pin)
#define LedToggle()      			LED_GPIO->ODR ^= LED_Pin;

/* Functions -----------------------------------------------------------------*/
void init_led(void);
void BlinkLed(void);

#endif
