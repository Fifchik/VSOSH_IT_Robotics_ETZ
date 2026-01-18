
#include <Servo.h>

int stepp = 0;

uint16_t timer1 = 0;
void setup() {
  pinMode(30, 1);
  pinMode(28, 1);
  pinMode(8, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  Servo miniServo;
  miniServo.attach(2);
  miniServo.write(60);
  pinMode(23, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(47, OUTPUT);
  pinMode(46, OUTPUT);
  digitalWrite(18, 1);
  digitalWrite(46, 0);
  Serial.begin(9600);
  //colibrate();
  while (digitalRead(8));
  while (!digitalRead(8));
  digitalWrite(28, 1);
  delay(2000);
  motor(3, 1);
  delay(2000);
  miniServo.write(40);
  delay(400);
  miniServo.write(60);
  delay(400);
  motor(13, 1);
  delay(2000);
  miniServo.write(40);
  delay(400);
  motor(23, 1);
  delay(2000);
  miniServo.write(60);
  delay(400);  
    while (digitalRead(10));
    while (!digitalRead(10));
    motor(160, 1);
    miniServo.write(40);
    delay(400);
    miniServo.write(60);
    delay(400);
    motor(300, 0);
}

void loop() {
  Serial.println(analogRead(A0));
  //28
  //10
  //9


}
