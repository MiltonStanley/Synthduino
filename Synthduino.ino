#include "note.h"
#include "pitches.h"

void setup() {
  pinMode(12, OUTPUT);
}

  int notes[] = {NOTE_C4, NOTE_E4, NOTE_G4, NOTE_C5};
  int durations[] {2, 4, 4, 1};

//  Note melody[4];
  Note theNote(NOTE_A4, 2);
  
  //for(int i=0; i<4; i++){
//    melody[i] = Note temp(notes[i],durations[i])
  //}

void loop() {
  //theNote.playDelay(12);
  theNote.playTimer(12);
  delay(500);
}

// 120 bmp = 120 qNotes/60 seconds = 2 Hz freq, period = .5 sec = 500k millis
// 8 = 4hz = .25 * 1,000,000 = 250,000

// whole note  = .5 Hz