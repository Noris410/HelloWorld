#include <Arduino.h>

//I Noris Singa, 000812720 certify that this material is my original work. No other person's work has been 
//used without due acknowledgement. I have not made my work available to anyone else.
unsigned long runningTime;
void setup() {
  // put your setup code here, to run once:

  //start the USB Serial monitor port
  Serial.begin(115200);
  //print some text to the USB port
  Serial.println("\n\n Noris Singa, 000812720");
  Serial.println("\n Hello, World!");
  //ESP.getChipId()
  Serial.print("\nThe ESP8266 Chip ID:");
  Serial.println( ESP.getChipId());
  Serial.print("The Flash Chip ID:");
  Serial.println( ESP.getFlashChipId());

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Time: ");
  runningTime = millis();
  Serial.println(runningTime); 
  delay(2000);      
}