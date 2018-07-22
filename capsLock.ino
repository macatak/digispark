// DigiSpark program to toggle CAPS LOCK on and off.
// LED state change just indicates the the program is running
// state of CAPS Lock depends on intital state
// May need to put a loop counter in to run DigiKeyboard.update() every now and then
// supposed issue with the USB device disconnecting but have yet to see it 
// but haven't really tested it :)


#include "DigiKeyboard.h"

int led = 1;  // may need to change depending on board model
int intial_wait = 10000;  // initial toggle delay (10 seconds).
int second_wait = 10000;  // delay between toggles (10 seconds).

void setup() {
  pinMode(led, OUTPUT);
  DigiKeyboard.update();
}

void loop() {
  DigiKeyboard.sendKeyStroke(57);
  digitalWrite(led, 1);
  delay(intial_wait);
  DigiKeyboard.sendKeyStroke(57);
  digitalWrite(led, 0);
  delay(second_wait);
}
