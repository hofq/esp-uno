#include <Arduino.h>
/*********
  Rui Santos
  Complete project details at https://randomnerdtutorials.com/esp32-esp8266-i2c-lcd-arduino-ide/

I2C LCD  ESP8266
GND      GND
VCC      VIN
SDA      D2 (GPIO 4)
SCL      D1 (GPIO 5)
*********/

#include <LiquidCrystal_I2C.h>

// set the LCD number of columns and rows
int lcdColumns = 16;
int lcdRows = 2;

// set LCD address, number of columns and rows
// if you don't know your display address, run an I2C scanner sketch
LiquidCrystal_I2C lcd(0x27, lcdColumns, lcdRows);  

void setup(){
  // initialize LCD
  lcd.init();
  // turn on LCD backlight                      
  lcd.backlight();     // ohne Huntergrundbeleuchtung lcd.noBacklight();
  // lcd.setBacklight(dimvalue); dimvalue 0-255 allerdings mit I2C-Hardware ohne Dimmfunktion, dimvalue=0 (BL off) dimvalue<>0 (BL on)
} 
void loop(){
  lcd.backlight();
  lcd.clear();
  lcd.cursor();
  // lcd.blink();
  // set cursor to first column, first row
  lcd.setCursor(0, 0);
  // print message
  String input = "Traitor-Shop.de";
  String top_arr[input.length()];
  for(int i=0; i < input.length();i++)
    {
      int b = i + 1;
    top_arr[i] = input.substring(i,b);
    }
  int toparrSize = sizeof(top_arr)/sizeof(top_arr[0]);
  for (int i = 0; toparrSize > i; i++ ) {
    lcd.print(top_arr[i]);
    delay(500);
  }

  lcd.setCursor(0,1);
  lcd.print("Line 2 Here!");
  delay(5000);
}
