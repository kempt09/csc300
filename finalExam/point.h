#ifndef POINT_H
#define POINT_H


class Point {

public:
  Point();
  Point(double xcoord, double ycoord);
  ~Point();
  const double getX();
  const double getY();
  void setX(double xcoord);
  void setY(double ycoord);

private:
  double m_x;
  double m_y;

};

#endif
