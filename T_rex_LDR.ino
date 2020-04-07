#include <Servo.h>

 /*
  In This sketch you are going to control a servo motor using the LDR sensor 
  attach the LDR sensor to the analog pin A0 followed with a resisor of 1kOhm , check the image for a suitable wiring
  attach the servo motor to digital pin 8 
*/
  // Code written by AlaaDz
Servo myServo;

void setup() {
  // initialize serial communication at 9600 bits per second:
  // I used the serial monitor just to print the mesured value of light 
  Serial.begin(9600);
  myServo.attach(8);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input of the LDR on analog pin 0:
  int sensorValue = analogRead(A0);
  // Print the sensor value to the serial monitor 
  Serial.println(sensorValue);
  // I used the value 100 after several essay by exposing the sonsor to a white image than to a black or dark grey image 
  if(sensorValue < 100){
    delay(40); 
    myServo.write(4);
    delay(200);
    }
  if(sensorValue > 100){myServo.write(20);}
}
