/*
 * GccApplication1.c
 *
 * Created: 1/26/2018 6:22:26 PM
 *  Author: ADITYA
 */ 


#include <avr/io.h>
#include <util/delay.h>
#define F_CPU 1000000UL

unsigned char seg[10]={0xfc,0x60,0xda,0xf2,0x66,0xb6,0xbe,0xe0,0xfe,0xf6};
int main(void)
{
	DDRA=DDRB=0XFF;
	
    for (signed char i=2;i>=0;i--)
    for (signed char j=9;j>=0;j--)
	{
		PORTB=seg[i];
		PORTA=seg[j];
		//_delay_ms(250);
		_delay_ms(1000);
	}
}