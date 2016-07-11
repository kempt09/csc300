#include <iostream>
#include <string>
#include <new>
#include "account.h"

using namespace std;

template<class T>
void objSwap(T& one, T& two){
  T tmp(one);
  one = two;
  two = tmp;
}

int main(){

  // Part A
  cout << "===== PART A =====" << endl;
  Account accountOne("John", "Smith", 100.00);
  accountOne.print();
  cout << "===== END =====" << endl;

  // Part C

  cout << "===== Part C =====" << endl;
  const int SIZE = 10;
  int user = 0;
  int option = 0;
  double amount = 0.00;
  Account * arr[SIZE];
  Account * accountTwo;
  accountTwo = new Account("John", "Smith", 100.00);
  accountTwo -> debitFrom(100.00);
  cout << "===== DEMO debit =====" << endl;
  accountTwo -> print();
  accountTwo -> creditTo(25.00);
  cout << "===== DEMO credit =====" << endl;
  accountTwo -> print();


  // example of how to delete a pointer
  delete accountTwo;

  // Initialize array of pointers
  cout << "===== Initialize Array of pointers =====" << endl;

  for(int i = 0; i < SIZE; i++){
    arr[i] = new Account("John", "Smith", 100.00);
    arr[i] -> print();
  }

  cout << "===== END Initializing Array of pointers" << endl;

  // ATM Logic
  // User names are based off of the the array generated above
  cout << "Please enter your username: " << endl;
  cin >> user;


  // Allow for multiple actions to occur
  while (option != 4) {
    cout << "Please select and option below: " << endl;
    cout << "1. View Balance" << endl;
    cout << "2. Withdraw" << endl;
    cout << "3. Deposit" << endl;
    cout << "4. Exit" << endl;
    cin >> option;
    if(option == 1){
      arr[user] -> print();
    } else if (option == 2){
      cout << "How much would you like to withdraw?" << endl;
      cin >> amount;
      arr[user] -> creditTo(amount);
    } else if (option == 3){
      cout << "How much would you like to deposit?" << endl;
      cin >> amount;
      arr[user] -> debitFrom(amount);
    } else {
      if(option == 4){
        cout << "Thanks for using NU ATM, have a great day!!!" << endl;
      } else {
        cout << "Invalid Option, Try Again..." << endl;
      }
    }
  }

  cout << "===== END =====" << endl;
  cout << "===== Part C =====" << endl;
  // Swap Accounts

  Account swapOne("ONE", "ONE", 100.00);
  Account swapTwo("TWO", "TWO", 200.00);

  cout << "===== Show initial values before swapping =====" << endl;
  swapOne.print();
  swapTwo.print();

  objSwap(swapOne, swapTwo);

  cout << "===== Show new values after swapping =====" << endl;
  swapOne.print();
  swapTwo.print();

  cout << "===== END =====" << endl;

  // Delete array pointers
  for(int n = 0; n < SIZE; n++){
    delete arr[n];
  }

  // all other objects remaining are deleted by the deconstructor

  return 0;

};
