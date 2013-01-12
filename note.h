//note.h

class Note{
 public:
  Note(int _frequency, int _duration){frequency = _frequency; duration = _duration;};
  ~Note(){};
  int getFrequency(){return frequency;};
  void play(int pin);
  int frequency;
  int duration;
};