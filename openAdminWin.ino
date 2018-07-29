/* openAdmin
 *  Windows only
 *  open an app as an admin
 *  1. Press the Win+R keys to open the Run dialog.
 *  2. Type what (ex: "cmd") you want to run into the Run dialog.
 *  3. Either press the CTRL + Shift + Enter keys OR press CTRL + Shift and click/tap on OK.
*/

#include "DigiKeyboard.h"

void setup() {
  // time to enumerate
  DigiKeyboard.delay(5000);
  // this always needs to go in there
  DigiKeyboard.update();
  DigiKeyboard.delay(1000);
  // send the Win+R command
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  // write 'cmd'
  DigiKeyboard.print("cmd");
  DigiKeyboard.delay(1000);
  /* send the 'open as admin' keyboard command
   *  important to get key order right
   *  first key is the key you want to mimic being pressed
   *  remaining keys are the modifiers
   */
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT + MOD_SHIFT_LEFT);
  DigiKeyboard.delay(1000);
  // running a 'dir' command is pretty basic but you get the idea
  DigiKeyboard.print("dir");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
  // empty because we dont want to execute anything over and over
  // just a proof of concept, your needs may vary
}
