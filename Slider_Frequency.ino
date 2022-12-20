/*
    Based on Neil Kolban example for IDF: https://github.com/nkolban/esp32-snippets/blob/master/cpp_utils/tests/BLE%20Tests/SampleWrite.cpp
    Ported to Arduino ESP32 by Evandro Copercini
    Modified by Jared Malone for ECE697SD
*/

#include <BLEDevice.h>
#include <BLEUtils.h>
#include <BLEServer.h>
#include <BLE2902.h>
#include <string>

// See the following for generating UUIDs:
// https://www.uuidgenerator.net/
// GATT Chart specifics
// https://www.bluetooth.com/specifications/gatt/viewer?attributeXmlFile=org.bluetooth.descriptor.gatt.client_characteristic_configuration.xml

#define SERVICE_UUID        "4fafc201-1fb5-459e-8fcc-c5c9c331914b"
#define CHARACTERISTIC_UUID "beb5483e-36e1-4688-b7f5-ea07361b26a8"

BLEServer* pServer = NULL;
BLECharacteristic* pCharacteristic = NULL;
bool deviceConnected = false;
uint32_t value = 0;

int ledPin = 15;
int delayVal = 500; 
int freq = 15;

class MyServerCallbacks: public BLEServerCallbacks {    // Handles connection checking
    void onConnect(BLEServer* pServer) {
      deviceConnected = true;
    };

    void onDisconnect(BLEServer* pServer) {
      deviceConnected = false;
    }
};

class MyCallbacks: public BLECharacteristicCallbacks    // Handles reading from app
{
  void onWrite(BLECharacteristic *pCharacteristic)
  {
    std::string value = pCharacteristic->getValue();
    sscanf(value.c_str(), "%d", &freq);   // Turn the string into a int 
    delayVal = 500/freq;                  // 2*t*n = 1000, where t is the delay and n is the frequency
  }

  void onRead(BLECharacteristic *pCharacteristic)     // Handles writing to app
  {
    std::string sendFreq =  std::to_string(freq);
    pCharacteristic->setValue(sendFreq);
  }
};

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(115200);

  BLEDevice::init("MyESP32");                       // Can be named anything
  BLEServer *pServer = BLEDevice::createServer();

  BLEService *pService = pServer->createService(SERVICE_UUID);

  BLECharacteristic *pCharacteristic = pService->createCharacteristic(    // Create the BLE structure with reading and writing
                                         CHARACTERISTIC_UUID,
                                         BLECharacteristic::PROPERTY_READ |
                                         BLECharacteristic::PROPERTY_WRITE
                                       );

  pCharacteristic->setCallbacks(new MyCallbacks());   // Allow the devices to communicate the new value
  pServer->setCallbacks(new MyServerCallbacks());     // Allow the devices to communicate if they are connected for the "if(device==connected)" check

  pService->start();

  BLEAdvertising *pAdvertising = pServer->getAdvertising();
  pAdvertising->start();
}

void loop()
{
  if (deviceConnected)    // Will only start blinking if connected, and will stop when disconnected
  {
    digitalWrite(ledPin, HIGH);     
    delay(delayVal);      // Will initially be 1Hz
    digitalWrite(ledPin, LOW);
    delay(delayVal);
  }
}                
