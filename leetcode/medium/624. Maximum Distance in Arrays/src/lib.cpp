/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      16-08-2024
 * @link      https://leetcode.com/problems/maximum-distance-in-arrays
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Return the maximum distance.
 * *
 * - arrays[i] is sorted in ascending order.
 * @param arrays
 * @return int
 */
int Solution::maxDistance(vector<vector<int>> &arrays) {
  size_t len{arrays.size()};
  int minNb = arrays[0][0];
  int maxNb = arrays[0][arrays[0].size() - 1];
  int maxDistance{};

  for (size_t i = 1; i < len; i++) {
    // Calculate the possible maximum distance by comparing the current array's max with the minimum from previous arrays
    maxDistance = max(maxDistance, max(abs(arrays[i][arrays[i].size() - 1] - minNb), abs(maxNb - arrays[i][0])));

    // Update the global min and max values
    minNb = min(minNb, arrays[i][0]);
    maxNb = max(maxNb, arrays[i][arrays[i].size() - 1]);
  }

  return maxDistance;
}