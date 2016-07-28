#ifndef KEYPAD_H
#define KEYPAD_H

#include <vector>
#include "control.h"
#include "clock.h"
#include "time.h"
#include "power.h"


using namespace std;

class Keypad {

public:

  Keypad();
  Keypad(vector<Control> buttons, Clock time, Power power);
  ~Keypad();

  const vector<Control> getControls();
  const Clock getTimeDisplay();
  const Power getPowerSettings();
  const int controlSelected();
  void setControls(vector<Control> buttons);
  void setTimeDisplay(Clock time);
  void setPowerSettings(Power power);



private:
  vector<Control> controls;
  Clock timeDisplay;
  Power powerSettings;
};

#endif
