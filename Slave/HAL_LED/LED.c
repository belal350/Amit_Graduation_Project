/*
* LED.c
*
* Created: 2/26/2021 11:30:48 AM
*  Author: karim
*/

/*
What should i write in source file?
1- Macros
2- Implementation of functions
*/
#include "DIO_interface.h"
#include "LED_CONFIG.h"
#include "LED.h"
#define led0  0
#define led1  1
#define led2  2
//#define PORT_NO DIO_PORTA

/*void LED0_Initialize(void)
{
	//SET_BIT(DDRC, PC2);//Define direction
	//DIO_SetDirection(18, DIO_PIN_OUTPUT);
	MCAL_DIO_u8SetPinDir(uint8_t Copy_u8PortNo ,  uint8_t Copy_u8PinNo ,uint8_t Copy_u8Dir );//Define direction
}*/
void LED0_ON(void)
{
	MCAL_DIO_u8SetPinDir(DIO_PORTC,led0,1);
    MCAL_DIO_u8SetPinValue(DIO_PORTC,led0,1);
}
void LED0_OFF(void)
{
	MCAL_DIO_u8SetPinDir(DIO_PORTC,led0,1);
	MCAL_DIO_u8SetPinValue(DIO_PORTC,led0,0);
}
void LED1_ON(void)
{
	MCAL_DIO_u8SetPinDir(DIO_PORTC,led1,1);
    MCAL_DIO_u8SetPinValue(DIO_PORTC,led1,1);
}
void LED1_OFF(void)
{
	MCAL_DIO_u8SetPinDir(DIO_PORTC,led1,1);
	MCAL_DIO_u8SetPinValue(DIO_PORTC,led1,0);
}void LED2_ON(void)
{
	MCAL_DIO_u8SetPinDir(DIO_PORTC,led2,1);
    MCAL_DIO_u8SetPinValue(DIO_PORTC,led2,1);
}
void LED2_OFF(void)
{
	MCAL_DIO_u8SetPinDir(DIO_PORTC,led2,1);
	MCAL_DIO_u8SetPinValue(DIO_PORTC,led2,0);
}
/*void LED0_TGL(void)
{
	//TGL_BIT(LED0_PORT, LED0_PIN);
	DIO_TogglePin_Value(LED0_PORT, LED0_PIN);
}*/
