#pragma once

#define LED_BLUE_PORT GPIOA
#define LED_BLUE_PIN 8
#define LL_LED_BLUE_PIN LL_GPIO_PIN_8

// Left
#define LED_GREEN_PORT GPIOC
#define LED_GREEN_PIN 9
// Rights TODO
#define LED_R_GREEN_PORT GPIOA
#define LED_R_GREEN_PIN 9

// Communication - UART
#define UART_GPIO_PORT				GPIOC
#define LL_UART_TX_PIN				LL_GPIO_PIN_10
#define LL_UART_RX_PIN				LL_GPIO_PIN_11

// Communication - CAN1
#define CAN_GPIO_PORT				GPIOB
#define LL_CAN_TX_PIN				LL_GPIO_PIN_9
#define LL_CAN_RX_PIN				LL_GPIO_PIN_8

// LSU 4.2 - 6.8K
#define NERNST_42_ESR_DRIVER_PORT   GPIOB
#define NERNST_42_ESR_DRIVER_PIN    14

// LSU 4.9 - 22K
#define NERNST_49_ESR_DRIVER_PORT	GPIOB
#define NERNST_49_ESR_DRIVER_PIN	13

#define NERNST_49_BIAS_PORT			GPIOC  // not in use
#define NERNST_49_BIAS_PIN			2      // not in use

// LSU ADV - 47K
#define NERNST_ADV_ESR_DRIVER_PORT	GPIOB
#define NERNST_ADV_ESR_DRIVER_PIN	12

// L_heater_pwm - PB15 TIM1_CH3
#define HEATER_PWM_DEVICE			PWMD1
#define HEATER_PWM_CHANNEL_0		2
#define L_HEATER_PORT				GPIOB
#define L_HEATER_PIN				15

// R_heater_pwm - PC6 TIM3_CH1
//#define HEATER_PWM_DEVICE_1			PWMD3
#define HEATER_PWM_CHANNEL_1		0
#define R_HEATER_PORT				GPIOC
#define R_HEATER_PIN				6

// PA4, PA5
//#define PUMP_DAC_DAC_DEVICE_0		DACD2
//#define PUMP_DAC_DAC_DEVICE_1		DACD1
//#define PUMP_DAC_DAC_CHANNEL_0		1	/* PA5 - DAC_OUT2 - left */
//#define PUMP_DAC_DAC_CHANNEL_1		0 	/* PA4 - DAC_OUT1 - right */

// DAC for AUX outputs
#define AUXOUT_DAC_DEVICE       	DACD1
#define AUXOUT_DAC_CHANNEL_0    	0
#define AUXOUT_DAC_CHANNEL_1    	1

// PA1 TIM2_CH2
#define PUMP_DAC_PWM_DEVICE PWMD2
#define PUMP_DAC_PWM_CHANNEL_0 1

// PB1 TIM3_CH4
#define PUMP_DAC_PWM_DEVICE PWMD2
#define PUMP_DAC_PWM_CHANNEL_1 3

#define ID_SEL1_PORT				GPIOB  // not in use
#define ID_SEL1_PIN					2      // not in use
#define ID_SEL2_PORT				GPIOA  // not in use
#define ID_SEL2_PIN					15     // not in use

// PB6 - SPI1_CS0
#define EGT_CS0_PORT				GPIOB
#define EGT_CS0_PIN					6
// PB7 - SPI1_CS1
#define EGT_CS1_PORT				GPIOB
#define EGT_CS1_PIN					7
// PC8 - SPI1_CS2
#define EGT_CS0_PORT				GPIOC
#define EGT_CS0_PIN					8
// PC7 - SPI1_CS3
#define EGT_CS1_PORT				GPIOC
#define EGT_CS1_PIN					7
