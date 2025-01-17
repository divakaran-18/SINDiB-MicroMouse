/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
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
#include "stm32f4xx_hal.h"
#include "cppmain.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define TB1_Pin GPIO_PIN_13
#define TB1_GPIO_Port GPIOC
#define LED10_Pin GPIO_PIN_0
#define LED10_GPIO_Port GPIOC
#define RF_EMITTER_Pin GPIO_PIN_1
#define RF_EMITTER_GPIO_Port GPIOC
#define D_C_Pin GPIO_PIN_2
#define D_C_GPIO_Port GPIOC
#define VOL_METER_Pin GPIO_PIN_3
#define VOL_METER_GPIO_Port GPIOC
#define BUZZER_Pin GPIO_PIN_2
#define BUZZER_GPIO_Port GPIOA
#define DRDY_Pin GPIO_PIN_3
#define DRDY_GPIO_Port GPIOA
#define RF_RECEIVER_Pin GPIO_PIN_4
#define RF_RECEIVER_GPIO_Port GPIOA
#define SCK_Pin GPIO_PIN_5
#define SCK_GPIO_Port GPIOA
#define SDO_Pin GPIO_PIN_6
#define SDO_GPIO_Port GPIOA
#define SDI_Pin GPIO_PIN_7
#define SDI_GPIO_Port GPIOA
#define R_RECEIVER_Pin GPIO_PIN_4
#define R_RECEIVER_GPIO_Port GPIOC
#define DIAGONAL_EMITTER_Pin GPIO_PIN_5
#define DIAGONAL_EMITTER_GPIO_Port GPIOC
#define L_RECEIVER_Pin GPIO_PIN_0
#define L_RECEIVER_GPIO_Port GPIOB
#define LF_RECEIVER_Pin GPIO_PIN_1
#define LF_RECEIVER_GPIO_Port GPIOB
#define INT_Pin GPIO_PIN_10
#define INT_GPIO_Port GPIOB
#define LED11_Pin GPIO_PIN_11
#define LED11_GPIO_Port GPIOB
#define LED9_Pin GPIO_PIN_12
#define LED9_GPIO_Port GPIOB
#define CLK_Pin GPIO_PIN_13
#define CLK_GPIO_Port GPIOB
#define MISO_Pin GPIO_PIN_14
#define MISO_GPIO_Port GPIOB
#define DATA_IN_Pin GPIO_PIN_15
#define DATA_IN_GPIO_Port GPIOB
#define CE_Pin GPIO_PIN_6
#define CE_GPIO_Port GPIOC
#define LF_EMITTER_Pin GPIO_PIN_7
#define LF_EMITTER_GPIO_Port GPIOC
#define CS_Pin GPIO_PIN_8
#define CS_GPIO_Port GPIOC
#define LED7_Pin GPIO_PIN_8
#define LED7_GPIO_Port GPIOA
#define TX_Pin GPIO_PIN_9
#define TX_GPIO_Port GPIOA
#define RX_Pin GPIO_PIN_10
#define RX_GPIO_Port GPIOA
#define LED1_Pin GPIO_PIN_11
#define LED1_GPIO_Port GPIOA
#define LED2_Pin GPIO_PIN_12
#define LED2_GPIO_Port GPIOA
#define JTMS_Pin GPIO_PIN_13
#define JTMS_GPIO_Port GPIOA
#define JTCK_Pin GPIO_PIN_14
#define JTCK_GPIO_Port GPIOA
#define LED3_Pin GPIO_PIN_10
#define LED3_GPIO_Port GPIOC
#define LED4_Pin GPIO_PIN_11
#define LED4_GPIO_Port GPIOC
#define LED5_Pin GPIO_PIN_12
#define LED5_GPIO_Port GPIOC
#define LED6_Pin GPIO_PIN_2
#define LED6_GPIO_Port GPIOD
#define LED8_Pin GPIO_PIN_4
#define LED8_GPIO_Port GPIOB
#define BOOT0_Pin GPIO_PIN_5
#define BOOT0_GPIO_Port GPIOB
#define LPWMA_Pin GPIO_PIN_6
#define LPWMA_GPIO_Port GPIOB
#define LPWMB_Pin GPIO_PIN_7
#define LPWMB_GPIO_Port GPIOB
#define RPWMA_Pin GPIO_PIN_8
#define RPWMA_GPIO_Port GPIOB
#define RPWMB_Pin GPIO_PIN_9
#define RPWMB_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */
// Define the I2C address of L3GD20HTR
//#define GYRO_I2C_ADDRESS 0xD6 // Default address with R/W bit
extern SPI_HandleTypeDef hspi1;

extern TIM_HandleTypeDef htim2;
extern TIM_HandleTypeDef htim4;
extern TIM_HandleTypeDef htim5;
extern TIM_HandleTypeDef htim14;

extern ADC_HandleTypeDef hadc1;

extern int mouseState;

extern bool LF, RF, LD, RD;
//extern short ad;

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
