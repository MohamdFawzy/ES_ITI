/********************ADC**********************************/
/*
File name: 	ADC_priv.h

*/
/********************************************************/
#ifndef ADC_PRIVATE_H
#define ADC_PRIVATE_H

#include "Std_Types.h"
#include "ADC_cfg.h"
#include "ADC_interface.h"

typedef enum {
	OK,
	NOK, 
	WRG_CHANNEL_NO,
	ADC_SYNC_TIME_EXCEEDED
}ErrorStatus;

#define HWREG(REG)                 (*(volatile(uint8_t*)(REG))) 
#define HWREG_10_BIT(REG)          (*(volatile(uint16_t*)(REG))) 
/****************ADC_REGESTERS****************************/
#define  ADMUX      (0x27u)
#define  ADCSRA     (0x26u)
#define  ADCH       (0x25u)
#define  ADCL       (0x24u) 

#define  SFIOR      (0x50u)
#define  SREG       (0x5Fu)  


#define  GLB_INTERUPPT_BIT (7u)
/**********************ADMUX******************************/
/*BITS 0 TO 4*/
typedef enum{
	ADC_Channel_0,
	ADC_Channel_1,
	ADC_Channel_2,
	ADC_Channel_3,
	ADC_Channel_4,
	ADC_Channel_5,
	ADC_Channel_6,
	ADC_Channel_7,
	DIFF_ADC0_ADC0_10x,
	DIFF_ADC1_ADC0_10x,
	DIFF_ADC0_ADC0_200x,
	DIFF_ADC1_ADC0_200x,
	DIFF_ADC2_ADC2_10x,
	DIFF_ADC3_ADC2_10x,
	DIFF_ADC2_ADC2_200x,
	DIFF_ADC3_ADC2_200x,
	DIFF_ADC0_ADC1_1x,
	DIFF_ADC1_ADC1_1x,
	DIFF_ADC2_ADC1_1x,
	DIFF_ADC3_ADC1_1x,
	DIFF_ADC4_ADC1_1x,
	DIFF_ADC5_ADC1_1x,
	DIFF_ADC6_ADC1_1x,
	DIFF_ADC7_ADC1_1x,
	DIFF_ADC0_ADC2_1x,
	DIFF_ADC1_ADC2_1x,
	DIFF_ADC2_ADC2_1x,
	DIFF_ADC3_ADC2_1x,
	DIFF_ADC4_ADC2_1x,
	DIFF_ADC5_ADC2_1x,
	V_BG,
	GND,
	MAX_CHANNEL_NO	
}ADC_Channel_Sel;  

/* BIT 5*/
typedef enum{
	DATA_ADJ_RIGHT,
	DATA_ADJ_LEFT
}ADC_Data_Adj;

/*BITS 6,7*/
typedef enum{
	AREF,
	AVCC,
	RES,
	INTERNAL_256mV
}ADC_Reference_Sel;


/*************************************ADCSRA*********************************/
/* BIT 0:2  PRESCALER */
typedef enum {
	PRESCALER_2,
	PRESCALER_2,
	PRESCALER_4,
	PRESCALER_8,
	PRESCALER_16,
	PRESCALER_32,
	PRESCALER_64,
	PRESCALER_128,
}ADC_PRESCALER;

/* BIT 3 INTERRUPT ENABLE  	SREG_I_BIT(bit 7) SHOULD BE 1*/
typedef enum{
	ADC_INTERRUPT_OFF,
	ADC_INTERRUPT_ON
}ADC_INTERRUPT_ENABLE;

/* BIT 4 INTERRUPT FLAG CLEARED BY WRITING 1 */
typedef enum {
	CONV_COMP,
	ADC_FLAG_CLR
}ADC_INTERRUPT_FLAG;

/* BIT 5*///TRIGGER IN SRC FROM ADTS IN SFIOR
typedef enum{
	TRIGGER_OFF,
	TRIGGER_ON
}ADC_AUTO_TRIGGER;
/* BIT 6*/
typedef enum{
	NOTHING,
	START
}ADC_CONVERSION;
/*BIT 7*/
typedef enum{
	ADC_OFF,
	ADC_ON
}ADC_ENABLE;
/***************************ADC Trigger SRC *******************************/
/*                             SFIOR                                      */
/*BITS 5:7 ADT2:0*/
typedef enum{
	FREE_RUNNING_MODE,
	ANALOGUE_COMPARATOR,
	EXT_INTERRUPT_REQ,
	TIMER0_COUNTER0_CMP_MATCH,
	TIMER0_COUNTER0_OVER_FLOW,
	TIMER0_COUNTER0_CMP_MATCH_B,
	TIMER1_COUNTER1_OVER_FLOW,
	TIMER1_COUNTER1_CAP_EVENT
}ADC_AUTO_TRIGGER_SOURCE;
/*BIT 4 should be zero (reserved)*/
/********************************REG_STRUCT*********************************/
typedef struct{
	ADC_Channel_Sel        MUX     :5;
	ADC_Data_Adj           ADLAR   :1;
	ADC_Reference_Sel      REFS    :2;
}ADC_ADMUX;

typedef struct {
	ADC_PRESCALER          ADPS    :3;
	ADC_INTERRUPT_ENABLE   ADIE    :1;
	ADC_INTERRUPT_FLAG     ADIF    :1;
	ADC_AUTO_TRIGGER       ADATE   :1;
	ADC_CONVERSION         ADSC    :1;
	ADC_ENABLE             ADEN    :1;
}ADC_ADCSRA;

typedef struct {
	uint8_t                  RESERVED   :5;
	ADC_AUTO_TRIGGER_SOURCE  ADTS       :3;
}ADC_SFIOR;




/***************************** MODULE STRUCT ******************************/
typedef struct {
	ADC_ADCSRA* REG_ADCSRA;
	ADC_ADMUX*  REG_ADMUX;
	ADC_SFIOR*  REG_SFIOR;
}ADC_MODULE_INIT;


typedef enum{
	IDLE,
	BUSY
}STATE;

typedef struct {
	
}ADC_DATA;

/***************************DEFINATIONS******************************/
#define COUNT_START                   (0u)
#define MAX_TIME_OUT                  (1000u)
typedef enum{
	ADC_8_BITS,
	ADC_10_BITS
}ADC_BITS_RES;
/**************************CHAIN STRUCT******************************/
typedef enum{
	REV,
	ONE_CHANNEL,
	TWO_CHANNELS,
	THREE_CHANNELS,
	FOUR_CHANNELS,
	FIVE_CHANNELS,
	SIX_CHANNELS,
	SEVEN_CHANNELS
}CHANNEL_CHAIN;



typedef struct {
	uint8_t CHAIN_LENGTH;
	uint8_t *Result;
	uint8_t *Channel;
	void (*ptrfunc)(void);
}ADC_CHAIN_GRP;
/*************************GLOBAL VARIABLES***************************/
STATE ADC_STATE = IDLE;
uint16_t ADC_RESULT;



/* Array of Struct with length of chain */
ADC_CHAIN_GRP ADC_CHAIN_CH[CHAIN_LEN];
static uint16_t ADC_CH_RESULT[CHAIN_LEN];
static uint8_t ADC_CH[CHAIN_LEN];
void (*ADC_FUNC_PTR)(void)[CHAIN_LEN];




#endif 