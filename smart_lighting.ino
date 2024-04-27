// Pin connected to the LED
const int ledPin = 13;

// Variable to store incoming serial data
String serialData = "";

void setup() {
  // Initialize serial communication at 9600 bits per second
  Serial.begin(9600);

  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);

  // Initially turn off the LED
  digitalWrite(ledPin, LOW);
}

void loop() {
  // Check if data is available to read from serial port
  if (Serial.available() > 0) {
    // Read the incoming byte
    char receivedChar = Serial.read();

    // Check for newline character to determine end of command
    if (receivedChar == '\n') {
      // Check the command received
      if (serialData.equals("ON")) {
        // If the command is "ON", turn on the LED
        digitalWrite(ledPin, HIGH);
        Serial.println("LED is ON");
      } else if (serialData.equals("OFF")) {
        // If the command is "OFF", turn off the LED
        digitalWrite(ledPin, LOW);
        Serial.println("LED is OFF");
      } else {
        // If an unknown command is received, send an error message
        Serial.println("Invalid command");
      }

      // Clear the received data for the next command
      serialData = "";
    } else {
      // Append the received character to the command string
      serialData += receivedChar;
    }
  }

  // Add a small delay to reduce CPU usage
  delay(100);
}
