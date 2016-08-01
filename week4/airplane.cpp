#include "airplane.h"
#include "seat.h"
#include "passenger.h"
#include <vector>
#include <iostream>

using namespace std;

Airplane::Airplane(){
  max_seats = 200;
  first_class = 20;
  for(int i = 0; i < max_seats + 1; i++){
    if(i <= first_class){
      if(i % 2 == 0){
        seats.push_back(Seat(i + 1,false,true,false,true,false));
      } else {
        seats.push_back(Seat(i + 1,false,false,true,true,false));
      }
    } else {
      if(i % 3 == 0){
        seats.push_back(Seat(i + 1,false,true,false,false,false));
      } else if(i % 2 ==0){
        seats.push_back(Seat(i + 1,false,false,true,false,false));
      } else {
        seats.push_back(Seat(i + 1,false,false,false,false,true));
      }
    }
  }
};
Airplane::Airplane(int num_seats, int priority){
  max_seats = num_seats;
  first_class = priority;
  for(int i = 0; i <= max_seats + 1; i++){
    if(i <= first_class){
      if(i % 2 == 0){
        seats.push_back(Seat(i + 1,false,true,false,true,false));
      } else {
        seats.push_back(Seat(i + 1,false,false,true,true,false));
      }
    } else {
      if(i % 3 == 0){
        seats.push_back(Seat(i + 1,false,false,true,false,false));
      } else if((i - 1) % 3 == 0){
        seats.push_back(Seat(i + 1,false,false,false,false,true));
      } else {
        seats.push_back(Seat(i + 1,false,true,false,false,false));
      }
    }
  }
};
Airplane::~Airplane(){};
void Airplane::addPassenger(vector<Passenger> travelers){
  for(int i = 0; i < travelers.size(); i++){
    passengers.push_back(travelers[i]);
    if(seats[travelers[i].getSeatNumber() - 1].getIsOccupied()){
      cout << "Seat Taken" << endl;
    } else {
      seats[travelers[i].getSeatNumber() - 1].setIsOccupied(true);
    }
  }
};
void Airplane::showSeating(bool val){
  int sizeOfQuery = 0;
  int start = 1;
  if(val){
    sizeOfQuery = max_seats - first_class + 1;
  } else {
    start = first_class + 1;
    sizeOfQuery = 1;
  }
  for(int i = start; i < seats.size() - sizeOfQuery; i++){
    if(seats[i].getIsOccupied()){
      cout << "[ X ]" << endl;
    } else {
      if(seats[i].getHasAisle()){
        cout << "[ " << i << " A ]" << endl;
      } else if(seats[i].getHasWindow()){
        cout << "[ " << i << " W ]" << endl;
      } else if(seats[i].getHasCenter()){
        cout << "[ " << i << " C ]" << endl;
      } else {
        cout << "[ " << i << " ]" << endl;
      }
    }
  }
};
void Airplane::quit(){
  cout << "Have A Great Flight" << endl;
};
void Airplane::displayMenu(){
  cout << "Menu" << endl;
  cout << "1. Add Passenger" << endl;
  cout << "2. Show Seating" << endl;
  cout << "3. Exit" << endl;
};
