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
  Keyboard.print(F("cmd"));

  typeKey(KEY_RETURN);

  delay(600);
  Keyboard.print(F("color 02 && ECHO OFF && cls"));

  delay(500);
  typeKey(KEY_RETURN);

  delay(300);
  Keyboard.print(F("You've"));

  typeKey(' ');

  delay(500);
  Keyboard.print(F("Been"));

  typeKey(' ');

  delay(500);
  Keyboard.print(F("H"));

  typeKey(' ');

  delay(150);
  Keyboard.print(F("A"));

  typeKey(' ');

  delay(150);
  Keyboard.print(F("C"));

  typeKey(' ');

  delay(150);
  Keyboard.print(F("K"));

  typeKey(' ');

  delay(150);
  Keyboard.print(F("E"));

  typeKey(' ');

  delay(150);
  Keyboard.print(F("D"));

  typeKey(' ');

  delay(2000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(200);
  Keyboard.print(F("cmd"));

  typeKey(KEY_RETURN);

  delay(200);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(200);
  Keyboard.print(F("cmd"));

  typeKey(KEY_RETURN);

  delay(200);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(200);
  Keyboard.print(F("cmd"));

  typeKey(KEY_RETURN);

  delay(200);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(200);
  Keyboard.print(F("cmd"));

  typeKey(KEY_RETURN);

  delay(200);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(200);
  Keyboard.print(F("cmd"));

  typeKey(KEY_RETURN);

  delay(200);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(200);
  Keyboard.print(F("cmd"));

  typeKey(KEY_RETURN);

  delay(200);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(200);
  Keyboard.print(F("cmd"));

  typeKey(KEY_RETURN);

  delay(200);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(200);
  Keyboard.print(F("cmd"));

  typeKey(KEY_RETURN);

  delay(200);
  delay(4000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(200);
  Keyboard.print(F("cmd"));

  typeKey(KEY_RETURN);

  delay(300);
  Keyboard.print(F("color 02 && ECHO OFF && cls"));

  delay(500);
  typeKey(KEY_RETURN);

  delay(300);
  Keyboard.print(F("LIFE"));

  delay(500);
  typeKey(' ');

  Keyboard.print(F("L"));

  delay(150);
  typeKey(' ');

  Keyboard.print(F("I"));

  delay(150);
  typeKey(' ');

  Keyboard.print(F("N"));

  delay(150);
  typeKey(' ');

  Keyboard.print(F("E"));

  delay(500);
  typeKey(' ');

  Keyboard.print(F("DISABLED"));

  delay(800);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(150);
  Keyboard.print(F("https://www.youtube.com/watch?v=bfWD1voJS_w"));

  delay(500);
  typeKey(KEY_RETURN);

  delay(1500);
  Keyboard.print(F("F"));

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
