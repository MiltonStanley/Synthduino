#include "note.h"
#include "pitches.h"

#define BASS 12

/* HEADER SECTION
 * Declare your tempo and parts.
 * Examples:
 * TEMPO = 120 // in bpm (beats per minute) - how many quarter notes per minute
 * Note bassline[] = { {NOTE_C3, 2}, {NOTE_DS3, 2}, {NOTE_F3, 1} };
 */

Note bassLine[] = { {NOTE_C3, 2}, {NOTE_DS3, 2}, {NOTE_F3, 1} };

#define TEMPO 120

void setup(){
	pinMode(BASS, OUTPUT);
}

void loop() {
  for(int i=0; i<3; i++){
    bassLine[i].play(12);
  }
 // delay(10000);
}