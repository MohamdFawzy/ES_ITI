/********************ADC_HAL*******************************/
/*
File name: 	ADC_HAL.c

*/

/***********************INCULDES*************************/
#define ADC_HAL
#include "ADC_priv.h"

/*******************************************************/

void ADC_Init(){
	//ENABLE ADC , CHOOSE V REF , CHOOSE PRSCALER , DATA ADJUSTMENT.
	#if ADC_ENABLED == ADC_ON
		ADC_MODULE_INIT ADC_MODULE = {HWREG(ADCSRA),HWREG(ADMUX),HWREG(SFIOR)};
		ADC_MODULE.REG_ADCSRA->ADPS     = ADC_PRESCALER_VALUE;
		ADC_MODULE.REG_ADMUX ->REFS     = ADC_REFERENCE;
		ADC_MODULE.REG_ADMUX->ADLAR     = ADC_DATA_ADJUSTMENT;

		#if ADC_AUTO_TRIG == TRIGGER_ON
		if(ADC_MODULE.REG_ADCSRA->ADATE == TRIGGER_ON){
			ADC_MODULE.REG_SFIOR->ADTS  = ADC_TRIGGER_SRC;
		}
		#endif
		ADC_MODULE.REG_ADCSRA->ADEN             = ADC_ENABLED_STATE;
	#endif
	
}
ErrorStatus ADC_StartConversionSyn(uint8_t Channel, uint16_t* Result){
	ErrorStatus ADC_STATUS = OK;
	if (ADC_CHANNEL >= MAX_CHANNEL_NO){
		ADC_STATUS = WRG_CHANNEL_NO;		
	}
	else if(NULL == Result ){
		ADC_STATUS = NOK;	
	}
	else {
		uint16_t ADC_TIME_COUNT = COUNT_START;
		ADC_ADCSRA* ADC_ADCSRA_REG = HWREG(ADCSRA);
		ADC_ADMUX* ADC_ADMUX_REG =HWREG(ADMUX);
		/* SELECT CHANNEL */
		
		/* START CONVERSION */
		ADC_ADCSRA_REG->ADSC = START;
		/* LOOPING TILL CONVERSION IS COMPLETE */
        while ((CONV_COMP == ADC_ADCSRA_REG->ADIF)&&(MAX_TIME_OUT == ADC_TIME_COUNT)){
			ADC_TIME_COUNT++;
		}
		if (MAX_TIME_OUT == ADC_TIME_COUNT)	{
			ADC_STATUS = ADC_SYNC_TIME_EXCEEDED; 
		}
		else{
			/* CLEAR ADIF FLAG MANUALLY */
			ADC_ADCSRA_REG->ADIF = ADC_FLAG_CLR;
			/* SAVE DATA */
			if (ADC_8_BITS==ADC_RESOLUTION){ /*READ ADHL ONLY*/
				*Result = HWREG(ADCH);
			}
			else if (ADC_10_BITS==ADC_RESOLUTION){ /*READ BOTH */
				*Result = HWREG_10_BIT(ADCL);
			}
			else;
		}
		
	}
	return ADC_STATUS;
}
ErrorStatus ADC_StartConversionAsyn (uint8_t Channel, uint16_t* Result, void (*fncptr)(void){
	// ENABLE INTERRUPT ..
	// CHECK ON ADIF (INT FLAG ) IS CLEARED BY WRITING 1..
	ErrorStatus ADC_STATUS = OK;
	if (ADC_CHANNEL >= MAX_CHANNEL_NO){
		ADC_STATUS = WRG_CHANNEL_NO;		
	}
	else if(NULL == Result ){
		ADC_STATUS = NOK;	
	}
	else {
		if (BUSY == ADC_STATE )	{
			/* code */
		}
		else{
			ADC_STATE = BUSY;
			ADC_ADCSRA* ADC_ADCSRA_REG = HWREG(ADCSRA);
			ADC_ADMUX* ADC_ADMUX_REG =HWREG(ADMUX);
			/* ENABLE INTERRUPT*/
			/*GLOBAL INTERRUPT ENABLE MASK*/
			SET_BIT(HWREG(SREG),GLB_INTERUPPT_BIT);
			/* PERIPERAL INTERRUPT ENABLE */
			ADC_ADCSRA_REG ->ADIE = ADC_INTERRUPT_ON;
			ADC_ADCSRA_REG ->ADIE = ADC_FLAG_CLR;
			/* START CONVERSION */
			ADC_ADCSRA_REG->ADSC = START;
			/* ASIGN GLOBAL VARIABLES TO *RESULT AND END OF JOB FUNCTION*/
            ADC_RESULT = Result;
			ptr_END_OF_JOB = fncptr;
		}
	}
	return ADC_STATUS;
	
}

void __vector_16 (void)__attribute__((signal));
void __vector_16(void){
	/*SAVE RESULT AND CALL FUNC AND SET STATE*/
	*ADC_RESULT =  HWREG(ADCH);
	ptr_END_OF_JOB();
	ADC_STATE = IDLE;
}