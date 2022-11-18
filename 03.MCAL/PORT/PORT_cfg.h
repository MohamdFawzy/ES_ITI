/*
 * PORT_cfg.h
 *
 *  Created on: Nov 18, 2022
 *      Author: Mohamed Fawzy
 */

#ifndef PORT_CFG_H_
#define PORT_CFG_H_

#define    PORT_CONFIG_TABLE      {\
	{\
			.CHANNEL_NUMBER                       = PORT_A_PIN_0,     \
			.Channel_STATE_Cfg.CHANNEL_MODE       = DIO,              \
			.Channel_STATE_Cfg.CHANNEL_DIR        = INPUT,            \
			.Channel_STATE_Cfg.CHANNEL_INIT       = LOW,			  \
			.Channel_STATE_Cfg.CHANNEL_DIR_RT_EN  =	DISABLED,		  \
			.Channel_STATE_Cfg.CHANNEL_PULL_UP_EN =	INPUT_FLOATING	},\
	},\
	{\
			.CHANNEL_NUMBER                       = PORT_A_PIN_1,     \
			.Channel_STATE_Cfg.CHANNEL_MODE       = DIO,              \
			.Channel_STATE_Cfg.CHANNEL_DIR        = INPUT,            \
			.Channel_STATE_Cfg.CHANNEL_INIT       = LOW,			  \
			.Channel_STATE_Cfg.CHANNEL_DIR_RT_EN  =	DISABLED,		  \
			.Channel_STATE_Cfg.CHANNEL_PULL_UP_EN =	INPUT_FLOATING	},\
	}\
	{\
			.CHANNEL_NUMBER                       = PORT_A_PIN_2,     \
			.Channel_STATE_Cfg.CHANNEL_MODE       = DIO,              \
			.Channel_STATE_Cfg.CHANNEL_DIR        = INPUT,            \
			.Channel_STATE_Cfg.CHANNEL_INIT       = LOW,			  \
			.Channel_STATE_Cfg.CHANNEL_DIR_RT_EN  =	DISABLED,		  \
			.Channel_STATE_Cfg.CHANNEL_PULL_UP_EN =	INPUT_FLOATING	},\
	}\
	{\
			.CHANNEL_NUMBER                       = PORT_A_PIN_3,     \
			.Channel_STATE_Cfg.CHANNEL_MODE       = DIO,              \
			.Channel_STATE_Cfg.CHANNEL_DIR        = INPUT,            \
			.Channel_STATE_Cfg.CHANNEL_INIT       = LOW,			  \
			.Channel_STATE_Cfg.CHANNEL_DIR_RT_EN  =	DISABLED,		  \
			.Channel_STATE_Cfg.CHANNEL_PULL_UP_EN =	INPUT_FLOATING	},\
	}\
	{\
			.CHANNEL_NUMBER                       = PORT_A_PIN_4,     \
			.Channel_STATE_Cfg.CHANNEL_MODE       = DIO,              \
			.Channel_STATE_Cfg.CHANNEL_DIR        = INPUT,            \
			.Channel_STATE_Cfg.CHANNEL_INIT       = LOW,			  \
			.Channel_STATE_Cfg.CHANNEL_DIR_RT_EN  =	DISABLED,		  \
			.Channel_STATE_Cfg.CHANNEL_PULL_UP_EN =	INPUT_FLOATING	},\
	}\
	{\
			.CHANNEL_NUMBER                       = PORT_A_PIN_5,     \
			.Channel_STATE_Cfg.CHANNEL_MODE       = DIO,              \
			.Channel_STATE_Cfg.CHANNEL_DIR        = INPUT,            \
			.Channel_STATE_Cfg.CHANNEL_INIT       = LOW,			  \
			.Channel_STATE_Cfg.CHANNEL_DIR_RT_EN  =	DISABLED,		  \
			.Channel_STATE_Cfg.CHANNEL_PULL_UP_EN =	INPUT_FLOATING	},\
	}\
	{\
			.CHANNEL_NUMBER                       = PORT_A_PIN_6,     \
			.Channel_STATE_Cfg.CHANNEL_MODE       = DIO,              \
			.Channel_STATE_Cfg.CHANNEL_DIR        = INPUT,            \
			.Channel_STATE_Cfg.CHANNEL_INIT       = LOW,			  \
			.Channel_STATE_Cfg.CHANNEL_DIR_RT_EN  =	DISABLED,		  \
			.Channel_STATE_Cfg.CHANNEL_PULL_UP_EN =	INPUT_FLOATING	},\
	}\
	{\
			.CHANNEL_NUMBER                       = PORT_A_PIN_7,     \
			.Channel_STATE_Cfg.CHANNEL_MODE       = DIO,              \
			.Channel_STATE_Cfg.CHANNEL_DIR        = INPUT,            \
			.Channel_STATE_Cfg.CHANNEL_INIT       = LOW,			  \
			.Channel_STATE_Cfg.CHANNEL_DIR_RT_EN  =	DISABLED,		  \
			.Channel_STATE_Cfg.CHANNEL_PULL_UP_EN =	INPUT_FLOATING	},\
	}\
	{\
			.CHANNEL_NUMBER                       = PORT_B_PIN_0,     \
			.Channel_STATE_Cfg.CHANNEL_MODE       = DIO,              \
			.Channel_STATE_Cfg.CHANNEL_DIR        = INPUT,            \
			.Channel_STATE_Cfg.CHANNEL_INIT       = LOW,			  \
			.Channel_STATE_Cfg.CHANNEL_DIR_RT_EN  =	DISABLED,		  \
			.Channel_STATE_Cfg.CHANNEL_PULL_UP_EN =	INPUT_FLOATING	},\
	}\
	{\
			.CHANNEL_NUMBER                       = PORT_B_PIN_1,     \
			.Channel_STATE_Cfg.CHANNEL_MODE       = DIO,              \
			.Channel_STATE_Cfg.CHANNEL_DIR        = INPUT,            \
			.Channel_STATE_Cfg.CHANNEL_INIT       = LOW,			  \
			.Channel_STATE_Cfg.CHANNEL_DIR_RT_EN  =	DISABLED,		  \
			.Channel_STATE_Cfg.CHANNEL_PULL_UP_EN =	INPUT_FLOATING	},\
	}\
	{\
			.CHANNEL_NUMBER                       = PORT_B_PIN_2,     \
			.Channel_STATE_Cfg.CHANNEL_MODE       = DIO,              \
			.Channel_STATE_Cfg.CHANNEL_DIR        = INPUT,            \
			.Channel_STATE_Cfg.CHANNEL_INIT       = LOW,			  \
			.Channel_STATE_Cfg.CHANNEL_DIR_RT_EN  =	DISABLED,		  \
			.Channel_STATE_Cfg.CHANNEL_PULL_UP_EN =	INPUT_FLOATING	},\
	}\
	{\
			.CHANNEL_NUMBER                       = PORT_B_PIN_3,     \
			.Channel_STATE_Cfg.CHANNEL_MODE       = DIO,              \
			.Channel_STATE_Cfg.CHANNEL_DIR        = INPUT,            \
			.Channel_STATE_Cfg.CHANNEL_INIT       = LOW,			  \
			.Channel_STATE_Cfg.CHANNEL_DIR_RT_EN  =	DISABLED,		  \
			.Channel_STATE_Cfg.CHANNEL_PULL_UP_EN =	INPUT_FLOATING	},\
	}\
	{\
			.CHANNEL_NUMBER                       = PORT_B_PIN_4,     \
			.Channel_STATE_Cfg.CHANNEL_MODE       = DIO,              \
			.Channel_STATE_Cfg.CHANNEL_DIR        = INPUT,            \
			.Channel_STATE_Cfg.CHANNEL_INIT       = LOW,			  \
			.Channel_STATE_Cfg.CHANNEL_DIR_RT_EN  =	DISABLED,		  \
			.Channel_STATE_Cfg.CHANNEL_PULL_UP_EN =	INPUT_FLOATING	},\
	}\
	{\
			.CHANNEL_NUMBER                       = PORT_B_PIN_5,     \
			.Channel_STATE_Cfg.CHANNEL_MODE       = DIO,              \
			.Channel_STATE_Cfg.CHANNEL_DIR        = INPUT,            \
			.Channel_STATE_Cfg.CHANNEL_INIT       = LOW,			  \
			.Channel_STATE_Cfg.CHANNEL_DIR_RT_EN  =	DISABLED,		  \
			.Channel_STATE_Cfg.CHANNEL_PULL_UP_EN =	INPUT_FLOATING	},\
	}\
	{\
			.CHANNEL_NUMBER                       = PORT_B_PIN_6,     \
			.Channel_STATE_Cfg.CHANNEL_MODE       = DIO,              \
			.Channel_STATE_Cfg.CHANNEL_DIR        = INPUT,            \
			.Channel_STATE_Cfg.CHANNEL_INIT       = LOW,			  \
			.Channel_STATE_Cfg.CHANNEL_DIR_RT_EN  =	DISABLED,		  \
			.Channel_STATE_Cfg.CHANNEL_PULL_UP_EN =	INPUT_FLOATING	},\
	}\
	{\
			.CHANNEL_NUMBER                       = PORT_B_PIN_7,     \
			.Channel_STATE_Cfg.CHANNEL_MODE       = DIO,              \
			.Channel_STATE_Cfg.CHANNEL_DIR        = INPUT,            \
			.Channel_STATE_Cfg.CHANNEL_INIT       = LOW,			  \
			.Channel_STATE_Cfg.CHANNEL_DIR_RT_EN  =	DISABLED,		  \
			.Channel_STATE_Cfg.CHANNEL_PULL_UP_EN =	INPUT_FLOATING	},\
	}\
	{\
			.CHANNEL_NUMBER                       = PORT_C_PIN_0,     \
			.Channel_STATE_Cfg.CHANNEL_MODE       = DIO,              \
			.Channel_STATE_Cfg.CHANNEL_DIR        = INPUT,            \
			.Channel_STATE_Cfg.CHANNEL_INIT       = LOW,			  \
			.Channel_STATE_Cfg.CHANNEL_DIR_RT_EN  =	DISABLED,		  \
			.Channel_STATE_Cfg.CHANNEL_PULL_UP_EN =	INPUT_FLOATING	},\
	}\
	{\
			.CHANNEL_NUMBER                       = PORT_C_PIN_1,     \
			.Channel_STATE_Cfg.CHANNEL_MODE       = DIO,              \
			.Channel_STATE_Cfg.CHANNEL_DIR        = INPUT,            \
			.Channel_STATE_Cfg.CHANNEL_INIT       = LOW,			  \
			.Channel_STATE_Cfg.CHANNEL_DIR_RT_EN  =	DISABLED,		  \
			.Channel_STATE_Cfg.CHANNEL_PULL_UP_EN =	INPUT_FLOATING	},\
	}\
	{\
			.CHANNEL_NUMBER                       = PORT_C_PIN_2,     \
			.Channel_STATE_Cfg.CHANNEL_MODE       = DIO,              \
			.Channel_STATE_Cfg.CHANNEL_DIR        = INPUT,            \
			.Channel_STATE_Cfg.CHANNEL_INIT       = LOW,			  \
			.Channel_STATE_Cfg.CHANNEL_DIR_RT_EN  =	DISABLED,		  \
			.Channel_STATE_Cfg.CHANNEL_PULL_UP_EN =	INPUT_FLOATING	},\
	}\
	{\
			.CHANNEL_NUMBER                       = PORT_C_PIN_3,     \
			.Channel_STATE_Cfg.CHANNEL_MODE       = DIO,              \
			.Channel_STATE_Cfg.CHANNEL_DIR        = INPUT,            \
			.Channel_STATE_Cfg.CHANNEL_INIT       = LOW,			  \
			.Channel_STATE_Cfg.CHANNEL_DIR_RT_EN  =	DISABLED,		  \
			.Channel_STATE_Cfg.CHANNEL_PULL_UP_EN =	INPUT_FLOATING	},\
	}\
	{\
			.CHANNEL_NUMBER                       = PORT_C_PIN_4,     \
			.Channel_STATE_Cfg.CHANNEL_MODE       = DIO,              \
			.Channel_STATE_Cfg.CHANNEL_DIR        = INPUT,            \
			.Channel_STATE_Cfg.CHANNEL_INIT       = LOW,			  \
			.Channel_STATE_Cfg.CHANNEL_DIR_RT_EN  =	DISABLED,		  \
			.Channel_STATE_Cfg.CHANNEL_PULL_UP_EN =	INPUT_FLOATING	},\
	}\
	{\
			.CHANNEL_NUMBER                       = PORT_C_PIN_5,     \
			.Channel_STATE_Cfg.CHANNEL_MODE       = DIO,              \
			.Channel_STATE_Cfg.CHANNEL_DIR        = INPUT,            \
			.Channel_STATE_Cfg.CHANNEL_INIT       = LOW,			  \
			.Channel_STATE_Cfg.CHANNEL_DIR_RT_EN  =	DISABLED,		  \
			.Channel_STATE_Cfg.CHANNEL_PULL_UP_EN =	INPUT_FLOATING	},\
	}\{\
			.CHANNEL_NUMBER                       = PORT_C_PIN_6,     \
			.Channel_STATE_Cfg.CHANNEL_MODE       = DIO,              \
			.Channel_STATE_Cfg.CHANNEL_DIR        = INPUT,            \
			.Channel_STATE_Cfg.CHANNEL_INIT       = LOW,			  \
			.Channel_STATE_Cfg.CHANNEL_DIR_RT_EN  =	DISABLED,		  \
			.Channel_STATE_Cfg.CHANNEL_PULL_UP_EN =	INPUT_FLOATING	},\
	}\{\
			.CHANNEL_NUMBER                       = PORT_C_PIN_7,     \
			.Channel_STATE_Cfg.CHANNEL_MODE       = DIO,              \
			.Channel_STATE_Cfg.CHANNEL_DIR        = INPUT,            \
			.Channel_STATE_Cfg.CHANNEL_INIT       = LOW,			  \
			.Channel_STATE_Cfg.CHANNEL_DIR_RT_EN  =	DISABLED,		  \
			.Channel_STATE_Cfg.CHANNEL_PULL_UP_EN =	INPUT_FLOATING	},\
	}\
	{\
			.CHANNEL_NUMBER                       = PORT_D_PIN_0,     \
			.Channel_STATE_Cfg.CHANNEL_MODE       = DIO,              \
			.Channel_STATE_Cfg.CHANNEL_DIR        = INPUT,            \
			.Channel_STATE_Cfg.CHANNEL_INIT       = LOW,	1		  \
			.Channel_STATE_Cfg.CHANNEL_DIR_RT_EN  =	DISABLED,		  \
			.Channel_STATE_Cfg.CHANNEL_PULL_UP_EN =	INPUT_FLOATING	},\
	}\
	{\
			.CHANNEL_NUMBER                       = PORT_D_PIN_1,     \
			.Channel_STATE_Cfg.CHANNEL_MODE       = DIO,              \
			.Channel_STATE_Cfg.CHANNEL_DIR        = INPUT,            \
			.Channel_STATE_Cfg.CHANNEL_INIT       = LOW,			  \
			.Channel_STATE_Cfg.CHANNEL_DIR_RT_EN  =	DISABLED,		  \
			.Channel_STATE_Cfg.CHANNEL_PULL_UP_EN =	INPUT_FLOATING	},\
	}\
	{\
			.CHANNEL_NUMBER                       = PORT_D_PIN_2,     \
			.Channel_STATE_Cfg.CHANNEL_MODE       = DIO,              \
			.Channel_STATE_Cfg.CHANNEL_DIR        = INPUT,            \
			.Channel_STATE_Cfg.CHANNEL_INIT       = LOW,			  \
			.Channel_STATE_Cfg.CHANNEL_DIR_RT_EN  =	DISABLED,		  \
			.Channel_STATE_Cfg.CHANNEL_PULL_UP_EN =	INPUT_FLOATING	},\
	}\
	{\
			.CHANNEL_NUMBER                       = PORT_D_PIN_3,     \
			.Channel_STATE_Cfg.CHANNEL_MODE       = DIO,              \
			.Channel_STATE_Cfg.CHANNEL_DIR        = INPUT,            \
			.Channel_STATE_Cfg.CHANNEL_INIT       = LOW,			  \
			.Channel_STATE_Cfg.CHANNEL_DIR_RT_EN  =	DISABLED,		  \
			.Channel_STATE_Cfg.CHANNEL_PULL_UP_EN =	INPUT_FLOATING	},\
	}\
	{\
			.CHANNEL_NUMBER                       = PORT_D_PIN_4,     \
			.Channel_STATE_Cfg.CHANNEL_MODE       = DIO,              \
			.Channel_STATE_Cfg.CHANNEL_DIR        = INPUT,            \
			.Channel_STATE_Cfg.CHANNEL_INIT       = LOW,			  \
			.Channel_STATE_Cfg.CHANNEL_DIR_RT_EN  =	DISABLED,		  \
			.Channel_STATE_Cfg.CHANNEL_PULL_UP_EN =	INPUT_FLOATING	},\
	}\
	{\
			.CHANNEL_NUMBER                       = PORT_D_PIN_5,     \
			.Channel_STATE_Cfg.CHANNEL_MODE       = DIO,              \
			.Channel_STATE_Cfg.CHANNEL_DIR        = INPUT,            \
			.Channel_STATE_Cfg.CHANNEL_INIT       = LOW,			  \
			.Channel_STATE_Cfg.CHANNEL_DIR_RT_EN  =	DISABLED,		  \
			.Channel_STATE_Cfg.CHANNEL_PULL_UP_EN =	INPUT_FLOATING	},\
	}\{\
			.CHANNEL_NUMBER                       = PORT_D_PIN_6,     \
			.Channel_STATE_Cfg.CHANNEL_MODE       = DIO,              \
			.Channel_STATE_Cfg.CHANNEL_DIR        = INPUT,            \
			.Channel_STATE_Cfg.CHANNEL_INIT       = LOW,			  \
			.Channel_STATE_Cfg.CHANNEL_DIR_RT_EN  =	DISABLED,		  \
			.Channel_STATE_Cfg.CHANNEL_PULL_UP_EN =	INPUT_FLOATING	},\
	}\{\
			.CHANNEL_NUMBER                       = PORT_D_PIN_7,     \
			.Channel_STATE_Cfg.CHANNEL_MODE       = DIO,              \
			.Channel_STATE_Cfg.CHANNEL_DIR        = INPUT,            \
			.Channel_STATE_Cfg.CHANNEL_INIT       = LOW,			  \
			.Channel_STATE_Cfg.CHANNEL_DIR_RT_EN  =	DISABLED,		  \
			.Channel_STATE_Cfg.CHANNEL_PULL_UP_EN =	INPUT_FLOATING	},\
	}\


#endif /* PORT_CFG_H_ */
