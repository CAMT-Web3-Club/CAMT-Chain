#include <M5Unified.h>


void setup() {
  M5.begin(); 
  M5.Lcd.setTextColor(YELLOW);
  M5.Lcd.setTextSize(2);
  M5.Lcd.fillScreen(BLACK);
  M5.Lcd.println("M5Core2 I2C Tester");

  delay(3000);
  
}
int textColor = YELLOW;

void loop() {
  
}