/*
* LED_CONFIG.h
*
* Created: 2/26/2021 11:30:29 AM
*  Author: karim
*/


#ifndef LED_CONFIG_H_
#define LED_CONFIG_H_
/*
What should i write in the configuration file ?
1- Macros
2- Address of registers
3- Renaming Ports
4- Renaming Pins
5- Renaming status
*/
#include "CPU_CONFIGURATION.h"

#define LED0_PORT             DIO_PORTC
#define LED1_PORT             DIO_PORTC
#define LED2_PORT             DIO_PORTC

#define LED0_PIN              DIO_PIN_0
#define LED1_PIN              DIO_PIN_1
#define LED2_PIN              DIO_PIN_2

#define LED_INPUT             DIO_INPUT
#define LED_OUTPUT            DIO_OUTPUT

#define LED_LOW               DIO_LOW
#define LED_HIGH              DIO_HIGH


#ifndef LED_H_
#define LED_H_
#define PORT_NO DIO_PORTA
#define led0  0
#define led1  1
#define led2  2
/*extern void HAL_TURN_ON_LED_1();
extern void HAL_TURN_OFF_LED_1();
extern void HAL_TURN_ON_LED_2();
extern void HAL_TURN_OFF_LED_2();
extern void HAL_TURN_ON_LED_3();
extern void HAL_TURN_OFF_LED_3();*/

#endif /* LED_H_ */

#endif /* LED_CONFIG_H_ */
