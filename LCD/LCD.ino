#include <LiquidCrystal.h>
LiquidCrystal lcd(1,7,8,10,11,12,13);
void setup() {
  lcd.begin(16,2);

}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("Hello Pawan :)");
  

}
