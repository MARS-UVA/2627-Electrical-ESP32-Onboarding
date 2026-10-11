#include "bno055.h"

void init_i2c_driver(void){
    // Create bus handle, configure I2C parameters, and apply create new bus using the config and handle
    // Add BNO055 to I2C bus
}

// Helper to write a single byte to a register
esp_err_t bno055_write_reg(uint8_t reg, uint8_t data){

}

// Helper to read multiple bytes starting from a register
esp_err_t bno055_read_regs(uint8_t reg, uint8_t *data, size_t len){
    
}