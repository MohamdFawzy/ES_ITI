
#include "timer_priv.h"


void TMR0_INIT (void){
    /* Mode of operation*/
    /* Preload */
    /* Enable interrupt */
    TMRx_TCCRx* TMR0_TCCR0 = (TMRx_TCCRx*)(TCCR0);
    //TMR0_TCCR0 = (TMRx_TCCRx*)(TCCR0);
    //TMR0_TCCR0 = HWREG(TCCR0);
    TMR0_TCCR0->CS0x=NO_SRC_CLK;
    TMR0_TCCR0->WG_COM=TIMER_MODE;
    TMR0_TCCR0->FOCx=FORCE_CMP_OP;

    HWREG(TCNT0)= (0x00u);

}

void TMR0_START(void){
    /*set prescaler */
	TMRx_TCCRx* TMR0_TCCR0 = (volatile TMRx_TCCRx*)(TCCR0);
	TMR0_TCCR0->CS0x =TIMER_CLK_SOURCE;
}

/* 2 flags ( timer overflow - compare match )*/
	// polling on flags if interrupt is not enabled
ErrorStatus TMRx_TOVsync(uint8_t TMR_PERIHPHERAL){
	TMR_TIFR* TMRx_TIFR = (volatile TMR_TIFR*)(TIFR);
	ErrorStatus TMR_STATE = OK;
	uint16__t TMR_TIME_COUNT = COUNT_START;
		switch(TMR_PERIHPHERAL){
			case TMR0:
				TMRx_TIFR->TOV0 = CLR_FLAG;
				while(FLAG_NOT_RAISED == (TMRx_TIFR->TOV0) && MAX_TIME_OUT > TMR_TIME_COUNT ) TMR_TIME_COUNT++;
				break;
			case TMR1:
				//TMRx_TIFR->TOV1 = CLR_FLAG;
				//while(FLAG_NOT_RAISED == (TMRx_TIFR->TOV1A) && MAX_TIME_OUT > TMR_TIME_COUNT ) TMR_TIME_COUNT++;
				break;
			case TMR2:
				TMRx_TIFR->TOV2 = CLR_FLAG;
				while(FLAG_NOT_RAISED == (TMRx_TIFR->TOV2) && MAX_TIME_OUT > TMR_TIME_COUNT ) TMR_TIME_COUNT++;
				break;
			default:
				TMR_STATE = NOK;
				break;
		}
		if ( MAX_TIME_OUT == TMR_TIME_COUNT)
				TMR_STATE = TMR_SYNC_TIME_EXCEEDED;
		else{
			switch(TMR_PERIHPHERAL){
				case TMR0:
					TMRx_TIFR->TOV0 = CLR_FLAG;
					break;
				case TMR1:
					//TMRx_TIFR->TOV1A = CLR_FLAG;
					break;
				case TMR2:
					TMRx_TIFR->TOV2 = CLR_FLAG;
					break;
				default:
					TMR_STATE = NOK;
					break;
			}
		}
	return TMR_STATE;
}
ErrorStatus TMRx_OCFsync(uint8_t TMR_PERIHPHERAL){
	TMR_TIFR* TMRx_TIFR = (volatile TMR_TIFR*)(TIFR);
	ErrorStatus TMR_STATE = OK;
	uint16__t TMR_TIME_COUNT = COUNT_START;
		switch(TMR_PERIHPHERAL){
			case TMR0:
				TMRx_TIFR->OCF0 = CLR_FLAG;
				while(FLAG_NOT_RAISED == (TMRx_TIFR->OCF0) && MAX_TIME_OUT > TMR_TIME_COUNT ) TMR_TIME_COUNT++;
				break;
			case TMR1:
				//TMRx_TIFR->OCF1A = CLR_FLAG;
				//while(FLAG_NOT_RAISED == (TMRx_TIFR->OCF1A) && MAX_TIME_OUT > TMR_TIME_COUNT ) TMR_TIME_COUNT++;
				break;
			case TMR2:
				TMRx_TIFR->OCF2 = CLR_FLAG;
				while(FLAG_NOT_RAISED == (TMRx_TIFR->OCF2) && MAX_TIME_OUT > TMR_TIME_COUNT ) TMR_TIME_COUNT++;
				break;
			default:
				TMR_STATE = NOK;
				break;
		}
		if ( MAX_TIME_OUT == TMR_TIME_COUNT)
				TMR_STATE = TMR_SYNC_TIME_EXCEEDED;
		else{
					switch(TMR_PERIHPHERAL){
						case TMR0:
							TMRx_TIFR->OCF0 = CLR_FLAG;
							break;
						case TMR1:
							//TMRx_TIFR->OCF1A = CLR_FLAG;
							break;
						case TMR2:
							TMRx_TIFR->OCF2 = CLR_FLAG;
							break;
						default:
							TMR_STATE = NOK;
							break;
					}
				}
	return TMR_STATE;
}
ErrorStatus TMRx_TOVAsync(uint8_t TMR_PERIHPHERAL){
	ErrorStatus TMR_STATE = OK;
	TMR_TIFR* TMRx_TIFR = (volatile TMR_TIFR*)(TIFR);
	TMR_TIMSK* TMRx_TIMSK =(volatile TMR_TIFR*)(TIMSK);
	switch(TMR_PERIHPHERAL){
		case TMR0:
			TMRx_TIFR->TOV0 = CLR_FLAG;
			TMRx_TIMSK->TOIE0 = INTERRUPT_ON;
			break;
		case TMR1:
			//TMRx_TIFR->TOV1 = CLR_FLAG;
			//
			break;
		case TMR2:
			TMRx_TIFR->TOV2 = CLR_FLAG;
			TMRx_TIMSK->TOIE0 = INTERRUPT_ON;
			break;
		default:
			TMR_STATE = NOK;
			break;
	}
	if (OK ==TMR_STATE) GLB_INTERUPPT_ENABLE;
	else;
	return TMR_STATE;
}
ErrorStatus TMRx_OCFAsync(uint8_t TMR_PERIHPHERAL){
	ErrorStatus TMR_STATE = OK;
		TMR_TIFR* TMRx_TIFR = (volatile TMR_TIFR*)(TIFR);
		TMR_TIMSK* TMRx_TIMSK =(volatile TMR_TIFR*)(TIMSK);
		switch(TMR_PERIHPHERAL){
			case TMR0:
				TMRx_TIFR->OCF0 = CLR_FLAG;
				TMRx_TIMSK->OCIE0 = INTERRUPT_ON;
				break;
			case TMR1:
				//TMRx_TIFR->TOV1 = CLR_FLAG;
				//
				break;
			case TMR2:
				TMRx_TIFR->OCF2 = CLR_FLAG;
				TMRx_TIMSK->OCIE2 = INTERRUPT_ON;
				break;
			default:
				TMR_STATE = NOK;
				break;
		}
		if (OK ==TMR_STATE) GLB_INTERUPPT_ENABLE;
		else;
		return TMR_STATE;
}

ErrorStatus TMRx_SETValue(uint8_t TMR_PERIHPHERAL,uint8_t* Value){
	ErrorStatus TMR_STATE = OK;
	switch(TMR_PERIHPHERAL){
		case TMR0:
			HWREG(TCNT0) = *Value;
			break;
		case TMR1:
			//HWREG(TCNT1) = *Value;
			break;
		case TMR2:
			HWREG(TCNT2) = *Value;
			break;
		default:
			TMR_STATE = NOK;
			break;
	}
	return TMR_STATE;
}

uint8_t TMRx_GET_TMRValue (){
    return 0;
}
// TMR0
void __vector_11(void){ //TIMER0 OVF
	TMR_TIFR* TMRx_TIFR = (volatile TMR_TIFR*)(TIFR);


}

void __vector_10(void){//TIMER0 COMP
	TMR_TIFR* TMRx_TIFR = (volatile TMR_TIFR*)(TIFR);


}

void __vector_9(void){ //TIMER1 OVF

}
void __vector_8(void){// TIMER1 COMPB

}
void __vector_7(void){ //TIMER1 COMPA

}
void __vector_6(void){ //TIMER1 CAPT

}
void __vector_5(void){ //TIMER2 OVF

}
void __vector_4(void){ //TIMER2 COMP

}

