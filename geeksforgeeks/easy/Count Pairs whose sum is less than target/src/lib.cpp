/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-05
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/count-pairs-whose-sum-is-less-than-target/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Find the number of pairs in the array whose sum is strictly less than the target
 * @param arr {vector<int> &}
 * @param tg int
 * @return int
 */
int Solution::countPairs(vector<int> &arr, int tg) {
  sort(arr.begin(), arr.end());
  int i{}, j{arr.size() - 1}, cnt{};
  while (j > i) {
    if (arr[i] + arr[j] < tg)
      cnt += j - i, i++;
    else
      j--;
  }
  return cnt;
}