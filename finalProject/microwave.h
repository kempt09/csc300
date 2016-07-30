#ifndef MICROWAVE_H
#define MICROWAVE_H

#include "power.h"
#include "keypad.h"
#include "door.h"
#include "light.h"
#include <string>


using namespace std;

class Microwave {

public:

  Microwave();
  Microwave(string model, string maker, int serial, Keypad controls, Power power, Door door, Light light);
  ~Microwave();
  const string getModelName();
  const string getManufacturer();
  const int getSerialNumber();
  const Keypad getKeyLayout();
  const Power getPowerSettings();
  const bool getDoorState();
  const bool getLightState();
  const bool getIsOn();
  void setModelName(string model);
  void setManufacturer(string maker);
  void setSerialNumber(int serial);
  void setKeyLayout(Keypad controls);
  void setPowerSettings(Power power);
  void setDoorState(bool val);
  void setLightState(bool val);
  void setIsOn(bool value);

private:
  string modelName;
  string manufacturer;
  int serialNumber;
  Keypad keyLayout;
  Power powerSettings;
  Door doorState;
  Light lightState;
  bool isOn;


};

#endif
