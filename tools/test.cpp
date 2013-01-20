//test.cpp

#include <iostream>
#include <time.h>
#include <math.h>

#include "../pitches.h"
#include "note.h"

using namespace std;

clock_t timer;
int noteFrequency = 0;
Note melody[] = { {nC4, 8}, {nE4, 4}, {nG4, 2}, {nBF4, 1} };

const int noteValue = 1;
const int theFrequency = 100;
Note A440(theFrequency, noteValue);

int main() {
	timer = clock();
	A440.playDelay(11);
  timer = clock() - timer;
  float elapsedTime = float(timer)/CLOCKS_PER_SEC;
  cout << "\nElapsed time: " <<  elapsedTime << " seconds." << endl;
  cout << "Calculated note value: " << (1/( float(timer)/CLOCKS_PER_SEC)) << ", actual was " << noteValue << endl;
  cout << "I pulsed " << noteFrequency << " times" << endl;//, which is a total frequency of " << ()
  return 0;
}
