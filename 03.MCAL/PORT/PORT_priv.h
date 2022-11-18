/*
 * PORT_priv.h
 *
 *  Created on: Nov 18, 2022
 *      Author: Mohamed Fawzy
 */

#ifndef PORT_PRIV_H
#define PORT_PRIV_H

#include "..\..\00.LIB\Std_Types.h"
#include "..\..\00.LIB\Glb_Def.h"

#include "PORT_cfg.h"
#include "PORT_interface.h"

/********************* PORT MAIN REGESTERS ADDRESSES ********************/
#define  PORTA   (0x3B)
#define  DDRA    (0x3A)
#define  PINA    (0x39)

#define  PORTB   (0x38)
#define  DDRB    (0x37)
#define  PINB    (0x36)

#define  PORTC   (0x35)
#define  DDRC    (0x34)
#define  PINC    (0x33)

#define  PORTD   (0x32)
#define  DDRD    (0x31)
#define  PIND    (0x30)

/***************** Autosar Requirements Definitions ************************/
typedef enum{
	PORT_A_PIN_0,
	PORT_A_PIN_1,
	PORT_A_PIN_2,
	PORT_A_PIN_3,
	PORT_A_PIN_4,
	PORT_A_PIN_5,
	PORT_A_PIN_6,
	PORT_A_PIN_7,

	PORT_B_PIN_0,
	PORT_B_PIN_1,
	PORT_B_PIN_2,
	PORT_B_PIN_3,
	PORT_B_PIN_4,
	PORT_B_PIN_5,
	PORT_B_PIN_6,
	PORT_B_PIN_7,

	PORT_C_PIN_0,
	PORT_C_PIN_1,
	PORT_C_PIN_2,
	PORT_C_PIN_3,
	PORT_C_PIN_4,
	PORT_C_PIN_5,
	PORT_C_PIN_6,
	PORT_C_PIN_7,

	PORT_D_PIN_0,
	PORT_D_PIN_1,
	PORT_D_PIN_2,
	PORT_D_PIN_3,
	PORT_D_PIN_4,
	PORT_D_PIN_5,
	PORT_D_PIN_6,
	PORT_D_PIN_7,

}Channel_PORT_PIN;

typedef enum {
	DEFAULT_NOT_USED,
	DIO,
	ADC_INPUT,
	ADC_AREF,
	SPI_MOSI,
	SPI_MISO,
	SPI_SS,
	SCK,
	UART_RXD,
	UART_TXD,
	I2C_SDA,
	I2C_SCL
}CHANNEL_USAGE_MODE;

typedef enum{
	INPUT,
	OUTPUT
}Channel_DIRECTION;

typedef enum{
	LOW,
	HIGH,
}Channel_Init_State;

typedef enum{
	DISABLED,
	ENABLED
}Dir_Ctrl_RT;

typedef enum{
	INPUT_FLOATING,
	INPUT_PULLED_UP
}Channel_Ip_Pull_UP;

/*********************** Channel configuration struct ****************************/
typedef struct{
		uint8_t CHANNEL_MODE        :4; //4BITS_ describe 16 possibility for pin mode (DIO, ADC, SPI...)
		uint8_t CHANNEL_DIR         :1;
		uint8_t CHANNEL_INIT        :1;
		uint8_t CHANNEL_DIR_RT_EN   :1;  //PIN_DIRECTION_CHANGE_DURING_RUNTIME
		uint8_t CHANNEL_PULL_UP_EN  :1;
}CHANNEL_CONFIG;
typedef struct {
	uint8_t CHANNEL_NUMBER          :5; //32 channel needs 5BITs
	uint8_t RESERVED_N_A            :3;
	CHANNEL_CONFIG Channel_STATE_Cfg;
}Channel_Cfg;




#endif /* PORT_PRIV_H */
