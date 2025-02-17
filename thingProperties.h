// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char DEVICE_LOGIN_NAME[]  = "b752a224-9575-44e3-9e09-085e155df003";

const char SSID[]               = SECRET_SSID;    // Network SSID (name)
const char PASS[]               = SECRET_OPTIONAL_PASS;    // Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[]  = SECRET_DEVICE_KEY;    // Secret device password

void onMessageChange();
void onTemperatureChange();
void onAirquailtyChange();
void onHumidityChange();

String message;
CloudTemperatureSensor temperature;
CloudPercentage airquailty;
CloudPercentage humidity;

void initProperties(){

  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.addProperty(message, READWRITE, ON_CHANGE, onMessageChange);
  ArduinoCloud.addProperty(temperature, READWRITE, ON_CHANGE, onTemperatureChange);
  ArduinoCloud.addProperty(airquailty, READWRITE, ON_CHANGE, onAirquailtyChange);
  ArduinoCloud.addProperty(humidity, READWRITE, ON_CHANGE, onHumidityChange);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
