Synthduino
=============
The Synthesizer library for Arduino

v0.1 using [Semantic Versioning](http://semver.org/).

Sample Code
-----------
<b>Subject to change as core develops!!!</b>

Declaring an eighth note of pitch A4 (440 hz):

    Note one(nA4, EIGHTH);
    *or*
    Note one(nA4, 8);
    *or*
    Note one(440, EIGHTH);
    *or*
    Note one(nA4, 8);

Playing a Note:

    one.Play(pin);

See examples/SynthduinoNote for more detail.

ROADMAP
----------
v0.2 - play(instrument)
  -Ability to play an instrument

v0.3 - play(Synthduino) [monophonic]
  -Ability to play the synthduino - single instrument

v0.4 - play(synthduino) [polyphonic]
  -'full' version - can play multiple instruments
  
**subsequent improvements to follow**