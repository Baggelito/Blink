
#include "libary.h"


int main(void)
{
	setup();
	
	// �r min loop
	
	while (true)
	{
		// Vad som h�nder n�r vilkoret �r sant. Om knapp 1 �r sann men inte tv� s� blinkar den �t ena h�let
		if (BUTTON1_IS_PRESSED && !BUTTON2_IS_PRESSED) 
		{ 
			LEDS_OFF;
			LED_OFF;
			leds_blink_sequence(100);
		}
		//Byter rikting p� hur lamporna blinkar och det h�nder bara n�r knapp 2 �r sann men inte kanpp 1
		else if (BUTTON2_IS_PRESSED && !BUTTON1_IS_PRESSED)
		{
			LEDS_OFF;
			LED_OFF;
			leds_blink_reverse_sequence(100);
		}
		//Om b�da knappar �r nertryckta s� lysser alla lampor
		else if (BUTTON1_IS_PRESSED && BUTTON2_IS_PRESSED)
		{
			LEDS_OFF;
			LED_OFF;
			LEDS_ON;
			LED_ON;
		}
		// Om inget av det tidigare p� st�ende �r sann s� �r alla lampor sl�ckta
		else
		{
			LEDS_OFF;
			LED_OFF;
		}
	}

	return 0;
}