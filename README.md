# NodeMCU Learning Journey

## About
This repository serves as a technical playground for mastering the NodeMCU (ESP8266) microcontroller. It tracks a progression from basic WiFi connectivity to more complex implementations, such as an internet-radio style WiFi speaker and a cloud-connected IoT device. The project demonstrates the versatility of the ESP8266 in handling network protocols, audio streaming, and remote device management.

## Technical Details
The codebase is divided into three primary implementation levels:

1. WiFi Connectivity: A fundamental implementation of the ESP8266 WiFi stack to establish a connection and retrieve a local IP address.
2. WiFi Audio Streaming: A system that streams MP3 data over HTTP. It uses a Python Flask backend to serve the audio file and the ESP8266Audio library on the NodeMCU to decode the stream. The audio is output via the RX pin using I2S without a hardware DAC (Software PWM), which requires the CPU frequency to be set to 160MHz for stable playback.
3. IoT Integration: Implementation of the Blynk Edgent framework, allowing for remote control of GPIO pins (specifically D7) via the Blynk cloud and mobile app, incorporating support for OTA updates and WiFi configuration.

## Execution

### Prerequisites
- Arduino IDE with ESP8266 board support installed.
- Python 3.x (for the WiFi Speaker backend).
- Blynk Account and App (for the IoT project).

### Basic Connectivity & Blynk
1. Open the respective .ino file in the Arduino IDE.
2. For the Blynk project, update the BLYNK_TEMPLATE_ID and BLYNK_DEVICE_NAME with your own credentials.
3. Select "NodeMCU 1.0 (ESP-12E Module)" as the board.
4. Upload the code and open the Serial Monitor at 115200 baud.

### WiFi Speaker
1. Install the ESP8266Audio library (version 1.9.4) in the Arduino IDE.
2. Set the CPU Frequency to 160MHz in the Tools menu.
3. Update the ssid and password in WiFi_Speaker.ino.
4. Update the URL in the .ino file to match the IP of your host machine.
5. On the host machine, install Flask (pip install flask), place an MP3 file named "Galti Se Mistake.mp3" in the same directory as index.py, and run the server:
   python index.py
6. Upload the code and connect a speaker to the RX pin.