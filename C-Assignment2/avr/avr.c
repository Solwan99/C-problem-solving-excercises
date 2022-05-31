/*
 * ex2.c
 *
 *  Created on: 19 Apr 2021
 *      Author: User
 */

#include <avr/io.h>
#include <util/delay.h>


#include<avr/io.h>

int main(void){
	DDRD = 0x40;

	while(1)
	{
		PORTD =0b01000000;
		_delay_ms(1000);
		PORTD= 0b00000000;
		_delay_ms(1000);

	}
}

