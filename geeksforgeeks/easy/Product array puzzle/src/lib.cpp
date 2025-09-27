/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      16-08-2024
 * @link      https://www.geeksforgeeks.org/problems/product-array-puzzle4525/1
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Given an array nums[], construct a Product Array nums[] such that nums[i] is equal to the product of all the elements of nums except nums[i].
 * @param nums
 * @return vector<long long int>
 */
vector<long long int> Solution::productExceptSelf(vector<long long int> &nums) {
  vector<long long int> res;
  size_t len{nums.size()};

  for (int i = 0; i < len; i++) {
    long long int tmp {1};
    for (int j = 0; j < len; j++) {
      if (nums[i] != nums[j])
        tmp *= nums[j];
    }
    res.push_back(tmp);
  }

  return res;
}