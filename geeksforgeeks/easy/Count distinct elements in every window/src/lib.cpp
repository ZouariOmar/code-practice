/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-09
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/count-distinct-elements-in-every-window/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Find the count of distinct elements in every window of size k in the array.
 *
 * @param arr {vector<int> &}
 * @param k int
 * @return vector<int>
 */
vector<int> Solution::countDistinct(vector<int> &arr, int k) {
  vector<int> res; // Store the result
  size_t len{arr.size()};
  for (size_t i{}; i + k <= len; ++i) {
    unordered_set<int> distinct_k_arr(arr.begin() + i, arr.begin() + i + k);
    res.push_back(distinct_k_arr.size());
  }
  return res; // Return the result vector
}