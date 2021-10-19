
#include <LiquidCrystal.h>


//LiquidCrystal lcd(8, 9, 4, 5, 6, 7); Code for Arduino UNO R3
LiquidCrystal lcd(D8,D9,D4,D5,D6,D7); // PinOut code for WeMos ESP8266 R1 board.


void setup() {
 Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.setCursor(0,0);
  lcd.print("LCD Key Shield");
  lcd.setCursor(0,1);
  lcd.print("Press Key:");

}

void loop() {
  int x;      
  x = analogRead (0);
  lcd.setCursor(10,1);


  
  if (x < 60) {
    lcd.print ("Right ");

  }
  else if (x < 200) {
    lcd.print ("Up    ");

  }
  else if (x < 600){
    lcd.print ("Down  ");

  }
  else if (x < 800){
    lcd.print ("Left  ");

  }
  else if (x < 1024){
    lcd.print ("Select");
     Serial.print("Select");
     Serial.print("    \n     ");
  }
}
