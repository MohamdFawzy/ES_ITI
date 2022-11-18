/***************************DIO*******************************/
/*
File name: 	DIO_priv.h


*/


#ifndef DIO_PRIVATE_H
#define DIO_PRIVATE_H

#include "..\..\00.LIB\Std_Types.h"
#include "..\..\00.LIB\Glb_Def.h"

#include "DIO_interface.h"
#include "DIO_cfg.h"



typedef struct{
			uint8_t PINx    :4;
			uint8_t PORTx   :4;
}Channel_Des;

typedef union {
	uint8_t Channel_t;
	Channel_Des DIO_Channel_Discriptor ;
}CHANNEL_t;


	//uint8_t* DDRx;

#endif
