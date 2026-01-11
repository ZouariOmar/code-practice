/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      24-07-2024
 * @link      https://leetcode.com/problems/plus-one
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Increment the large integer by one and return the resulting array of digits.
 *
 * @param digits
 * @return vector<int>
 */
vector<int> Solution::plusOne(vector<int> &digits) {
  digits[digits.size() - 1]++;

  for (int i = digits.size() - 1; i != 0; i--) {
    if (digits[i] > 9) {
      digits[i - 1] += digits[i] / 10;
      digits[i] %= 10;

    } else
      break;
  }

  if (digits[0] > 9) {
    digits.insert(digits.begin(), 1);
    digits[1] %= 10;
  }

  return digits;
}