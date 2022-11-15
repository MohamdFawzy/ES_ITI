#ifndef LED_INIT_H
#define LED_INIT_H


#include <avr/io.h>
#include "..\..\00.LIB\Std_Types.h"

#define LED_0   0
#define LED_1   1
#define LED_2   2
#define LED_3   3
#define LED_4   4
#define LED_5   5
#define LED_6   6
#define LED_7   7
#define LED_8   8


void LED_INIT();
uint8_t Led_TurnOn(uint8_t LED_ID);
uint8_t Led_TurnOff(uint8_t LED_ID);
void LED_Toggle (uint8_t LED_ID);

#endif
