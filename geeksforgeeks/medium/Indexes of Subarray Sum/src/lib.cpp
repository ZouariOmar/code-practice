/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-24
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1?page=1&sortBy=submissions GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"  

//? Function/Class prototype dev part

/**
 * @brief ### find a continuous subarray (a contiguous sequence of elements) whose sum equals a specified value target
 * @param arr vector<int> &
 * @param target int
 * @return vector<int>
 */
vector<int> Solution::subarraySum(vector<int> &arr, int target) {
  vector<int> res;
  size_t len{arr.size()};
  int sum{}, j{};
  for (size_t i{}; i < len; i++) {
    sum += arr[i];
    while (sum > target && j < i) 
      sum -= arr[j++];
    if (sum == target) {
      res.push_back(j + 1);
      res.push_back(i + 1);
      return res;
    }
  }
  res.push_back(-1);
  return res;
}