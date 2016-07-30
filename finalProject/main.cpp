#include <vector>
#include <new>
#include <string>
#include <iostream>
#include "clock.h"
#include "control.h"
#include "door.h"
#include "light.h"
#include "keypad.h"
#include "microwave.h"
#include "power.h"

using namespace std;

int main() {

  // Keypad setup
  Clock keypadTimer(0, 0, 0, "internal");
  Power keypadPower(6, 4, 12);
  vector<Control> microwaveControls;
  microwaveControls.push_back(Control("zero", 0));
  microwaveControls.push_back(Control("one", 1));
  microwaveControls.push_back(Control("two", 2));
  microwaveControls.push_back(Control("three", 3));
  microwaveControls.push_back(Control("four", 4));
  microwaveControls.push_back(Control("five", 5));
  microwaveControls.push_back(Control("six", 6));
  microwaveControls.push_back(Control("seven", 7));
  microwaveControls.push_back(Control("eight", 8));
  microwaveControls.push_back(Control("nine", 9));
  microwaveControls.push_back(Control("cancel", 10));
  microwaveControls.push_back(Control("on", 11));
  microwaveControls.push_back(Control("off", 12));
  microwaveControls.push_back(Control("plus", 13));
  microwaveControls.push_back(Control("minus", 14));
  microwaveControls.push_back(Control("clear", 15));
  microwaveControls.push_back(Control("alarm", 16));
  microwaveControls.push_back(Control("light", 17));
  microwaveControls.push_back(Control("door", 18));
  microwaveControls.push_back(Control("start", 19));
  microwaveControls.push_back(Control("stop", 20));
  Keypad keypad(microwaveControls, keypadTimer, keypadPower);

  // Microwave setup
  Power microwavePower(12, 10, 14);
  Door microwaveDoor(false);
  Light microwaveLight(false);
  Microwave microwave("Nuker", "atomic", 12345, keypad, microwavePower, microwaveDoor, microwaveLight);

  // Application for Microwave
  Keypad microwaveKeypad = microwave.getKeyLayout();
  Clock microwaveClock = microwaveKeypad.getTimeDisplay();
  int selection;
  int input;

  // Turn On
  microwaveKeypad.printControls();
  cin >> selection;
  if(microwaveKeypad.controlSelected(selection) == 11){
    microwave.setIsOn(true);
    microwave.setDoorState(true);
    cout << "door open" << endl;
    cout << "Turning On..." << endl;
    cout << "Select Menu Items" << endl;
    while(microwave.getIsOn()){
      cin >> selection;
      if(microwaveKeypad.controlSelected(selection) < 10){
        cout << "Hours: " << endl;
        cin >> input;
        microwaveClock.setHours(microwaveKeypad.controlSelected(input));
        cout << microwaveClock.getHours() << ":" << microwaveClock.getMinutes() << ":" << microwaveClock.getSeconds() << endl;
        cout << "Minutes: " << endl;
        cin >> input;
        microwaveClock.setMinutes(microwaveKeypad.controlSelected(input));
        cout << microwaveClock.getHours() << ":" << microwaveClock.getMinutes() << ":" << microwaveClock.getSeconds() << endl;
        cout << "Seconds: " << endl;
        cin >> input;
        microwaveClock.setSeconds(microwaveKeypad.controlSelected(input));
        cout << microwaveClock.getHours() << ":" << microwaveClock.getMinutes() << ":" << microwaveClock.getSeconds() << endl;
      } else {
        switch (microwaveKeypad.controlSelected(selection)) {
          case 10:
            microwaveClock.clearTime();
            cout << microwaveClock.getHours() << ":" << microwaveClock.getMinutes() << ":" << microwaveClock.getSeconds() << endl;
          break;
          case 11: cout << "Microwave is already on...";
          break;
          case 12:
            cout << "Turning Off..";
            microwave.setIsOn(false);
            main();
          break;
          case 13:
            microwaveKeypad.setTimeDisplay(microwaveClock);
            microwaveClock.incrementTime();
            cout << microwaveClock.getHours() << ":" << microwaveClock.getMinutes() << ":" << microwaveClock.getSeconds() << endl;
          break;
          case 14:
            microwaveKeypad.setTimeDisplay(microwaveClock);
            if(microwaveClock.getSeconds() > 10){
              microwaveClock.decremetTime();
              cout << microwaveClock.getHours() << ":" << microwaveClock.getMinutes() << ":" << microwaveClock.getSeconds() << endl;
            }
          break;
          case 15:
            microwaveClock.clearTime();
            cout << microwaveClock.getHours() << ":" << microwaveClock.getMinutes() << ":" << microwaveClock.getSeconds() << endl;
          break;
          case 16:
            cout << "Hours: " << endl;
            cin >> input;
            microwaveClock.setHours(microwaveKeypad.controlSelected(input));
            cout << microwaveClock.getHours() << ":" << microwaveClock.getMinutes() << ":" << microwaveClock.getSeconds() << endl;
            cout << "Minutes: " << endl;
            cin >> input;
            microwaveClock.setMinutes(microwaveKeypad.controlSelected(input));
            cout << microwaveClock.getHours() << ":" << microwaveClock.getMinutes() << ":" << microwaveClock.getSeconds() << endl;
            cout << "Seconds: " << endl;
            cin >> input;
            microwaveClock.setSeconds(microwaveKeypad.controlSelected(input));
            cout << microwaveClock.getHours() << ":" << microwaveClock.getMinutes() << ":" << microwaveClock.getSeconds() << endl;
            cout << "Alarm Set" << endl;
            cout << "Timer running..." << endl;
            cout << "beep beep beep" << endl;
          break;
          case 17:
            if(microwave.getLightState()){
              microwave.setLightState(false);
              cout << "light off" << endl;
            } else {
              microwave.setLightState(true);
              cout << "light on" << endl;
            }
          break;
          case 18:
            if(microwave.getDoorState()){
              microwave.setDoorState(false);
              cout << "door closed" << endl;
            } else {
              microwave.setDoorState(true);
              cout << "door open" << endl;
            }
          break;
          case 19: // simulate cooking
            if(microwave.getDoorState()){
              cout << "Close Door to Start Cooking" << endl;
            } else if(microwaveClock.getHours() > 1|| microwaveClock.getMinutes() > 1 || microwaveClock.getSeconds() > 1){
              cout << "cooking food..." << endl;
              microwaveClock.clearTime();
              cout << "done cooking..." << endl;
            } else {
              cout << "Cook time not set..." << endl;
            }
          break;
          case 20:
            cout << "cooking stopped..." << endl;
          break;
        }
      }
    }
  } else {
    main();
  }
  return 0;
}
