#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);

int pos;
void setup() {
  lcd.begin(26,2);
  pos = 16;
}

void loop() {
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
