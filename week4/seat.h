#ifndef SEAT_H
#define SEAT_H

class Seat {

public:
  Seat();
  Seat(int num, bool val, bool aisle, bool window, bool classType, bool center);
  ~Seat();

  const int getSeatNumber();
  const bool getIsOccupied();
  const bool getFirstClass();
  const bool getHasAisle();
  const bool getHasWindow();
  const bool getHasCenter();
  void setSeatNumber(int num);
  void setIsOccupied(bool val);
  void setFirstClass(bool classType);
  void setHasAisle(bool aisle);
  void setHasWindow(bool window);
  void setHasCenter(bool center);

private:
  int seat_number;
  bool isOccupied;
  bool firstClass;
  bool hasAisle;
  bool hasWindow;
  bool hasCenter;

};


#endif
