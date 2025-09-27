/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-17
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/minimum-sum-of-two-elements-from-two-arrays0253/1?page=1&sortBy=difficulty GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Find the minimum sum of two elements such that one element is from arr1[] and the other is from arr2[], and they are not at the same index in their respective arrays.
 * @param arr1 vector<int> &
 * @param arr2 vector<int> &
 * @return int
 */
int Solution::minSum(vector<int> &arr1, vector<int> &arr2) {
  int min1 = arr1[0], min2 = arr2[0], index1 = 0, index2 = 0;
  size_t n{arr1.size()};

  for (int i = 1; i < n; i++) {
    if (arr1[i] < min1) {
      min1 = arr1[i];
      index1 = i;
    }

    if (arr2[i] < min2) {
      min2 = arr2[i];
      index2 = i;
    }
  }

  sort(arr1.begin(), arr1.end());
  sort(arr2.begin(), arr2.end());

  if (index1 != index2)
    return min1 + min2;

  return min(min1 + arr2[1], min2 + arr1[1]);
}