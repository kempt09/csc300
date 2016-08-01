#ifndef AIRPLANE_H
#define AIRPLANE_H

#include <vector>
#include "passenger.h"
#include "seat.h"

using namespace std;

class Airplane {

public:
  Airplane();
  Airplane(int num_seats, int priority);
  ~Airplane();

  void addPassenger(vector<Passenger> travelers);
  void showSeating(bool val);
  void quit();
  void displayMenu();

private:
  int max_seats;
  int first_class;
  vector<Seat> seats;
  vector<Passenger> passengers;

};


#endif
