#ifndef __UART_H_
#define __UART_H_

#include "stm32f10x.h"
#include "stdio.h"

#define USART1_GPIO             GPIOA
#define USART1_GPIO_CLK         RCC_APB2Periph_GPIOA
#define USART1_RxPin            GPIO_Pin_10
#define USART1_TxPin            GPIO_Pin_9

#define USART2_GPIO             GPIOA
#define USART2_GPIO_CLK         RCC_APB2Periph_GPIOA
#define USART2_RxPin            GPIO_Pin_3
#define USART2_TxPin            GPIO_Pin_2

#define USART3_GPIO             GPIOB
#define USART3_GPIO_CLK         RCC_APB2Periph_GPIOB
#define USART3_RxPin            GPIO_Pin_11
#define USART3_TxPin            GPIO_Pin_10

void USART1_IRQ_Handler(void);
void USART1_Init(uint32_t baudrate);
void USART1_SendChar(char chr);
void USART1_SendString(char* str);
void USART1_SendNum(long num);
void USART1_SendGraphData(unsigned int data_1, unsigned int data_2, unsigned int data_3);

void USART2_IRQ_Handler(void);
void USART2_Init(uint32_t baudrate);
void USART2_SendChar(char chr);
void USART2_SendString(char* str);
void USART2_SendNum(long num);
void USART2_SendGraphData(unsigned int data_1, unsigned int data_2, unsigned int data_3);

void USART3_IRQ_Handler(void);
void USART3_Init(uint32_t baudrate);
void USART3_SendChar(char chr);
void USART3_SendString(char* str);
void USART3_SendNum(long num);
void USART3_SendGraphData(unsigned int data_1, unsigned int data_2, unsigned int data_3);

#endif
