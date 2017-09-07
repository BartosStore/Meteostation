//Sillur
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

//LiquidCrystal_I2C(uint8_t lcd_Addr,uint8_t lcd_cols,uint8_t lcd_rows)
LiquidCrystal_I2C lcd(0x27,16,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup(){
  lcd.init();                      
  lcd.backlight();      //lcd illumination  
  
  //setCursor(col,row)
  lcd.setCursor(0,0);   
  lcd.print("UNO!");
}

void loop(){
}