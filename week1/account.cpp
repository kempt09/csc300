#include "account.h"
#include <iostream>
#include <string>

using namespace std;

Account::Account(){
  firstName = "";
  lastName = "";
  currentBalance = 0.00;
};

Account::Account(string first, string last, double balance){
   firstName = first;
   lastName = last;
   currentBalance = balance;
};
Account::~Account(){
  cout << "Deleting Account Object" << endl;
};
const string Account::getFirstName(){
  return firstName;
};
const string Account::getLastName(){
  return lastName;
};
const double Account::getCurrentBalance(){
  return currentBalance;
};
void Account::setFirstName(string first){
  firstName = first;
};
void Account::setLastName(string last){
  lastName = last;
};
void Account::setCurrentBalance(double amount){
  currentBalance = amount;
};
void Account::debitFrom(double add){
  setCurrentBalance(getCurrentBalance() + add);
};
void Account::creditTo(double minus){
  setCurrentBalance(getCurrentBalance() - minus);
};
void Account::print(){
  cout << "First Name: " << getFirstName() << endl;
  cout << "Last Name: " << getLastName() << endl;
  cout << "Current Balance: " << getCurrentBalance() << endl;
};
