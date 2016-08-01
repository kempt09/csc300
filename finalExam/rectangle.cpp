#include "rectangle.h"
#include "point.h"

Rectangle::Rectangle(){
  Point left(0,0);
  Point right(0,0);
  m_lowerLeft = left;
  m_upperRight = right;
};
Rectangle::Rectangle(Point l_left, Point u_right){
  m_lowerLeft = l_left;
  m_upperRight = u_right;
};
Rectangle::~Rectangle(){};
const Point Rectangle::getLowerLeft(){
  return m_lowerLeft;
};
const Point Rectangle::getUpperRight(){
  return m_upperRight;
};
void Rectangle::setLowerLeft(Point l_left){
  m_lowerLeft = l_left;
};
void Rectangle::setUpperRight(Point u_right){
  m_upperRight = u_right;
};
const double Rectangle::calcArea(){
  return (m_upperRight.getY() - m_lowerLeft.getY()) * (m_upperRight.getY() - m_lowerLeft.getY());
};
