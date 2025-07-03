#ifndef KEYPAD_HANDLER_H
#define KEYPAD_HANDLER_H

#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {9, 8, 7, 6}; 
byte colPins[COLS] = {5, 4, 3, 10}; 

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

String enteredCode = "";

void setupKeypad() {
  enteredCode = "";
}

String readKeypad() {
  char key = keypad.getKey();
  if (key) {
    Serial.print("Pressed: ");
    Serial.println(key);
    enteredCode += key;
    if (enteredCode.length() >= 4) {
      String temp = enteredCode;
      enteredCode = "";
      return temp;
    }
  }
  return "";
}

#endif
