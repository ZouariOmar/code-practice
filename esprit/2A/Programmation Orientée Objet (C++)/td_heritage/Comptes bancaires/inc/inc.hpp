/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-06
 * @copyright Copyright (c) 2025
 * @link https://esprit.blackboard.com/ultra/courses/_4241_1/outline/edit/document/_1679723_1?courseId=_4241_1&view=content TD5 @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__
#define CURRENT_ACCOUNT_THRESHOLD -500
#define SAVING_ACCOUNT_THRESHOLD 5

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>

//? Class prototype declaration part
class Account {
protected:
  const int RIP;
  double balance;

public:
  void deposit(const double &);
  virtual void withdraw(const double &);
  void show() const;
}; // Account class

class SavingAccount : public Account {
private:
  double TVA;
  void calTVA();

public:
  void withdraw(const double &) override; // ! Balance limited at min threshold = 5dt
}; // SavingAccount class --> Account class

class CurrentAccount : public Account {
public:
  void withdraw(const double &) override; // ! Balance limited at min threshold = -500dt
}; // CurrenAccount class --> Account class

#endif // __INC_HPP__