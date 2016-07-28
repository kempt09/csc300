#ifndef CONTROL_H
#define CONTROL_H
#include <string>

using namespace std;

class Control {

public:

  Control();
  Control(string key, int val);
  ~Control();
  const string getName();
  const int getValue();
  void setName(string key);
  void setValue(int val);


private:
  string name;
  int value;
};

#endif
