/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      08-08-2024
 * @link      https://leetcode.com/problems/make-two-arrays-equal-by-reversing-subarrays
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Return true if you can make arr equal to target or false otherwise
 * @param target
 * @param arr
 * @return true
 * @return false
 */
bool canBeEqual(vector<int> &target, vector<int> &arr) {
  // Sort the two vectors
  sort(target.begin(), target.end());
  sort(arr.begin(), arr.end());

  size_t len = arr.size();
  for (size_t i = 0; i < len; i++)
    if (arr[i] != target[i])
      return false;

  return true;
}