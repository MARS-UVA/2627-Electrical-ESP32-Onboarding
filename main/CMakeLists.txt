idf_component_register(SRCS "main.c"
                       PRIV_REQUIRES spi_flash esp_timer esp_driver_gpio esp_driver_uart esp_driver_ledc esp_driver_i2c esp_timer
                       INCLUDE_DIRS "./inc")