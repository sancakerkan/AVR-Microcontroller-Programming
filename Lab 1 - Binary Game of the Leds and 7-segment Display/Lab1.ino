#include <avr/io.h>                        /* Defines pins, ports, etc */
#include <util/delay.h>                     /* Functions to waste time */

void display_number(int number)
{
  if (number == 0)
  {
    PORTD = 0b00000000;
    PORTB = 0b00000001;
  }
  else if(number == 1)
  {
    PORTD = 0b11100111;
    PORTB = 0b11110011;
  }
  else if(number == 2)
  {
    PORTD = 0b10010000;
    PORTB = 0b11110100;
  }
  else if(number == 3)
  {
    PORTD = 0b11000000;
    PORTB = 0b11110110;  
  }
  else if(number ==4)
  {
    PORTD = 0b01100100;
    PORTB = 0b11111000;
  }
  else if(number == 5)
  {
    PORTD = 0b01001000;
    PORTB = 0b11111010;
  }
  else if(number == 6)
  {
    PORTD = 0b00001000;
    PORTB = 0b11111100;
  }
  else
  {
    PORTD = 0b11100011;
    PORTB = 0b11111111;
  }
  
  
}

void setup() {

  // put your setup code here, to run once:
  int random_number =random(0,8);
  DDRB = 0xFF;
  DDRD = 0xFF;
  while(1)
  {
    display_number(random_number);
    _delay_ms(3000);
    random_number = random(0,8);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}