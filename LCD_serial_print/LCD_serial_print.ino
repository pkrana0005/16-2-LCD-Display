#include <LiquidCrystal.h>
LiquidCrystal lcd(12,2,4,5,6,7);
void setup() {
  lcd.begin(16,2);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available())
  {
    delay(100);
    lcd.clear();
    while(Serial.available()>0)
    {
      lcd.write(Serial.read());
    }
  }
  

}
