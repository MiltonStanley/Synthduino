#include "note.h"
#include "pitches.h"

void setup() {
 pinMode(12, OUTPUT);
}

Note theNote(NOTE_A4, 8);

void loop() {
  theNote.playDelay(12);
}
