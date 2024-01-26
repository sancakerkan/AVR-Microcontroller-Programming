#include <Wire.h>
#include "rgb_lcd.h"
#include <avr/io.h>
#include <avr/interrupt.h>


rgb_lcd lcd;

const int colorR = 0;
const int colorG = 50;
const int colorB = 50;
int period_counter = 0;
unsigned long current;
int hour=16;
int minute = 55;
int seconds = 0;
void setup() {
 lcd.begin(16, 2);
 Serial.begin(9600);
  lcd.setRGB(colorR, colorG, colorB);
  lcd.print(String(hour)+":"+String(minute)+":"+String(seconds));  
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(2,INPUT);
  current = millis();
  delay(1000);
  
}

void loop() {
  if(millis()-current>2000)
  {
    
    if(period_counter == 1)
    {
        
        while(!Serial.available());
        hour = (Serial.readStringUntil('\n').toInt());
        while(hour<0 ||hour >23)
        {
          Serial.println("Invalid hour try again");
          while(!Serial.available());
          hour = (Serial.readStringUntil('\n').toInt());
        }
        digitalWrite(8,HIGH);
        delay(1000);
        digitalWrite(8,LOW);
        Serial.println(hour);
    }
    else if(period_counter ==2)
    {
      while(!Serial.available());
        minute = (Serial.readStringUntil('\n').toInt());
        while(minute<0 ||minute>59)
        {
          Serial.println("Invalid minute try again");
          while(!Serial.available());
          minute = (Serial.readStringUntil('\n').toInt());
        }
        digitalWrite(9,HIGH);
        delay(1000);
        digitalWrite(9,LOW);
        Serial.println(minute);
    }
    current = millis();
    lcd.clear();
    delay(100);
    lcd.print(String(hour)+":"+String(minute)+":"+String(seconds));  
    period_counter = 0;  
  }
  if(digitalRead(2))
  {
    period_counter++;
    delay(300);
  }
  if((millis()-current)%1000 == 0)
  {
    seconds++;
    if(seconds>59)
    {
      seconds = 0;
      minute +=1;  
    }
    if(minute>59)
    {
      minute = 0;
      hour+=1;  
    }
    lcd.clear();
    delay(100);
    lcd.print(String(hour)+":"+String(minute)+":"+String(seconds));  
    
  }
}