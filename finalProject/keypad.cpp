#include <vector>
#include <iostream>
#include <new>
#include "control.h"
#include "clock.h"
#include "time.h"
#include "power.h"
#include "keypad.h"


using namespace std;

Keypad::Keypad(){};
Keypad::Keypad(vector<Control> buttons, Clock time, Power power){
  controls = buttons;
  timeDisplay = time;
  powerSettings = power;
};
Keypad::~Keypad(){
  cout << "Deleting Keypad Object" << endl;
};
const vector<Control> Keypad::getControls(){
  return controls;
};
const Clock Keypad::getTimeDisplay(){
  return timeDisplay;
};
const Power Keypad::getPowerSettings(){
  return powerSettings;
};
const int Keypad::controlSelected(){
  // need to implement this still
  return 1;
};
void Keypad::setControls(vector<Control> buttons){
  controls = buttons;
};
void Keypad::setTimeDisplay(Clock time){
  timeDisplay = time;
};
void Keypad::setPowerSettings(Power power){
  powerSettings = power;
};
