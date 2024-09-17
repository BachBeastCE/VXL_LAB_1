#include "LAB1_EX4.h"

int seg_counter;

void display7SEG(int num){
	switch (num){
	case 0:{
	    HAL_GPIO_WritePin(GPIOB, SEG0, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG1, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG3, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG4, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG5, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG6, GPIO_PIN_SET);
	    break;
	}
	case 1:{
	    HAL_GPIO_WritePin(GPIOB, SEG0, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG1, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG3, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG4, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG5, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG6, GPIO_PIN_SET);
	    break;
	}
	case 2:{
	    HAL_GPIO_WritePin(GPIOB, SEG0, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG1, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG3, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG4, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG5, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG6, GPIO_PIN_RESET);
	    break;
	}
	case 3:{
	    HAL_GPIO_WritePin(GPIOB, SEG0, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG1, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG3, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG4, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG5, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG6, GPIO_PIN_RESET);
	    break;
	}
	case 4:{
	    HAL_GPIO_WritePin(GPIOB, SEG0, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG1, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG3, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG4, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG5, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG6, GPIO_PIN_RESET);
	    break;
	}
	case 5:{
	    HAL_GPIO_WritePin(GPIOB, SEG0, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG1, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG2, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG3, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG4, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG5, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG6, GPIO_PIN_RESET);
	    break;
	}
	case 6:{
	    HAL_GPIO_WritePin(GPIOB, SEG0, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG1, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG2, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG3, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG4, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG5, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG6, GPIO_PIN_RESET);
	    break;
	}
	case 7:{
	    HAL_GPIO_WritePin(GPIOB, SEG0, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG1, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG3, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG4, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG5, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG6, GPIO_PIN_SET);
	    break;
	}
	case 8:{
	    HAL_GPIO_WritePin(GPIOB, SEG0, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG1, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG3, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG4, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG5, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG6, GPIO_PIN_RESET);
	    break;
	}
	case 9:{
	    HAL_GPIO_WritePin(GPIOB, SEG0, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG1, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG3, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG4, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG5, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG6, GPIO_PIN_RESET);
	    break;
	}
	}

}


void GPIO_INIT_LAB1_EX4(void){
	// Bật clock cho GPIOB
    __HAL_RCC_GPIOB_CLK_ENABLE();

    // Cấu hình các chân GPIO
    GPIO_InitTypeDef GPIO_InitStruct = {0};
    GPIO_InitStruct.Pin = SEG0|SEG1|SEG2|SEG3|SEG4|SEG5|SEG6;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

    //Khởi tạo giá trị ban đầu
    seg_counter = 0;

}


void EXECUTE_LAB1_EX4(void){
	 if(seg_counter >= 10) seg_counter = 0;
	 display7SEG(seg_counter++);
}

