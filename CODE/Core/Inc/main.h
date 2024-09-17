/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define OUT_2A_Pin GPIO_PIN_2
#define OUT_2A_GPIO_Port GPIOA
#define OUT_3A_Pin GPIO_PIN_3
#define OUT_3A_GPIO_Port GPIOA
#define OUT_4A_Pin GPIO_PIN_4
#define OUT_4A_GPIO_Port GPIOA
#define OUT_5A_Pin GPIO_PIN_5
#define OUT_5A_GPIO_Port GPIOA
#define OUT_6A_Pin GPIO_PIN_6
#define OUT_6A_GPIO_Port GPIOA
#define OUT_7A_Pin GPIO_PIN_7
#define OUT_7A_GPIO_Port GPIOA
#define OUT_0B_Pin GPIO_PIN_0
#define OUT_0B_GPIO_Port GPIOB
#define OUT_1B_Pin GPIO_PIN_1
#define OUT_1B_GPIO_Port GPIOB
#define OUT_2B_Pin GPIO_PIN_2
#define OUT_2B_GPIO_Port GPIOB
#define OUT_10B_Pin GPIO_PIN_10
#define OUT_10B_GPIO_Port GPIOB
#define OUT_11B_Pin GPIO_PIN_11
#define OUT_11B_GPIO_Port GPIOB
#define OUT_12B_Pin GPIO_PIN_12
#define OUT_12B_GPIO_Port GPIOB
#define OUT_13B_Pin GPIO_PIN_13
#define OUT_13B_GPIO_Port GPIOB
#define OUT_3B_Pin GPIO_PIN_3
#define OUT_3B_GPIO_Port GPIOB
#define OUT_4B_Pin GPIO_PIN_4
#define OUT_4B_GPIO_Port GPIOB
#define OUT_5B_Pin GPIO_PIN_5
#define OUT_5B_GPIO_Port GPIOB
#define OUT_6B_Pin GPIO_PIN_6
#define OUT_6B_GPIO_Port GPIOB
#define OUT_7B_Pin GPIO_PIN_7
#define OUT_7B_GPIO_Port GPIOB
#define OUT_8B_Pin GPIO_PIN_8
#define OUT_8B_GPIO_Port GPIOB
#define OUT_9B_Pin GPIO_PIN_9
#define OUT_9B_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
