#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "point.h"

class Rectangle {

public:
  Rectangle();
  Rectangle(Point l_left, Point u_right);
  ~Rectangle();
  const Point getLowerLeft();
  const Point getUpperRight();
  void setLowerLeft(Point l_left);
  void setUpperRight(Point u_right);
  const double calcArea();


private:
  Point m_lowerLeft;
  Point m_upperRight;

};

#endif
