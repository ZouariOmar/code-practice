/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-14
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/check-arithmetic-progression1842/1?page=1&sortBy=difficulty GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Check whether an arithmetic progression can be formed using all the given elements.
 * @param arr {vector<int> &}
 * @return true | false
 */
bool Solution::checkIsAP(vector<int> &arr) {
  size_t len{arr.size()};  // Sizeof `arr`
  if (len == 1) return true;

  sort(arr.begin(), arr.end());
  int range{abs(arr[0] - arr[1])};
  for (size_t i{}; i < len - 1; i++)
    if (abs(arr[i] - arr[i + 1]) != range) return false;
  
  return true;
}