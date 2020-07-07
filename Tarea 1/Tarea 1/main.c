/*
 * Tarea 1.c
 *
 * Created: 06/11/2020 1:06:47 p. m.
 * Author : Josue
 */ 

#define F_CPU 1000000UL 
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRB |= (1<<PORTB4); 
	DDRB |= (1<<PORTB6);
	DDRA &= ~(1<<PORTA2);
	
	PORTB = (0 << PORTB4);
	PORTB = (0 << PORTB6);
	PORTA = (1<<PORTA2);
	
	while (1)
	{
		if (PINA & (1<<PORTA2))
		{
			PORTB|=(1<<PORTB6);
			_delay_ms(1000);
			PORTB &=~(1<<PORTB4);
			_delay_ms(1000);
		}
		
		else
		{
			PORTB &=~(1<<PORTB6);
			_delay_ms(1000);
			PORTB|=(1<<PORTB4);
			_delay_ms(1000);
		}

	}
}