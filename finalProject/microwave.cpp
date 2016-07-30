#include "power.h"
#include "keypad.h"
#include "door.h"
#include "light.h"
#include "microwave.h"
#include <string>
#include <iostream>
#include <new>


using namespace std;

Microwave::Microwave(){};
Microwave::Microwave(string model, string maker, int serial, Keypad controls, Power power, Door door, Light light){
  modelName = model;
  manufacturer = maker;
  serialNumber = serial;
  keyLayout = controls;
  powerSettings = power;
  doorState = door;
  lightState = light;
  isOn = false;
};
Microwave::~Microwave(){
  cout << "Deleting Microwave Object" << endl;
};
const string Microwave::getModelName(){
  return modelName;
};
const string Microwave::getManufacturer(){
  return manufacturer;
};
const int Microwave::getSerialNumber(){
  return serialNumber;
};
const Keypad Microwave::getKeyLayout(){
  return keyLayout;
};
const Power Microwave::getPowerSettings(){
  return powerSettings;
};
const bool Microwave::getDoorState(){
  return doorState.getIsOpen();
};
const bool Microwave::getLightState(){
  return lightState.getIsIlluminated();
};
const bool Microwave::getIsOn(){
  return isOn;
};
void Microwave::setModelName(string model){
  modelName = model;
};
void Microwave::setManufacturer(string maker){
  manufacturer = maker;
};
void Microwave::setSerialNumber(int serial){
  serialNumber = serial;
};
void Microwave::setKeyLayout(Keypad controls){
  keyLayout = controls;
};
void Microwave::setPowerSettings(Power power){
  powerSettings = power;
};
void Microwave::setDoorState(bool val){
  doorState.setIsOpen(val);
};
void Microwave::setLightState(bool val){
  lightState.setIsIlluminated(val);
};
void Microwave::setIsOn(bool value){
  isOn = value;
};
