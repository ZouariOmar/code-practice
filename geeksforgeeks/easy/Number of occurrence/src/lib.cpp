/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-04-02
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1?page=2&difficulty=Easy&sortBy=submissions GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function(s)/Class(es) prototype dev part

int Solution::countFreq(std::vector<int> &arr, int target) {
  int ans = arr.size(), i{}, j = arr.size() - 1;
  do {
    if (arr[i] != target)
      ans--, i++;
    if (arr[j] != target)
      ans--, j--;
  } while ((arr[i] != target || arr[j] != target) && i <= j);
  return (ans < 0) ? 0 : ans;
}