/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-15
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Find the length of the longest subarray where the sum of its elements is equal to the given value k
 *
 * @param arr {vector<int> &}
 * @param k {const int &}
 * @return int
 */
int Solution::longestSubarray(vector<int> &arr, const int &k) {
  int n = arr.size(),
      maxi{}, sum{};
  unordered_map<int, int> mpp;
  mpp[0] = -1;
  for (int i{}; i < n; i++) {
    sum += arr[i];
    if (mpp.find(sum - k) != mpp.end())
      maxi = max(maxi, i - mpp[sum - k]);
    if (mpp.find(sum) == mpp.end())
      mpp[sum] = i;
  }
  return maxi;
}