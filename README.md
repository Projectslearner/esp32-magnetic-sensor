# ESP32 Magnetic Sensor

## Project Overview
The ESP32 Magnetic Sensor project demonstrates how to interface an analog magnetic sensor with an ESP32 microcontroller. Magnetic sensors are used to detect magnetic fields and provide an analog output proportional to the strength of the magnetic field detected. This project reads the analog output from the sensor and prints the corresponding magnetic field strength to the Serial Monitor.

## Components Needed
- ESP32 Microcontroller
- Analog Magnetic Sensor
- Jumper Wires
- Breadboard
- Serial Monitor (for debugging)

## Block Diagram
*(If available, provide a visual representation of your circuit setup)*

## Circuit Setup
1. **Connecting Magnetic Sensor to ESP32:**
   - **Sensor Pin:** Connects to an analog GPIO pin on the ESP32 (specified as pin 34 in your code).
   - **VCC and GND:** Connect to the appropriate power (3.3V or 5V) and ground pins.

## Instructions
1. **Setup:**
   - Initialize serial communication in the `setup()` function with `Serial.begin(9600)` for debugging purposes.

2. **Operation:**
   - In the `loop()` function:
     - Read the analog value from the magnetic sensor using `analogRead(sensorPin)`.
     - Print the raw sensor value to the Serial Monitor.
     - Based on the sensor value, print a comment indicating the strength of the magnetic field detected:
       - If the sensor value is less than 100, print "// Low magnetic field detected".
       - If the sensor value is between 100 and 499, print "// Medium magnetic field detected".
       - If the sensor value is 500 or higher, print "// Strong magnetic field detected".

3. **Considerations:**
   - **Sensor Sensitivity:** Position the sensor appropriately to detect magnetic fields effectively.
   - **Power Supply:** Ensure stable power supply to the ESP32 and the magnetic sensor for reliable operation.
   - **Serial Monitoring:** Use the Serial Monitor to observe sensor readings and debug any issues.

## Applications
- **Magnetic Field Detection:** Detect and measure magnetic fields for various applications including proximity sensing, positioning, and object detection.
- **Security Systems:** Integrate with security alarms to detect magnetic disturbances.
- **Industrial Applications:** Monitor machinery for abnormal magnetic field changes.

## Notes
- **Analog Output:** The magnetic sensor provides an analog output that varies based on the strength of the magnetic field.
- **Thresholds:** Adjust threshold values (`<100`, `<500`, etc.) based on the sensor's sensitivity and the desired detection criteria.

---

## Useful Links
🌐 [ProjectsLearner - ESP32 Magnetic Sensor](https://projectslearner.com/learn/esp32-magnetic-sensor)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner