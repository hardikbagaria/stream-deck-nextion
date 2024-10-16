# Stream Deck with Nextion Display

This project creates a simple stream deck using the NX4024T032 Nextion 3.2 inch touch display and an Arduino Pro Micro. It allows you to control various actions by pressing buttons on the Nextion display.

## Components Required

- NX4024T032 – Nextion 3.2 inch Basic Series HMI Touch Display
- Arduino Pro Micro
- USB Cable
- Jumper Wires
- Power Supply (if needed)

## Wiring

- Connect the Nextion display to the Arduino Pro Micro:
  - Nextion TX to Arduino RX (Pin 0)
  - Nextion RX to Arduino TX (Pin 1)
  - Nextion GND to Arduino GND
  - Nextion VCC to Arduino 5V

## Software Setup

1. **Arduino IDE:**
   - Open the `stream_deck.ino` file in the Arduino IDE.
   - Ensure you have the [Nextion library](https://github.com/itead/ITEADLIB_Arduino_Nextion) installed.
   - Upload the code to your Arduino Pro Micro.

2. **Nextion Editor:**
   - Open the `StreamDeck.hmi` file in the Nextion Editor.
   - Upload the configuration to the Nextion display.

## Usage

- Once the hardware is connected and the software is uploaded, power on the Arduino.
- The Nextion display will show three buttons.
- Pressing a button will trigger a corresponding action in the Arduino code (as defined in the `loop()` function).

## Customization

- You can modify the button actions in the `loop()` function of the Arduino code to perform different tasks as needed.
