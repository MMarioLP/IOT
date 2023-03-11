int Led_Red = 2;
int Led_Green = 3;
int Led_Blue = 4;

void setup() {
  pinMode(Led_Red, OUTPUT); 
  pinMode(Led_Green, OUTPUT); 
  pinMode(Led_Blue, OUTPUT); 
}

void loop() {
   for(int val = 255; val> 0; val--) {
      analogWrite (Led_Red, val);
      analogWrite (Led_Blue, 255-val);
      analogWrite (Led_Green, 128-val);
      delay (15);
   }

   for(int val = 0; val <255; val++) {
      analogWrite (Led_Red, val);
      analogWrite (Led_Blue, 255-val);
      analogWrite (Led_Green, 128-val);
      delay (15);
   }
}