#ifndef Note_H
#define Note_H

class Note {
	public:
		Note(int, int);
		void play(int);
		// Need these for testing
		bool operator==(Note other) const {
            return (frequency == other.frequency) && (duration == other.duration);
        }
        int getFrequency() {return frequency;}
        int getDuration() {return duration;}
	protected:
		int frequency;
		int duration;
		float convertFrequencyToPeriod();
		unsigned long convertFrequencyToMicros();
		unsigned long convertDurationToMicros();
		unsigned long getToggleRate();

};

#endif // note_H
