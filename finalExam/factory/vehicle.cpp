#include "vehicle.h"
#include "car.h"
#include "truck.h"
#include <string>

using namespace std;

Vehicle * Vehicle::make_vehicle(string type){

  if(type == "car"){
    return new Car;
  } else if(type == "truck"){
    return new Truck;
  } else {
    return new Car;
  }

};
