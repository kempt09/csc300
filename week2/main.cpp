#include <iostream>
#include <string>
#include "account.h"
#include "savingsAccount.h"
#include "checkingAccount.h"
#include "accountError.h"

using namespace std;

int main(){

  cout << "===== SETUP ACCOUNTS =====" << endl;
  SavingsAccount savings("Chris", "Kempton", 0.00, "Chase");
  CheckingAccount checking("Chris", "Kempton", 0.00, "Chase");
  savings.deposit(100.00);
  checking.deposit(100.00);
  savings.setOverdraft(50.00);
  checking.setOverdraft(50.00);
  cout << "===== END SETUP =====" << endl;

  cout << "===== Test overdraft on savings account =====" << endl;
  savings.withdraw(200.00);
  savings.print();
  cout << "===== Add more funds ====" << endl;
  savings.deposit(2000.00);
  cout << "===== Attempt successful withdraw =====" << endl;
  savings.withdraw(200.00);
  savings.print();
  cout << "===== END TEST =====" << endl;

  cout << "===== Test overdraft on checking account =====" << endl;
  checking.withdraw(200.00);
  checking.print();
  cout << "===== Add more funds ====" << endl;
  checking.deposit(2000.00);
  cout << "===== Attempt successful withdraw =====" << endl;
  checking.withdraw(200.00);
  checking.print();
  cout << "===== END TEST =====" << endl;

  return 0;

};
