const int switchPin = 2; // Pin del Ball Switch

void setup() {
  pinMode(switchPin, INPUT); // Configura el pin del Ball Switch como entrada
  Serial.begin(9600); // Inicia la comunicación serial
}

void loop() {
  int switchState = digitalRead(switchPin); // Lee el estado del Ball Switch
  Serial.println(switchState); // Imprime el estado del Ball Switch en el monitor serial
  delay(100); // Espera un breve tiempo antes de volver a leer el estado del Ball Switch
}
