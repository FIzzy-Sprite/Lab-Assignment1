//This is a simple code that blinks the 3 colors in an RGB LED in a sequence, in a loop 
// (123 123 and so on)
void setup() {
// we need to define our pins as outputs since they are multipurpose pins. 
// they can be outputs, inputs and analog outputs so we need to inform the
//Arduino which action it will perform 
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);

}

void loop() {
// We use the delay function and write the amount of time to delay the code
//In the arduino before it executes the next step
delay(500);
// We then use digitalWrite to change the state of a output pin. We need to speicify 
//the pin as the first digit and after the coma we can specify wether we would like
//to change the state of the output to a 1 or 0 ( HIGH or LOW)
digitalWrite(2, 1);
delay(500);
//After a second delay we turn the LED off and repeat the cycle for all the other LED's
digitalWrite(2, 0);
delay(500);
digitalWrite(3, 1);
delay(500);
digitalWrite(3, 0);
delay(500);
digitalWrite(4, 1);
delay(500);
digitalWrite(4, 0);


}