/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/permutations
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.
 *
 * @param nums
 * @return vector<vector<int>>
 */
vector<vector<int>> Solution::permute(vector<int>& nums) {
  vector<vector<int>> res;
  backtrack(nums, 0, res);
  return res;
}

void Solution::backtrack(vector<int>& nums, int start, vector<vector<int>>& res) {
  if (start == nums.size()) {
    res.push_back(nums);
    return;
  }

  for (int i = start; i < nums.size(); i++) {
    swap(nums[start], nums[i]);
    backtrack(nums, start + 1, res);
    swap(nums[start], nums[i]);
  }
}