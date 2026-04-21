# 🌿 BreatheEase

## 📌 Overview

BreatheEase is a smart Arduino-based device designed to guide users through structured breathing exercises using the **4-7-8 technique**. The system helps reduce stress and improve breathing patterns through simple visual and audio cues.

---

## 🎯 Objective

The goal of this project is to provide an easy-to-use, distraction-free breathing assistant that helps users practice relaxation techniques without needing to manually count time or focus intensely.

---

## ⚙️ How It Works

The device guides the user through a breathing session using three phases:

* 🟢 **Inhale (4 seconds)**

  * Green LED turns ON
  * Buzzer emits a high tone
  * LCD displays "Inhale"

* 🟡 **Hold (7 seconds)**

  * Yellow LED turns ON
  * LCD displays "Hold"

* 🔴 **Exhale (8 seconds)**

  * Red LED turns ON
  * Buzzer emits a lower tone
  * LCD displays "Exhale"

⏱️ The full session runs for **1 minute**, repeating the breathing cycle continuously.

---

## 🛠️ Components Used

* Arduino Board
* LCD (16x2 with I2C)
* Green LED
* Yellow LED
* Red LED
* Buzzer
* Resistors
* Breadboard
* Jumper wires

---

## 🔌 Circuit Connections

* Green LED → Pin 4
* Yellow LED → Pin 3
* Red LED → Pin 2
* Buzzer → Pin 5
* LCD → I2C (0x27)

<img width="1817" height="807" alt="6" src="https://github.com/user-attachments/assets/ee777255-1531-42a7-9d65-4c875bd7891f" />

---

## 💻 Code Description

The system is programmed using Arduino C++ and works as follows:

* Initializes LCD and output components
* Starts a timed session using `millis()`
* Controls LEDs and buzzer for each breathing phase
* Displays instructions on LCD
* Repeats the breathing cycle until the session ends

---

## 📸 Demo
<img width="1280" height="1706" alt="1" src="https://github.com/user-attachments/assets/076649e3-62da-4afa-a494-6743a4deb795" />

<img width="1280" height="2275" alt="2" src="https://github.com/user-attachments/assets/c376db72-8e54-4a15-9262-547b859dba07" />

<img width="944" height="1686" alt="3" src="https://github.com/user-attachments/assets/91abbd45-47b0-4058-8718-6233bdad7f13" />

<img width="1280" height="2275" alt="4" src="https://github.com/user-attachments/assets/faa75907-8220-4900-9954-907d6c50353b" />

<img width="1242" height="2208" alt="5" src="https://github.com/user-attachments/assets/aa190b05-a21d-4228-9067-fe9dc98524ab" />



---

## 👩‍💻 Team Members

This project was developed as a team effort:

* maysan alattar – Arduino programming & breathing logic
* Samar Uons  – Hardware connections
* Danah Alanazi  – Circuit setup
* Reema Almuzaini  – Testing
* Renad Alfairouz – Documentation

---

## 🚀 Future Improvements

* Mobile application integration
* Bluetooth connectivity
* Customizable breathing durations
* Progress tracking

---

## 💡 Conclusion

BreatheEase demonstrates how simple hardware components can be combined to create an effective wellness tool that supports mental health and relaxation.

---
