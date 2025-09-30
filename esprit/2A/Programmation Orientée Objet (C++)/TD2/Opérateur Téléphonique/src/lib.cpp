/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-06
 * @copyright Copyright (c) 2025
 * @link https://esprit.blackboard.com/ultra/courses/_4241_1/outline/edit/document/_1538182_1?courseId=_4241_1&view=content Blackboard @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new Subscriber::Subscriber object
 */
Subscriber::Subscriber()
    : amount(0) {};

/**
 * @brief ### Add subscriber information
 */
void Subscriber::addInfo() {
  cout << "Name......";
  cin >> name;

  cout << "Prename...";
  cin >> prename;

  cout << "Tel.......";
  cin >> tel;

  cout << "CIN.......";
  cin >> CIN;

  cout << "Amount....";
  cin >> amount;
}

/**
 * @brief ### Display subscribe information on console
 */
void Subscriber::showSubscriber() {
  cout << "Name......" << name << endl;
  cout << "Prename..." << prename << endl;
  cout << "Tel......." << tel << endl;
  cout << "CIN......." << CIN << endl;
  cout << "Amount...." << amount << endl;
}

/**
 * @brief ### Add `x` to amount
 *
 * @param x int
 */
void Subscriber::addAmount(float x) {
  amount += x;
}

/**
 * @brief ###
 *
 * @param sec {int:12}
 * @param price {float:0.18}
 * @return bool
 */
bool Subscriber::substractAmount(int sec = 12, float price = 0.18F) {
  float consumed_amount{(sec / 60) * price}, new_amount = amount - consumed_amount;
  return (new_amount > amount) ? amount = new_amount : false;
}