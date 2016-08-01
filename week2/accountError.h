#ifndef ACCOUNTERROR_H
#define ACCOUNTERROR_H
#include <string>
#include <iostream>

using namespace std;

class AccountError {

public:
  AccountError();
  ~AccountError();
  const char *overdraftCheckingError();
  const char *overdraftSavingsError();
};

#endif
