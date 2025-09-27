/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-22
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/largest-element-in-array4009--142158/1?page=2&sortBy=difficulty GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"  

//? Function/Class prototype dev part

/**
 * @brief ### Find the largest element and return it.
 *
 * @param arr {int *}
 * @param n   int
 * @return    int
 */
int Solution::largest(int *arr, int n) {
  return *std::max_element(arr, arr + n);
}