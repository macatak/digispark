// DigiSpark program to print random Monty Python quotes
// seems to be a little buggy

// declare a delay between output
int output_delay = 20000; // 20 seconds

#include "DigiKeyboard.h"

void setup() {
  //required
  DigiKeyboard.update();
  //delay here for enumeration
  //DigiKeyboard.delay(3output_delay);
}

void loop() {
  // put your main code here, to run repeatedly:
  //DigiKeyboard.delay(output_delay);
  DigiKeyboard.print("\nAre you suggesting that coconuts migrate?\n");
  DigiKeyboard.delay(output_delay);
  DigiKeyboard.print("\nIts just a flesh wound\n");
  DigiKeyboard.delay(output_delay);
  DigiKeyboard.print("\nMy hovercraft is full of eels\n");
  DigiKeyboard.delay(output_delay);
  DigiKeyboard.print("\nNobody expects the Spanish Inquisition\n");
  DigiKeyboard.delay(output_delay);
  DigiKeyboard.print("\nI am so sorry to have kept you waiting but I am afraid my walk has become rather sillier recently\n");
  DigiKeyboard.delay(output_delay);  
  DigiKeyboard.print("\nI fart in your general direction\n");
  DigiKeyboard.delay(5000);  
//  DigiKeyboard.print("\nWe interrupt this program to annoy you and make things generally more irritating\n");
//  DigiKeyboard.delay(5000);
//  DigiKeyboard.print("\nStrange women lying in ponds, distributing swords, is no basis for a system of government\n");
//  DigiKeyboard.delay(5000);
//  DigiKeyboard.print("\nI cut down trees ");
//  DigiKeyboard.delay(500);
//  DigiKeyboard.print("\nI skip and jump ");
//  DigiKeyboard.delay(500);
//  DigiKeyboard.print("\nI like to press wild flowers. ");
//  DigiKeyboard.delay(500);
//  DigiKeyboard.print("\nI put on women's clothing and hang around in bars\n");
}
