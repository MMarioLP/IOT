int BUTTON_PIN =21; // GIOP21 pin connected to button

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(115200);
  // initialize the pushbutton pin as an pull-up input
  // the pull-up input pin will be HIGH when the switch is open and LOW when the switch is closed.
  pinMode(BUTTON_PIN, INPUT);
}

void loop() {
  // read the state of the switch/button:
  int buttonState = digitalRead(BUTTON_PIN);

  // print out the button's state
  delay(1000);
  Serial.println(buttonState);
}
