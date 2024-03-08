#include "stm32f10x.h"
#include <stdio.h>
#include <stdlib.h>
#include "delay.h"
#include "timer.h"
#include "uart.h"
#include "led.h"

int main(void)
{

    NVIC_SetVectorTable(NVIC_VectTab_FLASH, 0x8002000);
    SCB->VTOR = (uint32_t)0x08002000;
    
    init_led();
    USART1_Init(115200); 
    init_timer();
    SetTimer_ms(50);
    
    printf("A: %x\r\n", (unsigned int)(&GPIOA->ODR));
    
    while (1)
    {
        while (!flag_timer);
        flag_timer = 0;
        BlinkLed();           
    }
}
