//
// Created by xin luo on 2023/9/28.
//

#ifndef SIMPLE_LED_LED_H
#define SIMPLE_LED_LED_H
#include "stm32f1xx_hal.h"


inline void led_on(GPIO_TypeDef *port, uint16_t pin) {
    HAL_GPIO_WritePin(port, pin, GPIO_PIN_SET);
}

inline void led_off(GPIO_TypeDef *port, uint16_t pin) {
    HAL_GPIO_WritePin(port, pin, GPIO_PIN_RESET);
}

#define LED_TOGGLE(NAME, GPIO_PORT, GPIO_PIN) \
void toggle_##NAME() {                        \
     static int state = 0;                    \
     if (state == 0) {                        \
        led_on(GPIO_PORT, GPIO_PIN);          \
        state = 1;                            \
     } else {                                 \
        led_off(GPIO_PORT, GPIO_PIN);         \
        state = 0;                            \
     }                                        \
}

#endif //SIMPLE_LED_LED_H
