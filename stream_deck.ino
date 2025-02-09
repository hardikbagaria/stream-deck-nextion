#include <Keypad.h>
#include <HID-Project.h>

const byte ROWS = 4;
const byte COLS = 4;
char keys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = {9, 8, 7, 6};
byte colPins[COLS] = {5, 4, 3, 2}; 
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup() {
  Keyboard.begin();  // Initialize keyboard emulation
  Consumer.begin();  // Initialize media controls
  Serial.begin(9600);
  delay(1000);
}

void loop() {
  char key = keypad.getKey();

  if (key) {
    switch (key) {
      case '0':
        Consumer.write(MEDIA_PLAY_PAUSE);
        break;
      case '#':
        Consumer.write(MEDIA_PREVIOUS);
        break;
      case '*':
        Consumer.write(MEDIA_NEXT);
        break;
      case '1':
        Keyboard.press(KEY_F13);
        Keyboard.release(KEY_F13);
        break;
      case '2':
        Keyboard.press(KEY_F14);
        Keyboard.release(KEY_F14);
        break;
      case '3':
        Keyboard.press(KEY_F15);
        Keyboard.release(KEY_F15);
        break;
      case '4':
        Keyboard.press(KEY_F16);
        Keyboard.release(KEY_F16);
        break;
      case '5':
        Keyboard.press(KEY_F17);
        Keyboard.release(KEY_F17);
        break;
      case '6':
        Keyboard.press(KEY_F18);
        Keyboard.release(KEY_F18);
        break;
      case '7':
        Keyboard.press(KEY_F19);
        Keyboard.release(KEY_F19);
        break;
      case '8':
        Keyboard.press(KEY_F20);
        Keyboard.release(KEY_F20);
        break;
      case '9':
        Keyboard.press(KEY_F21);
        Keyboard.release(KEY_F21);
        break;
      case 'A':
        Serial.println("A");
        break;
      case 'B':
        Serial.println("B");
        break;
      case 'C':
        Serial.println("C");
        break;
      case 'D':
        Serial.println("D");
        break;
      default:
        Serial.println(key);
        break;
    }
  }
  delay(10);
}
