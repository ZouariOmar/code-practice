/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      20-09-2024
 * @link      https://leetcode.com/problems/concatenation-of-array
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Concatenate the array x2
 * @param nums vector<int>
 * @return vector<int>
 */
vector<int> Solution::getConcatenation(vector<int> &nums) {
  nums.insert(nums.end(), nums.begin(), nums.end());
  return nums;
}

/*
 * Other solution
vector<int> Solution::getConcatenation(vector<int> &nums) {
  int n=nums.size();
  for(int i=0;i<n;i++)
  nums.push_back(nums[i]);
  return nums;
}
*/
