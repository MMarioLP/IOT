int tiltSwitchPin = 5;  // Pin digital que está conectado al tilt switch
 // Pin digital que está conectado al LED integrado

void setup() {
  Serial.begin(115200);
  pinMode(tiltSwitchPin, INPUT);  // Configura el pin del tilt switch como entrada
 // Configura el pin del LED como salida
}

void loop() {
  int tiltSwitchValue = digitalRead(tiltSwitchPin); // Lee el estado del tilt switch

  if (tiltSwitchValue == HIGH) {  
    
    Serial.print("Activado");

  } 
  
  
  delay(1000);
}
