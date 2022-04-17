// defines pins numbers
const int stepPin = 2; 
const int dirPin = 3; 
const int enPin1 = 4;
const int enPin2 = 5;
//const int enPin3 = 6;

boolean flag=false;
int x = 0;

void setup() {
  
  // Sets the two pins as Outputs
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
  pinMode(enPin1,OUTPUT);
  pinMode(enPin2,OUTPUT);
  //pinMode(enPin3,OUTPUT);
  digitalWrite(enPin1,HIGH);
  digitalWrite(enPin2,LOW);
 // digitalWrite(enPin3,HIGH);
  pinMode(dirPin,HIGH); 
}
void loop() {
  if(x < 6500) {
    x++;
  }
    if (x<6500){
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(500); 
  }

}
