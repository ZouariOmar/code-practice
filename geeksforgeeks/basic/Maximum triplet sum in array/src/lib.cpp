/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      29-08-2024
 * @link      https://www.geeksforgeeks.org/problems/maximum-triplet-sum-in-array0129/1?page=1&sortBy=difficulty
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Find the maximum triplet sum in the array.
 * *
 * - 3 ≤ arr.size() ≤ 10^6
 * *
 * - -10^5 ≤ arr[i] ≤ 10^5
 * @param arr
 * @return int
 */
int Solution::maxTripletSum(vector<int> &arr) {
  sort(arr.begin(), arr.end());
  size_t len = arr.size();
  return arr[len - 1] + arr[len - 2] + arr[len - 3];
}