#include "LAB1_EX2.h"

int counter_light;
int status_light;


void GPIO_INIT_LAB1_EX2(void){
	// Bật clock cho GPIOA
    __HAL_RCC_GPIOA_CLK_ENABLE();

    // Cấu hình các chân GPIO
    GPIO_InitTypeDef GPIO_InitStruct = {0};
    GPIO_InitStruct.Pin = LED_RED|LED_YELLOW|LED_GREEN;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    // Cài đặt giá trị ban đầu cho các chân GPIO
    counter_light = 3;
    status_light = run;
    HAL_GPIO_WritePin(GPIOA, LED_RED, GPIO_PIN_SET);   // Chân PA5 = 0
    HAL_GPIO_WritePin(GPIOA, LED_YELLOW, GPIO_PIN_SET); // Chân PA6 = 0
    HAL_GPIO_WritePin(GPIOA, LED_GREEN, GPIO_PIN_RESET); // Chân PA7 = 1

}


void EXECUTE_LAB1_EX2(void){
	if(counter_light <=0){
		switch(status_light){
			case stop:{
				status_light = run;
				counter_light = 3;
				HAL_GPIO_TogglePin(GPIOA, LED_RED);
				HAL_GPIO_TogglePin(GPIOA, LED_GREEN);
				break;
			}
			case slow:{
				status_light = stop;
				counter_light = 5;
				HAL_GPIO_TogglePin(GPIOA, LED_RED);
				HAL_GPIO_TogglePin(GPIOA, LED_YELLOW);
				break;
			}
			case run:{
				status_light = slow;
				counter_light = 2;
				HAL_GPIO_TogglePin(GPIOA, LED_GREEN);
				HAL_GPIO_TogglePin(GPIOA, LED_YELLOW);
				break;
			}
		}
	}
	counter_light--;
}



