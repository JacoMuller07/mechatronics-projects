// Blinking LED Project
// First Arduino program - makes an LED blink on and off
// Created: 2026-06-19

void setup() {
  // setup() runs once when the Arduino starts
  // Use it to initialize pins, serial communication, etc.
  
  pinMode(13, OUTPUT);  // Set digital pin 13 as OUTPUT
}

void loop() {
  // loop() runs repeatedly, over and over, forever
  // Put the code you want to repeat here
  
  digitalWrite(13, HIGH);  // Turn pin 13 HIGH (5V) - LED ON
  delay(1000);             // Wait 1000 milliseconds (1 second)
  
  digitalWrite(13, LOW);   // Turn pin 13 LOW (0V) - LED OFF
  delay(1000);             // Wait 1000 milliseconds (1 second)
  
  // After this, loop() starts over from the top
}

/* 
   EXPLANATION:
   
   1. setup() - Runs ONE TIME when powered on
      - pinMode(pin, mode) tells Arduino if pin is INPUT or OUTPUT
      - We set pin 13 as OUTPUT so we can control it
   
   2. loop() - Runs FOREVER, repeatedly
      - digitalWrite(pin, value) sends voltage to a pin
      - HIGH = 5V (on), LOW = 0V (off)
      - delay(milliseconds) pauses execution
   
   RESULT: LED blinks once per second (1 sec ON + 1 sec OFF)
*/
