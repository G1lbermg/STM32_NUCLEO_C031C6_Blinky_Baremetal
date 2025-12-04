#ifndef LED_BSP_H
#define LED_BSP_H

#include "stm32c0xx.h"
#include <stdint.h>
#include "error_codes.h"

ErrorCode_t initLED(GPIO_TypeDef *port, uint8_t pinNum);

ErrorCode_t turnOnLED(GPIO_TypeDef *port, uint8_t pinNum);
ErrorCode_t turnOffLED(GPIO_TypeDef *port, uint8_t pinNum);

#endif
