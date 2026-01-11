/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-24
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/find-eventual-safe-states leetcode @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part

//* Include std libs (c++)
#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

//* Use stander workspace
using namespace std;

//? Class prototype declaration part
class Solution {
private:
  int n;
  vector<int> degreein;
  vector<vector<int>> rGraph;
  vector<int> ans;
  void init(vector<vector<int>> &);

public:
  vector<int> eventualSafeNodes(vector<vector<int>> &);
}; // Solution class

#endif // __INC_HPP__