#include "checkingAccount.h"
#include "account.h"
#include <iostream>
#include <string>

using namespace std;

CheckingAccount::CheckingAccount(string first, string last, double accountBalance, string institutuion): Account(first, last, accountBalance, institutuion){};
void CheckingAccount::withdraw(double amount, string institutuion){
  if(getBankName() != institutuion){
    setBalance(getBalance() - (amount + 4.00));
  } else {
    setBalance(getBalance() - amount);
  }
};
