/**
 * @file      3010. Divide an Array Into Subarrays With Minimum Cost I.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     Easy leetcode problem
 * @version   0.1
 * @date      2026-02-01
 * @copyright Copyright (c) 2026
 * @link      https://leetcode.com/problems/divide-an-array-into-subarrays-with-minimum-cost-i leetcode @endlink
 */

//? Include prototype declaration part
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
public:
  int minimumCost(std::vector<int> &nums) {
    int min1(100), min2(100);

    for (size_t i(1), len(nums.size()); i < len; ++i) {
      if (nums[i] < min1) {
        min2 = min1;
        min1 = nums[i];
      } else if (nums[i] < min2) {
        min2 = nums[i];
      }
    }

    return nums[0] + min1 + min2;
  }
}; // Solution class
