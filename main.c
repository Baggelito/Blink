
#include "libary.h"


int main(void)
{
	setup();
	
	// Är min loop
	
	while (true)
	{
		// Vad som händer när vilkoret är sant. Om knapp 1 är sann men inte två så blinkar den åt ena hålet
		if (BUTTON1_IS_PRESSED && !BUTTON2_IS_PRESSED) 
		{ 
			LEDS_OFF;
			LED_OFF;
			leds_blink_sequence(100);
		}
		//Byter rikting på hur lamporna blinkar och det händer bara när knapp 2 är sann men inte kanpp 1
		else if (BUTTON2_IS_PRESSED && !BUTTON1_IS_PRESSED)
		{
			LEDS_OFF;
			LED_OFF;
			leds_blink_reverse_sequence(100);
		}
		//Om båda knappar är nertryckta så lysser alla lampor
		else if (BUTTON1_IS_PRESSED && BUTTON2_IS_PRESSED)
		{
			LEDS_OFF;
			LED_OFF;
			LEDS_ON;
			LED_ON;
		}
		// Om inget av det tidigare på stående är sann så är alla lampor släckta
		else
		{
			LEDS_OFF;
			LED_OFF;
		}
	}

	return 0;
}