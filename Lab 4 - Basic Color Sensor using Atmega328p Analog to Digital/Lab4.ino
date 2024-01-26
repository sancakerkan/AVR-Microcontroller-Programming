#include <avr/io.h>        // AVR specific I/O functions
#include <util/delay.h>     // Functions to provide delays
#include <Arduino.h>        // Arduino framework

void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(3,HIGH);
  delay(2000);
  int blue_val = analogRead(A0);
  digitalWrite(3,LOW);
  digitalWrite(2,HIGH);
  delay(2000);
  int yellow_val = analogRead(A0);
  digitalWrite(2,LOW);
  digitalWrite(4,HIGH);
  delay(2000);
  int red_val = analogRead(A0);
  digitalWrite(4,LOW);
  if(red_val>blue_val && red_val > yellow_val)
  {
    Serial.println("color is red");  
    
  }
  else if (yellow_val>blue_val)
  {
    Serial.println("color is yellow");
  }
  else
  {
    Serial.println("color is blue");
  }
}