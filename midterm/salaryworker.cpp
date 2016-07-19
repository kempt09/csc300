#include "salaryworker.h"
#include "employee.h"
#include <string>
#include <iostream>

using namespace std;

SalaryWorker::SalaryWorker(string first, string last, string employeeDepartment, string employeeTitle, double employeeSalary, string employeeInsurance): Employee(first, last, employeeDepartment, employeeTitle){
  salary = employeeSalary;
  insurance = employeeInsurance;
};

const double SalaryWorker::getSalary(){
  return salary;
};

const string SalaryWorker::getInsurance(){
  return insurance;
};

void SalaryWorker::setSalary(double employeeSalary){
  salary = employeeSalary;
};

void SalaryWorker::setInsurance(string employeeInsurance){
  insurance = employeeInsurance;
};
