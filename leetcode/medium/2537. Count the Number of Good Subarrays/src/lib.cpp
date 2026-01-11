/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-04-16
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/count-the-number-of-good-subarrays leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function(s)/Class(es) prototype dev part

/** @brief Return the number of good subarrays of nums.
 *
 * @param nums {std::vector<int> &}
 * @param k    int
 * @return     long long */
long long Solution::countGood(std::vector<int> &nums, int k) {
  long long cnt{};
  std::unordered_map<int, int> mpp;
  for (int i{}, left{}; i < nums.size(); i++) {
    k -= mpp[nums[i]]++;
    while (k <= 0)
      k += --mpp[nums[left++]];
    cnt += left;
  }
  return cnt;
}