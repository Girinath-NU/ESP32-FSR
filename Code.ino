#define FSR_PIN 34 // Define the analog pin connected to the FSR

void setup() {
  Serial.begin(115200); // Start serial communication at 115200 baud rate
  analogReadResolution(12); // Set the resolution to 12-bit for ESP32 (0-4095)
}

void loop() {
  int fsrValue = analogRead(FSR_PIN); // Read the analog value from the FSR
  Serial.print("FSR Analog Value: ");
  Serial.println(fsrValue); // Print the raw analog value

  delay(500); // Delay for readability
}
