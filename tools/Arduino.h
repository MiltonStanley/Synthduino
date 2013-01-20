// Dummy header file for console debugging of Arduino functions

#include <iostream>

extern int noteFrequency;

enum voltage { LOW, HIGH };

using namespace std;

void digitalWrite(int pin, int voltage) {
	cout << " Setting pin " << pin << " " << (voltage ? "HIGH" : "LOW");
	if (voltage) noteFrequency = noteFrequency++;
}

void delayMicroseconds(int microseconds) {
	clock_t timer = clock();
	cout << clock();
	cout << " Delaying " << microseconds << " microseconds" << endl;
	while (clock() > (timer + microseconds)){cout << "Delay" << endl;};
	cout << clock();
}

long micros() {
	clock_t microsecondsSinceStart = clock();
	return clock();
}