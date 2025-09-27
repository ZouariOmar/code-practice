/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-23
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/missing-number-in-shuffled-array0938/1?page=1&sortBy=difficulty GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### find the missing element from `arr2`
 *
 * @param arr1 {vector<int> &}
 * @param arr2 {vector<int> &}
 * @return int
 */
int Solution::findMissing(vector<int> &arr1, vector<int> &arr2) {
  // Calculate the sum of `arr1`
  int sum1{};
  for (const int &it : arr1)
    sum1 += it;

  // Calculate the sum of `arr2`
  int sum2{};
  for (const int &it : arr2)
    sum2 += it;

  return sum1 - sum2;  // Return the missing number
}