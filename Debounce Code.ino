#define FSR_PIN 34 // Define the analog pin connected to the FSR
#define NUM_READINGS 10 // Number of readings to average

void setup() {
  Serial.begin(115200); // Start serial communication at 115200 baud rate
  analogReadResolution(12); // Set the resolution to 12-bit for ESP32 (0-4095)
}

void loop() {
  int total = 0;

  // Take multiple readings and add them together
  for (int i = 0; i < NUM_READINGS; i++) {
    total += analogRead(FSR_PIN);
    delay(10); // Small delay between readings
  }

  // Calculate the average reading
  int fsrValue = total / NUM_READINGS;

  // Print the debounced reading
  Serial.print("Debounced FSR Value: ");
  Serial.println(fsrValue);

  delay(500); // Delay before the next set of readings
}
