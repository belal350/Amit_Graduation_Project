
#include "STD_TYPES.h"

#ifndef BLUETOOTH_UART_H_
#define BLUETOOTH_UART_H_

/*The Parity Options
 * _______________________________________*/
#define UART_PARITY_EVEN      1  /*Even Parity*/
#define UART_PARITY_ODD       2/*Odd Parity*/
#define UART_PARITY_DISABLE   0/*Disable Parity*/
/*_______________________________________________________*/


/*Stop Bit Options
 * _______________________________________*/
#define UART_ONE_STOP_BIT    0/*One Stop Bit */
#define UART_TWO_STOP_BIT    1/*Two Stop Bits*/
/*_______________________________________________________*/

#define UART_SYNC_MODE      1
#define UART_ASYNC_MODE     0


/*Data Bits Options from 5 to 9 Bits
 * _______________________________________*/
#define UART_5_BIT_MODE 0
#define UART_6_BIT_MODE 1
#define UART_7_BIT_MODE 2
#define UART_8_BIT_MODE 3
#define UART_9_BIT_MODE 7

/*________________________________________________________*/

#define UART_POLLING 0
#define UART_INTERRUPT 1
#define slave_0 0
#define slave_1 1
#define slave_2 2
#define slave_3 3
#define PORTNO  DIO_PORTD
#define PIN_PORT PIND
#define s_1 2
#define s_2 3
#define activePIN 2

typedef struct
{
 uint32_t u32_BaudRate;
 uint8_t u8_DataBits;  /* (5~9) bits */
 uint8_t u8_FlagAction;  /***interrupt or polling***/

}str_UartConfg_t1;

/*- FUNCTION DECLARATIONS ----------------------------------*/
/*************************************************************
*Description: Initialization of Uart Module
* Input     : poiter to uart configuration struct
* Output    : Error Status
* */
extern uint8_t H__bluetooth_init(str_UartConfg_t1 * Uart_Config);

/*************************************************************
*Description: Sending byte of data
* Input     : u16Data to send
* Output    : Error Status
* */
extern uint8_t H__bluetooth_sendByteBusyWait(const uint16_t u16_Data);

/*************************************************************
*Description: Receiving byte of data
* Input     : pointer to u16Data
* Output    : Error Status
* */
extern uint8_t H__bluetooth_recieveByteBusyWait(uint16_t *u16_Data);



/*************************************************************
*Description: MCAL_UART_RecieveCallBack
* Input     : pointer to Function
* Output    : Error Status
* */
extern uint8_t H__bluetooth_RecieveCallBack(void (*ptr_PointerToFunction)(uint16_t Copy_u16UartValue));


/*************************************************************
*Description: MCAL_UART_SendCallBack
* Input     : pointer to Value
* Output    : Error Status
* */
extern uint8_t H__bluetooth_SendCallBack(uint16_t *u16UartValue);

void UART_Transmit(uint8_t data);


#endif /* BLUETOOTH_UART_H_ */
