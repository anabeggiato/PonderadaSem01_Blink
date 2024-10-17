void setup() {
  pinMode(11, OUTPUT);
  pinMode(8, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(8) == LOW) {
    digitalWrite(11, HIGH);
  }
  else{
    digitalWrite(11, LOW);
  }

}