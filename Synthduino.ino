#include "note.h"

void setup() {
 pinMode(12, OUTPUT);
}

int PITCH = 2273;

Note a440(2273, 8);
Note a220(4546, 8);

// A440 = 2273;
// Double = 4546

void loop() {
  a220.play(12);
}

void Note::play(int pin){
  digitalWrite(pin, HIGH);
  delayMicroseconds(frequency);
  digitalWrite(pin, LOW);
  delayMicroseconds(frequency);
}
