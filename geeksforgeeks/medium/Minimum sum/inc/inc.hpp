/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-09
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/minimum-sum4058/1 GFG @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part
//* Include std libs (c++)
#include <algorithm>
#include <iostream>
#include <vector>

//* Use stander workspace
using namespace std;

//? Class prototype declaration part
class Solution {
 private:
  string addStrings(const string &, const string &);

 public:
  string minSum(vector<int> &);
};  // Solution class

#endif  // __INC_HPP__