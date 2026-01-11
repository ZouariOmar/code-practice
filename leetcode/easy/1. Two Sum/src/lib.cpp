/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/two-sum
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

vector<int> Solution::twoSum(vector<int>& nums, int target) {
  //* init the search loop number
  int init_index = 0;
  int init_nbr = nums[init_index];

  int i = 0;
  while (i < nums.size()) {
    if (nums[i] + init_nbr == target && i != init_index)
      return {init_index, i};
    else if (i == nums.size() - 1) {
      init_nbr = nums[++init_index];
      i = 0;
    } else
      i++;
  }

  return (vector<int>)0;
}