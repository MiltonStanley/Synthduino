#include "note.h"
#include "pitches.h"

void setup() {
 pinMode(12, OUTPUT);
}

Note theNote(NOTE_A4, 8);

void loop() {
  //theNote.playDelay(12);
  theNote.playTimer(12);
}

// 120 bmp = 120 qNotes/60 seconds = 2 Hz freq, period = .5 sec = 500k millis
// 8 = 4hz = .25 * 1,000,000 = 250,000

// whole note  = .5 Hz