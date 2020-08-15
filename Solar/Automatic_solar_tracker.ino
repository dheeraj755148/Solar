//Be sure to install the servo libraries prior to running the code.

#include <Servo.h>      
Servo sg90;             //initializing a variable for servo named sg90
int initialposition = 90;   
int LDR1 = A0;          
int LDR2 = A1;         
int range = 5;          
int servopin=9;
void setup() 
{ 
  sg90.attach(servopin);  
  pinMode(LDR1, INPUT);  
  pinMode(LDR2, INPUT);
  sg90.write(initialposition);   
  delay(2500);            
}  
 
void loop() 
{ 
  int R1 = analogRead(LDR1); 
  int R2 = analogRead(LDR2);
  int diff1= abs(R1 - R2);  
  int diff2= abs(R2 - R1);
Serial.println(A0);
  if((diff1 <= range) || (diff2 <= range)) {
    	//if the difference is under the error then do nothing
  } else {    
    if(R1 > R2)
    {
      initialposition = --initialposition;  //Move the servo towards 0 degree
    }
    if(R1 < R2) 
    {
      initialposition = ++initialposition; //Move the servo towards 180 degree
    }
  }
  sg90.write(initialposition); 
  delay(100);
}
