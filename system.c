#include "libary.h"

void setup(void)
{
	DDRB = ((1 << LED1) | (1 << LED2) | (1 << LED3)); //S�tter portarna till ut portar p� pinarna 8 till 10
	DDRD = ((1 << LED4) | (1 << LED5)); ////S�tter portarna till ut portar p� pinarna 6 och 7
	PORTB = ((1 << BUTTON1) | (1 << BUTTON2)); // S�tter knapparnas portar till inportar
	
	return;
}

// s�tter delayen till det jag har satt i main 
void delay_ms(const uint16_t delay_time_ms)  
{
	for (uint16_t i = 0; i < delay_time_ms; ++i)
	{
		_delay_ms(1);
	}

	return;
}

//Loopen f�r vilken ordning lamporna blinkar i och vilken delay det ska vara mellan blinkningarna
void leds_blink_sequence(const uint16_t blink_speed_ms)
{
	
	LED3_OFF;
	LED4_ON;
	delay_ms(blink_speed_ms);
	
	LED4_OFF;
	LED5_ON;
	delay_ms(blink_speed_ms);
	
	LED5_OFF;
	LED1_ON;
	delay_ms(blink_speed_ms);
	
	LED1_OFF;
	LED2_ON;
	delay_ms(blink_speed_ms);
	
	LED2_OFF;
	LED3_ON;
	delay_ms(blink_speed_ms);	
	
	return;
}

//Loopen f�r vilken ordning lamporna blinkar i och vilken delay det ska vara mellan blinkningarna
void leds_blink_reverse_sequence(const uint16_t blink_speed_ms)
{
	
	LED4_OFF;
	LED3_ON;
	delay_ms(blink_speed_ms);

	LED3_OFF;
	LED2_ON;
	delay_ms(blink_speed_ms);
	
	LED2_OFF;
	LED1_ON;
	delay_ms(blink_speed_ms);
	
	LED1_OFF;
	LED5_ON;
	delay_ms(blink_speed_ms);
	
	LED5_OFF;
	LED4_ON;
	delay_ms(blink_speed_ms);
	
	return;
}