
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "Compiler.h"

#include "DIO_interface.h"

#include "AVR_DIO_REG.h"


/*********************************************************************
 *                    FUNCTIONS DEFINITIONS
 *********************************************************************/


/*_______________________________________________________________________________________________________________________________*/
/*Description: PIN Initialization Set its Direction
 * Input     : Copy_u8PortNo (Number of Port (PORTA or B or C or D ) , Copy_u8PinNo (Pin No. 0 : 7) , Copy_u8Dir (Direction Input or Output)
 * Output    : Error Checking
 *_______________________________________________________________________________________________________________________________*/
uint8_t MCAL_DIO_u8SetPinDir(uint8_t Copy_u8PortNo ,  uint8_t Copy_u8PinNo ,uint8_t Copy_u8Dir )
{
	uint8_t Local_u8ErrorStatus  = NO_ERROR ;   					/*ERROR Status : NO ERROR */

	if(Copy_u8PinNo >= DIO_PIN_0 && Copy_u8PinNo <= DIO_PIN_7)   	/*Check Entered PIN No. is Available*/
	{
		switch(Copy_u8PortNo)										/*Switch on the Port No. to Select The suitable Register*/
		{
			case DIO_PORTA :										/*In Case PORTA then we need To Write To DDRA REGESTER*/
				ASSIGN_BIT(DDRA , Copy_u8PinNo , Copy_u8Dir);		/*Assign The Direction To Input or Output*/
				break ;
			case DIO_PORTB :                                        /*In Case PORTB then we need To Write To DDRB REGESTER*/
				ASSIGN_BIT(DDRB , Copy_u8PinNo , Copy_u8Dir);   	/*Assign The Direction To Input or Output*/
				break ;
			case DIO_PORTC :                                        /*In Case PORTC then we need To Write To DDRC REGESTER*/
				ASSIGN_BIT(DDRC , Copy_u8PinNo , Copy_u8Dir);   	/*Assign The Direction To Input or Output*/
				break ;
			case DIO_PORTD :                                        /*In Case PORTD then we need To Write To DDRD REGESTER*/
				ASSIGN_BIT(DDRD , Copy_u8PinNo , Copy_u8Dir);   	/*Assign The Direction To Input or Output*/
				break ;
			default :												/*Check Entered Port is Available*/
				Local_u8ErrorStatus = ERROR;						/*ERROR Status : ERROR */
				break;
		}
	}
	else
	{
		Local_u8ErrorStatus = ERROR ;								/*ERROR Status : ERROR */
	}

	return Local_u8ErrorStatus ;									/*Return Error Status*/
}

/*_______________________________________________________________________________________________________________________________*/
/*Description: PORT Initialization Set its Direction
 * Input     : Copy_u8PinNo (Pin No. 0 : 7) , Copy_u8Dir (Direction Input or Output)
 * Output    : Error Checking
 *_______________________________________________________________________________________________________________________________*/
uint8_t MCAL_DIO_u8SetPortDir(uint8_t Copy_u8PortNo ,uint8_t Copy_u8Dir )
{
	uint8_t Local_u8ErrorStatus  = NO_ERROR;						/*ERROR Status : NO ERROR */

	switch(Copy_u8PortNo)											/*Switch on the Port No. to Select The suitable Register*/
	{
		case DIO_PORTA :                                      		/*In Case PORTA then we need To Write To DDRA REGESTER*/
			DDRA = Copy_u8Dir;                            			/*Assign The Direction To Input or Output*/
			break ;
		case DIO_PORTB :                                      		/*In Case PORTB then we need To Write To DDRB REGESTER*/
			DDRA = Copy_u8Dir;                                		/*Assign The Direction To Input or Output*/
			break ;
		case DIO_PORTC :                                      		/*In Case PORTC then we need To Write To DDRC REGESTER*/
			DDRA = Copy_u8Dir;                                		/*Assign The Direction To Input or Output*/
			break ;
		case DIO_PORTD :                                      		/*In Case PORTD then we need To Write To DDRD REGESTER*/
			DDRA = Copy_u8Dir;                                		/*Assign The Direction To Input or Output*/
			break ;
		default :                                             		/*Check Entered Port is Available*/
			Local_u8ErrorStatus = ERROR;                      		/*ERROR Status : ERROR */
			break;
	}


	return Local_u8ErrorStatus ;									/*Return Error Status*/

}

/*_______________________________________________________________________________________________________________________________*/
/*Description: PIN Output Value
 * Input     : Copy_u8PortNo (Number of Port (PORTA or B or C or D ) , Copy_u8PinNo (Pin No. 0 : 7) , Copy_u8Value (Direction High or Low)
 * Output    : Error Checking
 *_______________________________________________________________________________________________________________________________*/
uint8_t MCAL_DIO_u8SetPinValue(uint8_t Copy_u8PortNo ,  uint8_t Copy_u8PinNo ,uint8_t Copy_u8Value )
{
	uint8_t Local_u8ErrorStatus  = NO_ERROR;						/*ERROR Status : NO ERROR */

	if(Copy_u8PinNo >= DIO_PIN_0 && Copy_u8PinNo <= DIO_PIN_7)      /*Check Entered PIN No. is Available*/
	{
		switch(Copy_u8PortNo)                                       /*Switch on the Port No. to Select The suitable Register*/
		{
			case DIO_PORTA :                                        /*In Case PORTA then we need To Write To PORTA REGESTER*/
				ASSIGN_BIT(PORTA , Copy_u8PinNo , Copy_u8Value);    /*Assign The Direction To Input or Output*/
				break ;
			case DIO_PORTB :                                        /*In Case PORTB then we need To Write To PORTB REGESTER*/
				ASSIGN_BIT(PORTB , Copy_u8PinNo , Copy_u8Value);    /*Assign The Value To High or Low*/
				break ;
			case DIO_PORTC :                                        /*In Case PORTC then we need To Write To PORTC REGESTER*/
				ASSIGN_BIT(PORTC , Copy_u8PinNo , Copy_u8Value);    /*Assign The Value To High or Low*/
				break ;
			case DIO_PORTD :                                        /*In Case PORTD then we need To Write To PORTD REGESTER*/
				ASSIGN_BIT(PORTD , Copy_u8PinNo , Copy_u8Value);    /*Assign The Value To High or Low*/
				break ;
			default :                                               /*Check Entered Port is Available*/
				Local_u8ErrorStatus = ERROR;                        /*ERROR Status : ERROR */
				break;
		}
	}
	else
	{
		Local_u8ErrorStatus = ERROR ;                               /*ERROR Status : ERROR */
	}

		return Local_u8ErrorStatus ;                                /*Return Error Status*/
}

/*_______________________________________________________________________________________________________________________________*/
/*Description: PORT Output Value
 * Input     : Copy_u8PortNo (Number of Port (PORTA or B or C or D ) , Copy_u8Value (Direction High or Low)
 * Output    : Error Checking
 *_______________________________________________________________________________________________________________________________*/
uint8_t MCAL_DIO_u8SetPortValue(uint8_t Copy_u8PortNo ,uint8_t Copy_u8Value )
{
	uint8_t Local_u8ErrorStatus  = NO_ERROR; 						/*ERROR Status : NO ERROR */

	switch(Copy_u8PortNo)                                           /*Switch on the Port No. to Select The suitable Register*/
	{
		case DIO_PORTA :                                            /*In Case PORTA then we need To Write To PORTA REGESTER*/
			PORTA = Copy_u8Value;                                   /*Assign The Value To High or Low*/
			break ;
		case DIO_PORTB :                                            /*In Case PORTB then we need To Write To PORTB REGESTER*/
			PORTB = Copy_u8Value;                                   /*Assign The Value To High or Low*/
			break ;
		case DIO_PORTC :                                            /*In Case PORTC then we need To Write To PORTC REGESTER*/
			PORTC = Copy_u8Value;                                   /*Assign The Value To High or Low*/
			break ;
		case DIO_PORTD :                                            /*In Case PORTD then we need To Write To PORTD REGESTER*/
			PORTD = Copy_u8Value;                                   /*Assign The Value To High or Low*/
			break ;
		default :                                                   /*Check Entered Port is Available*/
			Local_u8ErrorStatus = ERROR;                            /*ERROR Status : ERROR */
			break;
	}


	return Local_u8ErrorStatus ;                                    /*Return Error Status*/

}

/*_______________________________________________________________________________________________________________________________*/
/*Description: Get Pin Value if The pin is Input
 * Input     : Copy_u8PortNo (Number of Port (PORTA or B or C or D ) , Copy_u8PinNo (Pin No. 0 : 7) , ptr_u8Value (Pointer to Return Value)
 * Output    : Error Checking
 *_______________________________________________________________________________________________________________________________*/
uint8_t MCAL_DIO_u8GetPinValue(uint8_t Copy_u8PortNo ,  uint8_t Copy_u8PinNo ,uint8_t *ptr_u8Value )
{
	uint8_t Local_u8ErrorStatus = NO_ERROR;							/*ERROR Status : NO ERROR */

	if(Copy_u8PinNo >= DIO_PIN_0 && Copy_u8PinNo <= DIO_PIN_7)      /*Check Entered PIN No. is Available*/
	{
		switch(Copy_u8PortNo)                                   	/*Switch on the Port No. to Select The suitable Register*/
		{
			case DIO_PORTA :                                    	/*In Case PORTA then we need To read from PINA REGESTER*/
				*ptr_u8Value = GET_BIT(PINA , Copy_u8PinNo);    	/*Assign Value To Pointer*/
				break ;
			case DIO_PORTB :                                    	/*In Case PORTB then we need To read from PINB REGESTER*/
				*ptr_u8Value = GET_BIT(PINB , Copy_u8PinNo);    	/*Assign Value To Pointer*/
				break ;
			case DIO_PORTC :                                    	/*In Case PORTC then we need To read from PINC REGESTER*/
				*ptr_u8Value = GET_BIT(PINC , Copy_u8PinNo);    	/*Assign Value To Pointer*/
				break ;
			case DIO_PORTD :                                    	/*In Case PORTD then we need To read from PIND REGESTER*/
				*ptr_u8Value = GET_BIT(PIND , Copy_u8PinNo);    	/*Assign Value To Pointer*/
				break ;
			default :                                           	/*Check Entered Port is Available*/
				Local_u8ErrorStatus = ERROR;                    	/*ERROR Status : ERROR */
				break;
		}
	}
		else
		{
			Local_u8ErrorStatus = ERROR ;                           /*ERROR Status : ERROR */
		}

		return Local_u8ErrorStatus ;                                /*Return Error Status*/
}

/*_______________________________________________________________________________________________________________________________*/
/*Description: Get Port Value if The port is Input
 * Input     : Copy_u8PortNo (Number of Port (PORTA or B or C or D ) , ptr_u8Value (Pointer to Return Value)
 * Output    : Error Checking
 *_______________________________________________________________________________________________________________________________*/
uint8_t MCAL_DIO_u8GetPortValue(uint8_t Copy_u8PortNo ,uint8_t *ptr_u8Value )
{
	uint8_t Local_u8ErrorStatus = NO_ERROR;							/*ERROR Status : NO ERROR */

	switch(Copy_u8PortNo)                                           /*Switch on the Port No. to Select The suitable Register*/
	{
		case DIO_PORTA :                                            /*In Case PORTD then we need To read from PINA REGESTER*/
			*ptr_u8Value = PINA ;                                   /*Assign Value To Pointer*/
			break ;
		case DIO_PORTB :                                            /*In Case PORTD then we need To read from PINB REGESTER*/
			*ptr_u8Value = PINB ;                                   /*Assign Value To Pointer*/
			break ;
		case DIO_PORTC :                                            /*In Case PORTD then we need To read from PINC REGESTER*/
			*ptr_u8Value = PINC ;                                   /*Assign Value To Pointer*/
			break ;
		case DIO_PORTD :                                            /*In Case PORTD then we need To read from PIND REGESTER*/
			*ptr_u8Value = PIND ;                                   /*Assign Value To Pointer*/
			break ;
		default :                                                   /*Check Entered Port is Available*/
			Local_u8ErrorStatus = ERROR;                            /*ERROR Status : ERROR */
			break;
	}


	return Local_u8ErrorStatus ;                                    /*Return Error Status*/
}

/*_______________________________________________________________________________________________________________________________*/
/*Description: PIN Input Condition (Floating or Internal Pull Up)
 * Input     : Copy_u8PortNo (Number of Port (PORTA or B or C or D ) , Copy_u8PinNo (Pin No. 0 : 7) , Copy_u8Value (Floating or Internal Pull Up)
 * Output    : Error Checking
 *_______________________________________________________________________________________________________________________________*/
uint8_t MCAL_DIO_u8SetPinInputType(uint8_t Copy_u8PortNo ,  uint8_t Copy_u8PinNo ,uint8_t Copy_u8Value )
{
	uint8_t Local_u8ErrorStatus  = NO_ERROR;						/*ERROR Status : NO ERROR */

	if(Copy_u8PinNo >= DIO_PIN_0 && Copy_u8PinNo <= DIO_PIN_7)      /*Check Entered PIN No. is Available*/
	{
		switch(Copy_u8PortNo)                                       /*Switch on the Port No. to Select The suitable Register*/
		{
			case DIO_PORTA :                                        /*In Case PORTA then we need To read from PORTA REGESTER*/
				ASSIGN_BIT(PORTA , Copy_u8PinNo , Copy_u8Value);    /*Assign The Value To Floating or Internal Pull up*/
				break ;
			case DIO_PORTB :                                        /*In Case PORTB then we need To read from PORTB REGESTER*/
				ASSIGN_BIT(PORTB , Copy_u8PinNo , Copy_u8Value);    /*Assign The Value To Floating or Internal Pull up*/
				break ;
			case DIO_PORTC :                                        /*In Case PORTC then we need To read from PORTC REGESTER*/
				ASSIGN_BIT(PORTC , Copy_u8PinNo , Copy_u8Value);    /*Assign The Value To Floating or Internal Pull up*/
				break ;
			case DIO_PORTD :                                        /*In Case PORTD then we need To read from PORTD REGESTER*/
				ASSIGN_BIT(PORTD , Copy_u8PinNo , Copy_u8Value);    /*Assign The Value To Floating or Internal Pull up*/
				break ;
			default :                                               /*Check Entered Port is Available*/
				Local_u8ErrorStatus = ERROR;                        /*ERROR Status : ERROR */
				break;
		}
	}
	else
	{
		Local_u8ErrorStatus = ERROR ;                               /*ERROR Status : ERROR */
	}

	return Local_u8ErrorStatus ;                                    /*Return Error Status*/
}

/*_______________________________________________________________________________________________________________________________*/
/*Description: Port Input Condition (Floating or Internal Pull Up)
 * Input     : Copy_u8PortNo (Number of Port (PORTA or B or C or D ) , Copy_u8Value (Floating or Internal Pull Up)
 * Output    : Error Checking
 *_______________________________________________________________________________________________________________________________*/
uint8_t MCAL_DIO_u8SetPortInputType(uint8_t Copy_u8PortNo  ,uint8_t Copy_u8Value )
{
	uint8_t Local_u8ErrorStatus  = NO_ERROR;						/*ERROR Status : NO ERROR */

	switch(Copy_u8PortNo)                                           /*Switch on the Port No. to Select The suitable Register*/
	{
		case DIO_PORTA :                                            /*In Case PORTA then we need To read from PORTA REGESTER*/
			PORTA = Copy_u8Value;                                   /*Assign The Value To Floating or Internal Pull up*/
			break ;
		case DIO_PORTB :                                            /*In Case PORTB then we need To read from PORTB REGESTER*/
			PORTB = Copy_u8Value;                                   /*Assign The Value To Floating or Internal Pull up*/
			break ;
		case DIO_PORTC :                                            /*In Case PORTC then we need To read from PORTC REGESTER*/
			PORTC = Copy_u8Value;                                   /*Assign The Value To Floating or Internal Pull up*/
			break ;
		case DIO_PORTD :                                            /*In Case PORTD then we need To read from PORTD REGESTER*/
			PORTD = Copy_u8Value;                                   /*Assign The Value To Floating or Internal Pull up*/
			break ;
		default :                                                   /*Check Entered Port is Available*/
			Local_u8ErrorStatus = ERROR;                            /*ERROR Status : ERROR */
			break;
	}


	return Local_u8ErrorStatus ;                                    /*Return Error Status*/
}
