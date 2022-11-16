/*
 * main.c
 *
 *  Created on: Nov 15, 2022
 *      Author: Mohamed Fawzy
 */


#include <avr\io.h>
#include "03.MCAL\Timer\timer_interface.h"

int main(void){
	uint16_t overflows=0;
	//uint8_t preload =5;
	DDRD |= (1<<0);
	PORTD|= (1<<0);
	TMR0_INIT();
	TMR0_START();
	//TMRx_SETValue(TMR0,&preload);
	volatile uint8_t state=0;
	while(1){
		overflows=0;
		while (overflows++ <2000){
			state = TMRx_TOVsync(0);
		}
		PORTD^=(1<<0);

	}
}
