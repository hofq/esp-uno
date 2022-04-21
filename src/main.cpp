#include <Arduino.h>
#include <LiquidCrystal_I2C.h>
int lcdColumns = 16;
int lcdRows = 2;
LiquidCrystal_I2C lcd(0x27, lcdColumns, lcdRows);

void setup(){
  // initialize LCD
  lcd.init();
  // turn on LCD backlight                      
  lcd.backlight();     // ohne Huntergrundbeleuchtung lcd.noBacklight();
  // lcd.setBacklight(dimvalue); dimvalue 0-255 allerdings mit I2C-Hardware ohne Dimmfunktion, dimvalue=0 (BL off) dimvalue<>0 (BL on)
  lcd.print("Aktuelle Zahl:");
}

void loop() {
  lcd.setCursor(15, 0);
  int zahl = random(1, 7);
  lcd.print(zahl);

  delay(2000);

  for(int i = 0; i < 10; i++) {
  lcd.setCursor(7, 1);
  lcd.print(".");
  delay(500);
  lcd.setCursor(7, 1);
  lcd.print(" ");
  delay(500);
  }
  
  // put your main code here, to run repeatedly:
}