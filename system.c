#include "libary.h"

void setup(void)
{
	DDRB = ((1 << LED1) | (1 << LED2) | (1 << LED3)); //Sätter portarna till ut portar på pinarna 8 till 10
	DDRD = ((1 << LED4) | (1 << LED5)); ////Sätter portarna till ut portar på pinarna 6 och 7
	PORTB = ((1 << BUTTON1) | (1 << BUTTON2)); // Sätter knapparnas portar till inportar
	
	return;
}

// sätter delayen till det jag har satt i main 
void delay_ms(const uint16_t delay_time_ms)  
{
	for (uint16_t i = 0; i < delay_time_ms; ++i)
	{
		_delay_ms(1);
	}

	return;
}

//Loopen för vilken ordning lamporna blinkar i och vilken delay det ska vara mellan blinkningarna
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

//Loopen för vilken ordning lamporna blinkar i och vilken delay det ska vara mellan blinkningarna
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