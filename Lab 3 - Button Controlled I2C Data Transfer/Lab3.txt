#include "rgb_lcd.h"
#include <Wire.h>

rgb_lcd lcd;
const int colorR = 58;
const int colorG = 25;
const int colorB = 190;
int button_counter = 0;
int period_button_counter = 0;
unsigned long init_time;
unsigned long time_period = 3000;
void setup() {
	pinMode(2,INPUT);
	lcd.begin(16,2);
	lcd.setRGB(colorR,colorG,colorB);
	lcd.print("Hello");
	init_time = milis();
}

void loop() {
	int button_state = digitalRead(2);
	if(button_state == HIGH)
	{
		lcd.setCursor(0,1);
		button_counter+=1;
		delay(300);
		lcd.print(String(button_counter));
		period_button_counter +=1;
	}
	if(milis() - init_time >= 3000)
	{
		if(period_button_counter >= 5)
		{
			lcd.clear();
			lcd.setCursor(0,0);
			lcd.print("Hello");
			lcd.setCursor(0,1);
			button_counter = 0;
			lcd.print(button_counter);
			delay(300);
		}
		init_time = millis();
		period_button_counter = 0;
}
}