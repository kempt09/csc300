#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>

using namespace std;

class Account {

public:
  // Default constructor
  Account();
  // Primary constructor to set elements
  // @params take in first name, last name, and an initial balance
  Account(string first, string last, double balance);
  // Deconstructor to delete the object
  ~Account();
  // Getter functions to access the private member that do not override the private members
  const string getFirstName();
  const string getLastName();
  const double getCurrentBalance();
  // Setter functions to allow new value to be passed to the private members
  void setFirstName(string first);
  void setLastName(string last);
  void setCurrentBalance(double amount);
  // Allows for adding to the current balance
  void debitFrom(double add);
  // Allows for subtracting from the current balance
  void creditTo(double minus);
  // Prints out Account information: first name, last name, current balance
  void print();

private:
  string firstName;
  string lastName;
  double currentBalance;
};

#endif
