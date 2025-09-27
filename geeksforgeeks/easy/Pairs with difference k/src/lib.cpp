/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-30
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/pairs-with-difference-k1713/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Returns count of pairs with difference k
 * @param arr vector<int> &
 * @param k int
 * @return int
 */
int Solution::countPairsWithDiffK(vector<int> &arr, int k) {
  unordered_map<int, int> mp;
  size_t len{arr.size()};
  for (size_t i{}; i < len; i++)
    mp[arr[i] + k]++;

  int ans{};
  for (size_t i{}; i < len; i++)
    if (mp.find(arr[i]) != mp.end())
      ans += mp[arr[i]];

  return ans;
}