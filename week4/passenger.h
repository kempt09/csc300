#ifndef PASSENGER_H
#define PASSENGER_H
#include <string>

using namespace std;

class Passenger {

public:
  Passenger();
  Passenger(string id, int num);
  ~Passenger();

  const string getName();
  const int getSeatNumber();
  void setName(string id);
  void setSeatNumber(int num);

private:
  string name;
  int seat_number;

};

#endif
