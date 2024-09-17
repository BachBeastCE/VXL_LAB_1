// LAB1_EX1.h

#ifndef INC_LAB1_EX1_H_
#define INC_LAB1_EX1_H_

#include "main.h"

// Định nghĩa tên cho các chân GPIO
#define LED_RED GPIO_PIN_5
#define LED_YELLOW GPIO_PIN_6

//Khai báo biến đếm
extern int counter;

//LAB1
void GPIO_INIT_LAB1_EX1(void);
void EXECUTE_LAB1_EX1(void);


#endif /* INC_LAB1_EX1_H_ */
