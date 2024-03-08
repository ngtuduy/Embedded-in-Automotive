#include "delay.h"

volatile uint16_t delay_cnt = 0;

void delay_ms(unsigned int value)
{
	volatile unsigned int i,j;
	for(i=0;i<value;i++)
		for(j=0;j<8000;j++);
}

void delay_us(unsigned int value)
{
	volatile unsigned int i,j;
	for(i=0;i<value;i++)
		for(j=0;j<8;j++);
}
