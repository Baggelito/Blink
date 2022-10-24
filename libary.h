
//Skappar ett eget biblotek som ger mig det jag behöver och så att det inte blandas ihop med något annat.                                                                                                        
 
#ifndef LIBARY_H_
#define LIBARY_H_


#define  F_CPU 16000000UL // Vissar vad för klockfrekvens som nu är 16MHz

/*
Include vilka biblotek jag använder mig av
*/
#include <avr/io.h>
#include <util/delay.h>

/*
Definerar vilken port som lysdioden/knappen är kopplad till
*/
#define LED1 0 // Tillhör PORTB 8
#define LED2 1 // Tillhör PORTB 9
#define LED3 2 // Tillhör PORTB 10

#define LED4 6 // Tillhör PORTD 6
#define LED5 7 // Tillhör PORTD 7

#define BUTTON1 4 // Tillhör PORTB 12
#define BUTTON2 5 // Tillhör PORTB 13

#define LED1_ON PORTB |= (1 << LED1) //Tänder dioden
#define	LED2_ON PORTB |= (1 << LED2) //Tänder dioden
#define LED3_ON PORTB |= (1 << LED3) //Tänder dioden

#define LED4_ON PORTD |= (1 << LED4) //Tänder dioden
#define LED5_ON PORTD |= (1 << LED5) //Tänder dioden


#define LED1_OFF PORTB &= ~(1 << LED1) // Släcker dioden
#define	LED2_OFF PORTB &= ~(1 << LED2) // Släcker dioden
#define LED3_OFF PORTB &= ~(1 << LED3) // Släcker dioden

#define LED4_OFF PORTD &= ~(1 << LED4) // Släcker dioden
#define LED5_OFF PORTD &= ~(1 << LED5) // Släcker dioden

#define LEDS_ON PORTB |= ((1 << LED1) | (1 << LED2) | (1 << LED3)) // Tänder alla dioder på PORTB
#define LED_ON PORTD |= ((1 << LED4) | (1 << LED5)) //Tänder alla didoer på PORTD

#define LEDS_OFF PORTB &= ~((1 << LED1) | (1 << LED2) | (1 << LED3)) // Släcker alla dioder i PORTB
#define LED_OFF PORTD &= ~((1 << LED4) | (1 << LED5)) // Släcker alla dioder i PORTD

#define BUTTON1_IS_PRESSED (PINB & (1<< BUTTON1))  //Indikerar vad knappen 1 gör nertryckt
#define BUTTON2_IS_PRESSED (PINB & (1<< BUTTON2)) //Indikerar vad knappen 2 gör nertryckt

/* Enumerationer: */
/* Ger siffrona ett namn som jag kan använda mig av.
   Typedef gör att du inte behöver skirva enum true utan det räcker med true

*/ 
typedef enum { true = 1, false = 0 } bool; 

/********************************************************************************
* setup: Initierar mikrodatorns I/O-portar.
********************************************************************************/
void setup(void);


void delay_ms(const uint16_t delay_time_ms); //delay_ms: är hur lång tid det ska vara mellan fukntionerna i millisekudner

/********************************************************************************
* leds_blink_sequence: Gör att lamporna blinkar i en loop från pin 6 till pin 10
*						blink_speed _ms bestämmer hur snabbt den ska blinka		
*                    
* leds_blink_reverse_sequence gör samma sak som leds_blink_sequence fast från pin 10 till 6
********************************************************************************/
void leds_blink_sequence(const uint16_t blink_speed_ms);

void leds_blink_reverse_sequence(const uint16_t blink_speed_ms);


#endif /* LIBARY_H_ */