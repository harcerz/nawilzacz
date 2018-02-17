#include "WiFiHandler.h"
#include "EepromDataHandler.h"

#define LOCAL_UDP_PORT 1234;

EepromDataHandlerClass EepromWebConfigHandler;
WiFiHandlerClass WiFiHandler;

void setup() {
  Serial.begin(115200);

  EepromWebConfigHandler.init();
  EepromWebConfigHandler.readEepromWiFiParameters();
  WiFiHandler.init(EepromWebConfigHandler.getSsid(), EepromWebConfigHandler.getPassword());


}

void loop() {
  // put your main code here, to run repeatedly:

}
