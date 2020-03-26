/* @PLATAFORMA: MSP430G2553
 * @FECHA: MARZO-2020
 */

#include <msp430.h> 
#include "stdio.h"

//Declaration of variables globals
unsigned int k = 0;
unsigned int i;

int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	while(1)
	{
	    for(i=0; i<100; i++)
	    {
	        k = i * i;
	    }
	}

}
