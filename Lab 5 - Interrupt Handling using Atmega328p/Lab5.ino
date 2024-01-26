#include <avr/io.h>
#include <util/delay.h> 
#include <avr/interrupt.h> 
#include "pinDefines.h" 


ISR(INT0_vect) 
{  
  for(int i = 0;i<4;i++)
  {
    LED_PORT ^= (1 << LED0);
    _delay_ms(250);
  }
} 
void initInterrupt0(void) 
{ 
EIMSK |= (1 << INT0);
EICRA |= (1 << ISC00);  
sei(); 
} 

void setup() {
LED_DDR = 0xff; /* all LEDs active */ 
BUTTON_PORT |= (1 << BUTTON); /* pullup */ 
initInterrupt0(); 
  while (1) 
    { 
    _delay_ms(3000); 
    LED_PORT ^= (1 << LED0); 
    }
    //led 0 = 8, DDRB0, BUTTON PIN = D2
}

void loop() {
  

}