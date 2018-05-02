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
    while (1) 
    {
		
		PORTD = 0x00; // 0이면 켜짐
		_delay_ms(300);
		PORTD = 0xff;
		_delay_ms(300);
    }
}

