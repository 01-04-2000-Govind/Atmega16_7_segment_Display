/*
 * 7 Segment Led.c
 *
 * Created: 8/18/2023 2:15:03 PM
 * Author : Govind
 */ 

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRC |= 0xff;
	unsigned int segment[10] = {0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
		
    while (1) 
    {
		for(int i=0;i<10;i++)
		{
		   PORTC = segment[i];
		   _delay_ms(100);
        }
    }
}

