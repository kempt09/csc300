#include "account.h"
#include <iostream>
#include <string>

using namespace std;

Account::Account(){
  firstName = "";
  lastName = "";
  balance = 0.00;
  bankName = "";
};
Account::Account(string first, string last, double accountBalance, string institutuion){
   firstName = first;
   lastName = last;
   balance = accountBalance;
   bankName = institutuion;
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
const string Account::getBankName(){
  return bankName;
};
const double Account::getBalance(){
  return balance;
};
const double Account::getAnnualInterest(){
  return 0;
};
const double Account::getMonthlyInterest(){
  return 0;
};
const double Account::getOverdraft(){
  return overdraft;
};
void Account::setFirstName(string first){
  firstName = first;
};
void Account::setLastName(string last){
  lastName = last;
};
void Account::setBankName(string name){
  bankName = name;
};
void Account::setBalance(double amount){
  balance = amount;
};
void Account::withdraw(double amount, string institutuion){
  balance = balance - amount;
};
void Account::deposit(double amount){
  balance = balance + amount;
};
void Account::setOverdraft(double amount){
  overdraft = amount;
};
void Account::print(){
  cout << "Account Holder: " << getFirstName() << " " << getLastName() << endl;
  cout << "Balance: " << getBalance() << endl;
};
