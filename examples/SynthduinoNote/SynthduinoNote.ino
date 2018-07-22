#include <Note.h>
#include <Pitches.h>
#include <Synthduino.h>
#include <Durations.h>

void setup() {
  pinMode(8, OUTPUT);
}

void loop() {
  // Using shorthand notation to create & play
  Note(nE3, QUARTER).play(8);
  Note(nD3, QUARTER).play(8);
  Note(nC3, QUARTER).play(8);
  Note(nD3, QUARTER).play(8);
  Note(nE3, QUARTER).play(8);
  Note(nE3, QUARTER).play(8);
  Note(nE3, HALF).play(8);
  delay(500);
}
