#include "clock.h"
#include <string>
#include <iostream>

using namespace std;

Clock::Clock(){
  minutes = 0;
  seconds = 0;
  hours = 0;
  type = "";
};
Clock::Clock(int min, int sec, int hrs, string identifier){
  minutes = min;
  seconds = sec;
  hours = hrs;
  type = identifier;
};
Clock::~Clock(){
  cout << "Deleting Clock Object" << endl;
};
const int Clock::getMinutes(){
  return minutes;
};
const int Clock::getSeconds(){
  return seconds;
};
const int Clock::getHours(){
  return hours;
};
const string Clock::getType(){
  return type;
};
void Clock::setMinutes(int min){
  minutes = min;
};
void Clock::setSeconds(int sec){
  seconds = sec;
};;
void Clock::setHours(int hrs){
  hours = hrs;
};
void Clock::setType(string identifier){
  type = identifier;
};

// functional methods
bool Clock::alarm(Clock time){
  return true;
};
void Clock::clearTime(Clock time){
  time.setMinutes(0);
  time.setSeconds(0);
  time.setHours(0);
};
void Clock::decremetTime(Clock time){
  time.setSeconds(time.getSeconds() - 1);
};
void Clock::incrementTime(Clock time){
  time.setSeconds(time.getSeconds() + 1);
};
