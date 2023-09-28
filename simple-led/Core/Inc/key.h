//
// Created by xin luo on 2023/9/28.
//

#ifndef SIMPLE_LED_KEY_H
#define SIMPLE_LED_KEY_H
#include "stm32f1xx_hal.h"

int scan_key();

#define KEY_PRESSED(GPIO_PORT, GPIO_PIN) HAL_GPIO_ReadPin(GPIO_PORT, GPIO_PIN)


#endif //SIMPLE_LED_KEY_H
