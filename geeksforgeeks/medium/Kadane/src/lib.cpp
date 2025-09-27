/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      05-09-2024
 * @link      https://www.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Function to find the sum of contiguous sub-array with maximum sum.
 * @return long long
 */
long long Solution::maxSubarraySum(vector<int> &arr) {
  long long best_sum{LONG_LONG_MIN};
  long long current_sum{};
  for (long long it : arr) {
    current_sum = max(it, current_sum + it);
    best_sum = max(current_sum, best_sum);
  }

  return best_sum;
}