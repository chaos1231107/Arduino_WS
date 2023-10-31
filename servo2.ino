#include <Servo.h>

Servo servo;      
//int value = 0;    
int i = 600; 

void setup() {
  Serial.begin(9600);    
  servo.attach(9);  // 서보모터 데이터핀 7번에 연결  
}

void loop() {

 while(i < 1023){
   i += 100; // 각도가 360이 될때까지 각도증가
   servo.write(i);
   Serial.println(i);
   //if(i == ){
   //break;
   //}
   
 }
}
