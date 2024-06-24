/*
    Project name: ESP32 Magnetic Sensor
    Modified Date: 24-06-2024
    Code by: Projectslearner
    Website: https://projectslearner.com/learn/esp32-magnetic-sensor
*/

const int sensorPin = 34; // Analog pin connected to the magnetic sensor
int sensorValue = 0;      // Variable to store the sensor value

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the analog value from the magnetic sensor
  sensorValue = analogRead(sensorPin);

  // Print the sensor value to Serial Monitor
  Serial.print("Magnetic Sensor Value: ");
  Serial.println(sensorValue);

  // Add a comment based on the sensor value
  if (sensorValue < 100) {
    Serial.println("// Low magnetic field detected");
  } else if (sensorValue < 500) {
    Serial.println("// Medium magnetic field detected");
  } else {
    Serial.println("// Strong magnetic field detected");
  }

  delay(1000); // Add a delay before the next reading
}
