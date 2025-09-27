/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      11-09_2024
 * @link      https://www.geeksforgeeks.org/problems/reverse-sub-array5620/1?page=1&sortBy=difficulty
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Reverse a subarray of that array.
 * @param arr vector<int>
 * @param l int
 * @param r int
 * @return vector<int>
 */
vector<int> Solution::reverseSubArray(vector<int> &arr, int l, int r) {
  reverse(arr.begin() + l - 1, arr.begin() + r);
  return arr;
}
