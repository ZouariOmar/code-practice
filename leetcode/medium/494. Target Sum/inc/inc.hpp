/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-12-26
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/target-sum leetcode @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration par
//* Include std libs (c++)
#include <iostream>
#include <vector>

//* Use stander workspace
using namespace std;

//? Class prototype declaration part
class Solution {
private:
  int helper(const vector<int> &, const int, int, int);

public:
  int findTargetSumWays(vector<int> &, int);
}; // Solution class

#endif // __INC_HPP__