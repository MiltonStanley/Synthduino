#ifndef NOTE_H
#define NOTE_H

#include "Arduino.h"

class Note{
 public:
  Note(int _frequency, int _duration);//{frequency = _frequency; duration = _duration;};
  ~Note(){};
  int getFrequency(){return frequency;};
  void playDelay(int pin);
  int frequency;  // in Hz
  int period;     // in microseconds
  int duration;   // Music value
};

Note::Note(int _frequency, int _duration) {
  frequency = _frequency;
  period = (1.0/frequency) * 1000000; // Period = reciprical of frequency; then convert to milliseconds
  duration = _duration;
}

void Note::playDelay(int pin){
  digitalWrite(pin, HIGH);
  delayMicroseconds(period);
  digitalWrite(pin, LOW);
  delayMicroseconds(period);
}
#endif