# IoT-project-2
**Roboninja IoT Dashboard – Assignment**

📌 **Overview:**
This project is part of the IoT homework assignment. The goal was to extend the HTML dashboard made in class and integrate it with a real sensor using a Wemos D1 Mini.

**The project demonstrates:**
- Real-time sensor data monitoring
- Remote LED control from the dashboard

**Features:**
- Sensor Integration: Reads data from a DHT11 humidity & temperature sensor.
- Dashboard: A clean HTML interface to display live humidity values.
- LED Control: Toggle button to switch the LED ON/OFF directly from the dashboard.
- Auto Updates: Humidity readings and LED states refresh every 10 seconds.

**How It Works:**
- Wemos Mini Setup
- Connect DHT11 sensor → D3 pin.
- Connect LED → D1 pin.
- Flash the Arduino sketch (dht11.ino) to the board.
- Board connects to Wi-Fi and pushes data to Roboninja IoT server

**Dashboard:**
- Open index.html in a browser.
- Replace UID in the script with your own (example: "MU08").
- Humidity values update automatically.
- LED button toggles LED state via IoT server.

🔧 **Hardware Requirements:**
- Wemos D1 Mini
- DHT11/DHT22 sensor
- 1 × LED
- Jumper wires + breadboard

**Author:
Mohammad Uthman**
