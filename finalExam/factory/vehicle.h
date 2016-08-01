#ifndef VEHICLE_H
#define  VEHICLE_H

#include <string>

using namespace std;

class Vehicle {

public:
  static Vehicle *make_vehicle(string type);
  virtual void vehicle_type() = 0;

};

#endif
