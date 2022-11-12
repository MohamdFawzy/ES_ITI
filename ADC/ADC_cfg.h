/********************ADC*******************************/
/*
File name: 	ADC_cfg.h


*/
#ifdef ADC_HAL //file gaurd to be only called by ADC_HAL.c file

#ifndef ADC_CONFIG_H
#define ADC_CONFIG_H
/*****************ADC ENABLE**********************/
#define ADC_ENABLED_STATE        ADC_ON

/**************CHANNEL SELECT ********************/
    /* Please Select 
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
	GND
    */
#define  ADC_CHANNEL             ADC_Channel_0

/************** DATA ADJUSTMENT ******************/
    /* Please SeLect
    DATA_ADJ_RIGHT,
	DATA_ADJ_LEFT
    */
#define ADC_DATA_ADJUSTMENT      DATA_ADJ_LEFT

/*********** REFERENCE VOLTAGE********************/
    /*Please Select
    AREF,
	AVCC,
	RES,
	INTERNAL_256mV
    */
#define ADC_REFERENCE            AREF

/*********** PRESCSALER VALUE*********************/
    /*Please Select
    PRESCALER_2,
	PRESCALER_2,
	PRESCALER_4,
	PRESCALER_8,
	PRESCALER_16,
	PRESCALER_32,
	PRESCALER_64,
	PRESCALER_128,
    */
#define ADC_PRESCALER_VALUE      PRESCALER_128
/***************ADC RESOLUTION********************/
    /* Please Select
        ADC_8_BITS,
	    ADC_10_BITS    
    */
#define ADC_RESOLUTION           ADC_8_BITS
/************ ADC TRIGGER ************************/
    /* Please Select 
        TRIGGER_OFF,
	    TRIGGER_ON
    */
#define ADC_AUTO_TRIG            TRIGGER_OFF

/*** IF TRIGGER IS ENABLED ADC TRIGGER CHANNEL****/
#if ADC_AUTO_TRIG == TRIGGER_ON
    /*Pleas Select 
    FREE_RUNNING_MODE,
	ANALOGUE_COMPARATOR,
	EXT_INTERRUPT_REQ,
	TIMER0_COUNTER0_CMP_MATCH,
	TIMER0_COUNTER0_OVER_FLOW,
	TIMER0_COUNTER0_CMP_MATCH_B,
	TIMER1_COUNTER1_OVER_FLOW,
	TIMER1_COUNTER1_CAP_EVENT
    */
#define ADC_TRIGGER_SRC           FREE_RUNNING_MODE  
#endif

/********** ADC CHAIN CONFIG ********************/
    /*PLEASE SELECT
        ONE_CHANNEL,
	    TWO_CHANNELS,
	    THREE_CHANNELS....
    */
#define CHAIN_LEN                ONE_CHANNEL     

#define ADC_CHAIN_CONFIG     \
{
    {
        .   
    }
    
}


#endif
#endif 