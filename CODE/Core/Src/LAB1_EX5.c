#include "LAB1_EX5.h"



void display7SEG_2(int num){
	switch (num){
	case 0:{
	    HAL_GPIO_WritePin(GPIOB, SEG2_0, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_1, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_2, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_3, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_4, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_5, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_6, GPIO_PIN_SET);
	    break;
	}
	case 1:{
	    HAL_GPIO_WritePin(GPIOB, SEG2_0, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_1, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_2, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_3, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_4, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_5, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_6, GPIO_PIN_SET);
	    break;
	}
	case 2:{
	    HAL_GPIO_WritePin(GPIOB, SEG2_0, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_1, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_2, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_3, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_4, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_5, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_6, GPIO_PIN_RESET);
	    break;
	}
	case 3:{
	    HAL_GPIO_WritePin(GPIOB, SEG2_0, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_1, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_2, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_3, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_4, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_5, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_6, GPIO_PIN_RESET);
	    break;
	}
	case 4:{
	    HAL_GPIO_WritePin(GPIOB, SEG2_0, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_1, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_2, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_3, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_4, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_5, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_6, GPIO_PIN_RESET);
	    break;
	}
	case 5:{
	    HAL_GPIO_WritePin(GPIOB, SEG2_0, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_1, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_2, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_3, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_4, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_5, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_6, GPIO_PIN_RESET);
	    break;
	}
	case 6:{
	    HAL_GPIO_WritePin(GPIOB, SEG2_0, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_1, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_2, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_3, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_4, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_5, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_6, GPIO_PIN_RESET);
	    break;
	}
	case 7:{
	    HAL_GPIO_WritePin(GPIOB, SEG2_0, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_1, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_2, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_3, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_4, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_5, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_6, GPIO_PIN_SET);
	    break;
	}
	case 8:{
	    HAL_GPIO_WritePin(GPIOB, SEG2_0, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_1, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_2, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_3, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_4, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_5, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_6, GPIO_PIN_RESET);
	    break;
	}
	case 9:{
	    HAL_GPIO_WritePin(GPIOB, SEG2_0, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_1, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_2, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_3, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_4, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_5, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2_6, GPIO_PIN_RESET);
	    break;
	}
	}

}

void GPIO_INIT_LAB1_EX5(void){
	GPIO_INIT_LAB1_EX3();
	GPIO_INIT_LAB1_EX4();
}

void EXECUTE_LAB1_EX5(void){
	EXECUTE_LAB1_EX3();
	display7SEG(counter_light_1);
	display7SEG_2(counter_light_2);
}
