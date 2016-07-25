#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
#include <string>
#include "account.h"

using namespace std;

class CheckingAccount : public Account {

public:
  CheckingAccount(string first, string last, double accountBalance, string institutuion);
  void withdraw(double amount, string institutuion);
};

#endif
