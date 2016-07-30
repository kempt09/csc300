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
Clock::~Clock(){};
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
void Clock::clearTime(){
  minutes = 0;
  seconds = 0;
  hours = 0;
};
void Clock::decremetTime(){
  seconds = seconds - 10;
};
void Clock::incrementTime(){
  seconds = seconds + 10;
};
