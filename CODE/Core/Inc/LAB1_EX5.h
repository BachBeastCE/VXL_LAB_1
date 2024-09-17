// LAB1_EX5.h

#ifndef INC_LAB5_EX1_H_
#define INC_LAB5_EX1_H_

#include "main.h"
#include "LAB1_EX3.h"
#include "LAB1_EX4.h"

// Định nghĩa tên cho các chân GPIO
#define SEG2_0 GPIO_PIN_7
#define SEG2_1 GPIO_PIN_8
#define SEG2_2 GPIO_PIN_9
#define SEG2_3 GPIO_PIN_10
#define SEG2_4 GPIO_PIN_11
#define SEG2_5 GPIO_PIN_12
#define SEG2_6 GPIO_PIN_13

void display7SEG_2(int num);
void GPIO_INIT_LAB1_EX5(void);
void EXECUTE_LAB1_EX5(void);

#endif /* INC_LAB1_EX5_H_ */
