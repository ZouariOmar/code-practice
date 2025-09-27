/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-09-29
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/total-count2415/1 GFF @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Compute the total number of each element in the array, divide it into the minimum number of small integers such that each divided integer is less than or equal to k.
 * @param k int
 * @param arr vector<int> &
 * @return int
 */
int Solution::totalCount(int k, vector<int>& arr) {
  int res{};
  for (int it : arr) {
    res += it / k;
    if (it % k) res++;
  }

  return res;
}
