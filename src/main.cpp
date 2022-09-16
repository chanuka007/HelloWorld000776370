#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:

  //start the USB serial monitor port 
  Serial.begin(115200);
  //print name student id
    Serial.println("\n\nSadeva Karunanayaka, 000776370");
    //print chip ID
    
  Serial.println("\nESP8266 Chip ID: ");
  Serial.print(ESP.getChipId());
  //Print flash chip ID
  Serial.println("\nFlash Chip ID: ");
  Serial.print(ESP.getFlashChipId());
}

void loop() {

  //every 2 second print the number of milliseconds since the device started
  delay(2000);
    Serial.println("\nMilliseconds since D1 Mini was started: " );
    Serial.print(millis());
  
}