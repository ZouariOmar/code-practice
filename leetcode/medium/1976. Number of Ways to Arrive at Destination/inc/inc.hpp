/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-23
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/number-of-ways-to-arrive-at-destination leetcode @endlink
 */

//? Pre-Processor prototype declaration part
#ifndef __INC_HPP__
#define __INC_HPP__
#define ll long long
#define pll std::pair<ll, ll>

//? Include prototype declaration part

//* Include std libs (c++)
#include <iostream>
#include <limits.h>
#include <queue>
#include <vector>

//? Class prototype declaration part
class Solution {
private:
  const int MOD = 1e9 + 7;
  const int dijkstra(const std::vector<std::vector<pll>> &, const int &, const int &);

public:
  int countPaths(int, std::vector<std::vector<int>> &);
}; // Solution class

#endif // __INC_HPP__