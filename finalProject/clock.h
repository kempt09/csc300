#ifndef CLOCK_H
#define CLOCK_H

#include <string>

using namespace std;

class Clock {

public:

  Clock();
  Clock(int min, int sec, int hrs, string identifier);
  ~Clock();
  const int getMinutes();
  const int getSeconds();
  const int getHours();
  const string getType();
  void setMinutes(int min);
  void setSeconds(int sec);
  void setHours(int hrs);
  void setType(string identifier);

  // functional methods

  void clearTime();
  void decremetTime();
  void incrementTime();




private:
  int minutes;
  int seconds;
  int hours;
  string type;
};

#endif
