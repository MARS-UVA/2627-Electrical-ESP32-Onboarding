#pragma once

#include "uart.h"
#include "driver/ledc.h"

#define ZERO 127

typedef struct 
{
    uint8_t pinEn;
    uint8_t pinF;
    uint8_t pinB;
    uint8_t pwmChannel;
} Wheel;

void init_hardware_pwm_timer(void);
Wheel init_wheel(uint8_t pinEn, uint8_t pinF, uint8_t pinB, ledc_channel_t pwmChannel, ledc_timer_t pwmTimer);
void drive(Wheel *wheel, uint8_t duty, bool isForward);
void tele_drive(Wheel *wheel, uint8_t input, bool invert);
