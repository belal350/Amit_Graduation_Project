

#ifndef COMPILER_H_
#define COMPILER_H_

/*********************************************************************
 *                       MACROS
 *********************************************************************/
#define FALSE 		0U
#define TRUE 		1U

/*______________________*/
#define DISABLE 	0U
#define ENABLE  	1U

/*______________________*/
#define ERROR   	0U
#define NO_ERROR 	1U

/*______________________*/
#define START_LOOP	0U

#define NULL  			0U                            /*Define Null*/

#define NULL_POINTER 	(void *)NULL          /*Define Null Pointer */

#define NULL_CHR 		'\0'

/*______________________*/
#undef F_CPU
#define F_CPU 8000000UL  /*Define Number of Cycles for the Compiler for some examples ex : _delay Functions but it doesn't affect the Micro Clock */

#define SYSTEM_FREQUENCY  8000000UL





#endif /* COMPILER_H_ */
