#include <Wire.h>
#include <LiquidCrystal_I2C.h>
// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  lcd.begin();
  Serial.begin(9600);
  lcd.backlight();
}
void loop()
{
  
  lcd.clear();
  lcd.print("Hello MDT");    
  lcd.setCursor(0,1);
  delay(1500);
}