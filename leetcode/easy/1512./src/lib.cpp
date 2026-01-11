/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      05-09-2024
 * @link      https://leetcode.com/problems/number-of-good-pairs
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

int Solution::numIdenticalPairs(vector<int> &nums) {
  size_t len{nums.size()};
  int res{};
  for (size_t i{}; i < len; i++)
    for (size_t j{i + 1}; j < len; j++)
      if (nums[i] == nums[j]) res++;

  return res;
}