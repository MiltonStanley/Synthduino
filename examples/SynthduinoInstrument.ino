#include <Pitches.h>
#include <Synthduino.h>
#include <Durations.h>

#define NUMBER_OF_NOTES 8
#define INSTRUMENT_PIN 8

/*   This has to be defined here as a global for some reason.
   I don't know what the scoping issue is with defining it
   in the loop(), but it has some bug that I can't figure
   out if it's memory related, timing related, or what - 
   only that it skips some notes, does a high-pitched, random
   whine for others, and may brick your Arduino (not permanently,
   but it will lock it up and you'll have trouble uploading a new
   sketch. The solution is to start an upload with avrdude in
   verbose mode, then hit the power button on the ardy after the
   first "avrdude: Send:" lines appear.
     Someone with a better knowledge of C++, Arduino memory manage-
   ment and scoping feel free to fork-pull request/raise issue/whatever.
*/
Note _notes[NUMBER_OF_NOTES] = {  Note(nA3, QUARTER),
                                  Note(nC4, EIGHTH),
                                  Note(nE4, EIGHTH),
                                  Note(nA4, QUARTER),
                                  Note(nG4, SIXTEENTH),
                                  Note(nB4, EIGHTH),
                                  Note(nC5, SIXTEENTH),
                                  Note(nA4, HALF)
                               };
Instrument myInstrument(_notes, NUMBER_OF_NOTES);
 
void setup() {
  pinMode(INSTRUMENT_PIN, OUTPUT);
}

void loop() {
  myInstrument.play(INSTRUMENT_PIN);
  delay(1000);
}
