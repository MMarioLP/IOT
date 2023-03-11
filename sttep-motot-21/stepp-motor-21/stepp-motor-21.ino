int ldrPin = 35; // Pin analógico donde está conectado el LDR
int threshold = 500; // Umbral de luz para el bloqueo
bool blocked = false; // Variable para almacenar si está bloqueado o no

#include <Stepper.h>

const int stepsPerRevolution = 200;  

Stepper myStepper(stepsPerRevolution, 5, 15,4,21 );


void setup() {
  pinMode(ldrPin, INPUT); // Establece el pin del LDR como entrada
  Serial.begin(115200); // Inicializa la comunicación serial para imprimir el valor del LDR
  myStepper.setSpeed(50);
}

void loop() {
  int ldrValue = analogRead(ldrPin); // Lee el valor analógico del LDR
  
  if (ldrValue < threshold && !blocked) { // Si el valor del LDR es menor que el umbral y no está bloqueado
    Serial.println("Bloqueado"); // Imprime que está bloqueado
    blocked = true; // Establece la variable como bloqueada
     myStepper.step(stepsPerRevolution);

  } else if (ldrValue >= threshold && blocked) { // Si el valor del LDR es mayor o igual que el umbral y está bloqueado
    Serial.println("Desbloqueado"); // Imprime que está desbloqueado
    blocked = false; // Establece la variable como desbloqueada
     myStepper.step(-stepsPerRevolution);
  }

}