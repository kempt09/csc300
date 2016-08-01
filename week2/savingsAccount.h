#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include <string>
#include "account.h"

using namespace std;

class SavingsAccount : public Account {

public:
  SavingsAccount(string first, string last, double accountBalance, string institutuion);
  void withdraw(double amount);
  const double getAnnualInterest();
  const double getMonthlyInterest();

private:
  double MONTHLY_RATE;
  double ANNUAL_RATE;
};

#endif
