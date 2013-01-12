#include "note.h"
#include "pitches.h"
#define LENGTH 4

int notes[] = {NOTE_C4, NOTE_E4, NOTE_G4, NOTE_C5};
int durations[] = {2, 4, 4, 1};
Note melody[4];
Note theNote(NOTE_A4, 2);
  
void setup(){
  pinMode(12, OUTPUT);
  for(int i=0; i<4; i++){
    Note temp(notes[i], durations[i]);
    melody[i] = temp;
  }
}

void loop() {
  for(int i=0; i<LENGTH; i++){
    melody[i].play(12);
  }
 //theNote.play(12); 
}

// 120 bmp = 120 qNotes/60 seconds = 2 Hz freq, period = .5 sec = 500k millis
// 8 = 4hz = .25 * 1,000,000 = 250,000

// whole note  = .5 Hz