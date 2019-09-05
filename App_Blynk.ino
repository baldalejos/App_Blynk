// Please be sure to select the right ESP32 module
 //in the Tools -> Board menu!

  //Change WiFi ssid, pass, and Blynk auth token to run :)
 // Feel free to apply it to any other example. It's simple!
// *************************************************************/

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial


#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "aquimetemoseltokenquenosden";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "vodafonePericoeldelospalotes";
char pass[] = "lamasfinaysegura";

void setup()
{
  // Debug console
  Serial.begin(115200);

  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
