#include "seat.h"

Seat::Seat(){
  seat_number = 0;
  firstClass = false;
  isOccupied = false;
  hasWindow = false;
  hasAisle = false;
  hasCenter = false;
};
Seat::Seat(int num, bool val, bool aisle, bool window, bool classType, bool center){
  seat_number = num;
  isOccupied = val;
  hasAisle = aisle;
  hasWindow = window;
  firstClass = classType;
  hasCenter = center;
};
Seat::~Seat(){};
const int Seat::getSeatNumber(){
  return seat_number;
};
const bool Seat::getIsOccupied(){
  return isOccupied;
};
const bool Seat::getFirstClass(){
  return firstClass;
};
const bool Seat::getHasAisle(){
  return hasAisle;
};
const bool Seat::getHasWindow(){
  return hasWindow;
};
const bool Seat::getHasCenter(){
  return hasCenter;
};
void Seat::setSeatNumber(int num){
  seat_number = num;
};
void Seat::setIsOccupied(bool val){
  isOccupied = val;
};
void Seat::setFirstClass(bool classType){
  firstClass = classType;
};
void Seat::setHasAisle(bool aisle){
  hasAisle = aisle;
};
void Seat::setHasWindow(bool window){
  hasWindow = window;
};
void Seat::setHasCenter(bool center){
  hasCenter = center;
};
