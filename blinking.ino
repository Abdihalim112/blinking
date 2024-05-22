// Define the LED pin. 
// For most Arduino boards, the onboard LED is connected to pin 13.
#define LED_PIN 2

void setup() {
  // Initialize the digital pin as an output.
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Turn the LED on (HIGH is the voltage level).
  digitalWrite(LED_PIN, HIGH);
  // Wait for 1 second.
  delay(1000);
  // Turn the LED off by making the voltage LOW.
  digitalWrite(LED_PIN, LOW);
  // Wait for 1 second.
  delay(1000);
}
