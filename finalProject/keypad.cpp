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
Keypad::~Keypad(){};
const vector<Control> Keypad::getControls(){
  return controls;
};
const Clock Keypad::getTimeDisplay(){
  return timeDisplay;
};
const Power Keypad::getPowerSettings(){
  return powerSettings;
};
const int Keypad::controlSelected(int index){
  for(int i = 0; i < controls.size(); i++){
    if(controls[i].getValue() == index){
      return controls[i].getValue();
    }
  }
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
void Keypad::printControls(){
  cout << "0 " << "1 " << "2 " << endl;
  cout << "3 " << "4 " << "5 " << endl;
  cout << "6 " << "7 " << "8 " << endl;
  cout << "9 " << "10: Cancel " << "11: On " << endl;
  cout << "12: Off " << "13: Plus " << "14: Minus " << endl;
  cout << "15: Clear " << "16: Set Alarm " << endl;
  cout << "17: Light " << "18: Door " << endl;
  cout << "19: Start " << "20: Stop " << endl;
};
