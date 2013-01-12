//note.cpp
#include <iostream>
#include "./note.h"

using namespace std;

int main() {
  Note one(440, 8);
  cout << "Frequency is " << one.getFrequency() << endl;
  return 0;


}