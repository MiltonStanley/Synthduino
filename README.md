Synthduino
=============

The Synthesizer library for Arduino

Usage
-----

### How it Works
Generates square waves on designated pin, based on frequency and duration provided in Note class.

### Sample Code
Subject to change as core develops!!!

Declaring an eighth note of pitch A4 (440 hz):

    Note one(nA4, 8)


Declaring a melody line:

    Note melody[] = { {E4,4}, {D4,4}, {C4,4}, {D4,4}, {E4,4}, {E4,4}, {E4,4} }
    int MELODY_LENGTH = 7       // this will change later and be automatic


Playing the above melody line (again, subject to change when Melody class is coded):

    for(int i=0; i<MELODY_LENGTH; i++) {
      melody[i].play(12)    // play the note on pin 12
    }

To Do list
----------

1. Add support for Constant declarations of notes - EIGHTH instead of 8
2. Build support for Melody class - vector<note>, with timing offsets
3. Build support for Channel class - does the actual signalling to pin
4. Possibly add a mixer class, for handling multiple channels