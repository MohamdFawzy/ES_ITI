/***************************TIMR*******************************/
/*
File name: 	timer_interface.h


*/
#ifndef TMR_INTERFACE_H
#define TMR_INTERFACE_H


/*FUCNTIONS PROTOTYPES*/
void TMR0_INIT (void);
void TMR0_START(void);
uint8_t TMRx_TOVsync(uint8_t TMR_PERIHPHERAL);
uint8_t TMRx_OCFsync(uint8_t TMR_PERIHPHERAL);
uint8_t TMRx_TOVAsync(uint8_t TMR_PERIHPHERAL);
uint8_t TMRx_OCFAsync(uint8_t TMR_PERIHPHERAL);
uint8_t TMRx_SETValue(uint8_t TMR_PERIHPHERAL,uint8_t* Value);
uint8_t TMRx_GET_TMRValue ();

#endif
