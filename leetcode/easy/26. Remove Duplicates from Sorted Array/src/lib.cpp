/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/remove-duplicates-from-sorted-array/description
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief Solution class
 * @fn    removeDuplicates
 */
class Solution {
 public:
  /**
   * @brief Rm all the duplicates form the vector
   *
   * @param nums
   * @return int
   */
  int removeDuplicates(vector<int>& nums) {
    //* Handle empty vector-int case
    if (nums.empty()) return 0;

    //* The vector is not empty
    auto it = nums.begin();
    while (it != nums.end() - 1) {
      if (*it == *(it + 1))
        nums.erase(it + 1);
      else
        it++;
    }

    //* return the size of the vector
    return nums.size();
  }
};