
/*
 * CPU_CONFIGURATION.h
 *
 */ 

#ifndef CPU_CONFIGURATION_H_
#define CPU_CONFIGURATION_H_

#undef F_CPU /*Remove previous definition*/
#define F_CPU 16000000/*16 MegaHz(16 Million)*/
//#include <avr/io.h> /*All registers are Pre-Defined here*/
#include "AVR_DIO_REG.h"
//#include <util/delay.h>
#include <avr/delay.h>
#include <avr/interrupt.h>
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "DIO_interface.h"
#include "Compiler.h"
#include "SPI_interface.h"
#include "LED.h"
//#include "UART_interface.h"
//#include "UART_interface_SLAVE.h"
//----------------------------------SEV_sEGMENT
//#include"SEV_SEG_Interface.h"
//------------------------------------kEYPAD 
//#include "Keypad_Cfg.h"
//#include "Keypad_interface.h"
#endif /* CPU_CONFIGURATION_H_ */
