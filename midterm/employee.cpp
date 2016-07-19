#include "employee.h"
#include <iostream>
#include <string>

using namespace std;

Employee::Employee(){
  firstName = "";
  lastName = "";
  department = "";
  title = "";
};

Employee::Employee(string first, string last, string employeeDepartment, string employeeTitle){
  firstName = first;
  lastName = last;
  department = employeeDepartment;
  title = employeeTitle;
};

const string Employee::getFirstName(){
  return firstName;
};

const string Employee::getLastName(){
  return lastName;
};

const string Employee::getDepartment(){
  return department;
};

const string Employee::getTitle(){
  return title;
};

void Employee::setFirstName(string first){
  firstName = first;
};

void Employee::setLastName(string last){
    lastName = last;
};

void Employee::setDepartment(string employeeDepartment){
    department = employeeDepartment;
};

void Employee::setTitle(string employeeTitle){
  title = employeeTitle;
};

void Employee::print(){
    cout << "Name: " << firstName << " " << lastName << endl;
    cout << "Department: " << department << endl;
    cout << "Title: " << title << endl;
};
