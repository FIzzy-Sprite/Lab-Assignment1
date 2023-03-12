//This code simply displays the value the digital pin reads from the button
void setup() {
//We use the pinmode command to define what fucntion pin 2 fufills because it could be a digital input, 
//output or analog output
pinMode(2,INPUT);
//if we want to make use of the serial monitor intgratedd in the software we need to turn it on in the setup
//and define its baud rate (which is 9600 in this case)
Serial.begin(9600);
}

void loop() {
//we use the Serial.print function to print something in the serial monitor we defines in the setup
//if we want to write something out word for word we use quotes. If we want to make a tab indent we use \t
//if we want a variable to be printed we simply include it inside the parentheses either with the READ 
//function or by defining it outside in the loop
//the "ln" at the end of the serial print function ends that line of writing and presses enter on the
//serial monitor breaking up the lines
Serial.print("The button value is");
Serial.print("\t");
Serial.println(digitalRead(2));

}