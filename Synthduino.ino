#include "note.h"

void setup() {
 pinMode(12, OUTPUT);
}

int PITCH = 2273;

Note a440(440, 8);
Note a220(220, 8);

// A440 = 2273;
// Double = 4546

void loop() {
  a220.play(12);
}
