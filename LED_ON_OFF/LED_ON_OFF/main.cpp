/*
 * LED_ON_OFF.cpp
 *
 * Created: 2018-05-02 오후 8:26:29
 * Author : stc_158
 */ 
 #define F_CPU 16000000UL
 #include <avr/io.h>
 #include <util/delay.h>
 #include <stdio.h>


int main(void)
{
    /* Replace with your application code */
	DDRD = 0xff;
	PORTD = 0xff;
	int i;
   while (1)
   {
	   for (i=0; i<7; i++)
	   {
		   PORTD = ~(1<<i);
		   _delay_ms(300);
	   }
	   
	   for (i=0; i<7; i++)
	   {
		   PORTD = ~(0x80>>i);
		   _delay_ms(300);
	   }
}
}

