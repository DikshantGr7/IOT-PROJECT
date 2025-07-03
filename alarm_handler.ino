#ifndef ALARM_HANDLER_H
#define ALARM_HANDLER_H

const int ledPin = 11;
const int buzzerPin = 12;

void setupAlarm() {
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void activateAlarm() {
  digitalWrite(ledPin, HIGH);
  tone(buzzerPin, 1000);
}

void deactivateAlarm() {
  digitalWrite(ledPin, LOW);
  noTone(buzzerPin);
}

#endif
