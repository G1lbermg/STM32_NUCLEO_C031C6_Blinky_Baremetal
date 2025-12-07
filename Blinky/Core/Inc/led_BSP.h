#ifndef LED_BSP_H
#define LED_BSP_H

#include "stm32c0xx.h"
#include <stdint.h>
#include "error_codes.h"

ErrorCode_t init_LED(GPIO_TypeDef *port, uint8_t pinNum);

ErrorCode_t turn_On_LED(GPIO_TypeDef *port, uint8_t pinNum);
ErrorCode_t turn_Off_LED(GPIO_TypeDef *port, uint8_t pinNum);

#endif
