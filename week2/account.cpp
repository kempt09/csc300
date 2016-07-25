#include "account.h"
#include <iostream>
#include <string>

using namespace std;

Account::Account(){
  firstName = "";
  lastName = "";
  balance = 0.00;
};
Account::Account(string first, string last, double accountBalance){
   firstName = first;
   lastName = last;
   balance = accountBalance;
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
const double Account::getAccountBalance(){
  return balance;
};
void Account::setFirstName(string first){
  firstName = first;
};
void Account::setLastName(string last){
  lastName = last;
};
void Account::setAccountBalance(double amount){
  balance = amount;
};
void Account::withdraw(double amount){
  balance = balance - amount;
};
void Account::deposit(double amount){
  balance = balance + amount;
};
void Account::print(){
  cout << "TEST" << endl;
};
