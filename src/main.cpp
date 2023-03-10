#include "wifi.h"
#include "wificred.h"

void setup() {
  // put your setup code here, to run once:
  /*create a wificred.h file like this:
   * const char* ssid = "ssid";
   * const char* password = "password";
   */
  WiFi.mode(WIFI_STA);
    WiFi.begin(ssid, password);

    Serial.begin(115200);

    // Wait for connection
    while (WiFi.status() != WL_CONNECTED) {
      delay(500);
      Serial.print(".");
    }
    Serial.println("");
    Serial.print("Connected to ");
    Serial.println(ssid);
    Serial.print("IP address:: ");
    Serial.println(WiFi.localIP());

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(15, HIGH);
  delay(500);
  digitalWrite(15, LOW);
  delay(500);

}