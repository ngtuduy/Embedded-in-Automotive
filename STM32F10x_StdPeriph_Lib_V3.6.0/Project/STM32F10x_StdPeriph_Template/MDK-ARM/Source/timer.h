#ifndef __TIMER_H_
#define __TIMER_H_

#include "stm32f10x.h"

extern volatile unsigned char flag_timer;

void init_timer(void);
void timer_isr(void);
void SetTimer_ms(unsigned int ms);

#endif
