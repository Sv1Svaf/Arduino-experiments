/* Blink without Delay
 
 Turns on and off a light emitting diode(LED) connected to a digital  
 pin, without using the delay() function.  This means that other code
 can run at the same time without being interrupted by the LED code.
 
 The circuit:
 * LED attached from pin 13 to ground.
 * Note: on most Arduinos, there is already an LED on the board
 that's attached to pin 13, so no hardware is needed for this example.
 
 
 created 2005
 by David A. Mellis
 modified 8 Feb 2010
 by Paul Stoffregen
 Modified again 5 August2013
 by Sveinn Svavarsson
 
 This example code is in the public domain.

 
 http://www.arduino.cc/en/Tutorial/BlinkWithoutDelay
 */

// constants won't change. Used here to 
// set pin numbers:
const int greenpin =  10;      // the number of the green LED pin
const int redpin =  11;        // the number of the red LED pin
const int bluepin =  12;        // the number of the blue LED pin

// Variables will change:
int greenState = HIGH;             // greenState used to set the LED
int blueState = HIGH;             // greenState used to set the LED
int redState = HIGH;             // greenState used to set the LED
int counter = 0;                  //telur hvert  er kominn  röðinni
long previousMillis = 0;        // will store last time LED was updated

// the follow variables is a long because the time, measured in miliseconds,
// will quickly become a bigger number than can be stored in an int.
long interval = 1000;           // interval at which to blink (milliseconds)

void setup() {
  // set the digital pin as output:
  pinMode(greenpin, OUTPUT);  
  pinMode(bluepin, OUTPUT);
  pinMode(redpin, OUTPUT);  
}

void loop()
{
  // here is where you'd put code that needs to be running all the time.

  // check to see if it's time to blink the LED; that is, if the 
  // difference between the current time and last time you blinked 
  // the LED is bigger than the interval at which you want to 
  // blink the LED.
  unsigned long currentMillis = millis();
 
  if(currentMillis - previousMillis > interval) {
    // save the last time you blinked the LED 
    previousMillis = currentMillis;   

    // Find out which led is on and turn the next one on sequence
    if (greenState == LOW && blueState == HIGH && redState == HIGH){
      blueState = LOW;
      greenState = LOW;
      redState = HIGH;
     }
     else if (greenState == LOW && blueState ==LOW){
       blueState = LOW;
       greenState = HIGH;
       redState = HIGH;
     }
     else if (blueState == LOW && redState == HIGH){
      blueState = LOW;
      greenState = HIGH;
      redState = LOW;
     }
     else if (blueState == LOW && redState == LOW){
      blueState = HIGH;
      greenState = HIGH;
      redState = LOW;
     }
     else if (redState == LOW && greenState == HIGH){
       blueState = HIGH;
       redState = LOW;
       greenState = LOW;
     }
     else {
      greenState = LOW;
      blueState = HIGH;
      redState = HIGH;
     }
      

    // update the LEDs with the status of the variables:
    digitalWrite(greenpin, greenState);
    digitalWrite(bluepin, blueState);
    digitalWrite(redpin, redState);
  }
}

