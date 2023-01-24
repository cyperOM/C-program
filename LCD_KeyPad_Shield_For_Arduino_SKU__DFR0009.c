//By https://cyperom.me/

#include "LiquidCrystal.h"
#include <Wire.h>  

LiquidCrystal lcd( 8,  9,  4,  5,  6,  7);
String inData; 
void setup() {
 Serial.begin(9600); 

 lcd.begin(16, 2);

 lcd.setCursor(0,0);
 lcd.print("  Cyperom  ");


 
}

void loop() {
 lcd.setCursor(0,1);
 int x; int y;
 int z;

 x = analogRead (0); // Read analog signal 

//Buttons range
 if (x<=0){Serial.println("Right"); }
 else if (x<=250){ Serial.println("Up");}
 else if(x<=450){ Serial.println("Down");}
 else if(x<=650){ Serial.println("left");}
 else if(x<=850){ Serial.println("Select");}


lcd.print(x); //print Analog Vlaue  
delay(1000);

} 