/**
 * @file inc.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-18
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/count-number-of-maximum-bitwise-or-subsets leecode @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>
#include <vector>

//* Use stander workspace
using namespace std;

//? Class prototype declaration part

class Solution {
 private:
  void backtrack(const vector<int> &, int, int, int const, int &);

 public:
  int countMaxOrSubsets(vector<int> &);
};  // Solution class

#endif