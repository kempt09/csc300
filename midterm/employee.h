#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

using namespace std;

class Employee {

public:
  Employee();
  Employee(string first, string last, string employeeDepartment, string employeeTitle);

  const string getFirstName();
  const string getLastName();
  const string getDepartment();
  const string getTitle();

  void setFirstName(string first);
  void setLastName(string last);
  void setDepartment(string employeeDepartment);
  void setTitle(string employeeTitle);
  void print();

private:
  string firstName;
  string lastName;
  string department;
  string title;
};

#endif
