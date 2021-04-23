/*
 * LED.h
 *
 * Created: 2/26/2021 11:30:38 AM
 *  Author: karim
 */ 


#ifndef LED_H_
#define LED_H_
/*
What should i write in header file?
1- Macros
2- User Defined Data types(Structure, Union, Enum)
3- Global Variable (If Exist)
4- Functions Prototypes
*/

#include "LED_CONFIG.h"

//void LED0_Initialize(void);
void LED0_ON(void);
void LED0_OFF(void);
void LED0_TGL(void);

//void LED1_Initialize(void);
void LED1_ON(void);
void LED1_OFF(void);
void LED1_TGL(void);

//void LED2_Initialize(void);
void LED2_ON(void);
void LED2_OFF(void);
void LED2_TGL(void);

#endif /* LED_H_ */
