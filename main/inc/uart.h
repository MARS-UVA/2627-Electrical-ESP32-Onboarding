#pragma once

#include <inttypes.h>
#include <string.h>
#include <stdbool.h>
#include "driver/gpio.h"
#include "driver/uart.h"

#define S3_TX_PIN 43
#define S3_RX_PIN 44

#define ROBOT_UART_PORT  UART_NUM_0
#define UART_BUF_SIZE    1024

void init_uart_driver(void);
bool uart_read(uint8_t *data, uint8_t size);
void uart_write(void *packet, size_t size);
void GPIO_setup(uint8_t pin, gpio_mode_t mode);