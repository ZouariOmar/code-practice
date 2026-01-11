/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-06
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/tuple-with-same-product leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the number of tuples (a, b, c, d) such that `a * b = c * d` where a, b, c, and d are elements of nums, and a != b != c != d.
 *
 * @param nums {vector<int> &}
 * @return int
 */
int Solution::tupleSameProduct(vector<int> &nums) {
  unordered_map<int, int> mp;
  int ans = 0, n = nums.size();
  for (int i = 0; i < n; i++)
    for (int j = i + 1; j < n; j++) {
      int product = nums[i] * nums[j];
      ans += 8 * mp[product];
      mp[product]++;
    }
  return ans;
}