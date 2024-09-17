// LAB1_EX3.h

#ifndef INC_LAB1_EX6_H_
#define INC_LAB1_EX6_H_

#include "main.h"

// Định nghĩa tên cho các chân GPIO
#define LED0 GPIO_PIN_4
#define LED1 GPIO_PIN_5
#define LED2 GPIO_PIN_6
#define LED3 GPIO_PIN_7
#define LED4 GPIO_PIN_8
#define LED5 GPIO_PIN_9
#define LED6 GPIO_PIN_10
#define LED7 GPIO_PIN_11
#define LED8 GPIO_PIN_12
#define LED9 GPIO_PIN_13
#define LED10 GPIO_PIN_14
#define LED11 GPIO_PIN_15

extern int hour;
extern int min;
extern int sec;
extern int pre_hour;
extern int pre_min;
extern int pre_sec;

void clearAllClock();
void setNumberOnClock(int num);
void clearNumberOnClock(int num);

void GPIO_INIT_LAB1_EX6(void);
void EXECUTE_LAB1_EX6(void);

void GPIO_INIT_LAB1_EX7(void);
void EXECUTE_LAB1_EX7(void);

void GPIO_INIT_LAB1_EX10(int h, int m, int s);
void EXECUTE_LAB1_EX10(void);


#endif /* INC_LAB1_EX3_H_ */
