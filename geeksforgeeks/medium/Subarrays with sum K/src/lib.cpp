/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-02
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/subarrays-with-sum-k/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Find the number of continuous subarrays having sum exactly equal to a given number k.
 *
 * @param arr {vector<int> &}
 * @param k int
 * @return int
 */
int Solution::countSubarrays(vector<int> &arr, int k) {
  unordered_map<int, int> mp;
  int len = arr.size();
  mp[0] = 1;
  int sum{}, count{};
  for (int i{}; i < len; i++) {
    sum += arr[i];
    int rem = sum - k;
    if (mp.find(rem) != mp.end())
      count += mp[rem];
    mp[sum]++;
  }
  return count;
}