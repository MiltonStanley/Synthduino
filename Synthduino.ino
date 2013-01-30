/* Synthduino - the Arduino Synthesizer program
 * v. 0.1
 * Milton Stanley, Milte Technologies
 *
 * REQUIRES the StandardCPlusPlus library for Arduino, found at
 * http://www.github.com/maniacbug/StandardCplusplus
 *
 */

// TODO now only in README

#include "note.h"
#include "pitches.h"
#include "durations.h"


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
/*  The below line doesn't work on Windows, as Arduino uses an older version of gcc w/o specifying
    c++11 support
      Note bassLine[] = { {nC3, 2}, {nDS3, 2}, {nF3, 1} }; // The actual bass part
    If you're on Linux (and I guess OSx), you can use the abbreviated notation. Otherwise:
  */
Note melody[] = { Note(nE4,4), Note(nD4,4), Note(nC4,4), Note(nD4,4), Note(nE4,4), Note(nE4,4), Note(nE4,4) };
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
