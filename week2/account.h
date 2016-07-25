#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>

using namespace std;

class Account {

public:

  Account();
  Account(string first, string last, double accountBalance);
  ~Account();
  const string getFirstName();
  const string getLastName();
  const double getAccountBalance();
  void setFirstName(string first);
  void setLastName(string last);
  void setAccountBalance(double amount);
  void withdraw(double amount);
  void deposit(double amount);
  void print();

private:
  string firstName;
  string lastName;
  double balance;
};

#endif
