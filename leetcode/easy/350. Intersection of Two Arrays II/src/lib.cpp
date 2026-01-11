/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/intersection-of-two-arrays-ii
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief Given two integer arrays nums1 and nums2, return an array of their intersection.
 *
 * @param nums1
 * @param nums2
 * @return vector<int>
 */
vector<int> Solution::intersect(vector<int>& nums1, vector<int>& nums2) {
  // The result
  vector<int> ans;

  // Sort the 2 vector (for optimization)
  sort(nums1.begin(), nums1.end());
  sort(nums2.begin(), nums2.end());

  //* The main fn code
  for (int it : nums1) {
    for (int j = 0; j < nums2.size(); j++) {
      if (it == nums2[j]) {
        ans.push_back(it);
        nums2.erase(nums2.begin() + j);
        break;
      }
    }
  }

  return ans;
}