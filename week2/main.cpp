#include <iostream>
#include <string>
#include "account.h"
#include "savingsAccount.h"
#include "checkingAccount.h"

using namespace std;

int main(){

  SavingsAccount savings("Chris", "Kempton", 0.00, "Chase");
  CheckingAccount checking("Chris", "Kempton", 0.00, "Chase");

  savings.deposit(100.00);
  checking.deposit(100.00);
  savings.setOverdraft(50.00);
  checking.setOverdraft(50.00);

  return 0;

};
