#include "LAB1_EX6.h"


uint16_t LED_PINS[] = {LED0,LED1, LED2, LED3, LED4, LED5, LED6, LED7, LED8, LED9, LED10, LED11};
int hour,min,sec,pre_hour,pre_min,pre_sec = 0 ;
void clearAllClock(){
	int i= 0;
	while(i<=11){
		HAL_GPIO_WritePin(GPIOB, LED_PINS[i], GPIO_PIN_RESET);
		i++;
	}
}

void setNumberOnClock(int num){
	HAL_GPIO_WritePin(GPIOB, LED_PINS[num], GPIO_PIN_SET);
}

void clearNumberOnClock(int num){
	HAL_GPIO_WritePin(GPIOB, LED_PINS[num], GPIO_PIN_RESET);
}


void GPIO_INIT_LAB1_EX6(void){
	// Bật clock cho GPIOB
    __HAL_RCC_GPIOB_CLK_ENABLE();

    // Cấu hình các chân GPIO
    GPIO_InitTypeDef GPIO_InitStruct = {0};
    for (int i = 0; i <= 11; i++) {
        GPIO_InitStruct.Pin = LED_PINS[i];
        GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
        GPIO_InitStruct.Pull = GPIO_NOPULL;
        GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
        HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);
    }
}


void EXECUTE_LAB1_EX6(void){
	hour++;
	if(hour<=12){
		HAL_GPIO_WritePin(GPIOB, LED_PINS[hour%12], GPIO_PIN_SET);
	}
	else{
		HAL_GPIO_WritePin(GPIOB, LED_PINS[hour%12], GPIO_PIN_RESET);
	}
	if(hour>=24){hour=0;}
}



void GPIO_INIT_LAB1_EX7(){
	GPIO_INIT_LAB1_EX6();
}
void EXECUTE_LAB1_EX7(){
	hour++;
	if(hour<=12){
		HAL_GPIO_WritePin(GPIOB, LED_PINS[hour%12], GPIO_PIN_SET);
	}
	else{clearAllClock();hour = 0;}
}


void GPIO_INIT_LAB1_EX10(int h, int m, int s){
	GPIO_INIT_LAB1_EX6();
	//Khởi tạo thời gian đầu
	hour = h;
	min = m;
	sec = s;
}

void EXECUTE_LAB1_EX10(void){
	pre_hour = (12+hour-1)%12;
	pre_min = (12+min/5-1)%12;
	pre_sec = (12+sec/5-1)%12;
	//Hiển thị giờ
	setNumberOnClock(hour);
	if( pre_hour  != (min/5) && pre_hour != (sec/5) )
	clearNumberOnClock(pre_hour);
	//Hiển thị phút
	setNumberOnClock(min/5);
	if( pre_min != hour && pre_min != sec/5){
		clearNumberOnClock((12+min/5-1)%12);
	}
	// Hiển thi giây
	setNumberOnClock(sec/5);
	if(pre_sec!= hour && pre_sec != (min/5)){
		clearNumberOnClock(pre_sec);
	}

	//Xử lý thời gian
	sec++;
	if(sec>=60){sec = 0; min++;}
	if(min>=60){min = 0; hour++;}
	if(hour>=12){hour=0;}
}





