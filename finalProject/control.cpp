#include "control.h"
#include <string>
#include <iostream>

using namespace std;

Control::Control(){
  name = "";
  value = 0;
};
Control::Control(string key, int val){
  name = key;
  value = val;
};
Control::~Control(){};
const string Control::getName(){
  return name;
};
const int Control::getValue(){
  return value;
};
void Control::setName(string key){
  name = key;
};
void Control::setValue(int val){
  value = val;
};
