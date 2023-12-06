#include <Servo.h>

Servo myservo;
int potpin = A0;
int val = 0;

void setup() {
  myservo.attach(9);  // 서보 모터를 9번 핀에 연결합니다.
}


void loop() {
  val = analogRead(potpin);  // 아날로그 핀에서 입력값을 읽어옵니다.
  int angle = map(val, 0, 1023, 180, 0);// 입력값을 서보 모터의 각도 범위로 변환합니다. 0도에서 180도를 180도에서 0도로 수정했습니다.
  myservo.write(angle);// 변환된 각도로 서보 모터를 회전합니다.
}