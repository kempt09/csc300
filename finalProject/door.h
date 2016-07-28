#ifndef DOOR_H
#define DOOR_H


using namespace std;

class Door {

public:

  Door();
  Door(bool value);
  ~Door();
  const bool getIsOpen();
  void setIsOpen(bool value);


private:
  bool isOpen;
};

#endif
