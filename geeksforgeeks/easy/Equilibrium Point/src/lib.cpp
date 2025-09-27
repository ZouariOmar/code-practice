/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      21-08-2024
 * @link      https://www.geeksforgeeks.org/problems/equilibrium-point-1587115620/1?page=1&sortBy=submissions
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Return equilibrium point in 1-based indexing. Return -1 if no such point exists.
 * @param arr
 * @return int
 */
int Solution::equilibriumPoint(vector<long long> &arr) {
  if (arr.size() == 1) return arr[0];
  long long b{};
  size_t len{arr.size()};

  long long sum{};
  for (long long it : arr) sum += it;

  for (size_t i{}; i < len; i++) {
    if (b == sum - arr[i] - b)
      return i + 1;
    else
      b += arr[i];
  }

  return -1;
}