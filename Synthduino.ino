/* Synthduino - the Arduino Synthesizer program
 * v. 0.1
 * Milton Stanley, Milte Technologies
 *
 * REQUIRES the StandardCPlusPlus library for Arduino, found at
 * http://www.github.com/maniacbug/StandardCplusplus
 *
 */

/* TODO
 *
 * 1) [DONE] Convert pitches to format nXX, instead of NOTE_XX
 * 2) Add support for Constant declarations of notes - EIGHTH instead of 8
 * 3) [DONE] Add enharmonics
 *   ------- 	All these following classes use memory format note->end, where end is an offset from
 *						the overall start time (instead of just duration), so
 							{A4, 8}, {CS5, 8}, {E5, 8} becomes {A4, 8}, {CS5, 16}, {E5, 24}, converted to millis
 * 4) Build support for Melody class - vector<note>, with timing offsets
 * 5) Build support for Channel class - does the actual signalling to pin
 * 6) Possible add a mixer class, for handling multiple channels
 */

#include "note.h"
#include "pitches.h"


/* HEADER SECTION
 * Declare your tempo and parts/pins (note parts/pins are recommended in the format below
 * Examples:
 * #define TEMPO = 120 // in bpm (beats per minute) - how many quarter notes per minute
 * #define BASS 12
 * Note bassline[] = { {NOTE_C3, 2}, {NOTE_DS3, 2}, {NOTE_F3, 1} };
 */

#define TEMPO 120   // Tempo in bpm
#define BASS 12  		// Bass will be output on pin 12
#define MELODY 13

//Note a440(nA4, 8);
//Note bassLine[] = { {NOTE_C3, 2}, {NOTE_DS3, 2}, {NOTE_F3, 1} }; // The actual bass part
Note melody[] = { {NOTE_E4,4}, {NOTE_D4,4}, {NOTE_C4,4}, {NOTE_D4,4}, {NOTE_E4,4}, {NOTE_E4,4}, {NOTE_E4,4} };
int MELODY_LENGTH = 7;       // this will change later and be automatic


// End header Section

void setup(){
	pinMode(MELODY, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  for(int i=0; i<MELODY_LENGTH; i++){
    melody[i].play(MELODY);
  }
    
  //a440.play(12);
  delay(5000);
}
