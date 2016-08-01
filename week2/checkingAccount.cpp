#include "checkingAccount.h"
#include "account.h"
#include <iostream>
#include <string>
#include "accountError.h"

using namespace std;

CheckingAccount::CheckingAccount(string first, string last, double accountBalance, string institutuion): Account(first, last, accountBalance, institutuion){};
void CheckingAccount::withdraw(double amount){

  try {
    if(getBalance() - amount > getOverdraft()){
      setBalance(getBalance() - amount);
    } else {
      throw AccountError();
    }
  } catch(AccountError &e) {
    int choice = 0;
    cout << e.overdraftCheckingError() << endl;
    cout << "To accept overdraft charges press 1 or press 2 to exit" << endl;
    cin >> choice;
    if(choice == 1){
      setBalance(getBalance() - (amount + 25.00));
    }
  }

};
