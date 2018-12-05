#include <LobotServoController.h>
LobotServoController myse;

void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  while(!Serial);
  digitalWrite(13,HIGH);
 delay(2000);

   myse.moveServos(5,1000,0,1500,1,1000,2,1100,3,500,4,2500);
    delay(1000);
    myse.moveServo(0,1800,1000); 
   delay(1000);
   myse.moveServo(3,1000,1000); 
   delay(1000);
    myse.moveServo(4,2200,1000); 
   delay(2000);
   myse.moveServo(4,2500,1000);
}

void loop() {
  // put your main code here, to run repeatedly:

}
