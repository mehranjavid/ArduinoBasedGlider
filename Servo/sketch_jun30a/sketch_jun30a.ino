#include <Servo.h>

Servo myservoRight,myservoMid,myservoLeft; 
int pos = 0;  

#define joyX A0
#define joyY A1

void setup() {
  Serial.begin(9600);
  myservoRight.attach(12); // right
  myservoMid.attach(11);// mid
  myservoLeft.attach(10);// left
   
}

void loop() {

  
  int xValue = analogRead(joyX);
  int yValue = analogRead(joyY); 

   if(xValue<=200 && myservoMid.read()!= 70){
    myservoMid.write(70);
   }
   else if(xValue>=500 && myservoMid.read()!= 130){
    myservoMid.write(130);
   } 
   else if(yValue<=200 && myservoLeft.read()!= 130 && myservoRight.read()!= 130){
    
    myservoRight.write(130); 
    myservoLeft.write(130); 
   }
   else if(yValue>=500  && myservoLeft.read()!= 70 && myservoRight.read()!= 70){
    
    myservoRight.write(70); 
    myservoLeft.write(70); 
   }
   else if(yValue<=500  && xValue<=500 && xValue>=200 && yValue>=200 ){
    myservoRight.write(90);
    myservoMid.write(90);
    myservoLeft.write(90); 
   }
   Serial.print(xValue);
   Serial.print(" ");
   Serial.println(yValue);  
}
