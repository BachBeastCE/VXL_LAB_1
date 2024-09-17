#include "LAB1_EX3.h"


int counter_light_1 ;
int counter_light_2 ;
int status_light_1 ;
int status_light_2 ;


void GPIO_INIT_LAB1_EX3(void){
	// Bật clock cho GPIOB
    __HAL_RCC_GPIOA_CLK_ENABLE();

    // Cấu hình các chân GPIO
    GPIO_InitTypeDef GPIO_InitStruct = {0};
    GPIO_InitStruct.Pin = LED_RED1|LED_YELLOW1|LED_GREEN1|LED_RED2|LED_YELLOW2|LED_GREEN2;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);


    // Cài đặt các trạng thái đầu
    counter_light_1 = 3;
    counter_light_2 = 5;
    status_light_1 = run;
    status_light_2 = stop;

    // Cài đặt giá trị ban đầu cho các chân GPIO của đèn 1
    HAL_GPIO_WritePin(GPIOA, LED_RED1, GPIO_PIN_RESET);   // Chân PA8 = 0
    HAL_GPIO_WritePin(GPIOA, LED_YELLOW1, GPIO_PIN_RESET); // Chân PA9 = 0
    HAL_GPIO_WritePin(GPIOA, LED_GREEN1, GPIO_PIN_SET); // Chân PA10 = 1

    // Cài đặt giá trị ban đầu cho các chân GPIO của đèn 2
    HAL_GPIO_WritePin(GPIOA, LED_RED2, GPIO_PIN_SET);   // Chân PA11 = 1
    HAL_GPIO_WritePin(GPIOA, LED_YELLOW2, GPIO_PIN_RESET); // Chân PA12 = 0
    HAL_GPIO_WritePin(GPIOA, LED_GREEN2, GPIO_PIN_RESET); // Chân PA13 = 0
}

void EXECUTE_LAB1_EX3(void){
 	if(counter_light_1 <=0){
 		switch(status_light_1){
 			case stop:{
 				status_light_1 = run;
 				counter_light_1 = 3;
 				HAL_GPIO_TogglePin(GPIOA, LED_RED1);
 				HAL_GPIO_TogglePin(GPIOA, LED_GREEN1);
 				break;
 			}
 			case slow:{
 				status_light_1 = stop;
 				counter_light_1 = 5;
 				HAL_GPIO_TogglePin(GPIOA, LED_RED1);
 				HAL_GPIO_TogglePin(GPIOA, LED_YELLOW1);
 				break;
 			}
 			case run:{
 				status_light_1 = slow;
 				counter_light_1 = 2;
 				HAL_GPIO_TogglePin(GPIOA, LED_GREEN1);
 				HAL_GPIO_TogglePin(GPIOA, LED_YELLOW1);
 				break;
 			}
 		}
 	}
 	if(counter_light_2 <=0){
 		switch(status_light_2){
 			case stop:{
 				status_light_2 = run;
 				counter_light_2 = 3;
 				HAL_GPIO_TogglePin(GPIOA, LED_RED2);
 				HAL_GPIO_TogglePin(GPIOA, LED_GREEN2);
 				break;
 			}
 			case slow:{
 				status_light_2 = stop;
 				counter_light_2 = 5;
 				HAL_GPIO_TogglePin(GPIOA, LED_RED2);
 				HAL_GPIO_TogglePin(GPIOA, LED_YELLOW2);
 				break;
 			}
 			case run:{
 				status_light_2 = slow;
 				counter_light_2 = 2;
 				HAL_GPIO_TogglePin(GPIOA, LED_GREEN2);
 				HAL_GPIO_TogglePin(GPIOA, LED_YELLOW2);
 				break;
 			}
 		}
 	}
 	counter_light_1--;
 	counter_light_2--;
 }


