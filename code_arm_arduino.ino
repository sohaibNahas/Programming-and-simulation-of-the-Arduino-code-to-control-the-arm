#include <Servo.h>

Servo servo_1;
Servo servo_2;
Servo servo_3;
Servo servo_4;
Servo servo_5;

int flex_1 = A0;
int flex_2 = A1;
int flex_3 = A2;
int flex_4 = A3;
int flex_5 = A4;
;
void setup()  
{
 
  servo_1.attach(0);
  servo_2.attach(1);
  servo_3.attach(2);
   servo_5.attach(3);
  servo_4.attach(4);
}


void loop()
{
  int flex_1_pos;  
  int servo_1_pos;  
  flex_1_pos = analogRead(flex_1); 
  servo_1_pos = map(flex_1_pos, 800, 900, 0, 180); 
  servo_1_pos = constrain(servo_1_pos, 0, 180);  
  servo_1.write(servo_1_pos);

  int flex_2_pos;  
  int servo_2_pos;  
  flex_2_pos = analogRead(flex_2); 
  servo_2_pos = map(flex_2_pos, 800, 900, 0, 180); 
  servo_2_pos = constrain(servo_2_pos, 0, 180);  
  servo_2.write(servo_2_pos);
  

  int flex_3_pos;  
  int servo_3_pos;  
  flex_3_pos = analogRead(flex_3); 
  servo_3_pos = map(flex_3_pos, 800, 900, 0, 180); 
  servo_3_pos = constrain(servo_3_pos, 0, 180);  
  servo_3.write(servo_3_pos);
  

  
  int flex_5_pos;  
  int servo_5_pos;  
  flex_5_pos = analogRead(flex_5); 
  servo_5_pos = map(flex_5_pos, 800, 900, 0, 180); 
  servo_5_pos = constrain(servo_5_pos, 0, 180);  
  servo_5.write(servo_5_pos);
  
  int flex_4_pos;  
  int servo_4_pos;  
  flex_4_pos = analogRead(flex_4); 
  servo_4_pos = map(flex_4_pos, 800, 900, 0, 180); 
  servo_4_pos = constrain(servo_4_pos, 0, 180);  
  servo_4.write(servo_4_pos);
  


  
  delay(100);
 
 
}
