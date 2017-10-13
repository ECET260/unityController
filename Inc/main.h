/**
  ******************************************************************************
  * File Name          : main.h
  * Description        : This file contains the common defines of the application
  ******************************************************************************
  * This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * Copyright (c) 2017 STMicroelectronics International N.V. 
  * All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without 
  * modification, are permitted, provided that the following conditions are met:
  *
  * 1. Redistribution of source code must retain the above copyright notice, 
  *    this list of conditions and the following disclaimer.
  * 2. Redistributions in binary form must reproduce the above copyright notice,
  *    this list of conditions and the following disclaimer in the documentation
  *    and/or other materials provided with the distribution.
  * 3. Neither the name of STMicroelectronics nor the names of other 
  *    contributors to this software may be used to endorse or promote products 
  *    derived from this software without specific written permission.
  * 4. This software, including modifications and/or derivative works of this 
  *    software, must execute solely and exclusively on microcontroller or
  *    microprocessor devices manufactured by or for STMicroelectronics.
  * 5. Redistribution and use of this software other than as permitted under 
  *    this license is void and will automatically terminate your rights under 
  *    this license. 
  *
  * THIS SOFTWARE IS PROVIDED BY STMICROELECTRONICS AND CONTRIBUTORS "AS IS" 
  * AND ANY EXPRESS, IMPLIED OR STATUTORY WARRANTIES, INCLUDING, BUT NOT 
  * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
  * PARTICULAR PURPOSE AND NON-INFRINGEMENT OF THIRD PARTY INTELLECTUAL PROPERTY
  * RIGHTS ARE DISCLAIMED TO THE FULLEST EXTENT PERMITTED BY LAW. IN NO EVENT 
  * SHALL STMICROELECTRONICS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
  * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, 
  * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
  * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
  * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
  * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H
  /* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define OUT0_Pin GPIO_PIN_12
#define OUT0_GPIO_Port GPIOB
#define OUT1_Pin GPIO_PIN_13
#define OUT1_GPIO_Port GPIOB
#define OUT2_Pin GPIO_PIN_14
#define OUT2_GPIO_Port GPIOB
#define OUT3_Pin GPIO_PIN_15
#define OUT3_GPIO_Port GPIOB
#define OUT4_Pin GPIO_PIN_8
#define OUT4_GPIO_Port GPIOD
#define OUT5_Pin GPIO_PIN_9
#define OUT5_GPIO_Port GPIOD
#define OUT6_Pin GPIO_PIN_10
#define OUT6_GPIO_Port GPIOD
#define OUT7_Pin GPIO_PIN_11
#define OUT7_GPIO_Port GPIOD
#define LCD_BL_Pin GPIO_PIN_12
#define LCD_BL_GPIO_Port GPIOD
#define IN7_Pin GPIO_PIN_0
#define IN7_GPIO_Port GPIOD
#define IN5_Pin GPIO_PIN_1
#define IN5_GPIO_Port GPIOD
#define IN6_Pin GPIO_PIN_2
#define IN6_GPIO_Port GPIOD
#define IN3_Pin GPIO_PIN_3
#define IN3_GPIO_Port GPIOD
#define IN4_Pin GPIO_PIN_4
#define IN4_GPIO_Port GPIOD
#define IN1_Pin GPIO_PIN_5
#define IN1_GPIO_Port GPIOD
#define IN2_Pin GPIO_PIN_6
#define IN2_GPIO_Port GPIOD
#define IN0_Pin GPIO_PIN_7
#define IN0_GPIO_Port GPIOD
#define OUT3B4_Pin GPIO_PIN_4
#define OUT3B4_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

void _Error_Handler(char *, int);

#define Error_Handler() _Error_Handler(__FILE__, __LINE__)

/**
  * @}
  */ 

/**
  * @}
*/ 

#endif /* __MAIN_H */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
