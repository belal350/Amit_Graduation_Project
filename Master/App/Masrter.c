/*

 * Masrter.c
 *
 *  Created on: Apr 22, 2021
 *  Author: BELAL_SHALABY
 */
/**********#includes************/
#include "CPU_CONFIGURATION.h"
#include "BLUETOOTH_UART.h"
#include "SPI_interface.h"

void SEND(uint8_t Entered_order);//send fun. declaration
int main(void){
	//Communication via UART
	str_UartConfg_t1 Data_UART={9600,UART_8_BIT_MODE,UART_INTERRUPT};
	
	//Communication via SPI
	St_SPICfg_t Data_SPI={SPI_MASTER,SPI_MASTER_FREQUENCY_64,SPI_INTERRUPT};
	
	/* intialization of bluetooth using UART
	   intialization of SPI*/
	 H__bluetooth_init(&Data_UART);
	 MCAL_SPI_MasterInit(Data_SPI.ClockFrequency);

	 while(1){
		 H__bluetooth_RecieveCallBack(SEND); /*BLUETOOTH_Interrupt*/
	     } }
		 
     void SEND(uint8_t Entered_order){
	  switch(Entered_order){
        case '1':
        MCAL_SPI_Master_DataCallBack(1,NULL_POINTER);
		 break;
		
		case '2' :
	    MCAL_SPI_Master_DataCallBack(2,NULL_POINTER);
		 break;
		
	    case '3':
		MCAL_SPI_Master_DataCallBack(3,NULL_POINTER);
	     break;
		 
	   	 case '4' :
		 MCAL_SPI_Master_DataCallBack(4,NULL_POINTER);
		  break;
		  
		 case '5' :
		 MCAL_SPI_Master_DataCallBack(5,NULL_POINTER);
		  break;
		  
		 case '6' :
		 MCAL_SPI_Master_DataCallBack(6,NULL_POINTER);
		  break;
			   
}}

















