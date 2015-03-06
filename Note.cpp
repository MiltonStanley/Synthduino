#include "Note.h"

#ifndef TESTING_ENVIRONMENT
	#include "Arduino.h"
#endif

Note::Note(int _frequency, int _duration) {
	frequency = _frequency;
	duration = _duration;
}

void Note::play(int _pin) {
	unsigned long toggleRate = getToggleRate(); // How often to we toggle the pin?
	int currentState = LOW;
	unsigned long durationInMicros = convertDurationToMicros(); // How long to we play the note? Not necessary
	unsigned long currentTime = micros(); // Note start time
	unsigned long endTime = currentTime + durationInMicros; // When do we stop? Could be simplified by removing dIM, replace w/ cDTM() above
	unsigned long nextToggleTime = currentTime; // When we we toggle pin? NOW because time to start!
	while (currentTime < endTime) {// Only until time to stop note
		if (currentTime >= nextToggleTime) { // Time to toggle?
			digitalWrite(_pin, currentState);
			if (currentState == HIGH) { // If high, low; if low, high
				currentState = LOW;
			} else if (currentState == LOW) {
				currentState = HIGH;
			}
			nextToggleTime = currentTime + toggleRate; // Toggle again when it's time
		}
		currentTime = micros();
	}
}

float Note::convertFrequencyToPeriod() {
	float period = 1.0 / frequency;
	return period;
}

unsigned long Note::convertFrequencyToMicros() {
	return 1000000.0 / frequency;;
}

unsigned long Note::convertDurationToMicros() {
	return 1/(duration/(120 / 60.0)) * 1000000;
}

unsigned long Note::getToggleRate() {
	//	1)  1/frequency gets the period (seconds per cycle)
	//  2)  Then multiply by 1,000,000 for microseconds, and
	//		then cut it in half since it's toggles (on and 
	//		off). 500,000 is this, simplified.
	return 500000 * (1.0 / frequency);
}