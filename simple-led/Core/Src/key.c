//
// Created by xin luo on 2023/9/28.
//


#include "key.h"


int scan_key() {
    static int key_pressed = 0;
    int pressed_key = 0;
    if (key_pressed == 0 && KEY_PRESSED(GPIOA, GPIO_PIN_1) == 1) {
        HAL_Delay(10);
        if (KEY_PRESSED(GPIOA, GPIO_PIN_1) == 1) {
            pressed_key = 1;
        }
        key_pressed = 1;
    } else if (key_pressed == 1 && KEY_PRESSED(GPIOA, GPIO_PIN_1) == 0) {
        key_pressed = 0;
    }
    return pressed_key;
}