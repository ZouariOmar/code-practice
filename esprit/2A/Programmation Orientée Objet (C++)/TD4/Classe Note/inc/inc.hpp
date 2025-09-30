/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-13
 * @copyright Copyright (c) 2025
 * @link https://esprit.blackboard.com/ultra/courses/_4241_1/outline/edit/document/_1579548_1?courseId=_4241_1&view=content TD4 @endlink
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
class Notes {
private:
  float test1, test2, DS, Exam, oral, TP;
  bool withTP;
  float calcNCC();

public:
  Notes();
  Notes(float, float, float, float, float, float);
  Notes(float, float, float, float, float);
  float calcMoy();
  bool operator>(const Notes &);
  bool operator<(const Notes &);
};

#endif // __INC_HPP__ Or __INC_H__