/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      29-07-2024
 * @link      https://leetcode.com/problems/score-of-a-string
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief #### Return the score of s.
 * *
 * - The score of a string is defined as the sum of the absolute difference between the ASCII values of adjacent characters.
 * @param s
 * @return int
 */
int Solution::scoreOfString(string s) {
  int res = 0;
  size_t len = s.size();
  for (int i = 0; i < len - 1; i++)
    res += abs(s[i] - s[i + 1]);

  return res;
}