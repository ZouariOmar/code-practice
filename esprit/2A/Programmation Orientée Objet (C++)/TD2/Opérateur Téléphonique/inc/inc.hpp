/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-06
 * @copyright Copyright (c) 2025
 * @link https://esprit.blackboard.com/ultra/courses/_4241_1/outline/edit/document/_1538182_1?courseId=_4241_1&view=content Blackboard @endlink
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
class Subscriber {
private:
  string name,
      prename;
  int tel,
      CIN;
  float amount; // We use 'dt' as a unity

public:
  Subscriber();
  void addInfo();
  void showSubscriber();
  void addAmount(float);
  bool substractAmount(int, float); // Default: (12, 0.18)
}; // Subscriber class

#endif // __INC_HPP__