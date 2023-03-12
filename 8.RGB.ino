//This is a simple code that uses the button pull up from the last challenge to cerify if the button
//is pressed or not using the IF statment
void setup() {
  // we need to define our pins as outputs since they are multipurpose pins. 
// they can be outputs, inputs and analog outputs so we need to inform the
//Arduino which action it will perform 
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, INPUT_PULLUP);

}

void loop() {
//we define x as digitalRead(5) so that x is always the value of pin and we can call back to it later
bool x = digitalRead(5);
//now we can use the x and the "if" function to verify the statye of button and if it is on 
//(in this case it is 0 because it is being pulled up so it's logic is flipped)
//if it is on we turn on just the Red, Green, and Blue pins to create a white light 
//using the digitalWrite function
if (x==0) {
digitalWrite(2, 1);
digitalWrite(3, 1);
digitalWrite(4, 1);
}
//than if any other state but pressed state occurs the RGB LED turns off
//using the digitalWrite function
else {
digitalWrite(2, 0);
digitalWrite(3, 0);
digitalWrite(4, 0);
}
}
