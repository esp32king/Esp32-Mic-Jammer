# ESP32 Mic Jammer 🎤🔇

📌 Overview

The ESP32 Mic Jammer is a project that uses an ESP32 microcontroller to generate ultrasonic noise signals. These signals interfere with nearby microphones (mobile phones, laptops, smart devices), making it harder for them to record audio clearly.

⚠️ This project is intended only for educational and research purposes. Do not use it for illegal activities.


---

✨ Features

Low-cost ESP32-based hardware

Ultrasonic frequency generation (18kHz – 24kHz)

Works with piezo buzzers or ultrasonic transducers

Portable and battery powered

Can be controlled via a hardware switch or web interface



---

🛠️ Hardware Requirements

ESP32 Development Board

Piezo buzzer / ultrasonic transducer (18kHz – 24kHz range)

Power supply (USB or Li-ion battery)

(Optional) Audio amplifier for stronger output



---

💻 Software Requirements

Arduino IDE or PlatformIO

ESP32 board support package

Required libraries:

WiFi.h

WebServer.h (if using web interface control)




---

🚀 Setup & Upload

1. Install the ESP32 board package in Arduino IDE

Go to File → Preferences → Additional Board Manager URLs 
You can get the copy button on GitHub by putting the URL inside a fenced code block.
Paste this Markdown into your README:

### ESP32 Boards Manager URL

`https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json`

On GitHub, this will render as plain text with a **copy** icon on the right of the code block. 




2. Connect your ESP32 board to the computer


3. Open the source code and select the correct board and port


4. Upload the code to the ESP32


5. Connect the piezo buzzer or ultrasonic transducer to the defined GPIO pin (can be configured in code)


6. Power on → The jammer will start generating ultrasonic noise




---

⚠️ Disclaimer

This project is provided for educational purposes only. The author is not responsible for any misuse, damages, or legal issues caused by using this project.

