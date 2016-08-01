#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>

using namespace std;

class Account {

public:

  Account();
  Account(string first, string last, double accountBalance, string institutuion);
  ~Account();
  const string getFirstName();
  const string getLastName();
  const string getBankName();
  const double getBalance();
  const double getOverdraft();
  void setFirstName(string first);
  void setLastName(string last);
  void setBankName(string name);
  void setBalance(double amount);
  void setOverdraft(double amount);
  virtual const double getAnnualInterest();
  virtual const double getMonthlyInterest();
  virtual void withdraw(double amount);
  void deposit(double amount);
  void print();

private:
  string bankName;
  string firstName;
  string lastName;
  double overdraft;
  double balance;
};

#endif
