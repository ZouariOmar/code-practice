/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-12
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/max-sum-of-a-pair-with-equal-sum-of-digits leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the maximum value of `nums[i] + nums[j]` that you can obtain over all possible indices `i` and `j` that satisfy the conditions.
 *
 * @param nums {vector<int> &}
 * @return int
 */
int Solution::maximumSum(vector<int> &nums) {
  int max[82] = {0}, ans{-1};
  for (int x : nums) {
    int sum{}, temp{x};
    while (temp)
      sum += temp % 10, temp /= 10;
    
    if (max[sum] != 0)
      ans = std::max(ans, x + max[sum]);
    max[sum] = std::max(max[sum], x);
  }
  return ans;
}