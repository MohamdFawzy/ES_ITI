/***************************TIMR*******************************/
/*
File name: 	timer_cfg.h


*/

#ifndef TMR_CONFIG_H
#define TMR_CONGIG_H

/* Please Select
    NO_SRC_CLK,
    NO_PRESCALING,
    PRESCALER_8,
    PRESCALER_16,
    PRESCALER_256,
    PRESCALER_1024,
    T0_FALLING_EDGE,
    T0_RISING_EDGE
    */
#define TIMER_CLK_SOURCE    PRESCALER_256

/* Please Select
    ***  WGM00 ==0  -> NON_PWM MODE
    NON_PWM_NORMAL,
    NON_PWM_CTC,
    NON_PWM_NORMAL_TOGGLE_OCx,
    NON_PWM_CTC_TOGGLE_OCx,
    NON_PWM_NORMAL_CLR_OCx,
    NON_PWM_CTC_CLR_OCx,
    NON_PWM_NORMAL_SET_OCx,
    NON_PWM_CTC_SET_OCx,
    ***  WGM00 ==1  -> PWM MODE
    PHASE_CRT_PWM_NORMAL_OCx_DISCONNECTED,
    FAST_PWM_NORMAL_OCx_DISCONNECTED,
    PHASE_CRT_PWM_RESERVED,
    FAST_PWM_RESERVED,
    PHASE_CRT_PWM_CENTER_LOW,
    FAST_PWM_CMP_MTCH_CLR_OCx,
    PHASE_CRT_PWM_CENTER_HIGH,
    FAST_PWM_CMP_MTCH_SET_OCx
    */
#define TIMER_MODE  NON_PWM_NORMAL

/*Please Select
    NO_FRC_CMP,
    FRC_CMP_OP_OCx
*/
#define FORCE_CMP_OP  NO_FRC_CMP



#endif