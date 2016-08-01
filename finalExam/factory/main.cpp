#include "car.h"
#include "truck.h"
#include "vehicle.h"
#include <vector>
#include <string>

using namespace std;

int main() {
  vector<Vehicle*> carsTrucks;

  for(int i = 0; i < 6; i ++){
    if(i % 2 == 0){
      carsTrucks.push_back(Vehicle::make_vehicle("car"));
    } else {
      carsTrucks.push_back(Vehicle::make_vehicle("truck"));
    }
  }

  for(int i = 0; i < carsTrucks.size(); i++){
    carsTrucks[i]->vehicle_type();
  };

  return 0;
}
