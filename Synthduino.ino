void setup() {
 pinMode(12, OUTPUT);
}

// A440 = 2273;
// Double = 4546

void loop() {
  digitalWrite(12, HIGH);
  delayMicroseconds(4546);
  digitalWrite(12, LOW);
  delayMicroseconds(4546);
}

