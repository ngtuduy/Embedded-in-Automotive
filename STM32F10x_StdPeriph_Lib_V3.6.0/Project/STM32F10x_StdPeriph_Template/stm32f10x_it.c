#include "stm32f10x_it.h"
#include "timer.h"
#include "uart.h"

uint8_t counter = 0;

void SysTick_Handler(void)
{
    timer_isr();
}

void USART1_IRQHandler(void)
{
    if(USART_GetITStatus(USART1, USART_IT_RXNE) != RESET)
    {

    }

}



