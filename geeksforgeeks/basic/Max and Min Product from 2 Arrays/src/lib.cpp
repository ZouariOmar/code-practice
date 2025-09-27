/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-26
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/product-of-maximum-in-first-array-and-minimum-in-second3943/1?page=2&sortBy=difficulty GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Function to find the maximum element from array a[] and the minimum element from array b[] and return their product
 *
 * @param arr1 {vector<int> &}
 * @param arr2 {vector<int> &}
 * @return     long long
 */
long long Solution::find_multiplication(vector<int> &arr1, vector<int> &arr2) {
  int _min = INT_MAX, _max = INT_MIN;
  for (const int &it : arr1)
    _max = max(_max, it);
  for (const int &it : arr2)
    _min = min(_min, it);
  return _max * _min;
}