/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-20
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/pair-with-given-sum-in-a-sorted-array4940/1?page=1&difficulty=Easy&sortBy=difficulty GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Find numbers of pairs in array arr[] which sums up to k
 * * It is given that the elements of the array arr[] are distinct and in sorted order.
 * @param k {int}
 * @param arr {vector<int> &}
 * @return int
 */
int Solution::countPair(int k, vector<int> &arr) {
  // If the array is too small, no pairs can be formed
  if (arr.size() < 2) return 0;

  size_t i{}, j{arr.size() - 1};
  int cnt{};
  while (i < j) {
    int sum = arr[i] + arr[j];
    if (sum == k)
      cnt++, i++, j--;
    else if (sum > k)
      j--;
    else
      i++;
  }

  return cnt;
}