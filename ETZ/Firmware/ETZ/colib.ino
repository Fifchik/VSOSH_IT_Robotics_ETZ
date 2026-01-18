void colibrate() {
  digitalWrite(18, 0);
  digitalWrite(46, 1);
  while (analogRead(A0) > 29) {
    digitalWrite(23, 1);
    digitalWrite(47, 1);
    delayMicroseconds(2000);
    digitalWrite(23, 0);
    digitalWrite(47, 0);
    delayMicroseconds(2000);
    //  Serial.println(count);
  }
digitalWrite(30, 1);
}
