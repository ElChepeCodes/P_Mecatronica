//YWROBOT
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display
int pos;
void setup()
{
  lcd.init();                      // initialize the lcd 
  //lcd.init();
  // Print a message to the LCD.
  lcd.backlight();
  pos = 16;
}


void loop()
{
  lcd.setCursor(pos,0);
  lcd.print("Juan Pablo");
  lcd.setCursor(pos,1);
  lcd.print("Jose Luis");
  if(pos > 0){
    pos -=1;
    delay(150);
    lcd.clear();
  }
}
