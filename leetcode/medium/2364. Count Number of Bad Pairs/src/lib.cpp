/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-09
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/count-number-of-bad-pairs leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the total number of bad pairs in `nums`.
 *
 * @param nums {vector<int> &}
 * @return long long
 */
long long Solution::countBadPairs(vector<int> &nums) {
  unordered_map<int, int> freq;
  long long goodPairs{0L}, n = nums.size();

  for (int i{}; i < n; i++) {
    int key = nums[i] - i;
    goodPairs += freq[key];
    freq[key]++;
  }

  return (n * (n - 1)) / 2 - goodPairs;
}