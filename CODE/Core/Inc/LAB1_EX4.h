// LAB1_EX4.h

#ifndef INC_LAB4_EX1_H_
#define INC_LAB4_EX1_H_

#include "main.h"

// Định nghĩa tên cho các chân GPIO
#define SEG0 GPIO_PIN_0
#define SEG1 GPIO_PIN_1
#define SEG2 GPIO_PIN_2
#define SEG3 GPIO_PIN_3
#define SEG4 GPIO_PIN_4
#define SEG5 GPIO_PIN_5
#define SEG6 GPIO_PIN_6


//LAB4

void GPIO_INIT_LAB1_EX4(void);
void EXECUTE_LAB1_EX4(void);
void display7SEG(int num);

extern int seg_counter;

#endif /* INC_LAB1_EX4_H_ */
