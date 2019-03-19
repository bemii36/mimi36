#include <Servo.h>
//Define the servos
Servo servo1;
Servo servo2;
int servoPos1=0;
int servoPos2=0;

void setup()
{ // Setup Serial connection
  Serial.begin(115200);
  // Initialize the rtc object
  servo1.attach(3);
  servo2.attach(5);
  }
void loop()
{
routine();
delay(43200000);  //Wait for 12hrs after routine is completed and then again follows the routine of servos
}
void routine()
{
  //moving SERVO1 over water
  for (servoPos1 = 75; servoPos1 > 45; servoPos1--)
 {
  servo1.write(servoPos1);
  delay(50);
  } 
  //Stop for 2 seconds
  delay(2000);
  //moving SERVO2 into water
  for (servoPos2 = 90; servoPos2 > 45; servoPos2--)
 {
  servo2.write(servoPos2);
  delay(50);
  } 
 //moving SERVO2 out of water
 for (servoPos2 = 45; servoPos2<102; servoPos2++)
 {
  servo2.write(servoPos2);
  delay(50);
  }
  //moving SERVO1 over bin
  for (servoPos1 = 45; servoPos1<100 ; servoPos1++)
 {
  servo1.write(servoPos1);
  delay(50);
  } 
  //Stop for 2 seconds
  delay(2000);
  //moving SERVO2 into bin
 for (servoPos2 = 102; servoPos2 > 95; servoPos2--)
 {
  servo2.write(servoPos2);
  delay(50);
  } 
  //moving SERVO2 out of bin
 for (servoPos2 = 95; servoPos2<102; servoPos2++)
 {
  servo2.write(servoPos2);
  delay(50);
  }
  //moving SERVO1 over water
  for (servoPos1 = 100; servoPos1 > 45; servoPos1--)
 {
  servo1.write(servoPos1);
  delay(50);
  } 
  //Stop for 2 seconds
  delay(2000);
  //moving SERVO2 into water
  for (servoPos2 = 102; servoPos2 > 45; servoPos2--)
 {
  servo2.write(servoPos2);
  delay(50);
  } 
  //Stop for 2 seconds
  delay(2000);
  //moving SERVO2 out of water
 for (servoPos2 = 45; servoPos2<90 ; servoPos2++)
 {
  servo2.write(servoPos2);
  delay(50);
  }
  //moving SERVO1 over rest
  for (servoPos1 = 45; servoPos1<75; servoPos1++)
 {
  servo1.write(servoPos1);
  delay(50);
  } 
  //Stop for 2 seconds
  delay(2000);
 }
