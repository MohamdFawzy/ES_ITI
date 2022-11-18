/********************HDIO*******************************/
/*
File name: 	HDIO_config.h
Author:		Mohamed FaW \zy
Date: 		25/10/2022
version:	2.0
*/
/********************************************************/
#ifndef 	DIO_CONFIG_H
#define 	DIO_CONFIG_H
// {\   // INIT ARRAY FOR ALL CHANNELS AS MACRO

#define    DIO_CONFIG_TABLE    {\
	{\
		.ChannelNo.u8Channel       =  DIO_Channel_0,\
		.ChannelDir                =  DIO_INPUT,\
		.ChannelInitState          =  DIO_LOW},\
    {\
		.ChannelNo.u8Channel       =  DIO_Channel_1,\
		.ChannelDir                =  DIO_INPUT,\
		.ChannelInitState          =  DIO_LOW} \
    },\
    { \
        .ChannelNo.u8Channel       =  DIO_Channel_2,\
        .ChannelDir                =  DIO_INPUT ,\
        .ChannelInitState          =  DIO_LOW \
    },\
    { \
        .ChannelNo.u8Channel       =  DIO_Channel_3,\
        .ChannelDir                =  DIO_INPUT ,\
        .ChannelInitState          =  DIO_LOW \
    },\
    { \
        .ChannelNo.u8Channel       =  DIO_Channel_4,\
        .ChannelDir                =  DIO_INPUT ,\
        .ChannelInitState          =  DIO_LOW \
    },\
    { \
        .ChannelNo.u8Channel       =  DIO_Channel_5,\
        .ChannelDir                =  DIO_INPUT ,\
        .ChannelInitState          =  DIO_LOW \
    },\
    { \
        .ChannelNo.u8Channel       =  DIO_Channel_6,\
        .ChannelDir                =  DIO_INPUT ,\
        .ChannelInitState          =  DIO_LOW \
    },\
    { \
        .ChannelNo.u8Channel       =  DIO_Channel_7,\
        .ChannelDir                =  DIO_INPUT ,\
        .ChannelInitState          =  DIO_LOW \
    },\
    { \
        .ChannelNo.u8Channel       =  DIO_Channel_8,\
        .ChannelDir                =  DIO_INPUT ,\
        .ChannelInitState          =  DIO_LOW \
    },\
    { \
        .ChannelNo.u8Channel       =  DIO_Channel_9,\
        .ChannelDir                =  DIO_INPUT ,\
        .ChannelInitState          =  DIO_LOW \
    },\
    { \
        .ChannelNo.u8Channel       =  DIO_Channel_10,\
        .ChannelDir                =  DIO_INPUT ,\
        .ChannelInitState          =  DIO_LOW \
    },\
    { \
        .ChannelNo.u8Channel       =  DIO_Channel_11,\
        .ChannelDir                =  DIO_INPUT ,\
        .ChannelInitState          =  DIO_LOW \
    },\
    { \
        .ChannelNo.u8Channel       =  DIO_Channel_12,\
        .ChannelDir                =  DIO_INPUT ,\
        .ChannelInitState          =  DIO_LOW \
    },\
    { \
        .ChannelNo.u8Channel       =  DIO_Channel_13,\
        .ChannelDir                =  DIO_INPUT ,\
        .ChannelInitState          =  DIO_LOW \
    },\
    { \
        .ChannelNo.u8Channel       =  DIO_Channel_14,\
        .ChannelDir                =  DIO_INPUT ,\
        .ChannelInitState          =  DIO_LOW \
    },\
    { \
        .ChannelNo.u8Channel       =  DIO_Channel_15,\
        .ChannelDir                =  DIO_INPUT ,\
        .ChannelInitState          =  DIO_LOW \
    },\
    { \
        .ChannelNo.u8Channel       =  DIO_Channel_16,\
        .ChannelDir                =  DIO_INPUT ,\
        .ChannelInitState          =  DIO_LOW \},\
    { \
        .ChannelNo.u8Channel       =  DIO_Channel_17,\
        .ChannelDir                =  DIO_INPUT ,\
        .ChannelInitState          =  DIO_LOW \
    },\
    { \
        .ChannelNo.u8Channel       =  DIO_Channel_18,\
        .ChannelDir                =  DIO_INPUT ,\
        .ChannelInitState          =  DIO_LOW \
    },\
    { \
        .ChannelNo.u8Channel       =  DIO_Channel_19,\
        .ChannelDir                =  DIO_INPUT ,\
        .ChannelInitState          =  DIO_LOW \
    },\
    { \
        .ChannelNo.u8Channel       =  DIO_Channel_20,\
        .ChannelDir                =  DIO_INPUT ,\
        .ChannelInitState          =  DIO_LOW \
    },\
    { \
        .ChannelNo.u8Channel       =  DIO_Channel_21,\
        .ChannelDir                =  DIO_INPUT ,\
        .ChannelInitState          =  DIO_LOW \
    },\
    { \
        .ChannelNo.u8Channel       =  DIO_Channel_22,\
        .ChannelDir                =  DIO_INPUT ,\
        .ChannelInitState          =  DIO_LOW \
    },\
    { \
        .ChannelNo.u8Channel       =  DIO_Channel_23,\
        .ChannelDir                =  DIO_INPUT ,\
        .ChannelInitState          =  DIO_LOW \
    },\
    { \
        .ChannelNo.u8Channel       =  DIO_Channel_24,\
        .ChannelDir                =  DIO_INPUT ,\
        .ChannelInitState          =  DIO_LOW \
    },\
    { \
        .ChannelNo.u8Channel       =  DIO_Channel_25,\
        .ChannelDir                =  DIO_INPUT ,\
        .ChannelInitState          =  DIO_LOW \
    },\
    { \
        .ChannelNo.u8Channel       =  DIO_Channel_26,\
        .ChannelDir                =  DIO_INPUT ,\
        .ChannelInitState          =  DIO_LOW \
    },\
    { \
        .ChannelNo.u8Channel       =  DIO_Channel_27,\
        .ChannelDir                =  DIO_INPUT ,\
        .ChannelInitState          =  DIO_LOW \
    },\
    { \
        .ChannelNo.u8Channel       =  DIO_Channel_28,\
        .ChannelDir                =  DIO_INPUT ,\
        .ChannelInitState          =  DIO_LOW \
    },\
    { \
        .ChannelNo.u8Channel       =  DIO_Channel_29,\
        .ChannelDir                =  DIO_INPUT ,\
        .ChannelInitState          =  DIO_LOW \
    },\
    { \
        .ChannelNo.u8Channel       =  DIO_Channel_30,\
        .ChannelDir                =  DIO_INPUT ,\
        .ChannelInitState          =  DIO_LOW \
    },\
    { \
        .ChannelNo.u8Channel       =  DIO_Channel_31,\
        .ChannelDir                =  DIO_INPUT ,\
        .ChannelInitState          =  DIO_LOW \
    } \
}

#endif
