#include "ultrasonic.h"
#include "driver/gpio.h"
#include "driver/uart.h"
#include "esp_timer.h"
#include "esp_rom_sys.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

// Define which UART port your training robot is using (e.g., UART_NUM_1)
#define ULTRASONIC_UART_PORT UART_NUM_1 

Ultrasonic init_ultrasonic(uint8_t pT, uint8_t pE){
    // Configures trigger pin as GPIO output and echo pin as GPIO input
    // Returns Ultrasonic struct with pinTrig and pinEcho initialized
}

uint32_t pulse_in(uint8_t pin, bool state){
    // Define 1 second timeout (1,000,000 microseconds) to prevent lockups
    // Wait for any pre-existing pulse of the target state to end
    // Wait for the target pulse state to start
    // Capture the start time for the pulse
    // Wait for the target pulse state to end
    // Calculate and return total elapsed time in microseconds, or return 0 if timeout occurs
}   

double calculate_distance(Ultrasonic *ultrasonic){
    // Define duration and distance variables
    // Trigger ultrasonic burst
    // Calculate and return distance
}