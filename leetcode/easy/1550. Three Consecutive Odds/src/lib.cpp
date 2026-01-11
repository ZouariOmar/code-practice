/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      24-07-2024
 * @link      https://leetcode.com/problems/three-consecutive-odds
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Return true if there are three consecutive odd numbers in the array. Otherwise, return false
 *
 * @param arr
 * @return true
 * @return false
 */
bool Solution::threeConsecutiveOdds(vector<int> &arr) {
  int counter{};

  for (int it : arr) {
    if (it & 1)
      counter++;
    else
      counter = 0;

    if (counter == 3)
      return true;
  }

  return false;
}

//* Boost the I/O
static const bool Booster = []() {
  std::ios_base::sync_with_stdio(false);
  std::cout.tie(nullptr);
  std::cin.tie(nullptr);
  return true;
}();