#ifndef INTERN_H
#define INTERN_H
#include "employee.h"
#include <string>

using namespace std;

class Intern : public Employee {

public:

  Intern();
  Intern(string first, string last, string employeeDepartment, string employeeTitle, int internTeam, string school);
  const int getTeam();
  const string getUniversity();
  void setTeam(int internTeam);
  void setUniversity(string school);


private:
  int team;
  string university;
};

#endif
