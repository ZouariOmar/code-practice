/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-21
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/split-the-array0238/1 leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"  // #include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### count the number of ways to split given array elements into two non-empty subsets such that the XOR of
 * elements of each group is equal. Each element should belong to exactly one subset.
 * @param arr vector<int> &
 * @return int
 */
int Solution::countgroup(vector<int> &arr) {
  int a{}, n = arr.size();
  for (int i = 0; i < n; i++)
    a ^= arr[i];
  return a ? 0 : pow(2, n - 1) - 1;
}