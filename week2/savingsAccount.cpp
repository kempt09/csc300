#include "account.h"
#include "savingsAccount.h"
#include <iostream>
#include <string>

using namespace std;

SavingsAccount::SavingsAccount(string first, string last, double accountBalance, string institutuion) : Account(first, last, accountBalance, institutuion){
  ANNUAL_RATE = 0.10;
  MONTHLY_RATE = 0.05;
};
const double SavingsAccount::getAnnualInterest(){
  return (getBalance() * ANNUAL_RATE) + getBalance();
};
const double SavingsAccount::getMonthlyInterest(){
  return (getBalance() * MONTHLY_RATE) + getBalance();
};
