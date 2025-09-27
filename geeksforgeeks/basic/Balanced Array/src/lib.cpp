/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      24-09-2024
 * @link      https://www.geeksforgeeks.org/problems/balanced-array07200720/1?page=1&sortBy=difficulty
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Function to find the minimum value required to balance the array.
 * *
 * * - Time Taken: 0.13
 * @param arr vector<int> &
 * @return int
 */
int Solution::minValueToBalance(vector<int> &arr) {
  size_t len{arr.size() / 2};
  return abs(accumulate(arr.begin(), arr.begin() + len, 0) - accumulate(arr.begin() + len, arr.end(), 0));
}
