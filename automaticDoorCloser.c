#include <Servo.h>

Servo myServo;           // Create a servo object
int sensorPin = 12;      // Pin connected to the motion sensor output
int sensorValue = 0;     // Variable to store the sensor output

void setup() {
  pinMode(sensorPin, INPUT);  // Set the motion sensor pin as input
  myServo.attach(9);          // Attaches the servo on pin 9 to the servo object
  Serial.begin(9600);         // Start serial communication
}

void loop() {
  sensorValue = digitalRead(sensorPin); // Read the value from the motion sensor

  if (sensorValue == HIGH) {  // Check if the motion sensor detects motion
    Serial.println("Motion detected! Waiting 8 seconds...");
    delay(8000);              // Wait for 8 seconds before activating the servo

    Serial.println("Turning servo in one direction for 15 seconds.");
    myServo.write(180);       // Make servo turn in one direction
    delay(30000);             // Keep turning for 15 seconds

    Serial.println("Waiting 3 seconds...");
    myServo.write(90);        // Stop the servo
    delay(3000);              // Wait for 3 seconds

    Serial.println("Turning servo in the opposite direction for 15 seconds.");
    myServo.write(0);         // Make servo turn in the opposite direction
    delay(25000);             // Keep turning for 15 seconds

    myServo.write(90);        // Stop the servo
    Serial.println("Cycle complete. Servo stopped.");
  }

  delay(100); // Small delay to avoid overloading with read requests
}
