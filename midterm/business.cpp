#include <iostream>
#include <string>
#include <vector>
#include "business.h"
#include "employee.h"
#include "vendor.h"

using namespace std;

Business::Business(){
  location = "";
  industry = "";
};

Business::Business(string companyLocation, string industryType, vector<Employee> employeeList,  vector<Vendor> vendorList){
  location = companyLocation;
  industry = industryType;
  employees = employeeList;
  vendors = vendorList;
};

const vector<Employee> Business::getEmployees(){
  return employees;
};

const string Business::getLocation(){
  return location;
};

const string Business::getIndustry(){
  return industry;
};

const vector<Vendor> Business::getVendors(){
  return vendors;
};

void Business::setEmployees(vector <Employee> employeeList){
  employees = employeeList;
};

void Business::setLocation(string companyLocation){
  location = companyLocation;
};

void Business::setIndustry(string industryType){
  industry = industryType;
};

void Business::setVendors(vector<Vendor> vendorList){
  vendors = vendorList;
};

void Business::print(){
  cout << "Industry: " << industry << endl;
  cout << "Location: " << location << endl;
  cout << "Number of Employees: " << employees.size() << endl;
  cout << "Number of Vendors: " << vendors.size() << endl;
};
