# 🔒 Home Security System using Arduino UNO

## 📌 Project Overview
This project simulates a basic **home security system** using an **Arduino UNO**, a **PIR motion sensor**, a **4x4 keypad**, a **buzzer**, and an **LED**. The system detects motion and triggers an alarm unless the correct keypad code is entered to disarm it.

---

## 🎯 Features

- ✅ Motion detection via PIR sensor
- ✅ Alarm system (LED + Buzzer) when motion is detected
- ✅ 4-digit keypad lock to disarm the alarm
- ✅ Modular code with clean separation into multiple files

---

## 📦 Components Used

| Component        | Quantity |
|------------------|----------|
| Arduino UNO       | 1        |
| PIR Motion Sensor | 1        |
| 4x4 Keypad        | 1        |
| Piezo Buzzer      | 1        |
| LED (Red)         | 1        |
| 220Ω Resistor     | 1        |
| Breadboard        | 1        |
| Jumper Wires      | ~10      |

---

## 🖥️ Code Structure

The project is divided into **three files**:

### `main.ino`
- Handles system logic: motion detection, alarm activation, and code checking.

### `keypad_handler.h`
- Manages keypad input and code buffering.

### `alarm_handler.h`
- Contains functions to turn the alarm (LED and buzzer) on or off.

---

## 🧠 Default Security Code

The default 4-digit disarm code is: `1234`  
(You can change it in `main.ino` if desired.)

---

## 🧪 Wiring Overview

| Component        | Arduino Pin |
|------------------|--------------|
| PIR Sensor OUT    | D2           |
| Keypad Rows       | D6–D9        |
| Keypad Columns    | D3–D5, D10   |
| LED Anode (+)     | D11 (with 220Ω resistor to GND) |
| Buzzer (+)        | D12          |

> **GND & VCC connections**:
- PIR sensor VCC → 5V, GND → GND
- Buzzer and LED cathodes → GND
- Keypad has no dedicated VCC

---

## 🔧 Setup Instructions (Tinkercad or Real Hardware)

1. Open Tinkercad or use a real Arduino UNO setup.
2. Build the circuit as per the wiring diagram.
3. Open the Arduino IDE.
4. Create three files:
   - `main.ino`
   - `keypad_handler.h`
   - `alarm_handler.h`
5. Paste the appropriate code into each file.
6. Upload to Arduino or run the Tinkercad simulation.
7. Try entering the correct and incorrect codes to see system behavior.

---

## 🧰 Required Arduino Libraries

- [`Keypad`](https://www.arduino.cc/reference/en/libraries/keypad/)  
  You can install it via **Arduino Library Manager**.

---

## 🛡️ Security Behavior

| Condition                     | System Response         |
|------------------------------|--------------------------|
| Motion detected              | Alarm triggered (LED & Buzzer ON) |
| Correct 4-digit code entered | Alarm disarmed           |
| Incorrect code               | Alarm continues          |
| No code entered              | Alarm continues          |

---

## 📸 Visual Representation

Refer to the included `Tinkercad_circuit.png` file or simulation image for exact wiring layout.

---

## ✅ Future Improvements (Ideas)

- Add an LCD screen to show system status
- Use EEPROM to store the passcode persistently
- Add a timeout lock after multiple failed attempts
- Use an RTC module to enable time-based arming/disarming
- Upgrade to ESP32 for IoT features (e.g., alert via email or app)

---

## 📄 License

This project is open-source and intended for educational purposes. Modify and reuse freely.

---

## 🤝 Credits

Developed using Arduino UNO, Tinkercad Simulator, and standard electronic components.
