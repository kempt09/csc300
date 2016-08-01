#include <string>
#include <iostream>
#include "accountError.h"

using namespace std;

AccountError::AccountError(){};
AccountError::~AccountError(){};
const char* AccountError::overdraftCheckingError(){
  return "You will be charge an additional $25.00 for this transaction";
};
const char* AccountError::overdraftSavingsError(){
  return "Insufficient Funds";
};
