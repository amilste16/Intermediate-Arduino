#include "Arduino.h"
#include <LiquidCrystal.h>

void setup(){

}

void loop()
{

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
lcd.begin(16, 2);	
lcd.setCursor(0,1);
lcd.print("hello");	



}
