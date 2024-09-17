// LAB1_EX3.h

#ifndef INC_LAB1_EX3_H_
#define INC_LAB1_EX3_H_

#include "main.h"

// Định nghĩa tên cho các chân GPIO
#define LED_RED1 GPIO_PIN_8
#define LED_YELLOW1 GPIO_PIN_9
#define LED_GREEN1 GPIO_PIN_10

#define LED_RED2 GPIO_PIN_11
#define LED_YELLOW2 GPIO_PIN_12
#define LED_GREEN2 GPIO_PIN_13

#define stop 0
#define slow 1
#define run 2

//Khai báo biến đếm và trạng thái
extern int counter_light_1;
extern int counter_light_2;
extern int status_light_1;
extern int status_light_2;

void GPIO_INIT_LAB1_EX3(void);
void EXECUTE_LAB1_EX3(void);


#endif /* INC_LAB1_EX3_H_ */
