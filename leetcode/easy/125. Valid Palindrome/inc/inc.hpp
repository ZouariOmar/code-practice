/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-11
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/valid-palindrome leecode @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <algorithm>
#include <iostream>

//* Use stander workspace
using namespace std;

//? Class prototype declaration part

class Solution {
 private:
  string alphanumeric_string;

 public:
  bool isPalindrome(string);
};  // Solution class

#endif