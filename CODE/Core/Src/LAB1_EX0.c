#include "LAB1_EX0.h"

void GPIO_INIT_LAB1_EX0(void) {
    __HAL_RCC_GPIOA_CLK_ENABLE();  // Bật clock cho GPIOA

    GPIO_InitTypeDef GPIO_InitStruct = {0};	//Khởi tạo InitStruct
    GPIO_InitStruct.Pin = GPIO_PIN_4; //Chọn pin 4A
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP; // Mode output
    GPIO_InitStruct.Pull = GPIO_NOPULL; // nopull
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW; //speed low
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct); //Khởi tạo từ những cài đặt trong Init Struct
}

void EXECUTE_LAB1_EX0(void) {
    HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_4);
}
