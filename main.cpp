#include <WiFi.h>

// ╔══════════════╗
// ║ LED Settings ║
// ╚══════════════╝
const int ledPinRed = 14;
const int ledPinGreen = 15;
const int ledPinBlue = 16; // Choose pin 2 for the board's build in blue LED on the ESP32 WROOM32

// ╔════════════════════════════╗
// ║ Server & Internet Settings ║
// ╚════════════════════════════╝
const char* ssid = "yourssidhere";
const char* password = "yourpasswordhere";



void setup() {
    Serial.begin(115200);
      pinMode(ledPinRed, OUTPUT); // Sets the LED pin mode
      pinMode(ledPinGreen, OUTPUT); // Sets the LED pin mode
      pinMode(ledPinBlue, OUTPUT); // Sets the LED pin mode

    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED) {
        delay(1000);
        Serial.println("Connecting to WiFi...");
    }
    Serial.println("Connected to WiFi");
}


void loop() {
      //Light show once WiFi is connected
  const int onTime = 10;
  const int offTime = 1500;
        digitalWrite(ledPinGreen, HIGH);
        digitalWrite(ledPinRed, HIGH);
        delay(offTime);
        digitalWrite(ledPinGreen, LOW);
        digitalWrite(ledPinRed, LOW);
        delay(onTime);

}
