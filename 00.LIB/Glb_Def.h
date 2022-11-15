/*
 * Glb_Def.h
 *
 *  Created on: Nov 15, 2022
 *      Author: Mohamed Fawzy
 */

#ifndef GLB_DEF_H_
#define GLB_DEF_H_


#define HWREG(REG)         *(volatile uint8_t*)(REG)
#define HWREG_16Bit(REG)   *(volatile uint16_t*)(REG)

#define COUNT_START                   (0u)
#define MAX_TIME_OUT                  (1000u)

typedef enum{
	IDLE,
	BUSY
}STATE;

typedef enum{
	FLAG_NOT_RAISED,
	CLR_FLAG
}FLAG;


typedef enum {
	OK,
	NOK,
	WRG_CHANNEL_NO,
	ADC_SYNC_TIME_EXCEEDED,
	TMR_SYNC_TIME_EXCEEDED
}ErrorStatus;



#endif /* GLB_DEF_H_ */
