#include "passenger.h"
#include <string>

using namespace std;

Passenger::Passenger(){
  name = "";
  seat_number = 0;
};
Passenger::Passenger(string id, int num){
  name = id;
  seat_number = num;
};
Passenger::~Passenger(){};
const string Passenger::getName(){
  return name;
};
const int Passenger::getSeatNumber(){
  return seat_number;
};
void Passenger::setName(string id){
  name = id;
};
void Passenger::setSeatNumber(int num){
  seat_number = num;
};
