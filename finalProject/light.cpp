#include "light.h"
#include <iostream>

using namespace std;

Light::Light(){
  isIlluminated = false;
};
Light::Light(bool value){
  isIlluminated = value;
};
Light::~Light(){};
const bool Light::getIsIlluminated(){
  return isIlluminated;
};
void Light::setIsIlluminated(bool value){
  isIlluminated = value;
};
