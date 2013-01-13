#include "note.h"
#include "pitches.h"
#define LENGTH 32

/* 
// Alberti Baseline
int notes[] = {NOTE_C4, NOTE_G4, NOTE_E4, NOTE_G4,
							 NOTE_C4, NOTE_G4, NOTE_E4, NOTE_G4,
							 NOTE_B3, NOTE_G4, NOTE_F4, NOTE_G4,
							 NOTE_C4, NOTE_G4, NOTE_E4, NOTE_G4,
							 NOTE_C4, NOTE_A4, NOTE_F4, NOTE_A4,
							 NOTE_C4, NOTE_G4, NOTE_E4, NOTE_G4,
							 NOTE_B3, NOTE_G4, NOTE_F4, NOTE_G4,
							 NOTE_C4, NOTE_G4, NOTE_E4, NOTE_G4					 
							};
int durations[] = { 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
										4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4				
									};
 */

Note melody[LENGTH];
Note theNote(NOTE_A4, 2);
  
void setup(){
  pinMode(12, OUTPUT);
  for(int i=0; i<LENGTH; i++){
    Note temp(notes[i], durations[i]);
    melody[i] = temp;
  }
}

void loop() {
  for(int i=0; i<LENGTH; i++){
    melody[i].play(12);
  }
 // delay(10000);
 //theNote.play(12); 
}

// 120 bmp = 120 qNotes/60 seconds = 2 Hz freq, period = .5 sec = 500k millis
// 8 = 4hz = .25 * 1,000,000 = 250,000

// whole note  = .5 Hz