

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

/*********************************************************************
 *                       MACROS
 *********************************************************************/


/*___________________________________________________________________
 * Define Ports Number
 * _________________________________________________________________*/

#define DIO_PORTA 0U  /*PORT A*/
#define DIO_PORTB 1U  /*PORT B*/
#define DIO_PORTC 2U  /*PORT C*/
#define DIO_PORTD 3U  /*PORT D*/
/*********************************************************************/

/*___________________________________________________________________
 * Define Pins Number
 * _________________________________________________________________*/
#define DIO_PIN_0 0U   /*PIN 0*/
#define DIO_PIN_1 1U   /*PIN 1*/
#define DIO_PIN_2 2U   /*PIN 2*/
#define DIO_PIN_3 3U   /*PIN 3*/
#define DIO_PIN_4 4U   /*PIN 4*/
#define DIO_PIN_5 5U   /*PIN 5*/
#define DIO_PIN_6 6U   /*PIN 6*/
#define DIO_PIN_7 7U   /*PIN 7*/

/*********************************************************************/

/*___________________________________________________________________
 * Define Pins Directions
 * _________________________________________________________________*/
#define DIO_INPUT 0U    /*Pin is Input*/
#define DIO_OUTPUT 1U   /*Pin is Output*/

/*___________________________________________________________________
 * Define Pins Output Value
 * _________________________________________________________________*/
#define DIO_LOW 0U      /*Output with 0 */
#define DIO_HIGH 1U     /*Output with 1 */
/*********************************************************************/

/*___________________________________________________________________
 * Define Ports Directions
 * _________________________________________________________________*/
#define DIO_PORT_INPUT 0U     /*The Whole Port is Input*/
#define DIO_PORT_OUTPUT 255U  /*The whole Port is Output*/
/*********************************************************************/

/*___________________________________________________________________
 * Define Pin Input Condition
 * _________________________________________________________________*/
#define DIO_INPUT_FLOATING 0U /*Floating Pin*/
#define DIO_INPUT_PULL_UP 1U  /*Internal Pull up Pin*/
/*********************************************************************/



/*********************************************************************
 *                    FUNCTIONS DECLERATIONS
 *********************************************************************/


/*_______________________________________________________________________________________________________________________________*/
/*Description: PIN Initialization Set its Direction
 * Input     : Copy_u8PortNo (Number of Port (PORTA or B or C or D ) , Copy_u8PinNo (Pin No. 0 : 7) , Copy_u8Dir (Direction Input or Output)
 * Output    : Error Checking
 *_______________________________________________________________________________________________________________________________*/
extern uint8_t MCAL_DIO_u8SetPinDir(uint8_t Copy_u8PortNo ,  uint8_t Copy_u8PinNo ,uint8_t Copy_u8Dir );

/*_______________________________________________________________________________________________________________________________*/
/*Description: PORT Initialization Set its Direction
 * Input     : Copy_u8PinNo (Pin No. 0 : 7) , Copy_u8Dir (Direction Input or Output)
 * Output    : Error Checking
 *_______________________________________________________________________________________________________________________________*/
extern uint8_t MCAL_DIO_u8SetPortDir(uint8_t Copy_u8PortNo ,uint8_t Copy_u8Dir );

/*_______________________________________________________________________________________________________________________________*/
/*Description: PIN Output Value
 * Input     : Copy_u8PortNo (Number of Port (PORTA or B or C or D ) , Copy_u8PinNo (Pin No. 0 : 7) , Copy_u8Value (Direction High or Low)
 * Output    : Error Checking
 *_______________________________________________________________________________________________________________________________*/
extern uint8_t MCAL_DIO_u8SetPinValue(uint8_t Copy_u8PortNo ,  uint8_t Copy_u8PinNo ,uint8_t Copy_u8Value );

/*_______________________________________________________________________________________________________________________________*/
/*Description: PORT Output Value
 * Input     : Copy_u8PortNo (Number of Port (PORTA or B or C or D ) , Copy_u8Value (Direction High or Low)
 * Output    : Error Checking
 *_______________________________________________________________________________________________________________________________*/
extern uint8_t MCAL_DIO_u8SetPortValue(uint8_t Copy_u8PortNo ,uint8_t Copy_u8Value );

/*_______________________________________________________________________________________________________________________________*/
/*Description: Get Pin Value if The pin is Input
 * Input     : Copy_u8PortNo (Number of Port (PORTA or B or C or D ) , Copy_u8PinNo (Pin No. 0 : 7) , ptr_u8Value (Pointer to Return Value)
 * Output    : Error Checking
 *_______________________________________________________________________________________________________________________________*/
extern uint8_t MCAL_DIO_u8GetPinValue(uint8_t Copy_u8PortNo ,  uint8_t Copy_u8PinNo ,uint8_t *ptr_u8Value );

/*_______________________________________________________________________________________________________________________________*/
/*Description: Get Port Value if The port is Input
 * Input     : Copy_u8PortNo (Number of Port (PORTA or B or C or D ) , ptr_u8Value (Pointer to Return Value)
 * Output    : Error Checking
 *_______________________________________________________________________________________________________________________________*/
extern uint8_t MCAL_DIO_u8GetPortValue(uint8_t Copy_u8PortNo ,uint8_t *ptr_u8Value );

/*_______________________________________________________________________________________________________________________________*/
/*Description: PIN Input Condition (Floating or Internal Pull Up)
 * Input     : Copy_u8PortNo (Number of Port (PORTA or B or C or D ) , Copy_u8PinNo (Pin No. 0 : 7) , Copy_u8Value (Floating or Internal Pull Up)
 * Output    : Error Checking
 *_______________________________________________________________________________________________________________________________*/
extern uint8_t MCAL_DIO_u8SetPinInputType(uint8_t Copy_u8PortNo ,  uint8_t Copy_u8PinNo ,uint8_t Copy_u8Value );

/*_______________________________________________________________________________________________________________________________*/
/*Description: Port Input Condition (Floating or Internal Pull Up)
 * Input     : Copy_u8PortNo (Number of Port (PORTA or B or C or D ) , Copy_u8Value (Floating or Internal Pull Up)
 * Output    : Error Checking
 *_______________________________________________________________________________________________________________________________*/
extern uint8_t MCAL_DIO_u8SetPortInputType(uint8_t Copy_u8PortNo  ,uint8_t Copy_u8Value );

#endif /* DIO_INTERFACE_H_ */
