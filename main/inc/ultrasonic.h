#pragma once

#include "esp_rom_sys.h"
#include "esp_timer.h"
#include "uart.h"

typedef struct {
    uint8_t pinTrig;
    uint8_t pinEcho;
} Ultrasonic;

Ultrasonic init_ultrasonic(uint8_t pT, uint8_t pE);
uint32_t pulse_in(uint8_t pin, bool state);
double calculate_distance(Ultrasonic *ultrasonic);