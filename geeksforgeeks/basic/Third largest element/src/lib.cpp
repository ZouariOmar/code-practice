/**
 * @file lib.cpp
 * @author Zouari Omar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-12-08
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/third-largest-element/1?page=1&sortBy=difficulty GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Find the third largest element in it. Return -1 if the third largest element is not found.
 * @param arr {vector<int> &}
 * @return int
 */
int Solution::thirdLargest(vector<int> &arr) {
  if (arr.size() < 3) return -1;
  sort(arr.rbegin(), arr.rend());
  return arr[2];
}