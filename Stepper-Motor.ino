// defines pins numbers
const int stepPin = 2; 
const int dirPin = 3; 
const int enPin = 4;
boolean flag=false;
int x = 0;


void setup() {
  
  // Sets the two pins as Outputs
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
  pinMode(enPin,OUTPUT);
  digitalWrite(enPin,LOW);
  pinMode(dirPin,HIGH);
  
  
}
void loop() {
  
  //digitalWrite(dirPin,HIGH); // Enables the motor to move in a particular direction
 // Makes 200 pulses for making one full cycle rotation
  if(x < 6000) {
    x++;
  }
    if (x<6000){
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(500); 
  }

   //digitalWrite(dirPin,LOW); //Changes the rotations direction
   // Makes 400 pulses for making two full cycle rotation
  //for(int x = 0; x < 800; x++) {
    //digitalWrite(stepPin,HIGH);
    //delayMicroseconds(500);
    //digitalWrite(stepPin,LOW);
    //delayMicroseconds(500);
  
  
}
