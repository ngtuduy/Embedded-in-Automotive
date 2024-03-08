#include "timer.h"

volatile unsigned int timer_value = 0;
volatile unsigned int timer_cnt = 0;
unsigned int timer_MUL = 0;
volatile unsigned char flag_timer = 0;

// 1ms
void init_timer(void)
{
	if (SysTick_Config(SystemCoreClock / 1000))
    { 
        /* Capture error */ 
        while (1);
    }
}

	
void timer_isr(void)
{
	timer_cnt++;
    if (timer_cnt >= timer_MUL)
    {
        timer_cnt = 0;
        flag_timer = 1;
    }
}

void SetTimer_ms(unsigned int ms)
{
	timer_MUL = ms;
	timer_cnt = 0;
	flag_timer = 0;
}
