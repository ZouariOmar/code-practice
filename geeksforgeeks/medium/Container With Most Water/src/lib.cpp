/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-13
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/container-with-most-water0535/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Find the maximum amount of water that can be contained between any two lines, together with the x-axis.
 *
 * @param arr {vector<int> &}
 * @return int
 */
int Solution::maxWater(vector<int> &arr) {
  int left{},
      right = arr.size() - 1,
      ans{};
  while (left < right) {
    int tempwater = min(arr[left], arr[right]) * (right - left);
    ans = max(ans, tempwater);
    (arr[left] < arr[right]) ? left++ : right--;
  }
  return ans;
}