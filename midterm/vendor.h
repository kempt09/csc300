#ifndef VENDOR_H
#define VENDOR_H
#include <string>

using namespace std;

class Vendor {

public:

  Vendor();
  Vendor(string productName, double productPrice);
  const string getProduct();
  const double getPrice();
  void setProduct(string productName);
  void setPrice(double productPrice);
  void print();


private:
  string product;
  double price;

};

#endif
