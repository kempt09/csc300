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
const Door Microwave::getDoorState(){
  return doorState;
};
const Light Microwave::getLightState(){
  return lightState;
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
void Microwave::setDoorState(Door door){
  if(door.getIsOpen()){
    door.setIsOpen(false);
  } else {
    door.setIsOpen(true);
  }
  doorState = door;
};
void Microwave::setLightState(Light light){
  if(light.getIsIlluminated()){
    light.setIsIlluminated(false);
  } else {
    light.setIsIlluminated(true);
  }
  lightState = light;
};
void Microwave::setIsOn(bool value){
  isOn = value;
};
