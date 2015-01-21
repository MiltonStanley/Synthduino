#ifndef Note_H
#define Note_H

class Note {
	public:
		Note(int, int);
		void play(int);
	protected:
		int frequency;
		int duration;
		float convertFrequencyToPeriod();
		unsigned long convertFrequencyToMicros();
		unsigned long convertDurationToMicros();
		unsigned long getToggleRate();
};

#endif // note_H
