#ifndef SALARYWORKER_H
#define SALARYWORKER_H
#include "employee.h"
#include <string>

using namespace std;

class SalaryWorker : public Employee {

public:

  SalaryWorker();
  SalaryWorker(string first, string last, string department, string title, double salary, string insurance);
  const double getSalary();
  const string getInsurance();
  void setSalary(double salary);
  void setInsurance(string insurance);


private:
  double salary;
  string insurance;
};

#endif
