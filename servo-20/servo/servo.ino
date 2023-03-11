#include <Servo.h>

#define detectorPin 22
#define ervo 5

int value

Servo myservo;

void setup() {
  Serial.begin(115200);
  myservo.attach(servo);
  pinMode(detectorPint,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  value= digitalRead(detectorPin);
  Serial.println(value);

  if(value==0){
    myservo.write(180);

  }else{
    myservo.write(0);

  }
  delya(1000);
}
