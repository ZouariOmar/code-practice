/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-19
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/binary-array-sorting-1587115620/1?page=1&sortBy=difficulty GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Rearrange the array in increasing order in place (without using extra space)
 * @param arr {vector<int> &}
 */
void Solution::binSort(vector<int> &arr) {
  int sum{};
  size_t len{arr.size()};

  for (int &it : arr)
    sum += it, it = 0;  // Detect the sum of 1's

  sum = len - sum;
  for (int i = len - 1; i >= sum; i--)
    arr[i] = 1;  // change the values of `arr` from `len - 1` to `len - sum` into 1
}