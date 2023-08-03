#include <Servo.h>

Servo servo;      
int value = 0;    
int angle = 0;
//bool flag = true;     

void setup() {
  servo.attach(9);
  servo.write(0); 
  Serial.begin(9600);
  Serial.println(angle);
}

void loop() {
  while(angle < 360){
    angle += 30;
    servo.write(angle);
    if (angle == 360){
      break;
      //flag != flag;
    }
  }
 // servo.write(0); 
 }
