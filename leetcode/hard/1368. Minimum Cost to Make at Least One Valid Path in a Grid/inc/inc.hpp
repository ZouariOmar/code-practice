/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-18
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/minimum-cost-to-make-at-least-one-valid-path-in-a-grid leetcode @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <deque>
#include <iostream>
#include <limits.h>
#include <vector>

//* Use stander workspace
using namespace std;

//? Class prototype declaration part
class Solution {
private:
  const int dx[4] = {0, 0, 1, -1};
  const int dy[4] = {1, -1, 0, 0};

public:
  int minCost(vector<vector<int>> &);
}; // Solution classs

#endif // __INC_HPP__