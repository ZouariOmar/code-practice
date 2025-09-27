/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-07
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/pair-with-given-sum-in-a-sorted-array4940/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Pair with given sum in a sorted array
 *
 * @param arr {vector<int> &}
 * @param target int
 * @return int
 */
int Solution::countPairs(vector<int> &arr, int target) {
  int count{};
  unordered_map<int, int> ump;
  for (int &it : arr) {
    int op{target - it};
    if (ump[op])
      count += ump[op];
    ump[it]++;
  }
  return count;
}