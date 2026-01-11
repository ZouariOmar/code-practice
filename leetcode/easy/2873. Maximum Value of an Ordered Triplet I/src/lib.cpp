/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-04-02
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/maximum-value-of-an-ordered-triplet-i leetcode @endlink
 * @link https://leetcode.com/problems/maximum-value-of-an-ordered-triplet-ii leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"  

//? Function(s)/Class(es) prototype dev part

/**
 * @fn          Solution::maximumTripletValue(std::vector<int> &)
 * @brief       Return the maximum value over all triplets of indices (i, j, k) such that i < j < k. If all such triplets have a negative value, return 0.
 * @param  nums {std::vector<int> &}
 * @return      {long long}
 */
long long Solution::maximumTripletValue(std::vector<int> &nums) {
 long long L = nums[0], maxD = L - nums[1], ans = std::max(0LL, maxD * nums[2]);
  for (size_t i{3}, len{nums.size()}; i < len; i++) {
    L = std::max(L, (long long)nums[i - 2]);
    maxD = std::max(maxD, L - nums[i - 1]);
    ans = std::max(ans, maxD * nums[i]);
  }
  return ans;
}