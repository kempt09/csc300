#include "power.h"
#include <iostream>

using namespace std;

Power::Power(){
  output = 0;
  minimum = 0;
  maximum = 0;
};
Power::Power(double out, double min, double max){
  output = out;
  minimum = min;
  maximum = max;
};
Power::~Power(){
  cout << "Deleting Power Object" << endl;
};
const double Power::getOutput(){
  return output;
};
const double Power::getMinimum(){
  return minimum;
};
const double Power::getMaximum(){
  return maximum;
};
void Power::setOutput(double num){
  output = num;
};
void Power::setMaximum(double num){
  maximum = num;
};
void Power::setMinimum(double num){
  minimum = num;
};
