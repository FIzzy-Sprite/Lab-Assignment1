//This program is a simple blink program uses the delay function.
void setup() {
//we need to define the pins for this project since the pins can be digital outputs, inputs or analog outputs
pinMode(2,OUTPUT);
}

void loop() {
//we use the delay function to stop the code from running for 500 ms 
delay(500);
//once the code has been delayed for 500 ms which is our blink interval
//so we change the state of the pin 2 to 1 or high
digitalWrite(2,1);
//we delay the code by 500 ms 
delay(500);
//after the second delay interval we turn off the light on pin 2 to complete the blink sequence
digitalWrite(2,0);

}
