#include <Nextion.h>

// Initialize the Nextion display
Nextion myNextion(Serial);

// Define the buttons on the Nextion display
#define BUTTON_1 "b0"  // Button 1 ID
#define BUTTON_2 "b1"  // Button 2 ID
#define BUTTON_3 "b2"  // Button 3 ID

void setup() {
  Serial.begin(9600);   // Start the Serial communication
  myNextion.begin(9600); // Initialize Nextion
  myNextion.sendCommand("page 0"); // Set to the first page of the Nextion display
}

void loop() {
  // Check for incoming data from the Nextion
  myNextion.listen();

  // Handle button presses
  if (myNextion.getTouchValue() == 0) {
    if (myNextion.getLastTouch() == BUTTON_1) {
      // Action for Button 1
      Serial.println("Button 1 Pressed");
      // Add your code for Button 1 action here
    } 
    else if (myNextion.getLastTouch() == BUTTON_2) {
      // Action for Button 2
      Serial.println("Button 2 Pressed");
      // Add your code for Button 2 action here
    } 
    else if (myNextion.getLastTouch() == BUTTON_3) {
      // Action for Button 3
      Serial.println("Button 3 Pressed");
      // Add your code for Button 3 action here
    }
  }
}
