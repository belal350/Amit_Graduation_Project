/*

 * SLAVE.c
 *
 *  Created on: Apr 22, 2021
 *  Author: BELAL_SHALABY
 */
/**********#includes***********/
#include "CPU_CONFIGURATION.h"
#include "LED.h"

void process(uint8_t Entered_order);//process fun. declaration
int main(void){

	//intialization of SPI
	 MCAL_SPI_SlaveInit();

	 while(1){

	  MCAL_SPI_Slave_DataCallBack('\0',process);
	 }} /*SPI_Interrupt*/


void process(uint8_t Entered_order){
	switch(Entered_order){
         case 1:
         LED0_ON();      //enter 1 to turn on led0
		  break;

		 case 2 :
         LED0_OFF();//enter 2 to turn off led0
		  break;

	    case 3:
         LED1_ON();      //enter 3 to turn on led1
	      break;

	   	 case 4 :
         LED1_OFF();//enter 4 to turn off led1
          break;

		 case 5 :
         LED2_ON();      //enter 5 to turn on led2
		  break;

		 case 6 :
         LED2_OFF();//enter 6 to turn off led2
          break;

}}
