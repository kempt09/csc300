#include "passenger.h"
#include "seat.h"
#include "airplane.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main() {
  Airplane boeing(200, 20);
  int selection;
  int seatType;
  int numberOfPassengers;
  vector<Passenger> group;
  string passengerID;
  int seatNumber;

  while (selection != 3) {
    boeing.displayMenu();
    cin >> selection;
    if (selection == 1) {
      cout << "1. First Class" << endl;
      cout << "2. Economy" << endl;
      cin >> seatType;
      if(seatType == 1){
        boeing.showSeating(true);
        cout << "Enter Number of passengers traveling together: max 2" << endl;
      } else {
        boeing.showSeating(false);
        cout << "Enter Number of passengers traveling together: max 3" << endl;
      }
      cin >> numberOfPassengers;
      for(int i = 0; i < numberOfPassengers; i++){
        cout << "Passenger Name:" << endl;
        cin >> passengerID;
        cout << "Seat Number: " << endl;
        cin >> seatNumber;
        group.push_back(Passenger(passengerID, seatNumber));
      }
      boeing.addPassenger(group);
    } else if(selection == 2){
      cout << "First Class" << endl;
      boeing.showSeating(true);
      cout << "Economy" << endl;
      boeing.showSeating(false);
    }
  }

  boeing.quit();

  return 0;
}
