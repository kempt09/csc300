#include "vendor.h"
#include <string>
#include <iostream>

using namespace std;

Vendor::Vendor(){
  product = "";
  price = 0.00;
};

Vendor::Vendor(string productName, double productPrice){
  product = productName;
  price = productPrice;
};

const string Vendor::getProduct(){
  return product;
};

const double Vendor::getPrice(){
  return price;
};

void Vendor::setProduct(string productName){
  product = productName;
};

void Vendor::setPrice(double productPrice){
  price = productPrice;
};

void Vendor::print(){
  cout << "Product: " << product << endl;
  cout << "Price: " << price << endl;
};
