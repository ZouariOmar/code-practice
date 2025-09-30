/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-06
 * @copyright Copyright (c) 2025
 * @link https://esprit.blackboard.com/ultra/courses/_4241_1/outline/edit/document/_1538182_1?courseId=_4241_1&view=content TD2 @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>

//* Use stander workspace
using namespace std;

//? Class prototype declaration part
class Account {
private:
  int accountNum;
  string accountProp;
  float amount;

public:
  Account();
  void insertInfo();
  bool withdrawAmount(int &);
  void depositAmount(int &);
  void showAmount();
  int get_accountNum();
  string get_accountProp();
  // Other
}; // Account class

class Bank {
private:
  string bankName;
  Account accounts[50];

public:
  bool findAccount(int, int *);
  void addAcount(Account, int *);
  void showBank(int);
}; // Bank class

#endif // __INC_HPP__