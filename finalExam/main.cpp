#include "point.h"
#include "rectangle.h"
#include <iostream>

using namespace std;

int main(){
  Rectangle rect(Point(3,10), Point(12,17));
  cout << "Area = " << rect.calcArea() << endl;
  return 0;
}
