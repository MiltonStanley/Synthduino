#ifndef Instrument_H
#define Instrument_H

#ifndef Note_H
	#include "Note.h"
#endif
#ifndef TESTING_ENVIRONMENT
	#include "Arduino.h"
#endif

class Instrument {
public:
	Instrument(Note [], int);
	void play(int);
	Note notes[];
	int numberOfNotes;
};

#endif