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
 
 This example code is in the public domain.

 
 http://www.arduino.cc/en/Tutorial/BlinkWithoutDelay
 */

// constants won't change. Used here to 
// set pin numbers:

// Variables will change:
int redPin = 12;                  // Red LED connected to digital pin 12
int greenPin = 11;                // Green LED connected to digital pin 11
int bluePin = 10;                 // Blue Led connected to digital pin 10

// the follow variables is a long because the time, measured in miliseconds,
// will quickly become a bigger number than can be stored in an int.
long interval = 500;           // interval at which to blink (milliseconds)

void setup() {
  // set the digital pin as output:
  pinMode(redPin, OUTPUT);        // sets the digital pin as output
  pinMode(greenPin, OUTPUT);      // sets the digital pin as output     
  pinMode(bluePin, OUTPUT);       // sets the digital pin as output   
}

void loop()
{
  {
  digitalWrite(bluePin, LOW);     // Sets the Blue LED off
  delay(500);                     // waits for half a second
  digitalWrite(greenPin, HIGH);   // sets the Green LED on
  delay(500);                     // waits for half a second
  digitalWrite(redPin, LOW);      // sets the Red LED off
  delay(500);                     // waits for half a second
  digitalWrite(bluePin, HIGH);    // Sets the Blue LED on
  delay(500);                     // waits for half a second
  digitalWrite(greenPin, LOW);    // sets the Green LED off
  delay(500);                     // waits for half a second
  digitalWrite(redPin, HIGH);     // sets the Red LED on
  delay(500);                     // waits for half a second
  }
}

