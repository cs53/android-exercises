// Certainly! Here's a simple Arduino program that connects a push button. This program will read the state of a push button and print its status (pressed or not pressed) to the Serial Monitor.

// Define the pin for the push button
const int buttonPin = 2; // You can use any digital pin

void setup()
{
    // Initialize Serial communication
    Serial.begin(9600);

    // Set the button pin as an input with internal pull-up resistor
    pinMode(buttonPin, INPUT_PULLUP);
}

void loop()
{
    // Read the state of the push button
    int buttonState = digitalRead(buttonPin);

    // Check if the button is pressed (LOW)
    if (buttonState == LOW)
    {
        Serial.println("Button is pressed!");
    }
    else
    {
        Serial.println("Button is not pressed.");
    }

    // Add a small delay to debounce the button (optional)
    delay(100);
}
