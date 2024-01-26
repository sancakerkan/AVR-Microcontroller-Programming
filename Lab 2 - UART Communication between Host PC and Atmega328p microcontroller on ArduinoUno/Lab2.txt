#include avrio.h                         Defines pins, ports, etc 
#include utildelay.h                      Functions to waste time 
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
  else if(number == 7)
  {
    PORTD = 0b11100011;
    PORTB = 0b11111111;
  }
  else if(number == 8)
  {
    PORTD = 0b00000000;
    PORTB = 0b00000000;
  }
  else
  {
    PORTD = 0b01000000;
    PORTB = 0b00100000;
  }
  
  
}
void setup() {
  DDRB = 0xFF;
  DDRD = 0b11111100;
  PORTD = 0xFF;
  PORTB = 0xFF;
  Serial.begin(9600);
  while(!Serial);
  Serial.println(Connected Please send a number between 0 and 9);
}
void loop() {
  int ch;
  if(Serial.available())
  {
    ch = Serial.read();
    
    
    if(ch=48 && ch = 57)
    {
      Serial.println(You entered succesfully);
      ch = ch -48;  0 = 30
      if(ch != 3)
      {
        display_number(ch);  
      }
      else
      {
        for(int i = 3;i=0;i--)
        {
          display_number(i);
          delay(1000);  
        }  
      }
    }
    else
    {
      Serial.println(“Invalid Character send again);  
    }
    delay(1000);  
  }
  
}