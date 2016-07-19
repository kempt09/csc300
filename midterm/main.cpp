#include "employee.h"
#include "salaryworker.h"
#include "intern.h"
#include "vendor.h"
#include "business.h"
#include <iostream>
#include <string>
#include <vector>
#include <new>

using namespace std;

int main(){

  cout << "===== Test Employees =====" << endl;
  vector<Employee> employees;
  Intern chris("Chris", "Kempton", "IT", "Developer Assistant", 1, "National University");
  SalaryWorker whitney("Whitney", "Kempton", "Creative", "Graphic Designer", 800000, "Blue Cross");
  employees.push_back(chris);
  employees.push_back(whitney);
  for(int i = 0; i < employees.size(); i++){
    employees[i].print();
  }
  cout << "===== END =====" << endl;

  cout << "===== Test Vendors =====" << endl;
  vector<Vendor> vendors;
  Vendor metal("Metal", 100);
  Vendor plastic("Plastic", 10.99);
  vendors.push_back(metal);
  vendors.push_back(plastic);
  for(int n = 0; n < vendors.size(); n++){
    vendors[n].print();
  }
  cout << "===== END =====" << endl;

  cout << "===== Test Business =====" << endl;
  Business apple("California", "Computer", employees, vendors);
  apple.print();
  cout << "===== END =====" << endl;

  return 0;
}
