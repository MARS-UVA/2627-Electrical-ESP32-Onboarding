#include "wheel.h"
#include "driver/gpio.h"
#include "driver/ledc.h"

// Define the PWM properties (adjust speed/resolution as needed)
#define MOTOR_PWM_SPEED_MODE   LEDC_LOW_SPEED_MODE
#define MOTOR_PWM_DUTY_RES     LEDC_TIMER_8_BIT      // 0 to 255 range to match your uint8_t duty
#define MOTOR_PWM_FREQ         5000   

void init_hardware_pwm_timer(void){
    // Initializes LEDC timer for PWM control (ledc_timer_config_t)
}

Wheel init_wheel(uint8_t pinEn, uint8_t pinF, uint8_t pinB, ledc_channel_t pwmChannel, ledc_timer_t pwmTimer){
    // Configures forward and backward pins as GPIO outputs
    // Configures LEDC channel for PWM output (ledc_channel_config_t)
    // Returns wheel struct
}

void drive(Wheel *wheel, uint8_t duty, bool isForward){
    // Set level for GPIO pins
    // Sets and updates duty cycle for PWM channel using ledc_set_duty and ledc_update_duty
}

void tele_drive(Wheel *wheel, uint8_t input, bool invert){
    // Checks if input is greater than 127, sets direction and duty cycle accordingly
    // Calls drive
}