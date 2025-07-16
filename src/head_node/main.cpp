#include <Arduino.h>
#include <M5Unified.h>

void setup() {
    // Initialize M5Stack hardware
    auto cfg = M5.config();
    M5.begin(cfg);

    M5.Lcd.fillScreen(BLACK);
    M5.Lcd.setCursor(10, 10);
    M5.Lcd.setTextSize(2);
    M5.Lcd.println("Head Node is Running!");
    
    Serial.begin(115200);
    Serial.println("Head Node Ready.");
}

void loop() {
    M5.update();
    // Your code will go here
    delay(100);
}