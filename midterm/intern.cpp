#include "intern.h"
#include "employee.h"
#include <string>
#include <iostream>

using namespace std;

Intern::Intern(string first, string last, string employeeDepartment, string employeeTitle, int internTeam, string school): Employee(first, last, employeeDepartment, employeeTitle){
  team = internTeam;
  university = school;
};

const int Intern::getTeam(){
  return team;
};

const string Intern::getUniversity(){
  return university;
};

void Intern::setTeam(int internTeam){
  team = internTeam;
};

void Intern::setUniversity(string school){
  university = school;
};
