/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-18
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/count-number-of-maximum-bitwise-or-subsets leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the number of different non-empty subsets with the maximum bitwise OR
 * @param nums vector<int> &
 * @return int
 */
int Solution::countMaxOrSubsets(vector<int> &nums) {
  int maxOR{};  // Compute the maximum OR
  for (int &it : nums)
    maxOR |= it;

  int count{};  // Backtrack to count the subsets
  backtrack(nums, 0, 0, maxOR, count);

  return count;
}

/**
 * @brief ### Backtrack to count the subsets
 * @param nums const vector<int> &
 * @param index int
 * @param currentOR int
 * @param maxOR int const
 * @param count int &
 */
void Solution::backtrack(const vector<int> &nums, int index, int currentOR, int const maxOR, int &count) {
  if (currentOR == maxOR)
    count++;

  for (int i{index}; i < nums.size(); ++i)
    backtrack(nums, i + 1, currentOR | nums[i], maxOR, count);
}
