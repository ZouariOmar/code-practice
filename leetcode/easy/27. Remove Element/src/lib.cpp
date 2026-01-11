/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/remove-element
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief remove all the "val" elements in the array and return the new array size
 * @param nums
 * @param val
 * @return int
 */
int Solution::removeElement(std::vector<int> &nums, int val) {
  int i = 0;

  //* reinsert the list without the val elements
  for (int it : nums)
    if (it != val) {
      nums[i] = it;
      i++;
    }

  //* resize the array (rm the garbage memory)
  nums.resize(i);

  return i;
}