# ESP32 Mic Jammer 🎤🔇

📌 Overview

The ESP32 Mic Jammer is a project that uses an ESP32/ESP8266 microcontroller to generate ultrasonic noise signals. These signals interfere with nearby microphones (mobile phones, laptops, smart devices), making it harder for them to record audio clearly.

⚠️ This project is intended only for educational and research purposes. Do not use it for illegal activities.


---

# ✨ Features

Low-cost ESP32-based hardware

Ultrasonic frequency generation (18kHz – 24kHz)

Works with piezo buzzers or ultrasonic transducers

Portable and battery powered

Can be controlled via a hardware switch or web interface



---

# 🛠️ Hardware Requirements

ESP32 Development Board

Piezo buzzer / ultrasonic transducer (18kHz – 24kHz range)

Power supply (USB or Li-ion battery)

(Optional) Audio amplifier for stronger output



---

# 💻 Software Requirements

Arduino IDE


---

# 🚀 Setup & Upload

1. Install the ESP32 board package in Arduino IDE

2. Connect your ESP32 board to the computer


3. Open the source code and select the correct board and port


4. Upload the code to the ESP32


5. Connect the piezo buzzer or ultrasonic transducer to the defined GPIO pin (can be configured in code)

# Diagram
Ultronic Transducer →  Esp32

 <br>  `pin 1`        →      pin 25 </br>
<br>   `pin 2`        →      pin VCC </br>
   
# 6. Power on → The jammer will start generating ultrasonic noise


<img src="https://raw.githubusercontent.com/esp32king/Esp32-Mic-Jammer/refs/heads/main/Files/17384736654022.jpg"></img>

---

# ⚠️ Disclaimer

This project is provided for educational purposes only. The author is not responsible for any misuse, damages, or legal issues caused by using this project.

# Icrease NOISE Using Amplifier Circuite
<a2> Diagram</a2>
<img src="https://raw.githubusercontent.com/esp32king/Esp32-Mic-Jammer/refs/heads/main/Files/Mic.jpg"></img>
 2nd Pic
 <img src="https://raw.githubusercontent.com/esp32king/Esp32-Mic-Jammer/refs/heads/main/Files/Mic2.jpg"></img>

# 🔋 POWER 
Increase Power For Best Response

 Give 5V + Add Connection
    5V +  ➡  Esp32 PIN VCC/VIN/3V3
    5v -  ➡  ESP32 PIN GND


# 👤 Creator info

  created by Krishna Rajput UP61

# Increase Range 

  increase range through add more Ultrasonic Transducer 
