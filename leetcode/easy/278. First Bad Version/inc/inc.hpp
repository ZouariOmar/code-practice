/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-11-22
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/first-bad-version leecode @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__
#define BAD_VERSION 4

//? Include prototype declaration part
//* Include std libs (c++)
#include <iostream>

//* Use stander workspace
using namespace std;

//? Function prototype declaration part
bool isBadVersion(int);

//? Class prototype declaration part
class Solution {
 public:
  int firstBadVersion(int);
};  // Solution class

#endif  // __INC_HPP__