// Dummy header file for console debugging of Arduino functions

#include <iostream>

extern int noteFrequency;

enum voltage { LOW, HIGH };

using namespace std;

void digitalWrite(int pin, int voltage) {
	cout << " Setting pin " << pin << " " << (voltage ? "HIGH" : "LOW");
}

void delayMicroseconds(int microseconds) {
  
}

long micros() {
  long x = 1000;
  return x;
}