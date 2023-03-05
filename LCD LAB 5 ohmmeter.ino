

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
int new_ORV;
int new_ORV2;
int PBState = LOW;     
int lastButtonState;    
int currentButtonState;
int PBState2 = LOW;     
int lastButtonState2;    
int currentButtonState2;
void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
Serial.begin(9600);
pinMode(3, INPUT_PULLUP);
pinMode(2, INPUT_PULLUP);
 currentButtonState = digitalRead(3);
currentButtonState2 = digitalRead(2);
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 0);

lastButtonState    = currentButtonState;      // save the last state
currentButtonState = digitalRead(3); // read new state

lastButtonState2    = currentButtonState2;      
currentButtonState2 = digitalRead(2); 
if(lastButtonState == 1 && currentButtonState == 0) {
    
    PBState = !PBState;  
  }

if(lastButtonState2 == 1 && currentButtonState2 == 0) {
    
    PBState2 = !PBState2;  
  }
float z = analogRead(A1);
float A1_volts = (z/1023)*5;
float ORV = (5000/(5-A1_volts))-1000;

float potvalue =analogRead(A0);
float voltsvalue = (potvalue/1023)*5;
if(PBState==0 && PBState2==0){
lcd.setCursor(0, 0) ;
lcd.print("Volts:");
lcd.print(voltsvalue); 
lcd.setCursor(0,1);
lcd.print("screen 1#");


}
if(PBState==1 && PBState2==0) {

lcd.setCursor(0, 0);
lcd.print("Bit:");
lcd.print(potvalue);
lcd.setCursor(0,1);
lcd.print("screen 2#");

}
if (PBState2==1) {
lcd.setCursor(0, 0);
lcd.print("R=");
if(ORV<1000){
lcd.clear();
lcd.print("R=");
lcd.print(ORV);
lcd.print("Ohms");
lcd.setCursor(0,1);
lcd.print("screen 3#");

}
if(ORV>1000 && ORV<100000000){
float new_ORV= (ORV/1000);
lcd.clear();
lcd.print("R=");
lcd.print(new_ORV);
lcd.print("K Ohms");
lcd.setCursor(0,1);
lcd.print("screen 3#");
}


}
Serial.print("Volts:");
Serial.print(voltsvalue);
Serial.print("\t Volts:");
Serial.println(potvalue);
Serial.print("The button state is: \t");
Serial.print(PBState);
Serial.print("\t");
Serial.println(ORV);
delay(500);
}

