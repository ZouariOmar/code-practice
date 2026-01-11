/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-04-08
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/minimum-number-of-operations-to-make-elements-in-array-distinct leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp" 

//? Function(s)/Class(es) prototype dev part

int Solution::minimumOperations(std::vector<int> &nums) {
  std::unordered_set<int> s;
  int ans = 0;
  for (int i = nums.size() - 1; i >= 0; i--) {
    if (s.count(nums[i])) 
      return i / 3 + 1;
    else 
      s.insert(nums[i]);
  }
  return ans;
}