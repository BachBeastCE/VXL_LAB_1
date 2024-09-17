// LAB1_EX1.h

#ifndef INC_LAB1_EX2_H_
#define INC_LAB1_EX2_H_

#include "main.h"

// Định nghĩa tên cho các chân GPIO
#define LED_RED GPIO_PIN_5
#define LED_YELLOW GPIO_PIN_6
#define LED_GREEN GPIO_PIN_7

#define stop 0
#define slow 1
#define run 2

//Khai báo biến đếm
extern int counter_light;
extern int status_light;

void GPIO_INIT_LAB1_EX2(void);
void EXECUTE_LAB1_EX2(void);


#endif /* INC_LAB1_EX2_H_ */
