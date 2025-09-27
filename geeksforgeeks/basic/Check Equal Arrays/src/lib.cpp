/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      23-09-2024
 * @link      https://www.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1?page=1&sortBy=difficulty
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Find whether the given arrays are equal
 * @param arr1 vector<int>
 * @param arr2 vector<int>
 * @return true
 * @return false
 */
bool Solution::check(vector<int>& arr1, vector<int>& arr2) {
  sort(arr1.begin(), arr1.end());
  sort(arr2.begin(), arr2.end());
  return arr1 == arr2;
}