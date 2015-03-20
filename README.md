Synthduino
=============
The Synthesizer library for Arduino

v0.2 using [Semantic Versioning](http://semver.org/).

Sample Code
-----------
See the examples folder above.

ROADMAP
----------

* 0.1 - Note.play() [completed]
  - Equivalent of tone()
* 0.2 - Instrument.play() [completed]
  - Set up an instrument (a sequence of Notes)
* 0.3 - Synthduino.play() [in progress - 28 MAR 2015]
  - Synthduino (monophonic) - single instrument
* 0.4 - Synthduino.play() [11 APR 2015]
  - 'Full' version - can play multiple instruments
* 0.5 - Instrument.build([pitches], [durations]...) [25 APR 2015]
  - Pass pitch & duration arrays straight in (don't need to declare Note array)
* 0.6 - Synthduino.build(notes) [09 MAY 2015]
  - Pass Note array to Synthduino (don't declare Instrument)
* 0.7 - Synthduino.build(pitches, durations...) [23 MAY 2015]
  - Pass pitches & durations straight in
* ...additional features I think of or are recommended
* 1.0 - full release. [release tba]