
//Skappar ett eget biblotek som ger mig det jag beh�ver och s� att det inte blandas ihop med n�got annat.                                                                                                        
 
#ifndef LIBARY_H_
#define LIBARY_H_


#define  F_CPU 16000000UL // Vissar vad f�r klockfrekvens som nu �r 16MHz

/*
Include vilka biblotek jag anv�nder mig av
*/
#include <avr/io.h>
#include <util/delay.h>

/*
Definerar vilken port som lysdioden/knappen �r kopplad till
*/
#define LED1 0 // Tillh�r PORTB 8
#define LED2 1 // Tillh�r PORTB 9
#define LED3 2 // Tillh�r PORTB 10

#define LED4 6 // Tillh�r PORTD 6
#define LED5 7 // Tillh�r PORTD 7

#define BUTTON1 4 // Tillh�r PORTB 12
#define BUTTON2 5 // Tillh�r PORTB 13

#define LED1_ON PORTB |= (1 << LED1) //T�nder dioden
#define	LED2_ON PORTB |= (1 << LED2) //T�nder dioden
#define LED3_ON PORTB |= (1 << LED3) //T�nder dioden

#define LED4_ON PORTD |= (1 << LED4) //T�nder dioden
#define LED5_ON PORTD |= (1 << LED5) //T�nder dioden


#define LED1_OFF PORTB &= ~(1 << LED1) // Sl�cker dioden
#define	LED2_OFF PORTB &= ~(1 << LED2) // Sl�cker dioden
#define LED3_OFF PORTB &= ~(1 << LED3) // Sl�cker dioden

#define LED4_OFF PORTD &= ~(1 << LED4) // Sl�cker dioden
#define LED5_OFF PORTD &= ~(1 << LED5) // Sl�cker dioden

#define LEDS_ON PORTB |= ((1 << LED1) | (1 << LED2) | (1 << LED3)) // T�nder alla dioder p� PORTB
#define LED_ON PORTD |= ((1 << LED4) | (1 << LED5)) //T�nder alla didoer p� PORTD

#define LEDS_OFF PORTB &= ~((1 << LED1) | (1 << LED2) | (1 << LED3)) // Sl�cker alla dioder i PORTB
#define LED_OFF PORTD &= ~((1 << LED4) | (1 << LED5)) // Sl�cker alla dioder i PORTD

#define BUTTON1_IS_PRESSED (PINB & (1<< BUTTON1))  //Indikerar vad knappen 1 g�r nertryckt
#define BUTTON2_IS_PRESSED (PINB & (1<< BUTTON2)) //Indikerar vad knappen 2 g�r nertryckt

/* Enumerationer: */
/* Ger siffrona ett namn som jag kan anv�nda mig av.
   Typedef g�r att du inte beh�ver skirva enum true utan det r�cker med true

*/ 
typedef enum { true = 1, false = 0 } bool; 

/********************************************************************************
* setup: Initierar mikrodatorns I/O-portar.
********************************************************************************/
void setup(void);


void delay_ms(const uint16_t delay_time_ms); //delay_ms: �r hur l�ng tid det ska vara mellan fukntionerna i millisekudner

/********************************************************************************
* leds_blink_sequence: G�r att lamporna blinkar i en loop fr�n pin 6 till pin 10
*						blink_speed _ms best�mmer hur snabbt den ska blinka		
*                    
* leds_blink_reverse_sequence g�r samma sak som leds_blink_sequence fast fr�n pin 10 till 6
********************************************************************************/
void leds_blink_sequence(const uint16_t blink_speed_ms);

void leds_blink_reverse_sequence(const uint16_t blink_speed_ms);


#endif /* LIBARY_H_ */