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


Declaring a melody line. There are two ways to do this, depending on the compiler your version of the Arduino IDE uses.

First methods (easiest):

    Note melody[] = { {nE4,4}, {nD4,4}, {nC4,4}, {nD4,4}, {nE4,4}, {nE4,4}, {nE4,4} }; // 
		int MELODY_LENGTH = 7;       // this will change later and be automatic

Second method (explicitly naming data type; mainly required on Windows):

    Note melody[] = { Note(nE4,4), Note(nD4,4), Note(nC4,4), Note(nD4,4), Note(nE4,4), Note(nE4,4), Note(nE4,4) };
    int MELODY_LENGTH = 7;


Playing the above melody line (again, subject to change when Melody class is coded):

    for(int i=0; i<MELODY_LENGTH; i++) {
      melody[i].play(12)    // play the note on pin 12
    }

To Do list
----------

1. Build support for Melody class - vector<note>, with timing offsets
2. Build support for Channel class - does the actual signalling to pin
3. Possibly add a mixer class, for handling multiple channels