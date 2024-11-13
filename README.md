# FSR Analog Value Reading with ESP32

This repository contains code for reading and debouncing analog values from a Force Sensitive Resistor (FSR) using an ESP32 microcontroller. The FSR values are printed in the Serial Monitor and demonstrate simple and debounced analog reading methods.

## Hardware Setup

- **ESP32**: Used for analog readings and processing.
- **FSR (Force Sensitive Resistor)**: Connected to an analog pin on the ESP32 (defined as `FSR_PIN`).

## Code Explanation

This repository includes two primary methods for reading values from the FSR:

1. **Simple Analog Reading**: Directly reads the analog value from the FSR and outputs it to the Serial Monitor.
2. **Debounced Analog Reading**: Reads multiple analog values, averages them to produce a stable reading, and outputs the debounced value to the Serial Monitor.

### Code Snippet

1. **Simple Analog Reading**
   ```cpp
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
