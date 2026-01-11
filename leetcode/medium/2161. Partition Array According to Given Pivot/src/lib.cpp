/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-03
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/partition-array-according-to-given-pivot leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return nums after the rearrangement
 *
 * @class       Solution
 * @param nums  {std::vector<int> &}
 * @param pivot int
 * @return      std::vector<int>
 */
std::vector<int> Solution::pivotArray(std::vector<int> &nums, int pivot) {
  std::vector<int> lesser, greater, equalizer;
  size_t len{nums.size()};
  for (const int &it : nums) {
    if (it < pivot)
      lesser.push_back(it);
    else if (it > pivot)
      greater.push_back(it);
    else
      equalizer.push_back(it);
  }
  lesser.insert(lesser.end(), equalizer.begin(), equalizer.end());
  lesser.insert(lesser.end(), greater.begin(), greater.end());
  return lesser;
}
