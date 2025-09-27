/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1?page=1&sortBy=submissions
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief Given an array of size n-1 such that it only contains distinct integers in the range of 1 to n. Return the missing element.
 *
 * @param n
 * @param arr
 * @return int
 */
int Solution::missingNumber(int n, vector<int>& arr) {
  int sum = (n * (n + 1)) / 2, s = 0;
  for (int i = 0; i < n - 1; i++)
    s += arr[i];
  return (sum - s);
}