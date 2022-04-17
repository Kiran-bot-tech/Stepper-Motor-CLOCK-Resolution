#include <PWM.h>
#include <LiquidCrystal.h>
const int rs = 8, en = 9, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
  

int pwm_pin = 3; 
int pot_pin = A0;
int val;
//int pwm_value;
//const long frequency = 40000L;  // Hz

void setup() {
  //InitTimersSafe(); 
  //bool success = SetPinFrequencySafe(pwm_pin, frequency);
  //if(success) {
    lcd.begin(20, 4);
     pinMode(pot_pin,INPUT);
     pinMode(pwm_pin, OUTPUT);     
}
void loop() { 
               
                                //int output = potValue();
                                   //Reading from potentiometer
  int val = analogRead(pot_pin);
  lcd.setCursor(0,0);
  lcd.print("Analog Voltage");
  lcd.setCursor(0,2);
  lcd.print(val);
                                      //Map value 0-1023 to 0-255 (PWM)
  //pwm_value = map(val, 0, 1023, 0, 255);
  //analogWrite(pwm_pin, pwm_value);
  
    
}
