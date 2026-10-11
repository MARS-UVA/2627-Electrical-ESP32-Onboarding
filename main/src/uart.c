#include "uart.h"

void init_uart_driver(void){
    // Create uart_config_t struct and set parameters to initialize UART
    // Apply param config, set pin, and install driver

}

bool uart_read(uint8_t *data, uint8_t size){
    // Read serial bytes
}

void uart_write(void *packet, size_t size){
    // Write serial bytes
}