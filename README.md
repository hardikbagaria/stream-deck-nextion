# Stream Deck with 4x4 Matrix Keypad

This project creates a simple stream deck using a 4x4 matrix keypad and an Arduino Pro Micro. It allows you to control various actions by pressing physical keys on the keypad.

## Components Required

- 4x4 Matrix Keypad
- Arduino Pro Micro
- USB Cable
- Jumper Wires
- Power Supply (if needed)

## Wiring

- Connect the 4x4 matrix keypad to the Arduino Pro Micro:
  - Keypad Row Pins to Arduino Pins 2, 3, 4, 5
  - Keypad Column Pins to Arduino Pins 6, 7, 8, 9
  - Common GND connection

## Software Setup

1. **Arduino IDE:**
   - Open the `stream_deck.ino` file in the Arduino IDE.
   - Ensure you have the [Keypad library](https://playground.arduino.cc/Code/Keypad/) installed.
   - Upload the code to your Arduino Pro Micro.

## Usage

- Once the hardware is connected and the software is uploaded, power on the Arduino.
- Pressing a button on the 4x4 keypad will trigger a corresponding action in the Arduino code (as defined in the `loop()` function).

## Customization

- You can modify the button actions in the `loop()` function of the Arduino code to perform different tasks as needed.

