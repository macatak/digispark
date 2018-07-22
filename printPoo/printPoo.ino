
// DigiSpark program to print 'poo' to the screen.
// idea form DH

#include "DigiKeyboard.h"

// set the delay period
int output_delay = 20000; // 20 seconds
void setup() {
  DigiKeyboard.update();
}

void loop() {
  DigiKeyboard.print(" poo "); 
  delay(output_delay);
}
