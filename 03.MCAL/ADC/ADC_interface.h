/********************ADC*******************************/
/*
File name: 	ADC_interface.h

*/
#ifndef ADC_INTERFACE_H
#define ADC_INTERFACE_H
/********************************************************/




/*********************FUNCTIONS_PROTOTYPES***************/
void ADC_Init(void);
ErrorStatus ADC_StartConversionSyn  (uint8_t Channel, uint16__t* Result);
ErrorStatus ADC_StartConversionAsyn (uint8_t Channel, uint16__t* Result, void (*fncptr)(void));


#endif
