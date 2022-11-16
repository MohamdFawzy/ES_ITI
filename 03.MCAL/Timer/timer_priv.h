/***************************TIMR*******************************/
/*
File name: 	timer_priv.h


*/
#ifndef TMR_PRIVATE_H
#define TMR_PRIVATE_H



#include "..\..\00.LIB\Std_Types.h"
#include "..\..\00.LIB\Glb_Def.h"
#include "timer_cfg.h"
#include "timer_interface.h"


typedef enum{
	TMR0,
	TMR1,
	TMR2
}TMR_MODULE;


/*****************REGISTERS ADDRESSES***************************/


#define TCCR0  (0x53)
#define TCNT0  (0x52)
#define OCR0   (0x5C)

#define TCCR2  (0x45)
#define TCNT2  (0x44)
#define OCR2   (0x43)

#define TIFR   (0x58)
#define TIMSK  (0x59)
/**************** CHOICES ENUMS TCCRx REG ***********************/
/* BITS 0:2  3 BITS TIMER CLK SOURCE*/
typedef enum{
    NO_SRC_CLK,
    NO_PRESCALING,
    PRESCALER_8,
    PRESCALER_16,
    PRESCALER_256,
    PRESCALER_1024,
    T0_FALLING_EDGE,
    T0_RISING_EDGE
}TMR_CLK_SEL;

/* BIT 3:6  4 BITS MODE SELECT*/
typedef enum{
    /*  WGM00 ==0  -> NON_PWM MODE */
    NON_PWM_NORMAL,
    NON_PWM_CTC,
    NON_PWM_NORMAL_TOGGLE_OCx,
    NON_PWM_CTC_TOGGLE_OCx,
    NON_PWM_NORMAL_CLR_OCx,
    NON_PWM_CTC_CLR_OCx,
    NON_PWM_NORMAL_SET_OCx,
    NON_PWM_CTC_SET_OCx,
    /*  WGM00 ==1  -> PWM MODE */
    PHASE_CRT_PWM_NORMAL_OCx_DISCONNECTED,
    FAST_PWM_NORMAL_OCx_DISCONNECTED,
    PHASE_CRT_PWM_RESERVED,
    FAST_PWM_RESERVED,
    PHASE_CRT_PWM_CENTER_LOW,
    FAST_PWM_CMP_MTCH_CLR_OCx,
    PHASE_CRT_PWM_CENTER_HIGH,
    FAST_PWM_CMP_MTCH_SET_OCx
}TMR_MODE_SEL;

/*BIT 7 FOC */
typedef enum{
    NO_FRC_CMP,
    FRC_CMP_OP_OCx
}FORCE_OP_CMR_SEL;

typedef enum{
	TMR_OVERFLOW,
	COMPARE_MATCH
}TMR_FLAG;

/******************REGISTERS STRUCT*****************************/
typedef struct {
    uint8_t CS0x   :3;
    uint8_t WG_COM :4;
    uint8_t FOCx   :1;
}TMRx_TCCRx;

typedef struct {
	uint8_t TOIE0   :1;
	uint8_t OCIE0   :1;
	uint8_t TOIE1   :1;
	uint8_t OCIE1B  :1;
	uint8_t OCIE1A  :1;
	uint8_t TICIE1  :1;
 	uint8_t TOIE2   :1;
	uint8_t OCIE2   :1;
}TMR_TIMSK;

typedef struct {
	uint8_t TOV0    :1;
	uint8_t OCF0    :1;
	uint8_t TOV1    :1;
 	uint8_t OCF1B   :1;
	uint8_t OCF1A   :1;
	uint8_t ICIF1   :1;
	uint8_t TOV2    :1;
	uint8_t OCF2    :1;
}TMR_TIFR;



/*********************** ISR PROTOTYPES ****************************/
void __vector_4 (void)__attribute__((signal));
void __vector_5 (void)__attribute__((signal));
void __vector_6 (void)__attribute__((signal));
void __vector_7 (void)__attribute__((signal));
void __vector_8 (void)__attribute__((signal));
void __vector_9 (void)__attribute__((signal));
void __vector_10 (void)__attribute__((signal));
void __vector_11 (void)__attribute__((signal));
#endif
