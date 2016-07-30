#include "door.h"
#include <iostream>

using namespace std;

Door::Door(){
  isOpen = false;
};
Door::Door(bool value){
  isOpen = value;
};
Door::~Door(){};
const bool Door::getIsOpen(){
  return isOpen;
};
void Door::setIsOpen(bool value){
  isOpen = value;
};
