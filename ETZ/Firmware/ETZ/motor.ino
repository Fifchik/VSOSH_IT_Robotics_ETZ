int count = 0;

void motor(int dist, int dir) {
  count = 0;
  stepp = 0;
  stepp = ( (dist + 9) / (33 * 3.14) * 200) ;

  if (dir == 1) {
    digitalWrite(18, 1);
    digitalWrite(46, 0);
  }
  else if (dir == 0) {
    digitalWrite(18, 0);
    digitalWrite(46, 1);
  }

  while (count < stepp) {
    digitalWrite(23, 1);
    digitalWrite(47, 1);
    delayMicroseconds(2200);
    digitalWrite(23, 0);
    digitalWrite(47, 0);
    delayMicroseconds(2200);
    count = count + 1;
    //  Serial.println(count);
  }

}
