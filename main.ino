#include "keypad_handler.h"
#include "alarm_handler.h"

const int pirPin = 2;
bool alarmArmed = true;

void setup() {
  Serial.begin(9600);
  setupKeypad();
  setupAlarm();
  pinMode(pirPin, INPUT);
}

void loop() {
  if (alarmArmed) {
    int motion = digitalRead(pirPin);
    if (motion == HIGH) {
      Serial.println("Motion Detected!");
      activateAlarm();
    }
  }

  // Check for keypad input to disarm
  String code = readKeypad();
  if (code.length() == 4) {
    if (code == "1234") {
      Serial.println("Correct Code. Alarm Disarmed.");
      alarmArmed = false;
      deactivateAlarm();
    } else {
      Serial.println("Wrong Code!");
      activateAlarm();
    }
  }

  delay(100);
}
