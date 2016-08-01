#include "point.h"

Point::Point(){
  m_x = 0;
  m_y = 0;
};
Point::Point(double xcoord, double ycoord){
  m_x = xcoord;
  m_y = ycoord;
};
Point::~Point(){};
const double Point::getX(){
  return m_x;
};
const double Point::getY(){
  return m_y;
};
void Point::setX(double xcoord){
  m_x = xcoord;
};
void Point::setY(double ycoord){
  m_y = ycoord;
};
