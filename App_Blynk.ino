// Descargar en movil la App Blynk, registrate en cero coma y consigue tu Aut Token
// Por favor eseguraros de elegir el modulo esp32 correcto
 //Fabrica con los creditos gratuitos que te dan (o compra) un dashboard para tu proyecto

  //Pon el nombre de tu wifi y la contraseña en este codigo
 // 
// *************************************************************/


#define BLYNK_PRINT Serial


#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

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
