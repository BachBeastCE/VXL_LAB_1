#include "LAB1_EX1.h"

int counter = 0;

void GPIO_INIT_LAB1_EX1(void){
	// Bật clock cho GPIOA
    __HAL_RCC_GPIOA_CLK_ENABLE();

    // Cấu hình các chân GPIO
    GPIO_InitTypeDef GPIO_InitStruct = {0};
    GPIO_InitStruct.Pin = LED_RED|LED_YELLOW;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    // Cài đặt giá trị ban đầu cho các chân GPIO
    HAL_GPIO_WritePin(GPIOA, LED_RED, GPIO_PIN_SET);   // Chân PA5 = 1
    HAL_GPIO_WritePin(GPIOA, LED_YELLOW, GPIO_PIN_RESET); // Chân PA6 = 0

}

void EXECUTE_LAB1_EX1(void){
	if(counter>=2){
		HAL_GPIO_TogglePin(GPIOA, LED_RED);
		HAL_GPIO_TogglePin(GPIOA, LED_YELLOW);
		counter = 0;
	}
		counter++;
}

