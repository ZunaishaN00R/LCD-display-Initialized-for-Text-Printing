#include <LiquidCrystal.h>
LiquidCrystal lcd *(2,3,4,5,6,7);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Zunaisha Noor");
  lcd.setCursor(0,1);
  lcd.print("Biet-f21-049");
}
void loop() {}