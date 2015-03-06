#include "Instrument.h"

#ifndef TESTING_ENVIRONMENT
	#include "Arduino.h"
#endif

Instrument::Instrument(Note _notes[], int _numberOfNotes) {
    numberOfNotes = _numberOfNotes;
    for(int i=0; i<_numberOfNotes; i++) {
        notes[i] = _notes[i];
    }
}

void Instrument::play(int _pin) {
	for(int i=0; i<numberOfNotes; i++) {
		notes[i].play(_pin);
	}
}