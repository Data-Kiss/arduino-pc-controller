const int btnSpace = 2;
const int btnSleep = 3;
const int btnShutdown = 4;
const int tx = 1;

int btnSpaceState = 0; 
int btnSleepState = 0;
int btnShutdownState = 0;

void setup() {
  // Initialize the button pins as an inputs.
  pinMode(btnSpace, INPUT);
  pinMode(btnSleep, INPUT);
  pinMode(btnShutdown, INPUT);
  pinMode(tx, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  // Read the state of the buttons
  btnSpaceState = digitalRead(btnSpace);
  btnSleepState = digitalRead(btnSleep);
  btnShutdownState = digitalRead(btnShutdown);

  // If a button is pushed, the state is HIGH.
  if (btnSpaceState == HIGH) {
    // Send the button that was pushed to the serial port.
    Serial.println("Spacebar");
    digitalWrite(tx, HIGH);
    delay(1000);
  }

  if (btnSleepState == HIGH) {
    // Send the button that was pushed to the serial port.
    Serial.println("Sleep");
    digitalWrite(tx, HIGH);
    delay(1000);
  }

  if (btnShutdownState == HIGH) {
    // Send the button that was pushed to the serial port.
    Serial.println("Shutdown");
    digitalWrite(tx, HIGH);
    delay(1000);
  }
}
