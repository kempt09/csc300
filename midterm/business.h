#ifndef BUSINESS_H
#define BUSINESS_H
#include <string>
#include <vector>
#include "employee.h"
#include "vendor.h"

using namespace std;

class Business {

public:
  Business();
  Business(string compnayLocation, string industryType, vector<Employee> employeeList, vector<Vendor> vendorList);

  const vector<Employee> getEmployees();
  const string getLocation();
  const string getIndustry();
  const vector<Vendor> getVendors();

  void setEmployees(vector <Employee> employeeList);
  void setLocation(string comapnyLocation);
  void setIndustry(string industryType);
  void setVendors(vector<Vendor> vendorList);
  void print();

private:
  string location;
  string industry;
  vector<Employee> employees;
  vector<Vendor> vendors;
};

#endif
