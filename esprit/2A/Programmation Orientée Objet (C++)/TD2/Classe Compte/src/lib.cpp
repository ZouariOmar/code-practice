/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-06
 * @copyright Copyright (c) 2025
 * @link https://esprit.blackboard.com/ultra/courses/_4241_1/outline/edit/document/_1538182_1?courseId=_4241_1&view=content TD2 @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

// ? --------------------------
// ? ---- ACCOUNT DEV PART ----
// ? --------------------------

/**
 * @brief ### Construct a new Account::Account object
 */
Account::Account()
    : amount(0) {
}

/**
 * @brief ### Get Account info from console
 */
void Account::insertInfo() {
  cout << "Account Number.......";
  cin >> accountNum;

  while (getc(stdin) != '\n')  // * Rm any detected `\n` character
    ;

  cout << "Account Proprities...";
  getline(cin, accountProp);
  

  cout << "Account Amount......";
  cin >> amount;
}

/**
 * @brief ### Withdraw `wa` from `amount`, return `true` if `wa <= amount`, Otherwise return `false`
 *
 * @param wa {int &}
 * @return bool
 */
bool Account::withdrawAmount(int &wa) {
  int newAmount = amount - wa;
  return (newAmount >= 0) ? amount = newAmount : false;
}

/**
 * @brief ### Depose `da` to `amount`
 *
 * @param da {int &}
 */
void Account::depositAmount(int &da) {
  amount += da;
}

/**
 * @brief ### Show the account `amount` on console
 */
void Account::showAmount() {
  cout << "Current Account Amount - " << __TIME__ << " -......" << amount << endl;
}

/**
 * @brief ### Return account RIB
 *
 * @return int
 */
int Account::get_accountNum() {
  return accountNum;
}

/**
 * @brief ### Return account propreties
 *
 * @return string
 */
string Account::get_accountProp() {
  return accountProp;
}

// ? --------------------------
// ? ---- BANK DEV PART ----
// ? --------------------------

/**
 * @brief ### Return `true` if the account exist on `accounts` table, Otherwise return `false`
 *
 * @param rib int
 * @param n {int *}
 * @return bool
 */
bool Bank::findAccount(int rib, int *n) {
  for (int i{}; i < *n; ++i)
    if (accounts[i].get_accountNum() == rib)
      return true;
  return false;
}

/**
 * @brief ### Add a new account to `accounts` table
 *
 * @param A Account
 * @param n {int *}
 */
void Bank::addAcount(Account A, int *n) {
  if (*n == 50) {
    cerr << "Error: Can't Add New Account : You reach the bank accounts limits!" << endl;
    return;
  }

  if (!findAccount(A.get_accountNum(), n))
    accounts[*n] = A, (*n)++;
  else
    cerr << "Error: Can't Add New Account : This account is already exist!" << endl;
}

/**
 * @brief ### Display bank accounts on console
 *
 * @param n int
 */
void Bank::showBank(int n) {
  for (int i{}; i < n; i++) {
    cout << "Account N°" << i << " -----------" << endl;
    cout << "Account Number......." << accounts[i].get_accountNum() << endl;
    cout << "Account Proprities..." << accounts[i].get_accountProp() << endl;
    accounts[i].showAmount();
  }
}