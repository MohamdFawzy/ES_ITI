#ifndef Std_Types
#define Std_Types

//_t :typedef data type
//typedef char 		int8_t; //127 to -128
//typedef short int   int16_t; //32767 to -32768
typedef long int 	int32_t; //4bytes
typedef long long 	int64_t; //8bytes

typedef unsigned char 		uint8_t; //1 byte
typedef short unsigned int 	uint16__t; //2bytes
typedef long unsigned int 	uint32_t; //4bytes
typedef unsigned long long 			uint64_t; //8bytes

typedef double d64;// 8bytes
typedef long double d128; // 16bytes


typedef float f32;//4bytes

//Func Like Macros
#define NULL                ((void*)0)

#define SET_BIT(REG,BIT)	(REG)|=(1<<BIT)
#define GET_BIT(REG,BIT)	(REG)&(1<<BIT)
#define READ_BIT(REG,BIT)	(((REG)&(1<<BIT))>>BIT)
#define TOGGLE_BIT(REG,BIT) (REG)^=(1<<BIT)
#define CLR_BIT(REG,BIT)	(REG)&=(~(1<<BIT)) 

//FreqUsed macros
#define MAX(X,Y) (X)>(Y)?(X):(Y)
#define MIN(X,Y) (X)<(Y)?(X):(Y)




#endif
