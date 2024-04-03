#include <Arduino.h>

void setup() {
    // Initialization LED GPIO Pin
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    // put your main code here, to run repeatedly:
    // LED blink forever.
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);
    delay(500);
}
