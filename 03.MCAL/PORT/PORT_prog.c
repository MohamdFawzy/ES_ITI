/*
 * PORT_prog.c
 *
 *  Created on: Nov 19, 2022
 *      Author: Mohamed Fawzy
 */
#include "PORT_priv.h"

/*
 * The Port driver shall provide a service for setting the direction of port pins during runtime
 */
ErrorStatus PORT_CHANNEL_SET_DIR(uint8_t *DIR){
	ErrorStatus PORT_state = OK;
	return PORT_state;
}


/*
 * The Port driver shall provide a service to refresh the direction of all configured ports
 */
ErrorStatus PORT_CONFIG_REFRESH(void){
	ErrorStatus PORT_state = OK;
	return PORT_state;
}
