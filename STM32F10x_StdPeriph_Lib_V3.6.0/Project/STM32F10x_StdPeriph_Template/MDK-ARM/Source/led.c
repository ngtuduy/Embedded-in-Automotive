#include "led.h"

void init_led(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;

    RCC_APB2PeriphClockCmd(LED_GPIO_CLK, ENABLE);	 	
	GPIO_InitStructure.GPIO_Pin = LED_Pin;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(LED_GPIO, &GPIO_InitStructure);
    
//    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);	 	
//	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_11;
//	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
//	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
//	GPIO_Init(GPIOA, &GPIO_InitStructure);
    
    LedOff();
}

void BlinkLed(void)
{
    static uint8_t cnt = 0;
    cnt = (cnt + 1)%20;
    if (cnt < 10)
        LedOn();
    else
        LedOff();
}