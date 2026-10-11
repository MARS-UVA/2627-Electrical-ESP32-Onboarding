// Included header files
#include <stdio.h>
#include <inttypes.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_chip_info.h"
#include "esp_flash.h"
#include "esp_system.h"
#include "driver/uart.h"     // Native ESP-IDF UART driver
#include "driver/ledc.h"     // Native ESP-IDF LEDC (PWM) driver
#include "ultrasonic.h"
#include "wheel.h"
#include "freertos/queue.h"
#include "bno055.h"

// Defines for GPIO pins
#define LEFT_EN       GPIO_NUM_16
#define LEFT_FORWARD  GPIO_NUM_17
#define LEFT_BACKWARD GPIO_NUM_18

#define RIGHT_EN       GPIO_NUM_4
#define RIGHT_FORWARD  GPIO_NUM_5
#define RIGHT_BACKWARD GPIO_NUM_6

#define L_US_TRIG GPIO_NUM_9
#define L_US_ECHO GPIO_NUM_10

#define F_US_TRIG GPIO_NUM_11
#define F_US_ECHO GPIO_NUM_12

#define R_US_TRIG GPIO_NUM_13
#define R_US_ECHO GPIO_NUM_14

// Global Variables and Predefined Types
QueueHandle_t cmd_queue;

Wheel left;
Wheel right;

Ultrasonic leftSense;
Ultrasonic frontSense;
Ultrasonic rightSense;
Ultrasonic *ultrasonics[3] = { &leftSense, &frontSense, &rightSense };
double ultrasonicFeedback[3];
double heading;

typedef struct {
    uint8_t left;
    uint8_t right;
} Command;


// Tasks
void uart_rx_task(void *pvParameters)
{
    // Write code to read wheel commands from UART
    while(1){

    }
}

void uart_tx_task(void *pvParameters){
    // Write code to send ultrasonic sensor and IMU over UART
    while(1){
        // In this loop, also implement a vTaskDelay of 100ms
    }
}

void ultrasonic_task(void *pvParameters){
    // Write code to record ultrasonic sensor feedback in array of doubles
    while(1){
        // In this loop,  Implement a vTaskDelay of 50ms
    }
}

void imu_task(void *pvParameters){
    // Write code to initialize IMU and call vTaskDelay for 30ms
    // Set operational mode to NDOF (Absolute Orientation Fusion) and call vTaskDelay for 30ms
    // Create a data buffer 
    while(1){
        // Read euler data from BNO055IMU registers
        // Store heading, roll, and pitch values in degrees in int16_t variables
        // Implement a vTaskDelay for 100ms
    }
}

void control_task(void *pvParameters){
    while(1){
        // Write code to use the proper commands for driving the left and right wheels
    }
}

void app_main(void)
{
    // Initialize peripherals (UART, PWM, I2C, Ultrasonic sensors, and wheels)

    // Create tasks
    if (cmd_queue != NULL)
    {
        xTaskCreate(control_task, "control_task", 2048, NULL, 5, NULL);
        xTaskCreate(uart_rx_task, "uart_rx_task", 2048, NULL, 5, NULL);
        xTaskCreate(uart_tx_task, "uart_tx_task", 2048, NULL, 5, NULL);
        xTaskCreate(imu_task, "imu_task", 2048, NULL, 5, NULL);
        for (size_t i = 0; i < sizeof(ultrasonics) / sizeof(ultrasonics[0]); i++)
            xTaskCreate(ultrasonic_task, "ultrasonic_task", 2048, (void *) i, 5, NULL);
    }
}